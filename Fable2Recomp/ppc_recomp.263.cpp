#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FACC44"))) PPC_WEAK_FUNC(sub_82FACC44);
PPC_FUNC_IMPL(__imp__sub_82FACC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FACC48"))) PPC_WEAK_FUNC(sub_82FACC48);
PPC_FUNC_IMPL(__imp__sub_82FACC48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82faccc0
	sub_82FACCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FACC50"))) PPC_WEAK_FUNC(sub_82FACC50);
PPC_FUNC_IMPL(__imp__sub_82FACC50) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23784
	ctx.r11.s64 = ctx.r11.s64 + 23784;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82facc90
	if (ctx.cr6.eq) goto loc_82FACC90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82FACC90;
	sub_82F0A3F0(ctx, base);
loc_82FACC90:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82f67f08
	ctx.lr = 0x82FACC98;
	sub_82F67F08(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f67f08
	ctx.lr = 0x82FACCA0;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82FACCA8;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82FACCBC"))) PPC_WEAK_FUNC(sub_82FACCBC);
PPC_FUNC_IMPL(__imp__sub_82FACCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FACCC0"))) PPC_WEAK_FUNC(sub_82FACCC0);
PPC_FUNC_IMPL(__imp__sub_82FACCC0) {
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
	// bl 0x82facc50
	ctx.lr = 0x82FACCE0;
	sub_82FACC50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faccf0
	if (ctx.cr0.eq) goto loc_82FACCF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FACCF0;
	sub_82EF6F38(ctx, base);
loc_82FACCF0:
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

__attribute__((alias("__imp__sub_82FACD0C"))) PPC_WEAK_FUNC(sub_82FACD0C);
PPC_FUNC_IMPL(__imp__sub_82FACD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FACD10"))) PPC_WEAK_FUNC(sub_82FACD10);
PPC_FUNC_IMPL(__imp__sub_82FACD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FACD18;
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
	// bl 0x82facb10
	ctx.lr = 0x82FACD2C;
	sub_82FACB10(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,23784
	ctx.r11.s64 = ctx.r11.s64 + 23784;
	// addi r10,r10,23808
	ctx.r10.s64 = ctx.r10.s64 + 23808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23520
	ctx.r5.s64 = ctx.r11.s64 + 23520;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82FACD5C;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FACD68"))) PPC_WEAK_FUNC(sub_82FACD68);
PPC_FUNC_IMPL(__imp__sub_82FACD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FACD70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,23968
	ctx.r10.s64 = ctx.r11.s64 + 23968;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FACD94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82facdb8
	if (ctx.cr0.eq) goto loc_82FACDB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82facd94
	if (ctx.cr6.eq) goto loc_82FACD94;
loc_82FACDB8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82facf8c
	if (!ctx.cr0.eq) goto loc_82FACF8C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82f68a70
	ctx.lr = 0x82FACDD0;
	sub_82F68A70(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82facf48
	if (ctx.cr6.eq) goto loc_82FACF48;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FACE14;
	sub_82F60608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82facf20
	if (ctx.cr0.eq) goto loc_82FACF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lfs f0,2736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f9,f12,f0,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwa r11,92(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 92));
	// fctiwz f10,f9
	ctx.f10.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcfid f13,f9
	ctx.f13.f64 = double(ctx.f9.s64);
	// stfd f13,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f13.u64);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f10.u64);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// fadd f0,f12,f10
	ctx.f0.f64 = ctx.f12.f64 + ctx.f10.f64;
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// bl 0x82f8f198
	ctx.lr = 0x82FACF10;
	sub_82F8F198(ctx, base);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_82FACF14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6c328
	ctx.lr = 0x82FACF1C;
	sub_82F6C328(ctx, base);
	// b 0x82facf24
	goto loc_82FACF24;
loc_82FACF20:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FACF24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82facf4c
	if (ctx.cr6.eq) goto loc_82FACF4C;
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
	ctx.lr = 0x82FACF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82facf4c
	goto loc_82FACF4C;
loc_82FACF48:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FACF4C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82facf64
	if (!ctx.cr0.eq) goto loc_82FACF64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FACF5C;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_82FACF64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82facf84
	if (ctx.cr6.eq) goto loc_82FACF84;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FACF84:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82fad47c
	goto loc_82FAD47C;
loc_82FACF8C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23952
	ctx.r10.s64 = ctx.r10.s64 + 23952;
loc_82FACF98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82facfbc
	if (ctx.cr0.eq) goto loc_82FACFBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82facf98
	if (ctx.cr6.eq) goto loc_82FACF98;
loc_82FACFBC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fad08c
	if (!ctx.cr0.eq) goto loc_82FAD08C;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82f68a70
	ctx.lr = 0x82FACFD4;
	sub_82F68A70(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82facf48
	if (ctx.cr6.eq) goto loc_82FACF48;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FACFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD018;
	sub_82F60608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82facf20
	if (ctx.cr0.eq) goto loc_82FACF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// ld r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// ld r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r8.u64);
	// ld r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// ld r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x82facf14
	goto loc_82FACF14;
loc_82FAD08C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23944
	ctx.r10.s64 = ctx.r10.s64 + 23944;
loc_82FAD098:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fad0bc
	if (ctx.cr0.eq) goto loc_82FAD0BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fad098
	if (ctx.cr6.eq) goto loc_82FAD098;
loc_82FAD0BC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fad158
	if (!ctx.cr0.eq) goto loc_82FAD158;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82f68a70
	ctx.lr = 0x82FAD0D4;
	sub_82F68A70(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82facf48
	if (ctx.cr6.eq) goto loc_82FACF48;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD118;
	sub_82F60608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82facf20
	if (ctx.cr0.eq) goto loc_82FACF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f65e60
	ctx.lr = 0x82FAD140;
	sub_82F65E60(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r27,120
	ctx.r4.s64 = ctx.r27.s64 + 120;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82fab5e0
	ctx.lr = 0x82FAD150;
	sub_82FAB5E0(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x82facf14
	goto loc_82FACF14;
loc_82FAD158:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23916
	ctx.r10.s64 = ctx.r10.s64 + 23916;
loc_82FAD164:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fad188
	if (ctx.cr0.eq) goto loc_82FAD188;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fad164
	if (ctx.cr6.eq) goto loc_82FAD164;
loc_82FAD188:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fad308
	if (!ctx.cr0.eq) goto loc_82FAD308;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f97968
	ctx.lr = 0x82FAD198;
	sub_82F97968(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f68a70
	ctx.lr = 0x82FAD1A4;
	sub_82F68A70(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad238
	if (ctx.cr6.eq) goto loc_82FAD238;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD1DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD1E8;
	sub_82F60608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fad238
	if (ctx.cr0.eq) goto loc_82FAD238;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82FAD208:
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f97858
	ctx.lr = 0x82FAD214;
	sub_82F97858(ctx, base);
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fad208
	if (!ctx.cr6.eq) goto loc_82FAD208;
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
	ctx.lr = 0x82FAD238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD238:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAD240;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fad270
	if (ctx.cr0.eq) goto loc_82FAD270;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82fa8878
	ctx.lr = 0x82FAD268;
	sub_82FA8878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fad274
	goto loc_82FAD274;
loc_82FAD270:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FAD274:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// bl 0x82f6aba0
	ctx.lr = 0x82FAD2A8;
	sub_82F6ABA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FAD2B4;
	sub_82F6BBB0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fad2c8
	if (ctx.cr6.lt) goto loc_82FAD2C8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAD2C8;
	sub_82F6BAA0(ctx, base);
loc_82FAD2C8:
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
	ctx.lr = 0x82FAD2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD2E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad300
	if (ctx.cr6.eq) goto loc_82FAD300;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD300:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fad47c
	goto loc_82FAD47C;
loc_82FAD308:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23896
	ctx.r10.s64 = ctx.r10.s64 + 23896;
loc_82FAD314:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fad338
	if (ctx.cr0.eq) goto loc_82FAD338;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fad314
	if (ctx.cr6.eq) goto loc_82FAD314;
loc_82FAD338:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fad46c
	if (!ctx.cr0.eq) goto loc_82FAD46C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f65fe0
	ctx.lr = 0x82FAD348;
	sub_82F65FE0(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f68a70
	ctx.lr = 0x82FAD354;
	sub_82F68A70(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad3e8
	if (ctx.cr6.eq) goto loc_82FAD3E8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD398;
	sub_82F60608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fad3e8
	if (ctx.cr0.eq) goto loc_82FAD3E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82FAD3B8:
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f66008
	ctx.lr = 0x82FAD3C4;
	sub_82F66008(ctx, base);
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fad3b8
	if (!ctx.cr6.eq) goto loc_82FAD3B8;
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
	ctx.lr = 0x82FAD3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD3E8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAD3F0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fad420
	if (ctx.cr0.eq) goto loc_82FAD420;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82fac7d8
	ctx.lr = 0x82FAD418;
	sub_82FAC7D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fad424
	goto loc_82FAD424;
loc_82FAD420:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FAD424:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r27,120
	ctx.r4.s64 = ctx.r27.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fab5e0
	ctx.lr = 0x82FAD434;
	sub_82FAB5E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6aba0
	ctx.lr = 0x82FAD440;
	sub_82F6ABA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FAD44C;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fad460
	if (ctx.cr6.lt) goto loc_82FAD460;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAD460;
	sub_82F6BAA0(ctx, base);
loc_82FAD460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad2e0
	if (ctx.cr6.eq) goto loc_82FAD2E0;
	// b 0x82fad2c8
	goto loc_82FAD2C8;
loc_82FAD46C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f87748
	ctx.lr = 0x82FAD47C;
	sub_82F87748(ctx, base);
loc_82FAD47C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FAD484"))) PPC_WEAK_FUNC(sub_82FAD484);
PPC_FUNC_IMPL(__imp__sub_82FAD484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD488"))) PPC_WEAK_FUNC(sub_82FAD488);
PPC_FUNC_IMPL(__imp__sub_82FAD488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FAD490;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,23968
	ctx.r10.s64 = ctx.r11.s64 + 23968;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FAD4B4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x82fad4d8
	if (ctx.cr0.eq) goto loc_82FAD4D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82fad4b4
	if (ctx.cr6.eq) goto loc_82FAD4B4;
loc_82FAD4D8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82fad4e8
	if (!ctx.cr0.eq) goto loc_82FAD4E8;
loc_82FAD4E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fad78c
	goto loc_82FAD78C;
loc_82FAD4E8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,23952
	ctx.r10.s64 = ctx.r10.s64 + 23952;
loc_82FAD4F4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// beq 0x82fad518
	if (ctx.cr0.eq) goto loc_82FAD518;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82fad4f4
	if (ctx.cr6.eq) goto loc_82FAD4F4;
loc_82FAD518:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82fad658
	if (!ctx.cr0.eq) goto loc_82FAD658;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAD52C;
	sub_82F68A70(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad4e0
	if (ctx.cr6.eq) goto loc_82FAD4E0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD570;
	sub_82F60608(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fad63c
	if (ctx.cr0.eq) goto loc_82FAD63C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82FAD594;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fad624
	if (ctx.cr0.eq) goto loc_82FAD624;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x82fad60c
	if (!ctx.cr6.eq) goto loc_82FAD60C;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r11.u64);
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// std r11,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r11.u64);
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// std r11,72(r30)
	PPC_STORE_U64(ctx.r30.u32 + 72, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FAD60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD60C:
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
	ctx.lr = 0x82FAD624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD624:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD63C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fad4e0
	goto loc_82FAD4E0;
loc_82FAD658:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,23944
	ctx.r10.s64 = ctx.r10.s64 + 23944;
loc_82FAD664:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fad688
	if (ctx.cr0.eq) goto loc_82FAD688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fad664
	if (ctx.cr6.eq) goto loc_82FAD664;
loc_82FAD688:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fad77c
	if (!ctx.cr0.eq) goto loc_82FAD77C;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAD69C;
	sub_82F68A70(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad4e0
	if (ctx.cr6.eq) goto loc_82FAD4E0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f60608
	ctx.lr = 0x82FAD6E0;
	sub_82F60608(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fad63c
	if (ctx.cr0.eq) goto loc_82FAD63C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82FAD704;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fad624
	if (ctx.cr0.eq) goto loc_82FAD624;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x82fad60c
	if (!ctx.cr6.eq) goto loc_82FAD60C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fab290
	ctx.lr = 0x82FAD74C;
	sub_82FAB290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82FAD778;
	sub_82F65E60(ctx, base);
	// b 0x82fad60c
	goto loc_82FAD60C;
loc_82FAD77C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82FAD78C;
	sub_82F88A68(ctx, base);
loc_82FAD78C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FAD794"))) PPC_WEAK_FUNC(sub_82FAD794);
PPC_FUNC_IMPL(__imp__sub_82FAD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD798"))) PPC_WEAK_FUNC(sub_82FAD798);
PPC_FUNC_IMPL(__imp__sub_82FAD798) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAD7B4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,24064
	ctx.r9.s64 = ctx.r11.s64 + 24064;
	// addi r10,r10,23984
	ctx.r10.s64 = ctx.r10.s64 + 23984;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FAD800"))) PPC_WEAK_FUNC(sub_82FAD800);
PPC_FUNC_IMPL(__imp__sub_82FAD800) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAD808"))) PPC_WEAK_FUNC(sub_82FAD808);
PPC_FUNC_IMPL(__imp__sub_82FAD808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fae138
	sub_82FAE138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD810"))) PPC_WEAK_FUNC(sub_82FAD810);
PPC_FUNC_IMPL(__imp__sub_82FAD810) {
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
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fad848
	if (ctx.cr6.eq) goto loc_82FAD848;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD848:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fad868
	if (ctx.cr6.eq) goto loc_82FAD868;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD868:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fad888
	if (ctx.cr6.eq) goto loc_82FAD888;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAD888:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad8b4
	if (ctx.cr6.eq) goto loc_82FAD8B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bgt 0x82fad8b4
	if (ctx.cr0.gt) goto loc_82FAD8B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82FAD8AC;
	sub_82F605B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAD8B4;
	sub_82EF6F38(ctx, base);
loc_82FAD8B4:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fad8d4
	if (ctx.cr6.eq) goto loc_82FAD8D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82fad8d4
	if (!ctx.cr0.eq) goto loc_82FAD8D4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAD8D4;
	sub_82EF6F38(ctx, base);
loc_82FAD8D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82FAD8DC;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82FAD8F4"))) PPC_WEAK_FUNC(sub_82FAD8F4);
PPC_FUNC_IMPL(__imp__sub_82FAD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD8F8"))) PPC_WEAK_FUNC(sub_82FAD8F8);
PPC_FUNC_IMPL(__imp__sub_82FAD8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FAD900;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAD918;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// addi r10,r10,23984
	ctx.r10.s64 = ctx.r10.s64 + 23984;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// bl 0x82f63440
	ctx.lr = 0x82FAD95C;
	sub_82F63440(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fad970
	if (ctx.cr0.eq) goto loc_82FAD970;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FAD970:
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fad99c
	if (ctx.cr6.eq) goto loc_82FAD99C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bgt 0x82fad99c
	if (ctx.cr0.gt) goto loc_82FAD99C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82FAD994;
	sub_82F605B0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAD99C;
	sub_82EF6F38(ctx, base);
loc_82FAD99C:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAD9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fad9f4
	if (ctx.cr0.eq) goto loc_82FAD9F4;
	// bl 0x82ef7138
	ctx.lr = 0x82FAD9C4;
	sub_82EF7138(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fad9ec
	if (ctx.cr6.eq) goto loc_82FAD9EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x82fad9ec
	if (!ctx.cr0.eq) goto loc_82FAD9EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAD9EC;
	sub_82EF6F38(ctx, base);
loc_82FAD9EC:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x82fada18
	goto loc_82FADA18;
loc_82FAD9F4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fada14
	if (ctx.cr6.eq) goto loc_82FADA14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82fada14
	if (!ctx.cr0.eq) goto loc_82FADA14;
	// bl 0x82ef6f38
	ctx.lr = 0x82FADA14;
	sub_82EF6F38(ctx, base);
loc_82FADA14:
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
loc_82FADA18:
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r11,120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// addi r30,r24,120
	ctx.r30.s64 = ctx.r24.s64 + 120;
	// bl 0x82f0ad10
	ctx.lr = 0x82FADA3C;
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FADA50;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fada70
	if (ctx.cr6.eq) goto loc_82FADA70;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FADA70:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FADA78;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r29,r11,7817
	ctx.r29.u64 = ctx.r11.u64 | 7817;
	// ori r30,r10,9034
	ctx.r30.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fadaa8
	if (ctx.cr0.eq) goto loc_82FADAA8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x82fac7d8
	ctx.lr = 0x82FADAA0;
	sub_82FAC7D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82fadaac
	goto loc_82FADAAC;
loc_82FADAA8:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82FADAAC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fadacc
	if (ctx.cr6.eq) goto loc_82FADACC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FADACC:
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FADAD8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fadaf8
	if (ctx.cr0.eq) goto loc_82FADAF8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x82fa8878
	ctx.lr = 0x82FADAF0;
	sub_82FA8878(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82fadafc
	goto loc_82FADAFC;
loc_82FADAF8:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82FADAFC:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fadb1c
	if (ctx.cr6.eq) goto loc_82FADB1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FADB1C:
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FADB28;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fadb48
	if (ctx.cr0.eq) goto loc_82FADB48;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x82f910a8
	ctx.lr = 0x82FADB40;
	sub_82F910A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82fadb4c
	goto loc_82FADB4C;
loc_82FADB48:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82FADB4C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fadb6c
	if (ctx.cr6.eq) goto loc_82FADB6C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FADB6C:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FADB7C"))) PPC_WEAK_FUNC(sub_82FADB7C);
PPC_FUNC_IMPL(__imp__sub_82FADB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADB80"))) PPC_WEAK_FUNC(sub_82FADB80);
PPC_FUNC_IMPL(__imp__sub_82FADB80) {
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
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82fadc44
	if (ctx.cr6.lt) goto loc_82FADC44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FADBAC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f177b0
	ctx.lr = 0x82FADBB8;
	sub_82F177B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82fadbd8
	if (!ctx.cr0.eq) goto loc_82FADBD8;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADBCC;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82fadc44
	goto loc_82FADC44;
loc_82FADBD8:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FADBE0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fadc14
	if (ctx.cr0.eq) goto loc_82FADC14;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82fad8f8
	ctx.lr = 0x82FADC0C;
	sub_82FAD8F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fadc18
	goto loc_82FADC18;
loc_82FADC14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FADC18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82FADC24;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fadc44
	if (ctx.cr6.eq) goto loc_82FADC44;
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
	ctx.lr = 0x82FADC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FADC44:
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

__attribute__((alias("__imp__sub_82FADC5C"))) PPC_WEAK_FUNC(sub_82FADC5C);
PPC_FUNC_IMPL(__imp__sub_82FADC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADC60"))) PPC_WEAK_FUNC(sub_82FADC60);
PPC_FUNC_IMPL(__imp__sub_82FADC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FADC68;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82fad798
	ctx.lr = 0x82FADC80;
	sub_82FAD798(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24168
	ctx.r11.s64 = ctx.r11.s64 + 24168;
	// addi r10,r10,24088
	ctx.r10.s64 = ctx.r10.s64 + 24088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82FADCB0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FADCBC;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82FADCD0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FADCDC;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82FADCF0;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f9b940
	ctx.lr = 0x82FADD00;
	sub_82F9B940(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadd14
	if (ctx.cr6.lt) goto loc_82FADD14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADD14;
	sub_82F6BAA0(ctx, base);
loc_82FADD14:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82FADD40;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadd74
	if (ctx.cr6.lt) goto loc_82FADD74;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADD74;
	sub_82F6BAA0(ctx, base);
loc_82FADD74:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FADD84;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FADD90"))) PPC_WEAK_FUNC(sub_82FADD90);
PPC_FUNC_IMPL(__imp__sub_82FADD90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82fae0e8
	sub_82FAE0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FADD98"))) PPC_WEAK_FUNC(sub_82FADD98);
PPC_FUNC_IMPL(__imp__sub_82FADD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FADDA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82FADDD4;
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82fade1c
	if (!ctx.cr0.eq) goto loc_82FADE1C;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82FADDFC;
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fade1c
	if (!ctx.cr0.eq) goto loc_82FADE1C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f87920
	ctx.lr = 0x82FADE18;
	sub_82F87920(ctx, base);
	// b 0x82fadf78
	goto loc_82FADF78;
loc_82FADE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f884e8
	ctx.lr = 0x82FADE44;
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fade58
	if (ctx.cr0.eq) goto loc_82FADE58;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FADE58;
	sub_82F6BBB0(ctx, base);
loc_82FADE58:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82fade74
	if (ctx.cr6.eq) goto loc_82FADE74;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FADE70;
	sub_82F6BBB0(ctx, base);
	// b 0x82fadf4c
	goto loc_82FADF4C;
loc_82FADE74:
	// addi r27,r29,56
	ctx.r27.s64 = ctx.r29.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	ctx.lr = 0x82FADE88;
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fadea0
	if (ctx.cr6.eq) goto loc_82FADEA0;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82FADE9C;
	sub_82F68378(ctx, base);
	// b 0x82fadec4
	goto loc_82FADEC4;
loc_82FADEA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	ctx.lr = 0x82FADEB0;
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82FADEBC;
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	ctx.lr = 0x82FADEC4;
	sub_82F67F08(ctx, base);
loc_82FADEC4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fadf38
	if (!ctx.cr6.eq) goto loc_82FADF38;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fadf38
	if (ctx.cr6.eq) goto loc_82FADF38;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82FADF08;
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadf1c
	if (ctx.cr6.lt) goto loc_82FADF1C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADF1C;
	sub_82F6BAA0(ctx, base);
loc_82FADF1C:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadf30
	if (ctx.cr6.lt) goto loc_82FADF30;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADF30;
	sub_82F6BAA0(ctx, base);
loc_82FADF30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82fadf78
	goto loc_82FADF78;
loc_82FADF38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bea0
	ctx.lr = 0x82FADF44;
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82FADF4C;
	sub_82F67F08(ctx, base);
loc_82FADF4C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadf60
	if (ctx.cr6.lt) goto loc_82FADF60;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADF60;
	sub_82F6BAA0(ctx, base);
loc_82FADF60:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fadf74
	if (ctx.cr6.lt) goto loc_82FADF74;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FADF74;
	sub_82F6BAA0(ctx, base);
loc_82FADF74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FADF78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FADF80"))) PPC_WEAK_FUNC(sub_82FADF80);
PPC_FUNC_IMPL(__imp__sub_82FADF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FADF88;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82fadfa8
	if (!ctx.cr6.eq) goto loc_82FADFA8;
loc_82FADFA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fae068
	goto loc_82FAE068;
loc_82FADFA8:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fae064
	if (ctx.cr6.eq) goto loc_82FAE064;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fae064
	if (ctx.cr6.eq) goto loc_82FAE064;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FADFC8:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f68a70
	ctx.lr = 0x82FADFDC;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fae054
	if (ctx.cr6.eq) goto loc_82FAE054;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FADFFC;
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
	ctx.lr = 0x82FAE014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAE034;
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
	// bne 0x82fae070
	if (!ctx.cr0.eq) goto loc_82FAE070;
	// bctrl 
	ctx.lr = 0x82FAE054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE054:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fadfc8
	if (ctx.cr6.lt) goto loc_82FADFC8;
loc_82FAE064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAE068:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82FAE070:
	// bctrl 
	ctx.lr = 0x82FAE074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fadfa0
	goto loc_82FADFA0;
}

__attribute__((alias("__imp__sub_82FAE078"))) PPC_WEAK_FUNC(sub_82FAE078);
PPC_FUNC_IMPL(__imp__sub_82FAE078) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24168
	ctx.r11.s64 = ctx.r11.s64 + 24168;
	// addi r10,r10,24088
	ctx.r10.s64 = ctx.r10.s64 + 24088;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fae0b8
	if (ctx.cr6.eq) goto loc_82FAE0B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82FAE0B8;
	sub_82F0A3F0(ctx, base);
loc_82FAE0B8:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82f67f08
	ctx.lr = 0x82FAE0C0;
	sub_82F67F08(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82f67f08
	ctx.lr = 0x82FAE0C8;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fad810
	ctx.lr = 0x82FAE0D0;
	sub_82FAD810(ctx, base);
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

__attribute__((alias("__imp__sub_82FAE0E4"))) PPC_WEAK_FUNC(sub_82FAE0E4);
PPC_FUNC_IMPL(__imp__sub_82FAE0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE0E8"))) PPC_WEAK_FUNC(sub_82FAE0E8);
PPC_FUNC_IMPL(__imp__sub_82FAE0E8) {
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
	// bl 0x82fae078
	ctx.lr = 0x82FAE108;
	sub_82FAE078(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae118
	if (ctx.cr0.eq) goto loc_82FAE118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAE118;
	sub_82EF6F38(ctx, base);
loc_82FAE118:
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

__attribute__((alias("__imp__sub_82FAE134"))) PPC_WEAK_FUNC(sub_82FAE134);
PPC_FUNC_IMPL(__imp__sub_82FAE134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE138"))) PPC_WEAK_FUNC(sub_82FAE138);
PPC_FUNC_IMPL(__imp__sub_82FAE138) {
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
	// bl 0x82fad810
	ctx.lr = 0x82FAE158;
	sub_82FAD810(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae168
	if (ctx.cr0.eq) goto loc_82FAE168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAE168;
	sub_82EF6F38(ctx, base);
loc_82FAE168:
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

__attribute__((alias("__imp__sub_82FAE184"))) PPC_WEAK_FUNC(sub_82FAE184);
PPC_FUNC_IMPL(__imp__sub_82FAE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE188"))) PPC_WEAK_FUNC(sub_82FAE188);
PPC_FUNC_IMPL(__imp__sub_82FAE188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FAE190;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82fadc60
	ctx.lr = 0x82FAE1A0;
	sub_82FADC60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24168
	ctx.r11.s64 = ctx.r11.s64 + 24168;
	// addi r10,r10,24088
	ctx.r10.s64 = ctx.r10.s64 + 24088;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,23944
	ctx.r5.s64 = ctx.r10.s64 + 23944;
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FAE1E4;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FAE1FC;
	sub_82F88220(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// bne cr6,0x82fae224
	if (!ctx.cr6.eq) goto loc_82FAE224;
	// bl 0x82f670f0
	ctx.lr = 0x82FAE224;
	sub_82F670F0(ctx, base);
loc_82FAE224:
	// li r29,6
	ctx.r29.s64 = 6;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// addi r5,r10,23896
	ctx.r5.s64 = ctx.r10.s64 + 23896;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f04130
	ctx.lr = 0x82FAE244;
	sub_82F04130(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FAE25C;
	sub_82F88220(ctx, base);
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
	// bne cr6,0x82fae284
	if (!ctx.cr6.eq) goto loc_82FAE284;
	// bl 0x82f670f0
	ctx.lr = 0x82FAE284;
	sub_82F670F0(ctx, base);
loc_82FAE284:
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,23952
	ctx.r5.s64 = ctx.r10.s64 + 23952;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FAE2A0;
	sub_82F04130(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FAE2B8;
	sub_82F88220(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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
	// bne cr6,0x82fae2e0
	if (!ctx.cr6.eq) goto loc_82FAE2E0;
	// bl 0x82f670f0
	ctx.lr = 0x82FAE2E0;
	sub_82F670F0(ctx, base);
loc_82FAE2E0:
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r5,r10,23916
	ctx.r5.s64 = ctx.r10.s64 + 23916;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FAE2FC;
	sub_82F04130(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FAE314;
	sub_82F88220(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
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
	// bne cr6,0x82fae33c
	if (!ctx.cr6.eq) goto loc_82FAE33C;
	// bl 0x82f670f0
	ctx.lr = 0x82FAE33C;
	sub_82F670F0(ctx, base);
loc_82FAE33C:
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r10,23968
	ctx.r5.s64 = ctx.r10.s64 + 23968;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FAE358;
	sub_82F04130(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FAE370;
	sub_82F88220(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// bne cr6,0x82fae398
	if (!ctx.cr6.eq) goto loc_82FAE398;
	// bl 0x82f670f0
	ctx.lr = 0x82FAE398;
	sub_82F670F0(ctx, base);
loc_82FAE398:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae3ac
	if (ctx.cr6.lt) goto loc_82FAE3AC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE3AC;
	sub_82F6BAA0(ctx, base);
loc_82FAE3AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FAE3B8"))) PPC_WEAK_FUNC(sub_82FAE3B8);
PPC_FUNC_IMPL(__imp__sub_82FAE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FAE3C0;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82fae3e0
	if (!ctx.cr6.eq) goto loc_82FAE3E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FAE3E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fae6c4
	if (ctx.cr6.eq) goto loc_82FAE6C4;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAE3F4;
	sub_82F68A70(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fae42c
	if (ctx.cr6.eq) goto loc_82FAE42C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAE414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82FAE42C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE42C:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82fae6a4
	if (ctx.cr6.lt) goto loc_82FAE6A4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fae6c4
	if (ctx.cr6.eq) goto loc_82FAE6C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FAE450;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82FAE458;
	sub_82F6AE18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82fae6ac
	if (ctx.cr0.eq) goto loc_82FAE6AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// ld r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 48);
	// ld r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 56);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r7,64(r27)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r27.u32 + 64);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// ld r26,72(r27)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r27.u32 + 72);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r5,r5,24296
	ctx.r5.s64 = ctx.r5.s64 + 24296;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r27,48
	ctx.r31.s64 = ctx.r27.s64 + 48;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// std r7,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r7.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r26,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r26.u64);
	// bl 0x82f049e8
	ctx.lr = 0x82FAE4B0;
	sub_82F049E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,26348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82fae4d8
	if (ctx.cr0.eq) goto loc_82FAE4D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE4CC;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82FAE4D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,24292
	ctx.r5.s64 = ctx.r11.s64 + 24292;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE4F0;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae510
	if (ctx.cr0.eq) goto loc_82FAE510;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE504;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82FAE510:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-25500
	ctx.r5.s64 = ctx.r11.s64 + -25500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE528;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae548
	if (ctx.cr0.eq) goto loc_82FAE548;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE53C;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82FAE548:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,24288
	ctx.r5.s64 = ctx.r11.s64 + 24288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE560;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae580
	if (ctx.cr0.eq) goto loc_82FAE580;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE574;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82FAE580:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,24284
	ctx.r5.s64 = ctx.r11.s64 + 24284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE598;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae5b4
	if (ctx.cr0.eq) goto loc_82FAE5B4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE5AC;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82FAE5B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,24280
	ctx.r5.s64 = ctx.r11.s64 + 24280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE5CC;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae5e8
	if (ctx.cr0.eq) goto loc_82FAE5E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE5E0;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82FAE5E8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE600;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae61c
	if (ctx.cr0.eq) goto loc_82FAE61C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE614;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82FAE61C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-9844
	ctx.r5.s64 = ctx.r11.s64 + -9844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82FAE634;
	sub_82F049E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae650
	if (ctx.cr0.eq) goto loc_82FAE650;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82FAE648;
	sub_82F6B480(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82FAE650:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FAE68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae6ac
	if (ctx.cr6.lt) goto loc_82FAE6AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE6A0;
	sub_82F6BAA0(ctx, base);
	// b 0x82fae6ac
	goto loc_82FAE6AC;
loc_82FAE6A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fae6c4
	if (ctx.cr6.eq) goto loc_82FAE6C4;
loc_82FAE6AC:
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
	ctx.lr = 0x82FAE6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE6C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FAE6D0"))) PPC_WEAK_FUNC(sub_82FAE6D0);
PPC_FUNC_IMPL(__imp__sub_82FAE6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FAE6D8;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82fae6f8
	if (!ctx.cr6.eq) goto loc_82FAE6F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FAE6F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fae9d0
	if (ctx.cr6.eq) goto loc_82FAE9D0;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAE70C;
	sub_82F68A70(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fae9d0
	if (ctx.cr6.eq) goto loc_82FAE9D0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAE72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82FAE744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 48);
	// ld r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 56);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// ld r8,64(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 64);
	// li r3,48
	ctx.r3.s64 = 48;
	// ld r7,72(r27)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r27.u32 + 72);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAE770;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fae7a0
	if (ctx.cr0.eq) goto loc_82FAE7A0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f87fd0
	ctx.lr = 0x82FAE798;
	sub_82F87FD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82fae7a4
	goto loc_82FAE7A4;
loc_82FAE7A0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FAE7A4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,2720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2720);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f0.u64);
	// addi r5,r11,24296
	ctx.r5.s64 = ctx.r11.s64 + 24296;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE7E4;
	sub_82F048D0(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae7f8
	if (ctx.cr6.lt) goto loc_82FAE7F8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE7F8;
	sub_82F6BAA0(ctx, base);
loc_82FAE7F8:
	// lfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,24292
	ctx.r5.s64 = ctx.r11.s64 + 24292;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE820;
	sub_82F048D0(ctx, base);
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae834
	if (ctx.cr6.lt) goto loc_82FAE834;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE834;
	sub_82F6BAA0(ctx, base);
loc_82FAE834:
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-25500
	ctx.r5.s64 = ctx.r11.s64 + -25500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE85C;
	sub_82F048D0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae870
	if (ctx.cr6.lt) goto loc_82FAE870;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE870;
	sub_82F6BAA0(ctx, base);
loc_82FAE870:
	// lfs f0,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,24288
	ctx.r5.s64 = ctx.r11.s64 + 24288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE898;
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae8ac
	if (ctx.cr6.lt) goto loc_82FAE8AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE8AC;
	sub_82F6BAA0(ctx, base);
loc_82FAE8AC:
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,24284
	ctx.r5.s64 = ctx.r11.s64 + 24284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE8D0;
	sub_82F048D0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae8e4
	if (ctx.cr6.lt) goto loc_82FAE8E4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE8E4;
	sub_82F6BAA0(ctx, base);
loc_82FAE8E4:
	// lfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,24280
	ctx.r5.s64 = ctx.r11.s64 + 24280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE908;
	sub_82F048D0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae91c
	if (ctx.cr6.lt) goto loc_82FAE91C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE91C;
	sub_82F6BAA0(ctx, base);
loc_82FAE91C:
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE940;
	sub_82F048D0(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae954
	if (ctx.cr6.lt) goto loc_82FAE954;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE954;
	sub_82F6BAA0(ctx, base);
loc_82FAE954:
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r11,-9844
	ctx.r5.s64 = ctx.r11.s64 + -9844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82FAE978;
	sub_82F048D0(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fae98c
	if (ctx.cr6.lt) goto loc_82FAE98C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAE98C;
	sub_82F6BAA0(ctx, base);
loc_82FAE98C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82FAE998;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fae9b8
	if (ctx.cr6.eq) goto loc_82FAE9B8;
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
	ctx.lr = 0x82FAE9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE9B8:
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
	ctx.lr = 0x82FAE9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE9D0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FAE9DC"))) PPC_WEAK_FUNC(sub_82FAE9DC);
PPC_FUNC_IMPL(__imp__sub_82FAE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE9E0"))) PPC_WEAK_FUNC(sub_82FAE9E0);
PPC_FUNC_IMPL(__imp__sub_82FAE9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FAE9E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82faea04
	if (!ctx.cr6.eq) goto loc_82FAEA04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FAEA04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faeb6c
	if (ctx.cr6.eq) goto loc_82FAEB6C;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAEA18;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faea50
	if (ctx.cr6.eq) goto loc_82FAEA50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEA38;
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
	ctx.lr = 0x82FAEA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAEA50:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82faeb4c
	if (ctx.cr6.lt) goto loc_82FAEB4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faeb6c
	if (ctx.cr6.eq) goto loc_82FAEB6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FAEA74;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82FAEA7C;
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r7,r11,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// ld r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r8,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r8.u64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f0,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r10,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r10.u64);
	// std r9,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r9.u64);
	// std r7,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r7.u64);
	// std r8,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r8.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82faeb54
	goto loc_82FAEB54;
loc_82FAEB4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faeb6c
	if (ctx.cr6.eq) goto loc_82FAEB6C;
loc_82FAEB54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAEB6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FAEB74"))) PPC_WEAK_FUNC(sub_82FAEB74);
PPC_FUNC_IMPL(__imp__sub_82FAEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEB78"))) PPC_WEAK_FUNC(sub_82FAEB78);
PPC_FUNC_IMPL(__imp__sub_82FAEB78) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82faeba4
	if (!ctx.cr6.eq) goto loc_82FAEBA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FAEBA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faec80
	if (ctx.cr6.eq) goto loc_82FAEC80;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FAEBB8;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faec80
	if (ctx.cr6.eq) goto loc_82FAEC80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEBD8;
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
	ctx.lr = 0x82FAEBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82FAEC68;
	sub_82F04200(ctx, base);
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
	ctx.lr = 0x82FAEC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAEC80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82FAEC98"))) PPC_WEAK_FUNC(sub_82FAEC98);
PPC_FUNC_IMPL(__imp__sub_82FAEC98) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAECB4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,24384
	ctx.r9.s64 = ctx.r11.s64 + 24384;
	// addi r10,r10,24304
	ctx.r10.s64 = ctx.r10.s64 + 24304;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FAECF0"))) PPC_WEAK_FUNC(sub_82FAECF0);
PPC_FUNC_IMPL(__imp__sub_82FAECF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAECF8"))) PPC_WEAK_FUNC(sub_82FAECF8);
PPC_FUNC_IMPL(__imp__sub_82FAECF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FAED00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAED18;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24384
	ctx.r11.s64 = ctx.r11.s64 + 24384;
	// addi r10,r10,24304
	ctx.r10.s64 = ctx.r10.s64 + 24304;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// beq cr6,0x82faed88
	if (ctx.cr6.eq) goto loc_82FAED88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7138
	ctx.lr = 0x82FAED58;
	sub_82EF7138(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faed80
	if (ctx.cr6.eq) goto loc_82FAED80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x82faed80
	if (!ctx.cr0.eq) goto loc_82FAED80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAED80;
	sub_82EF6F38(ctx, base);
loc_82FAED80:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82faedac
	goto loc_82FAEDAC;
loc_82FAED88:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82faeda8
	if (ctx.cr6.eq) goto loc_82FAEDA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82faeda8
	if (!ctx.cr0.eq) goto loc_82FAEDA8;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAEDA8;
	sub_82EF6F38(ctx, base);
loc_82FAEDA8:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82FAEDAC:
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// bl 0x82f0ad10
	ctx.lr = 0x82FAEDD0;
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FAEDE4;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82faee04
	if (ctx.cr6.eq) goto loc_82FAEE04;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAEE04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FAEE10"))) PPC_WEAK_FUNC(sub_82FAEE10);
PPC_FUNC_IMPL(__imp__sub_82FAEE10) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82faee50
	if (ctx.cr6.lt) goto loc_82FAEE50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FAEE40;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f177b0
	ctx.lr = 0x82FAEE4C;
	sub_82F177B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82FAEE50:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAEE58;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82faee8c
	if (ctx.cr0.eq) goto loc_82FAEE8C;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82faecf8
	ctx.lr = 0x82FAEE84;
	sub_82FAECF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82faee90
	goto loc_82FAEE90;
loc_82FAEE8C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FAEE90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82FAEE9C;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82faeebc
	if (ctx.cr6.eq) goto loc_82FAEEBC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAEEBC:
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

__attribute__((alias("__imp__sub_82FAEED4"))) PPC_WEAK_FUNC(sub_82FAEED4);
PPC_FUNC_IMPL(__imp__sub_82FAEED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEED8"))) PPC_WEAK_FUNC(sub_82FAEED8);
PPC_FUNC_IMPL(__imp__sub_82FAEED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FAEEE0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82faec98
	ctx.lr = 0x82FAEEF8;
	sub_82FAEC98(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24488
	ctx.r11.s64 = ctx.r11.s64 + 24488;
	// addi r10,r10,24408
	ctx.r10.s64 = ctx.r10.s64 + 24408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82FAEF28;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAEF34;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82FAEF48;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAEF54;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82FAEF68;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82faf230
	ctx.lr = 0x82FAEF78;
	sub_82FAF230(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faef8c
	if (ctx.cr6.lt) goto loc_82FAEF8C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAEF8C;
	sub_82F6BAA0(ctx, base);
loc_82FAEF8C:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82FAEFB8;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAEFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faefec
	if (ctx.cr6.lt) goto loc_82FAEFEC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAEFEC;
	sub_82F6BAA0(ctx, base);
loc_82FAEFEC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FAEFFC;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FAF008"))) PPC_WEAK_FUNC(sub_82FAF008);
PPC_FUNC_IMPL(__imp__sub_82FAF008) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82faf178
	sub_82FAF178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF010"))) PPC_WEAK_FUNC(sub_82FAF010);
PPC_FUNC_IMPL(__imp__sub_82FAF010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FAF018;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82faf038
	if (!ctx.cr6.eq) goto loc_82FAF038;
loc_82FAF030:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82faf0f8
	goto loc_82FAF0F8;
loc_82FAF038:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faf0f4
	if (ctx.cr6.eq) goto loc_82FAF0F4;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82faf0f4
	if (ctx.cr6.eq) goto loc_82FAF0F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FAF058:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f68a70
	ctx.lr = 0x82FAF06C;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faf0e4
	if (ctx.cr6.eq) goto loc_82FAF0E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF08C;
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
	ctx.lr = 0x82FAF0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF0C4;
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
	// bne 0x82faf100
	if (!ctx.cr0.eq) goto loc_82FAF100;
	// bctrl 
	ctx.lr = 0x82FAF0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAF0E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82faf058
	if (ctx.cr6.lt) goto loc_82FAF058;
loc_82FAF0F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAF0F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82FAF100:
	// bctrl 
	ctx.lr = 0x82FAF104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82faf030
	goto loc_82FAF030;
}

__attribute__((alias("__imp__sub_82FAF108"))) PPC_WEAK_FUNC(sub_82FAF108);
PPC_FUNC_IMPL(__imp__sub_82FAF108) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24488
	ctx.r11.s64 = ctx.r11.s64 + 24488;
	// addi r10,r10,24408
	ctx.r10.s64 = ctx.r10.s64 + 24408;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82faf148
	if (ctx.cr6.eq) goto loc_82FAF148;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82FAF148;
	sub_82F0A3F0(ctx, base);
loc_82FAF148:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82f67f08
	ctx.lr = 0x82FAF150;
	sub_82F67F08(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f67f08
	ctx.lr = 0x82FAF158;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f56128
	ctx.lr = 0x82FAF160;
	sub_82F56128(ctx, base);
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

__attribute__((alias("__imp__sub_82FAF174"))) PPC_WEAK_FUNC(sub_82FAF174);
PPC_FUNC_IMPL(__imp__sub_82FAF174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF178"))) PPC_WEAK_FUNC(sub_82FAF178);
PPC_FUNC_IMPL(__imp__sub_82FAF178) {
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
	// bl 0x82faf108
	ctx.lr = 0x82FAF198;
	sub_82FAF108(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf1a8
	if (ctx.cr0.eq) goto loc_82FAF1A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAF1A8;
	sub_82EF6F38(ctx, base);
loc_82FAF1A8:
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

__attribute__((alias("__imp__sub_82FAF1C4"))) PPC_WEAK_FUNC(sub_82FAF1C4);
PPC_FUNC_IMPL(__imp__sub_82FAF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF1C8"))) PPC_WEAK_FUNC(sub_82FAF1C8);
PPC_FUNC_IMPL(__imp__sub_82FAF1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FAF1D0;
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
	// bl 0x82faeed8
	ctx.lr = 0x82FAF1E4;
	sub_82FAEED8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24488
	ctx.r11.s64 = ctx.r11.s64 + 24488;
	// addi r10,r10,24408
	ctx.r10.s64 = ctx.r10.s64 + 24408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24240
	ctx.r5.s64 = ctx.r11.s64 + 24240;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82FAF214;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FAF220"))) PPC_WEAK_FUNC(sub_82FAF220);
PPC_FUNC_IMPL(__imp__sub_82FAF220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// b 0x82f04200
	sub_82F04200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF230"))) PPC_WEAK_FUNC(sub_82FAF230);
PPC_FUNC_IMPL(__imp__sub_82FAF230) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82FAF258;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f68378
	ctx.lr = 0x82FAF264;
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82FAF26C;
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// bl 0x82f88220
	ctx.lr = 0x82FAF298;
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faf2ac
	if (ctx.cr6.lt) goto loc_82FAF2AC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF2AC;
	sub_82F6BAA0(ctx, base);
loc_82FAF2AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82FAF2C8"))) PPC_WEAK_FUNC(sub_82FAF2C8);
PPC_FUNC_IMPL(__imp__sub_82FAF2C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAF2E4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24760
	ctx.r11.s64 = ctx.r11.s64 + 24760;
	// addi r10,r10,24680
	ctx.r10.s64 = ctx.r10.s64 + 24680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82FAF304;
	sub_82EF7600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FAF324"))) PPC_WEAK_FUNC(sub_82FAF324);
PPC_FUNC_IMPL(__imp__sub_82FAF324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF328"))) PPC_WEAK_FUNC(sub_82FAF328);
PPC_FUNC_IMPL(__imp__sub_82FAF328) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82faf6d8
	sub_82FAF6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF330"))) PPC_WEAK_FUNC(sub_82FAF330);
PPC_FUNC_IMPL(__imp__sub_82FAF330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FAF338;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAF34C;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24760
	ctx.r11.s64 = ctx.r11.s64 + 24760;
	// addi r10,r10,24680
	ctx.r10.s64 = ctx.r10.s64 + 24680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// bl 0x82ef7600
	ctx.lr = 0x82FAF370;
	sub_82EF7600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82FAF39C;
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FAF3B0;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82faf3d0
	if (ctx.cr6.eq) goto loc_82FAF3D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAF3D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FAF3DC"))) PPC_WEAK_FUNC(sub_82FAF3DC);
PPC_FUNC_IMPL(__imp__sub_82FAF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF3E0"))) PPC_WEAK_FUNC(sub_82FAF3E0);
PPC_FUNC_IMPL(__imp__sub_82FAF3E0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82FAF400:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82faf400
	if (!ctx.cr0.eq) goto loc_82FAF400;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faf42c
	if (!ctx.cr0.eq) goto loc_82FAF42C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAF42C;
	sub_82EF6F38(ctx, base);
loc_82FAF42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82FAF434;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82FAF448"))) PPC_WEAK_FUNC(sub_82FAF448);
PPC_FUNC_IMPL(__imp__sub_82FAF448) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAF468;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82faf498
	if (ctx.cr0.eq) goto loc_82FAF498;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82faf330
	ctx.lr = 0x82FAF490;
	sub_82FAF330(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82faf49c
	goto loc_82FAF49C;
loc_82FAF498:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FAF49C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82FAF4A8;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faf4c8
	if (ctx.cr6.eq) goto loc_82FAF4C8;
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
	ctx.lr = 0x82FAF4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAF4C8:
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

__attribute__((alias("__imp__sub_82FAF4E0"))) PPC_WEAK_FUNC(sub_82FAF4E0);
PPC_FUNC_IMPL(__imp__sub_82FAF4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FAF4E8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82faf2c8
	ctx.lr = 0x82FAF500;
	sub_82FAF2C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// addi r10,r10,24784
	ctx.r10.s64 = ctx.r10.s64 + 24784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82FAF530;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAF53C;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82FAF550;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAF55C;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82FAF570;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82faf230
	ctx.lr = 0x82FAF580;
	sub_82FAF230(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faf594
	if (ctx.cr6.lt) goto loc_82FAF594;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF594;
	sub_82F6BAA0(ctx, base);
loc_82FAF594:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82FAF5C0;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faf5f4
	if (ctx.cr6.lt) goto loc_82FAF5F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF5F4;
	sub_82F6BAA0(ctx, base);
loc_82FAF5F4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FAF604;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FAF610"))) PPC_WEAK_FUNC(sub_82FAF610);
PPC_FUNC_IMPL(__imp__sub_82FAF610) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82faf688
	sub_82FAF688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF618"))) PPC_WEAK_FUNC(sub_82FAF618);
PPC_FUNC_IMPL(__imp__sub_82FAF618) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// addi r10,r10,24784
	ctx.r10.s64 = ctx.r10.s64 + 24784;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82faf658
	if (ctx.cr6.eq) goto loc_82FAF658;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82FAF658;
	sub_82F0A3F0(ctx, base);
loc_82FAF658:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82f67f08
	ctx.lr = 0x82FAF660;
	sub_82F67F08(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82f67f08
	ctx.lr = 0x82FAF668;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82faf3e0
	ctx.lr = 0x82FAF670;
	sub_82FAF3E0(ctx, base);
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

__attribute__((alias("__imp__sub_82FAF684"))) PPC_WEAK_FUNC(sub_82FAF684);
PPC_FUNC_IMPL(__imp__sub_82FAF684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF688"))) PPC_WEAK_FUNC(sub_82FAF688);
PPC_FUNC_IMPL(__imp__sub_82FAF688) {
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
	// bl 0x82faf618
	ctx.lr = 0x82FAF6A8;
	sub_82FAF618(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf6b8
	if (ctx.cr0.eq) goto loc_82FAF6B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAF6B8;
	sub_82EF6F38(ctx, base);
loc_82FAF6B8:
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

__attribute__((alias("__imp__sub_82FAF6D4"))) PPC_WEAK_FUNC(sub_82FAF6D4);
PPC_FUNC_IMPL(__imp__sub_82FAF6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF6D8"))) PPC_WEAK_FUNC(sub_82FAF6D8);
PPC_FUNC_IMPL(__imp__sub_82FAF6D8) {
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
	// bl 0x82faf3e0
	ctx.lr = 0x82FAF6F8;
	sub_82FAF3E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf708
	if (ctx.cr0.eq) goto loc_82FAF708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAF708;
	sub_82EF6F38(ctx, base);
loc_82FAF708:
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

__attribute__((alias("__imp__sub_82FAF724"))) PPC_WEAK_FUNC(sub_82FAF724);
PPC_FUNC_IMPL(__imp__sub_82FAF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF728"))) PPC_WEAK_FUNC(sub_82FAF728);
PPC_FUNC_IMPL(__imp__sub_82FAF728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FAF730;
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
	// bl 0x82faf4e0
	ctx.lr = 0x82FAF744;
	sub_82FAF4E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// addi r10,r10,24784
	ctx.r10.s64 = ctx.r10.s64 + 24784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24576
	ctx.r5.s64 = ctx.r11.s64 + 24576;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82FAF774;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FAF780"))) PPC_WEAK_FUNC(sub_82FAF780);
PPC_FUNC_IMPL(__imp__sub_82FAF780) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82faf798
	if (ctx.cr0.eq) goto loc_82FAF798;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,3900
	ctx.r3.s64 = ctx.r11.s64 + 3900;
	// blr 
	return;
loc_82FAF798:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAF7A4"))) PPC_WEAK_FUNC(sub_82FAF7A4);
PPC_FUNC_IMPL(__imp__sub_82FAF7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF7A8"))) PPC_WEAK_FUNC(sub_82FAF7A8);
PPC_FUNC_IMPL(__imp__sub_82FAF7A8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FAF7C4;
	sub_82F6B840(ctx, base);
	// stb r3,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82FAF7DC"))) PPC_WEAK_FUNC(sub_82FAF7DC);
PPC_FUNC_IMPL(__imp__sub_82FAF7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF7E0"))) PPC_WEAK_FUNC(sub_82FAF7E0);
PPC_FUNC_IMPL(__imp__sub_82FAF7E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAF7F4"))) PPC_WEAK_FUNC(sub_82FAF7F4);
PPC_FUNC_IMPL(__imp__sub_82FAF7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF7F8"))) PPC_WEAK_FUNC(sub_82FAF7F8);
PPC_FUNC_IMPL(__imp__sub_82FAF7F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82faf824
	if (!ctx.cr6.eq) goto loc_82FAF824;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FAF824:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82FAF850;
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82FAF85C;
	sub_82F041A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// bne cr6,0x82faf884
	if (!ctx.cr6.eq) goto loc_82FAF884;
	// bl 0x82f670f0
	ctx.lr = 0x82FAF884;
	sub_82F670F0(ctx, base);
loc_82FAF884:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faf898
	if (ctx.cr6.lt) goto loc_82FAF898;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF898;
	sub_82F6BAA0(ctx, base);
loc_82FAF898:
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

__attribute__((alias("__imp__sub_82FAF8B0"))) PPC_WEAK_FUNC(sub_82FAF8B0);
PPC_FUNC_IMPL(__imp__sub_82FAF8B0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82faf8dc
	if (!ctx.cr6.eq) goto loc_82FAF8DC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FAF8DC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FAF8FC;
	sub_82F6B840(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF90C;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82faf92c
	if (ctx.cr6.lt) goto loc_82FAF92C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF92C;
	sub_82F6BAA0(ctx, base);
loc_82FAF92C:
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

__attribute__((alias("__imp__sub_82FAF944"))) PPC_WEAK_FUNC(sub_82FAF944);
PPC_FUNC_IMPL(__imp__sub_82FAF944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF948"))) PPC_WEAK_FUNC(sub_82FAF948);
PPC_FUNC_IMPL(__imp__sub_82FAF948) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82faf984
	if (!ctx.cr6.eq) goto loc_82FAF984;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF978;
	sub_82F6BAA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x82faf9b0
	goto loc_82FAF9B0;
loc_82FAF984:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FAF994;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FAF99C;
	sub_82F6B840(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAF9AC;
	sub_82F6BAA0(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
loc_82FAF9B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82FAF9D0"))) PPC_WEAK_FUNC(sub_82FAF9D0);
PPC_FUNC_IMPL(__imp__sub_82FAF9D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82FAF9F8;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82f68378
	ctx.lr = 0x82FAFA04;
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFA0C;
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// bl 0x82f88220
	ctx.lr = 0x82FAFA38;
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafa4c
	if (ctx.cr6.lt) goto loc_82FAFA4C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFA4C;
	sub_82F6BAA0(ctx, base);
loc_82FAFA4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82FAFA68"))) PPC_WEAK_FUNC(sub_82FAFA68);
PPC_FUNC_IMPL(__imp__sub_82FAFA68) {
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
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-1720
	ctx.r4.s64 = ctx.r11.s64 + -1720;
	// bl 0x82f6a308
	ctx.lr = 0x82FAFA88;
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,24912
	ctx.r11.s64 = ctx.r11.s64 + 24912;
	// addi r10,r10,11640
	ctx.r10.s64 = ctx.r10.s64 + 11640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FAFAB8"))) PPC_WEAK_FUNC(sub_82FAFAB8);
PPC_FUNC_IMPL(__imp__sub_82FAFAB8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82FAFAD4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r10,r10,24968
	ctx.r10.s64 = ctx.r10.s64 + 24968;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82FAFB0C"))) PPC_WEAK_FUNC(sub_82FAFB0C);
PPC_FUNC_IMPL(__imp__sub_82FAFB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFB10"))) PPC_WEAK_FUNC(sub_82FAFB10);
PPC_FUNC_IMPL(__imp__sub_82FAFB10) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFB18"))) PPC_WEAK_FUNC(sub_82FAFB18);
PPC_FUNC_IMPL(__imp__sub_82FAFB18) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FAFB2C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fafb58
	if (ctx.cr0.eq) goto loc_82FAFB58;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82fafab8
	ctx.lr = 0x82FAFB54;
	sub_82FAFAB8(ctx, base);
	// b 0x82fafb5c
	goto loc_82FAFB5C;
loc_82FAFB58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAFB5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFB6C"))) PPC_WEAK_FUNC(sub_82FAFB6C);
PPC_FUNC_IMPL(__imp__sub_82FAFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFB70"))) PPC_WEAK_FUNC(sub_82FAFB70);
PPC_FUNC_IMPL(__imp__sub_82FAFB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FAFB78;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82fafab8
	ctx.lr = 0x82FAFB90;
	sub_82FAFAB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25152
	ctx.r11.s64 = ctx.r11.s64 + 25152;
	// addi r10,r10,25072
	ctx.r10.s64 = ctx.r10.s64 + 25072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82FAFBC0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAFBCC;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82FAFBE0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82FAFBEC;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82FAFC00;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82faf9d0
	ctx.lr = 0x82FAFC10;
	sub_82FAF9D0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafc24
	if (ctx.cr6.lt) goto loc_82FAFC24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFC24;
	sub_82F6BAA0(ctx, base);
loc_82FAFC24:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82FAFC50;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAFC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafc84
	if (ctx.cr6.lt) goto loc_82FAFC84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFC84;
	sub_82F6BAA0(ctx, base);
loc_82FAFC84:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82FAFC94;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FAFCA0"))) PPC_WEAK_FUNC(sub_82FAFCA0);
PPC_FUNC_IMPL(__imp__sub_82FAFCA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82faff00
	sub_82FAFF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAFCA8"))) PPC_WEAK_FUNC(sub_82FAFCA8);
PPC_FUNC_IMPL(__imp__sub_82FAFCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FAFCB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82FAFCE4;
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82fafd2c
	if (!ctx.cr0.eq) goto loc_82FAFD2C;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82FAFD0C;
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fafd2c
	if (!ctx.cr0.eq) goto loc_82FAFD2C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f87920
	ctx.lr = 0x82FAFD28;
	sub_82F87920(ctx, base);
	// b 0x82fafe88
	goto loc_82FAFE88;
loc_82FAFD2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f884e8
	ctx.lr = 0x82FAFD54;
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fafd68
	if (ctx.cr0.eq) goto loc_82FAFD68;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FAFD68;
	sub_82F6BBB0(ctx, base);
loc_82FAFD68:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82fafd84
	if (ctx.cr6.eq) goto loc_82FAFD84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FAFD80;
	sub_82F6BBB0(ctx, base);
	// b 0x82fafe5c
	goto loc_82FAFE5C;
loc_82FAFD84:
	// addi r27,r29,36
	ctx.r27.s64 = ctx.r29.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	ctx.lr = 0x82FAFD98;
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fafdb0
	if (ctx.cr6.eq) goto loc_82FAFDB0;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82FAFDAC;
	sub_82F68378(ctx, base);
	// b 0x82fafdd4
	goto loc_82FAFDD4;
loc_82FAFDB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	ctx.lr = 0x82FAFDC0;
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82FAFDCC;
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFDD4;
	sub_82F67F08(ctx, base);
loc_82FAFDD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fafe48
	if (!ctx.cr6.eq) goto loc_82FAFE48;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fafe48
	if (ctx.cr6.eq) goto loc_82FAFE48;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAFE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFE18;
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafe2c
	if (ctx.cr6.lt) goto loc_82FAFE2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFE2C;
	sub_82F6BAA0(ctx, base);
loc_82FAFE2C:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafe40
	if (ctx.cr6.lt) goto loc_82FAFE40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFE40;
	sub_82F6BAA0(ctx, base);
loc_82FAFE40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82fafe88
	goto loc_82FAFE88;
loc_82FAFE48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bea0
	ctx.lr = 0x82FAFE54;
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFE5C;
	sub_82F67F08(ctx, base);
loc_82FAFE5C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafe70
	if (ctx.cr6.lt) goto loc_82FAFE70;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFE70;
	sub_82F6BAA0(ctx, base);
loc_82FAFE70:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fafe84
	if (ctx.cr6.lt) goto loc_82FAFE84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FAFE84;
	sub_82F6BAA0(ctx, base);
loc_82FAFE84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FAFE88:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FAFE90"))) PPC_WEAK_FUNC(sub_82FAFE90);
PPC_FUNC_IMPL(__imp__sub_82FAFE90) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25152
	ctx.r11.s64 = ctx.r11.s64 + 25152;
	// addi r10,r10,25072
	ctx.r10.s64 = ctx.r10.s64 + 25072;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82fafed0
	if (ctx.cr6.eq) goto loc_82FAFED0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82FAFED0;
	sub_82F0A3F0(ctx, base);
loc_82FAFED0:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFED8;
	sub_82F67F08(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82f67f08
	ctx.lr = 0x82FAFEE0;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82FAFEE8;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82FAFEFC"))) PPC_WEAK_FUNC(sub_82FAFEFC);
PPC_FUNC_IMPL(__imp__sub_82FAFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFF00"))) PPC_WEAK_FUNC(sub_82FAFF00);
PPC_FUNC_IMPL(__imp__sub_82FAFF00) {
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
	// bl 0x82fafe90
	ctx.lr = 0x82FAFF20;
	sub_82FAFE90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faff30
	if (ctx.cr0.eq) goto loc_82FAFF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FAFF30;
	sub_82EF6F38(ctx, base);
loc_82FAFF30:
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

__attribute__((alias("__imp__sub_82FAFF4C"))) PPC_WEAK_FUNC(sub_82FAFF4C);
PPC_FUNC_IMPL(__imp__sub_82FAFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFF50"))) PPC_WEAK_FUNC(sub_82FAFF50);
PPC_FUNC_IMPL(__imp__sub_82FAFF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FAFF58;
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
	// bl 0x82fafb70
	ctx.lr = 0x82FAFF6C;
	sub_82FAFB70(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25152
	ctx.r11.s64 = ctx.r11.s64 + 25152;
	// addi r10,r10,25072
	ctx.r10.s64 = ctx.r10.s64 + 25072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24888
	ctx.r5.s64 = ctx.r11.s64 + 24888;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82FAFF9C;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FAFFA8"))) PPC_WEAK_FUNC(sub_82FAFFA8);
PPC_FUNC_IMPL(__imp__sub_82FAFFA8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,25176
	ctx.r5.s64 = ctx.r10.s64 + 25176;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FAFFD4;
	sub_82F04130(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82fafffc
	if (!ctx.cr0.eq) goto loc_82FAFFFC;
	// bl 0x82f670f0
	ctx.lr = 0x82FAFFFC;
	sub_82F670F0(ctx, base);
loc_82FAFFFC:
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

__attribute__((alias("__imp__sub_82FB0014"))) PPC_WEAK_FUNC(sub_82FB0014);
PPC_FUNC_IMPL(__imp__sub_82FB0014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0018"))) PPC_WEAK_FUNC(sub_82FB0018);
PPC_FUNC_IMPL(__imp__sub_82FB0018) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,25200
	ctx.r5.s64 = ctx.r10.s64 + 25200;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0044;
	sub_82F04130(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82fb006c
	if (!ctx.cr0.eq) goto loc_82FB006C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB006C;
	sub_82F670F0(ctx, base);
loc_82FB006C:
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

__attribute__((alias("__imp__sub_82FB0084"))) PPC_WEAK_FUNC(sub_82FB0084);
PPC_FUNC_IMPL(__imp__sub_82FB0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0088"))) PPC_WEAK_FUNC(sub_82FB0088);
PPC_FUNC_IMPL(__imp__sub_82FB0088) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,6836
	ctx.r5.s64 = ctx.r10.s64 + 6836;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB00B4;
	sub_82F04130(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82fb00dc
	if (!ctx.cr0.eq) goto loc_82FB00DC;
	// bl 0x82f670f0
	ctx.lr = 0x82FB00DC;
	sub_82F670F0(ctx, base);
loc_82FB00DC:
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

__attribute__((alias("__imp__sub_82FB00F4"))) PPC_WEAK_FUNC(sub_82FB00F4);
PPC_FUNC_IMPL(__imp__sub_82FB00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB00F8"))) PPC_WEAK_FUNC(sub_82FB00F8);
PPC_FUNC_IMPL(__imp__sub_82FB00F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB0100;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82f6a1c8
	ctx.lr = 0x82FB0114;
	sub_82F6A1C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25712
	ctx.r11.s64 = ctx.r11.s64 + 25712;
	// addi r10,r10,25632
	ctx.r10.s64 = ctx.r10.s64 + 25632;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r5,r9,25612
	ctx.r5.s64 = ctx.r9.s64 + 25612;
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0160;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0178;
	sub_82F88220(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
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
	// bne cr6,0x82fb01a0
	if (!ctx.cr6.eq) goto loc_82FB01A0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB01A0;
	sub_82F670F0(ctx, base);
loc_82FB01A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r5,r10,25592
	ctx.r5.s64 = ctx.r10.s64 + 25592;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB01B8;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB01D0;
	sub_82F88220(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
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
	// bne cr6,0x82fb01f8
	if (!ctx.cr6.eq) goto loc_82FB01F8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB01F8;
	sub_82F670F0(ctx, base);
loc_82FB01F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r5,r10,25580
	ctx.r5.s64 = ctx.r10.s64 + 25580;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0210;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0228;
	sub_82F88220(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
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
	// bne cr6,0x82fb0250
	if (!ctx.cr6.eq) goto loc_82FB0250;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0250;
	sub_82F670F0(ctx, base);
loc_82FB0250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r5,r10,25564
	ctx.r5.s64 = ctx.r10.s64 + 25564;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0268;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0280;
	sub_82F88220(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
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
	// bne cr6,0x82fb02a8
	if (!ctx.cr6.eq) goto loc_82FB02A8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB02A8;
	sub_82F670F0(ctx, base);
loc_82FB02A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r5,r10,25544
	ctx.r5.s64 = ctx.r10.s64 + 25544;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB02C0;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB02D8;
	sub_82F88220(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
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
	// bne cr6,0x82fb0300
	if (!ctx.cr6.eq) goto loc_82FB0300;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0300;
	sub_82F670F0(ctx, base);
loc_82FB0300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r10,25536
	ctx.r5.s64 = ctx.r10.s64 + 25536;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0318;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0330;
	sub_82F88220(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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
	// bne cr6,0x82fb0358
	if (!ctx.cr6.eq) goto loc_82FB0358;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0358;
	sub_82F670F0(ctx, base);
loc_82FB0358:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r5,r10,25528
	ctx.r5.s64 = ctx.r10.s64 + 25528;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0370;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0388;
	sub_82F88220(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
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
	// bne cr6,0x82fb03b0
	if (!ctx.cr6.eq) goto loc_82FB03B0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB03B0;
	sub_82F670F0(ctx, base);
loc_82FB03B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r5,r10,25516
	ctx.r5.s64 = ctx.r10.s64 + 25516;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB03C8;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB03E0;
	sub_82F88220(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
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
	// bne cr6,0x82fb0408
	if (!ctx.cr6.eq) goto loc_82FB0408;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0408;
	sub_82F670F0(ctx, base);
loc_82FB0408:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r5,r10,25496
	ctx.r5.s64 = ctx.r10.s64 + 25496;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0420;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0438;
	sub_82F88220(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
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
	// bne cr6,0x82fb0460
	if (!ctx.cr6.eq) goto loc_82FB0460;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0460;
	sub_82F670F0(ctx, base);
loc_82FB0460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r10,25476
	ctx.r5.s64 = ctx.r10.s64 + 25476;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0478;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0490;
	sub_82F88220(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
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
	// bne cr6,0x82fb04b8
	if (!ctx.cr6.eq) goto loc_82FB04B8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB04B8;
	sub_82F670F0(ctx, base);
loc_82FB04B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r5,r10,25456
	ctx.r5.s64 = ctx.r10.s64 + 25456;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB04D0;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB04E8;
	sub_82F88220(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
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
	// bne cr6,0x82fb0510
	if (!ctx.cr6.eq) goto loc_82FB0510;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0510;
	sub_82F670F0(ctx, base);
loc_82FB0510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r5,r10,25436
	ctx.r5.s64 = ctx.r10.s64 + 25436;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0528;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0540;
	sub_82F88220(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
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
	// bne cr6,0x82fb0568
	if (!ctx.cr6.eq) goto loc_82FB0568;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0568;
	sub_82F670F0(ctx, base);
loc_82FB0568:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// addi r5,r10,25420
	ctx.r5.s64 = ctx.r10.s64 + 25420;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0580;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0598;
	sub_82F88220(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
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
	// bne cr6,0x82fb05c0
	if (!ctx.cr6.eq) goto loc_82FB05C0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB05C0;
	sub_82F670F0(ctx, base);
loc_82FB05C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r10,25408
	ctx.r5.s64 = ctx.r10.s64 + 25408;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB05D8;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB05F0;
	sub_82F88220(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
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
	// bne cr6,0x82fb0618
	if (!ctx.cr6.eq) goto loc_82FB0618;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0618;
	sub_82F670F0(ctx, base);
loc_82FB0618:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r5,r10,25384
	ctx.r5.s64 = ctx.r10.s64 + 25384;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0630;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0648;
	sub_82F88220(ctx, base);
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
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
	// bne cr6,0x82fb0670
	if (!ctx.cr6.eq) goto loc_82FB0670;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0670;
	sub_82F670F0(ctx, base);
loc_82FB0670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,8556
	ctx.r5.s64 = ctx.r10.s64 + 8556;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0688;
	sub_82F04130(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r5,r11,5896
	ctx.r5.s64 = ctx.r11.s64 + 5896;
	// stb r28,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r28.u8);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB06BC;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB06D4;
	sub_82F88220(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
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
	// bne cr6,0x82fb06fc
	if (!ctx.cr6.eq) goto loc_82FB06FC;
	// bl 0x82f670f0
	ctx.lr = 0x82FB06FC;
	sub_82F670F0(ctx, base);
loc_82FB06FC:
	// lbz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0710
	if (ctx.cr6.lt) goto loc_82FB0710;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0710;
	sub_82F6BAA0(ctx, base);
loc_82FB0710:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bne 0x82fb0728
	if (!ctx.cr0.eq) goto loc_82FB0728;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0728;
	sub_82F670F0(ctx, base);
loc_82FB0728:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82faffa8
	ctx.lr = 0x82FB0734;
	sub_82FAFFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r28.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r5,r10,25368
	ctx.r5.s64 = ctx.r10.s64 + 25368;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0768;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0780;
	sub_82F88220(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
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
	// bne cr6,0x82fb07a8
	if (!ctx.cr6.eq) goto loc_82FB07A8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB07A8;
	sub_82F670F0(ctx, base);
loc_82FB07A8:
	// lbz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb07bc
	if (ctx.cr6.lt) goto loc_82FB07BC;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB07BC;
	sub_82F6BAA0(ctx, base);
loc_82FB07BC:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
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
	// bne cr6,0x82fb07e4
	if (!ctx.cr6.eq) goto loc_82FB07E4;
	// bl 0x82f670f0
	ctx.lr = 0x82FB07E4;
	sub_82F670F0(ctx, base);
loc_82FB07E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82fb0018
	ctx.lr = 0x82FB07F0;
	sub_82FB0018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r28.u8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r5,r10,-4744
	ctx.r5.s64 = ctx.r10.s64 + -4744;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0824;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB083C;
	sub_82F88220(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
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
	// bne cr6,0x82fb0864
	if (!ctx.cr6.eq) goto loc_82FB0864;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0864;
	sub_82F670F0(ctx, base);
loc_82FB0864:
	// lbz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0878
	if (ctx.cr6.lt) goto loc_82FB0878;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0878;
	sub_82F6BAA0(ctx, base);
loc_82FB0878:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
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
	// bne cr6,0x82fb08a0
	if (!ctx.cr6.eq) goto loc_82FB08A0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB08A0;
	sub_82F670F0(ctx, base);
loc_82FB08A0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r27,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r27.u8);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r5,r9,25348
	ctx.r5.s64 = ctx.r9.s64 + 25348;
	// lfd f0,3248(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3248);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// stfd f0,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f0.u64);
	// bl 0x82f04130
	ctx.lr = 0x82FB08CC;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB08E4;
	sub_82F88220(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
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
	// bne cr6,0x82fb090c
	if (!ctx.cr6.eq) goto loc_82FB090C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB090C;
	sub_82F670F0(ctx, base);
loc_82FB090C:
	// lbz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0920
	if (ctx.cr6.lt) goto loc_82FB0920;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0920;
	sub_82F6BAA0(ctx, base);
loc_82FB0920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,25336
	ctx.r5.s64 = ctx.r10.s64 + 25336;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0938;
	sub_82F04130(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// addi r5,r11,25324
	ctx.r5.s64 = ctx.r11.s64 + 25324;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0968;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0980;
	sub_82F88220(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
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
	// bne cr6,0x82fb09a8
	if (!ctx.cr6.eq) goto loc_82FB09A8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB09A8;
	sub_82F670F0(ctx, base);
loc_82FB09A8:
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb09bc
	if (ctx.cr6.lt) goto loc_82FB09BC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB09BC;
	sub_82F6BAA0(ctx, base);
loc_82FB09BC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bne 0x82fb09d4
	if (!ctx.cr0.eq) goto loc_82FB09D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82FB09D4;
	sub_82F670F0(ctx, base);
loc_82FB09D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,-3060
	ctx.r5.s64 = ctx.r10.s64 + -3060;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB09EC;
	sub_82F04130(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r28,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,25312
	ctx.r5.s64 = ctx.r11.s64 + 25312;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0A1C;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0A34;
	sub_82F88220(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// bne cr6,0x82fb0a5c
	if (!ctx.cr6.eq) goto loc_82FB0A5C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0A5C;
	sub_82F670F0(ctx, base);
loc_82FB0A5C:
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0a70
	if (ctx.cr6.lt) goto loc_82FB0A70;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0A70;
	sub_82F6BAA0(ctx, base);
loc_82FB0A70:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bne 0x82fb0a88
	if (!ctx.cr0.eq) goto loc_82FB0A88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0A88;
	sub_82F670F0(ctx, base);
loc_82FB0A88:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r9,25288
	ctx.r5.s64 = ctx.r9.s64 + 25288;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// lfd f0,25304(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 25304);
	// stfd f0,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f0.u64);
	// bl 0x82f04130
	ctx.lr = 0x82FB0AB0;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0AC8;
	sub_82F88220(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
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
	// bne cr6,0x82fb0af0
	if (!ctx.cr6.eq) goto loc_82FB0AF0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0AF0;
	sub_82F670F0(ctx, base);
loc_82FB0AF0:
	// lbz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0b04
	if (ctx.cr6.lt) goto loc_82FB0B04;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0B04;
	sub_82F6BAA0(ctx, base);
loc_82FB0B04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82fb0088
	ctx.lr = 0x82FB0B10;
	sub_82FB0088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r28.u8);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r5,r10,26664
	ctx.r5.s64 = ctx.r10.s64 + 26664;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0B44;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0B5C;
	sub_82F88220(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
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
	// bne cr6,0x82fb0b84
	if (!ctx.cr6.eq) goto loc_82FB0B84;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0B84;
	sub_82F670F0(ctx, base);
loc_82FB0B84:
	// lbz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0b98
	if (ctx.cr6.lt) goto loc_82FB0B98;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0B98;
	sub_82F6BAA0(ctx, base);
loc_82FB0B98:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
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
	// bne cr6,0x82fb0bc0
	if (!ctx.cr6.eq) goto loc_82FB0BC0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0BC0;
	sub_82F670F0(ctx, base);
loc_82FB0BC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r5,r10,25268
	ctx.r5.s64 = ctx.r10.s64 + 25268;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0BD8;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0BF0;
	sub_82F88220(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
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
	// bne cr6,0x82fb0c18
	if (!ctx.cr6.eq) goto loc_82FB0C18;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0C18;
	sub_82F670F0(ctx, base);
loc_82FB0C18:
	// li r29,9
	ctx.r29.s64 = 9;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// addi r5,r10,25248
	ctx.r5.s64 = ctx.r10.s64 + 25248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f04130
	ctx.lr = 0x82FB0C38;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0C50;
	sub_82F88220(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// bne cr6,0x82fb0c78
	if (!ctx.cr6.eq) goto loc_82FB0C78;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0C78;
	sub_82F670F0(ctx, base);
loc_82FB0C78:
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0c8c
	if (ctx.cr6.lt) goto loc_82FB0C8C;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0C8C;
	sub_82F6BAA0(ctx, base);
loc_82FB0C8C:
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r5,r10,25228
	ctx.r5.s64 = ctx.r10.s64 + 25228;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0CA8;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0CC0;
	sub_82F88220(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
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
	// bne cr6,0x82fb0ce8
	if (!ctx.cr6.eq) goto loc_82FB0CE8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0CE8;
	sub_82F670F0(ctx, base);
loc_82FB0CE8:
	// lbz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 384);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0cfc
	if (ctx.cr6.lt) goto loc_82FB0CFC;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0CFC;
	sub_82F6BAA0(ctx, base);
loc_82FB0CFC:
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,25212
	ctx.r5.s64 = ctx.r10.s64 + 25212;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82FB0D18;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f88220
	ctx.lr = 0x82FB0D30;
	sub_82F88220(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
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
	// bne cr6,0x82fb0d58
	if (!ctx.cr6.eq) goto loc_82FB0D58;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0D58;
	sub_82F670F0(ctx, base);
loc_82FB0D58:
	// lbz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 400);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0d6c
	if (ctx.cr6.lt) goto loc_82FB0D6C;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0D6C;
	sub_82F6BAA0(ctx, base);
loc_82FB0D6C:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb0d80
	if (ctx.cr6.lt) goto loc_82FB0D80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB0D80;
	sub_82F6BAA0(ctx, base);
loc_82FB0D80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB0D8C"))) PPC_WEAK_FUNC(sub_82FB0D8C);
PPC_FUNC_IMPL(__imp__sub_82FB0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0D90"))) PPC_WEAK_FUNC(sub_82FB0D90);
PPC_FUNC_IMPL(__imp__sub_82FB0D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB0D98;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// bl 0x82ef7600
	ctx.lr = 0x82FB0DB0;
	sub_82EF7600(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25952
	ctx.r4.s64 = ctx.r11.s64 + 25952;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0DC0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25944
	ctx.r4.s64 = ctx.r11.s64 + 25944;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0DD0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25936
	ctx.r4.s64 = ctx.r11.s64 + 25936;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0DE0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25928
	ctx.r4.s64 = ctx.r11.s64 + 25928;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0DF0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25920
	ctx.r4.s64 = ctx.r11.s64 + 25920;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E00;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E10;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25904
	ctx.r4.s64 = ctx.r11.s64 + 25904;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E20;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25896
	ctx.r4.s64 = ctx.r11.s64 + 25896;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E30;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25888
	ctx.r4.s64 = ctx.r11.s64 + 25888;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E40;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E50;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25872
	ctx.r4.s64 = ctx.r11.s64 + 25872;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E60;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25864
	ctx.r4.s64 = ctx.r11.s64 + 25864;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E70;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25860
	ctx.r4.s64 = ctx.r11.s64 + 25860;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0E80;
	sub_82EF8018(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7600
	ctx.lr = 0x82FB0E88;
	sub_82EF7600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82fb0088
	ctx.lr = 0x82FB0E94;
	sub_82FB0088(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7638
	ctx.lr = 0x82FB0EA8;
	sub_82EF7638(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
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
	// bne cr6,0x82fb0ed0
	if (!ctx.cr6.eq) goto loc_82FB0ED0;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0ED0;
	sub_82F670F0(ctx, base);
loc_82FB0ED0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82f12260
	ctx.lr = 0x82FB0EE8;
	sub_82F12260(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0EF8;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25856
	ctx.r4.s64 = ctx.r11.s64 + 25856;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0F08;
	sub_82EF8018(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef85e0
	ctx.lr = 0x82FB0F10;
	sub_82EF85E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82faffa8
	ctx.lr = 0x82FB0F1C;
	sub_82FAFFA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7638
	ctx.lr = 0x82FB0F30;
	sub_82EF7638(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
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
	// bne cr6,0x82fb0f58
	if (!ctx.cr6.eq) goto loc_82FB0F58;
	// bl 0x82f670f0
	ctx.lr = 0x82FB0F58;
	sub_82F670F0(ctx, base);
loc_82FB0F58:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82f12260
	ctx.lr = 0x82FB0F70;
	sub_82F12260(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0F80;
	sub_82EF8018(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lfs f0,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82f12548
	ctx.lr = 0x82FB0FCC;
	sub_82F12548(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25852
	ctx.r4.s64 = ctx.r11.s64 + 25852;
	// bl 0x82ef8018
	ctx.lr = 0x82FB0FF0;
	sub_82EF8018(ctx, base);
	// lwa r11,176(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 176));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// li r30,3
	ctx.r30.s64 = 3;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f6b390
	ctx.lr = 0x82FB1020;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82FB1034;
	sub_82EF8018(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
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
	// bne cr6,0x82fb105c
	if (!ctx.cr6.eq) goto loc_82FB105C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB105C;
	sub_82F670F0(ctx, base);
loc_82FB105C:
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb1070
	if (ctx.cr6.lt) goto loc_82FB1070;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1070;
	sub_82F6BAA0(ctx, base);
loc_82FB1070:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9824
	ctx.r4.s64 = ctx.r11.s64 + -9824;
	// bl 0x82ef8018
	ctx.lr = 0x82FB1080;
	sub_82EF8018(ctx, base);
	// lwa r11,180(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 180));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6b390
	ctx.lr = 0x82FB10AC;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82FB10C0;
	sub_82EF8018(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
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
	// bne cr6,0x82fb10e8
	if (!ctx.cr6.eq) goto loc_82FB10E8;
	// bl 0x82f670f0
	ctx.lr = 0x82FB10E8;
	sub_82F670F0(ctx, base);
loc_82FB10E8:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb10fc
	if (ctx.cr6.lt) goto loc_82FB10FC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB10FC;
	sub_82F6BAA0(ctx, base);
loc_82FB10FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25844
	ctx.r4.s64 = ctx.r11.s64 + 25844;
	// bl 0x82ef8018
	ctx.lr = 0x82FB110C;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25832
	ctx.r4.s64 = ctx.r11.s64 + 25832;
	// bl 0x82ef8018
	ctx.lr = 0x82FB111C;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25824
	ctx.r4.s64 = ctx.r11.s64 + 25824;
	// bl 0x82ef8018
	ctx.lr = 0x82FB112C;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25816
	ctx.r4.s64 = ctx.r11.s64 + 25816;
	// bl 0x82ef8018
	ctx.lr = 0x82FB113C;
	sub_82EF8018(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef85e0
	ctx.lr = 0x82FB1144;
	sub_82EF85E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fb0018
	ctx.lr = 0x82FB1150;
	sub_82FB0018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7638
	ctx.lr = 0x82FB1164;
	sub_82EF7638(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// bne cr6,0x82fb118c
	if (!ctx.cr6.eq) goto loc_82FB118C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB118C;
	sub_82F670F0(ctx, base);
loc_82FB118C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82f12260
	ctx.lr = 0x82FB11A4;
	sub_82F12260(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef8018
	ctx.lr = 0x82FB11B4;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25808
	ctx.r4.s64 = ctx.r11.s64 + 25808;
	// bl 0x82ef8018
	ctx.lr = 0x82FB11C4;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25792
	ctx.r4.s64 = ctx.r11.s64 + 25792;
	// bl 0x82ef8018
	ctx.lr = 0x82FB11D4;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25784
	ctx.r4.s64 = ctx.r11.s64 + 25784;
	// bl 0x82ef8018
	ctx.lr = 0x82FB11E4;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25776
	ctx.r4.s64 = ctx.r11.s64 + 25776;
	// bl 0x82ef8018
	ctx.lr = 0x82FB11F4;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25768
	ctx.r4.s64 = ctx.r11.s64 + 25768;
	// bl 0x82ef8018
	ctx.lr = 0x82FB1204;
	sub_82EF8018(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f040d8
	ctx.lr = 0x82FB1218;
	sub_82F040D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB1228:
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
	// bne 0x82fb1228
	if (!ctx.cr0.eq) goto loc_82FB1228;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb1254
	if (!ctx.cr0.eq) goto loc_82FB1254;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB1254;
	sub_82EF6F38(ctx, base);
loc_82FB1254:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB1260:
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
	// bne 0x82fb1260
	if (!ctx.cr0.eq) goto loc_82FB1260;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb128c
	if (!ctx.cr0.eq) goto loc_82FB128C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB128C;
	sub_82EF6F38(ctx, base);
loc_82FB128C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB1298:
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
	// bne 0x82fb1298
	if (!ctx.cr0.eq) goto loc_82FB1298;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb12c4
	if (!ctx.cr0.eq) goto loc_82FB12C4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB12C4;
	sub_82EF6F38(ctx, base);
loc_82FB12C4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB12D0:
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
	// bne 0x82fb12d0
	if (!ctx.cr0.eq) goto loc_82FB12D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb12fc
	if (!ctx.cr0.eq) goto loc_82FB12FC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB12FC;
	sub_82EF6F38(ctx, base);
loc_82FB12FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB1308:
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
	// bne 0x82fb1308
	if (!ctx.cr0.eq) goto loc_82FB1308;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb1334
	if (!ctx.cr0.eq) goto loc_82FB1334;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB1334;
	sub_82EF6F38(ctx, base);
loc_82FB1334:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB1340"))) PPC_WEAK_FUNC(sub_82FB1340);
PPC_FUNC_IMPL(__imp__sub_82FB1340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB1348;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// beq 0x82fb15d8
	if (ctx.cr0.eq) goto loc_82FB15D8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,25248
	ctx.r10.s64 = ctx.r11.s64 + 25248;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FB1384:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb13a8
	if (ctx.cr0.eq) goto loc_82FB13A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb1384
	if (ctx.cr6.eq) goto loc_82FB1384;
loc_82FB13A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb1454
	if (!ctx.cr0.eq) goto loc_82FB1454;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lfs f0,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x82f12548
	ctx.lr = 0x82FB13FC;
	sub_82F12548(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwa r11,192(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 192));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB1438;
	sub_82F6BBB0(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb144c
	if (ctx.cr6.lt) goto loc_82FB144C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82FB1448:
	// bl 0x82f6baa0
	ctx.lr = 0x82FB144C;
	sub_82F6BAA0(ctx, base);
loc_82FB144C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fb17cc
	goto loc_82FB17CC;
loc_82FB1454:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,25228
	ctx.r10.s64 = ctx.r10.s64 + 25228;
loc_82FB1460:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb1484
	if (ctx.cr0.eq) goto loc_82FB1484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb1460
	if (ctx.cr6.eq) goto loc_82FB1460;
loc_82FB1484:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb1528
	if (!ctx.cr0.eq) goto loc_82FB1528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// lfs f0,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// stfs f0,364(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x82f12548
	ctx.lr = 0x82FB14D8;
	sub_82F12548(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB14EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwa r11,324(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 324));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB1514;
	sub_82F6BBB0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb144c
	if (ctx.cr6.lt) goto loc_82FB144C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82fb1448
	goto loc_82FB1448;
loc_82FB1528:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,25212
	ctx.r10.s64 = ctx.r10.s64 + 25212;
loc_82FB1534:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb1558
	if (ctx.cr0.eq) goto loc_82FB1558;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb1534
	if (ctx.cr6.eq) goto loc_82FB1534;
loc_82FB1558:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb17b8
	if (!ctx.cr0.eq) goto loc_82FB17B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82fb0d90
	ctx.lr = 0x82FB156C;
	sub_82FB0D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB1598;
	sub_82F6BBB0(ctx, base);
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb15ac
	if (ctx.cr6.lt) goto loc_82FB15AC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB15AC;
	sub_82F6BAA0(ctx, base);
loc_82FB15AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82FB15B0:
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
	// bne cr6,0x82fb144c
	if (!ctx.cr6.eq) goto loc_82FB144C;
	// bl 0x82f670f0
	ctx.lr = 0x82FB15D4;
	sub_82F670F0(ctx, base);
	// b 0x82fb144c
	goto loc_82FB144C;
loc_82FB15D8:
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,25248
	ctx.r5.s64 = ctx.r11.s64 + 25248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa68d0
	ctx.lr = 0x82FB15EC;
	sub_82FA68D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1690
	if (ctx.cr0.eq) goto loc_82FB1690;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lfs f0,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x82f12548
	ctx.lr = 0x82FB1640;
	sub_82F12548(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwa r11,256(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 256));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB167C;
	sub_82F6BBB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb144c
	if (ctx.cr6.lt) goto loc_82FB144C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82fb1448
	goto loc_82FB1448;
loc_82FB1690:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,25228
	ctx.r5.s64 = ctx.r11.s64 + 25228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa68d0
	ctx.lr = 0x82FB16A4;
	sub_82FA68D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1748
	if (ctx.cr0.eq) goto loc_82FB1748;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// lfs f0,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// stfs f0,428(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// bl 0x82f12548
	ctx.lr = 0x82FB16F8;
	sub_82F12548(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB170C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwa r11,388(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 388));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB1734;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb144c
	if (ctx.cr6.lt) goto loc_82FB144C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82fb1448
	goto loc_82FB1448;
loc_82FB1748:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,25212
	ctx.r5.s64 = ctx.r11.s64 + 25212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa68d0
	ctx.lr = 0x82FB175C;
	sub_82FA68D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb17b8
	if (ctx.cr0.eq) goto loc_82FB17B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb0d90
	ctx.lr = 0x82FB1770;
	sub_82FB0D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB179C;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb17b0
	if (ctx.cr6.lt) goto loc_82FB17B0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB17B0;
	sub_82F6BAA0(ctx, base);
loc_82FB17B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82fb15b0
	goto loc_82FB15B0;
loc_82FB17B8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f87748
	ctx.lr = 0x82FB17CC;
	sub_82F87748(ctx, base);
loc_82FB17CC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB17D4"))) PPC_WEAK_FUNC(sub_82FB17D4);
PPC_FUNC_IMPL(__imp__sub_82FB17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB17D8"))) PPC_WEAK_FUNC(sub_82FB17D8);
PPC_FUNC_IMPL(__imp__sub_82FB17D8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB17F4;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82FB1810"))) PPC_WEAK_FUNC(sub_82FB1810);
PPC_FUNC_IMPL(__imp__sub_82FB1810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB1818;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fb1974
	if (!ctx.cr6.eq) goto loc_82FB1974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f12548
	ctx.lr = 0x82FB1848;
	sub_82F12548(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,26228
	ctx.r10.s64 = ctx.r11.s64 + 26228;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FB1860:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb1884
	if (ctx.cr0.eq) goto loc_82FB1884;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb1860
	if (ctx.cr6.eq) goto loc_82FB1860;
loc_82FB1884:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb18b4
	if (!ctx.cr0.eq) goto loc_82FB18B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FB1898;
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
	// stb r11,524(r30)
	PPC_STORE_U8(ctx.r30.u32 + 524, ctx.r11.u8);
	// b 0x82fb198c
	goto loc_82FB198C;
loc_82FB18B4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,26204
	ctx.r10.s64 = ctx.r10.s64 + 26204;
loc_82FB18C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb18e4
	if (ctx.cr0.eq) goto loc_82FB18E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb18c0
	if (ctx.cr6.eq) goto loc_82FB18C0;
loc_82FB18E4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb1914
	if (!ctx.cr0.eq) goto loc_82FB1914;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FB18F8;
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
	// stb r11,525(r30)
	PPC_STORE_U8(ctx.r30.u32 + 525, ctx.r11.u8);
	// b 0x82fb198c
	goto loc_82FB198C;
loc_82FB1914:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,26176
	ctx.r10.s64 = ctx.r10.s64 + 26176;
loc_82FB1920:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb1944
	if (ctx.cr0.eq) goto loc_82FB1944;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb1920
	if (ctx.cr6.eq) goto loc_82FB1920;
loc_82FB1944:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb1974
	if (!ctx.cr0.eq) goto loc_82FB1974;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FB1958;
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
	// stb r11,526(r30)
	PPC_STORE_U8(ctx.r30.u32 + 526, ctx.r11.u8);
	// b 0x82fb198c
	goto loc_82FB198C;
loc_82FB1974:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82FB198C;
	sub_82F88A68(ctx, base);
loc_82FB198C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB1994"))) PPC_WEAK_FUNC(sub_82FB1994);
PPC_FUNC_IMPL(__imp__sub_82FB1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1998"))) PPC_WEAK_FUNC(sub_82FB1998);
PPC_FUNC_IMPL(__imp__sub_82FB1998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB19A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82FB19B0;
	sub_82F12548(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB19C4;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82FB19CC;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB19E8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6adb0
	ctx.lr = 0x82FB19F0;
	sub_82F6ADB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82f363d8
	ctx.lr = 0x82FB1A00;
	sub_82F363D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB1A08"))) PPC_WEAK_FUNC(sub_82FB1A08);
PPC_FUNC_IMPL(__imp__sub_82FB1A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB1A10;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r11,-29096
	ctx.r4.s64 = ctx.r11.s64 + -29096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82FB1A28;
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25712
	ctx.r11.s64 = ctx.r11.s64 + 25712;
	// addi r10,r10,26256
	ctx.r10.s64 = ctx.r10.s64 + 26256;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f929e0
	ctx.lr = 0x82FB1A50;
	sub_82F929E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r11,26120
	ctx.r31.s64 = ctx.r11.s64 + 26120;
	// lwz r11,26120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb1ad0
	if (ctx.cr6.eq) goto loc_82FB1AD0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB1A70:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82FB1A8C;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82f04960
	ctx.lr = 0x82FB1AA4;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb1ab8
	if (ctx.cr6.lt) goto loc_82FB1AB8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1AB8;
	sub_82F6BAA0(ctx, base);
loc_82FB1AB8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fb1a70
	if (!ctx.cr6.eq) goto loc_82FB1A70;
loc_82FB1AD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB1ADC"))) PPC_WEAK_FUNC(sub_82FB1ADC);
PPC_FUNC_IMPL(__imp__sub_82FB1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1AE0"))) PPC_WEAK_FUNC(sub_82FB1AE0);
PPC_FUNC_IMPL(__imp__sub_82FB1AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB1AE8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1AFC;
	sub_82F6BAA0(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82fb1cb8
	if (ctx.cr6.lt) goto loc_82FB1CB8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb1cb8
	if (ctx.cr6.eq) goto loc_82FB1CB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB1B30;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82fb1c0c
	if (!ctx.cr6.eq) goto loc_82FB1C0C;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB1B54;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82FB1B68;
	sub_82F6B390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82f21198
	ctx.lr = 0x82FB1B8C;
	sub_82F21198(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fb1bb8
	if (!ctx.cr6.eq) goto loc_82FB1BB8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82FB1BB8;
	sub_82F670F0(ctx, base);
loc_82FB1BB8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1bf4
	if (ctx.cr0.eq) goto loc_82FB1BF4;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82fb1bf4
	if (!ctx.cr6.eq) goto loc_82FB1BF4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6adb0
	ctx.lr = 0x82FB1BD8;
	sub_82F6ADB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fb1bf4
	if (ctx.cr0.eq) goto loc_82FB1BF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1BF4:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb1c3c
	if (ctx.cr6.lt) goto loc_82FB1C3C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1C08;
	sub_82F6BAA0(ctx, base);
	// b 0x82fb1c3c
	goto loc_82FB1C3C;
loc_82FB1C0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB1C18;
	sub_82F6C2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6adb0
	ctx.lr = 0x82FB1C20;
	sub_82F6ADB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fb1c3c
	if (ctx.cr0.eq) goto loc_82FB1C3C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1C3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb1c70
	if (ctx.cr6.eq) goto loc_82FB1C70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1c98
	if (ctx.cr0.eq) goto loc_82FB1C98;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82FB1C68;
	sub_82F12548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82fb1c7c
	goto loc_82FB1C7C;
loc_82FB1C70:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82FB1C78;
	sub_82F12548(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FB1C7C:
	// bl 0x82f37e48
	ctx.lr = 0x82FB1C80;
	sub_82F37E48(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1C8C;
	sub_82F6BAA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82FB1C98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb1cb8
	if (ctx.cr6.eq) goto loc_82FB1CB8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1CB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB1CC0"))) PPC_WEAK_FUNC(sub_82FB1CC0);
PPC_FUNC_IMPL(__imp__sub_82FB1CC0) {
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
	// addi r4,r4,516
	ctx.r4.s64 = ctx.r4.s64 + 516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68a70
	ctx.lr = 0x82FB1CE4;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb1d04
	if (ctx.cr6.eq) goto loc_82FB1D04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1D04:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb1d28
	if (ctx.cr6.eq) goto loc_82FB1D28;
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
	ctx.lr = 0x82FB1D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1D28:
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

__attribute__((alias("__imp__sub_82FB1D44"))) PPC_WEAK_FUNC(sub_82FB1D44);
PPC_FUNC_IMPL(__imp__sub_82FB1D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1D48"))) PPC_WEAK_FUNC(sub_82FB1D48);
PPC_FUNC_IMPL(__imp__sub_82FB1D48) {
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
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1D6C;
	sub_82F6BAA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb1dcc
	if (ctx.cr6.eq) goto loc_82FB1DCC;
	// bl 0x82f12548
	ctx.lr = 0x82FB1D84;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB1D90;
	sub_82FB1CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb1dcc
	if (ctx.cr6.eq) goto loc_82FB1DCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f63440
	ctx.lr = 0x82FB1DA4;
	sub_82F63440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82f041a0
	ctx.lr = 0x82FB1DB4;
	sub_82F041A0(ctx, base);
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
	ctx.lr = 0x82FB1DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1DCC:
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

__attribute__((alias("__imp__sub_82FB1DE4"))) PPC_WEAK_FUNC(sub_82FB1DE4);
PPC_FUNC_IMPL(__imp__sub_82FB1DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1DE8"))) PPC_WEAK_FUNC(sub_82FB1DE8);
PPC_FUNC_IMPL(__imp__sub_82FB1DE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
	// bl 0x82f04200
	ctx.lr = 0x82FB1E10;
	sub_82F04200(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb1e98
	if (ctx.cr6.eq) goto loc_82FB1E98;
	// bl 0x82f12548
	ctx.lr = 0x82FB1E20;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB1E2C;
	sub_82FB1CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb1e98
	if (ctx.cr6.eq) goto loc_82FB1E98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82fb1e80
	if (!ctx.cr6.eq) goto loc_82FB1E80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82FB1E80;
	sub_82F04200(ctx, base);
loc_82FB1E80:
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
	ctx.lr = 0x82FB1E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1E98:
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

__attribute__((alias("__imp__sub_82FB1EB0"))) PPC_WEAK_FUNC(sub_82FB1EB0);
PPC_FUNC_IMPL(__imp__sub_82FB1EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB1EB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB1ECC;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb1f90
	if (ctx.cr6.eq) goto loc_82FB1F90;
	// bl 0x82f12548
	ctx.lr = 0x82FB1EE4;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB1EF0;
	sub_82FB1CC0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb1f90
	if (ctx.cr6.eq) goto loc_82FB1F90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82fb1f78
	if (!ctx.cr6.eq) goto loc_82FB1F78;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB1F2C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82FB1F34;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB1F50;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82FB1F58;
	sub_82F6B480(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1F78:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB1F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB1F98"))) PPC_WEAK_FUNC(sub_82FB1F98);
PPC_FUNC_IMPL(__imp__sub_82FB1F98) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
	// bl 0x82f04200
	ctx.lr = 0x82FB1FC0;
	sub_82F04200(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb2048
	if (ctx.cr6.eq) goto loc_82FB2048;
	// bl 0x82f12548
	ctx.lr = 0x82FB1FD0;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB1FDC;
	sub_82FB1CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb2048
	if (ctx.cr6.eq) goto loc_82FB2048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB1FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82fb2030
	if (!ctx.cr6.eq) goto loc_82FB2030;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB2018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82FB2030;
	sub_82F04200(ctx, base);
loc_82FB2030:
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
	ctx.lr = 0x82FB2048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB2048:
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

__attribute__((alias("__imp__sub_82FB2060"))) PPC_WEAK_FUNC(sub_82FB2060);
PPC_FUNC_IMPL(__imp__sub_82FB2060) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfd f1,3240(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3240);
	// bl 0x82f04200
	ctx.lr = 0x82FB2088;
	sub_82F04200(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb2110
	if (ctx.cr6.eq) goto loc_82FB2110;
	// bl 0x82f12548
	ctx.lr = 0x82FB2098;
	sub_82F12548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB20A4;
	sub_82FB1CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb2110
	if (ctx.cr6.eq) goto loc_82FB2110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB20C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82fb20f8
	if (!ctx.cr6.eq) goto loc_82FB20F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB20E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x82f04200
	ctx.lr = 0x82FB20F8;
	sub_82F04200(ctx, base);
loc_82FB20F8:
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
	ctx.lr = 0x82FB2110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB2110:
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

__attribute__((alias("__imp__sub_82FB2128"))) PPC_WEAK_FUNC(sub_82FB2128);
PPC_FUNC_IMPL(__imp__sub_82FB2128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB2130;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2144;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82fb2178
	if (ctx.cr6.lt) goto loc_82FB2178;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82FB2168;
	sub_82F6C2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82FB2170;
	sub_82F6B840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82fb217c
	goto loc_82FB217C;
loc_82FB2178:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82FB217C:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82f12548
	ctx.lr = 0x82FB2184;
	sub_82F12548(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB2194;
	sub_82FB1CC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fb21f8
	if (!ctx.cr6.eq) goto loc_82FB21F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f38cc0
	ctx.lr = 0x82FB21A8;
	sub_82F38CC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fb1cc0
	ctx.lr = 0x82FB21B4;
	sub_82FB1CC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fb21d4
	if (ctx.cr6.eq) goto loc_82FB21D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB21D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB21D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb21f8
	if (ctx.cr6.eq) goto loc_82FB21F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB21F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB21F8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb2234
	if (ctx.cr0.eq) goto loc_82FB2234;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb2268
	if (ctx.cr6.eq) goto loc_82FB2268;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB221C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb223c
	if (ctx.cr0.eq) goto loc_82FB223C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f37e48
	ctx.lr = 0x82FB2230;
	sub_82F37E48(ctx, base);
	// b 0x82fb223c
	goto loc_82FB223C;
loc_82FB2234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f36208
	ctx.lr = 0x82FB223C;
	sub_82F36208(ctx, base);
loc_82FB223C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb2268
	if (ctx.cr6.eq) goto loc_82FB2268;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82f6be50
	ctx.lr = 0x82FB2250;
	sub_82F6BE50(ctx, base);
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
	ctx.lr = 0x82FB2268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB2268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB2270"))) PPC_WEAK_FUNC(sub_82FB2270);
PPC_FUNC_IMPL(__imp__sub_82FB2270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB2278;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fb2410
	if (!ctx.cr6.eq) goto loc_82FB2410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f12548
	ctx.lr = 0x82FB22A4;
	sub_82F12548(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,26336
	ctx.r10.s64 = ctx.r11.s64 + 26336;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FB22B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb22dc
	if (ctx.cr0.eq) goto loc_82FB22DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb22b8
	if (ctx.cr6.eq) goto loc_82FB22B8;
loc_82FB22DC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb231c
	if (!ctx.cr0.eq) goto loc_82FB231C;
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8488
	ctx.r4.s64 = ctx.r11.s64 + 8488;
	// bl 0x82f6acb8
	ctx.lr = 0x82FB22F4;
	sub_82F6ACB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB2300;
	sub_82F6BBB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb2314
	if (ctx.cr6.lt) goto loc_82FB2314;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2314;
	sub_82F6BAA0(ctx, base);
loc_82FB2314:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fb2424
	goto loc_82FB2424;
loc_82FB231C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,26228
	ctx.r10.s64 = ctx.r10.s64 + 26228;
loc_82FB2328:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb234c
	if (ctx.cr0.eq) goto loc_82FB234C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb2328
	if (ctx.cr6.eq) goto loc_82FB2328;
loc_82FB234C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb2390
	if (!ctx.cr0.eq) goto loc_82FB2390;
	// lbz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 524);
loc_82FB2358:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82fb2380
	if (ctx.cr0.eq) goto loc_82FB2380;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2374;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// b 0x82fb2388
	goto loc_82FB2388;
loc_82FB2380:
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2384;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB2388:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82fb2314
	goto loc_82FB2314;
loc_82FB2390:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,26204
	ctx.r10.s64 = ctx.r10.s64 + 26204;
loc_82FB239C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82fb23c0
	if (ctx.cr0.eq) goto loc_82FB23C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb239c
	if (ctx.cr6.eq) goto loc_82FB239C;
loc_82FB23C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb23d0
	if (!ctx.cr0.eq) goto loc_82FB23D0;
	// lbz r11,525(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 525);
	// b 0x82fb2358
	goto loc_82FB2358;
loc_82FB23D0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,26176
	ctx.r10.s64 = ctx.r10.s64 + 26176;
loc_82FB23DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb2400
	if (ctx.cr0.eq) goto loc_82FB2400;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb23dc
	if (ctx.cr6.eq) goto loc_82FB23DC;
loc_82FB2400:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb2410
	if (!ctx.cr0.eq) goto loc_82FB2410;
	// lbz r11,526(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 526);
	// b 0x82fb2358
	goto loc_82FB2358;
loc_82FB2410:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f87748
	ctx.lr = 0x82FB2424;
	sub_82F87748(ctx, base);
loc_82FB2424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB242C"))) PPC_WEAK_FUNC(sub_82FB242C);
PPC_FUNC_IMPL(__imp__sub_82FB242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB2430"))) PPC_WEAK_FUNC(sub_82FB2430);
PPC_FUNC_IMPL(__imp__sub_82FB2430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB2438;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB247C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb25c8
	if (ctx.cr0.eq) goto loc_82FB25C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad80
	ctx.lr = 0x82FB248C;
	sub_82F6AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb2498
	if (ctx.cr0.eq) goto loc_82FB2498;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
loc_82FB2498:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fb25c8
	if (ctx.cr6.eq) goto loc_82FB25C8;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb24e0
	if (ctx.cr6.eq) goto loc_82FB24E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ac50
	ctx.lr = 0x82FB24B8;
	sub_82F6AC50(ctx, base);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09630
	ctx.lr = 0x82FB24C8;
	sub_82F09630(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb24f4
	if (ctx.cr6.lt) goto loc_82FB24F4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB24DC;
	sub_82F6BAA0(ctx, base);
	// b 0x82fb24f4
	goto loc_82FB24F4;
loc_82FB24E0:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18be8
	ctx.lr = 0x82FB24F4;
	sub_82F18BE8(ctx, base);
loc_82FB24F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fb252c
	if (ctx.cr6.eq) goto loc_82FB252C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6ac50
	ctx.lr = 0x82FB2508;
	sub_82F6AC50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09630
	ctx.lr = 0x82FB2514;
	sub_82F09630(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb253c
	if (ctx.cr6.lt) goto loc_82FB253C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2528;
	sub_82F6BAA0(ctx, base);
	// b 0x82fb253c
	goto loc_82FB253C;
loc_82FB252C:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18be8
	ctx.lr = 0x82FB253C;
	sub_82F18BE8(ctx, base);
loc_82FB253C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r10,17812
	ctx.r5.s64 = ctx.r10.s64 + 17812;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
	// bl 0x82f04130
	ctx.lr = 0x82FB2574;
	sub_82F04130(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f92580
	ctx.lr = 0x82FB258C;
	sub_82F92580(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// bne cr6,0x82fb25b4
	if (!ctx.cr6.eq) goto loc_82FB25B4;
	// bl 0x82f670f0
	ctx.lr = 0x82FB25B4;
	sub_82F670F0(ctx, base);
loc_82FB25B4:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82FB25B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82FB25C0;
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fb25b8
	if (!ctx.cr0.eq) goto loc_82FB25B8;
loc_82FB25C8:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb25dc
	if (ctx.cr6.lt) goto loc_82FB25DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB25DC;
	sub_82F6BAA0(ctx, base);
loc_82FB25DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB25E4"))) PPC_WEAK_FUNC(sub_82FB25E4);
PPC_FUNC_IMPL(__imp__sub_82FB25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB25E8"))) PPC_WEAK_FUNC(sub_82FB25E8);
PPC_FUNC_IMPL(__imp__sub_82FB25E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB25F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// beq cr6,0x82fb264c
	if (ctx.cr6.eq) goto loc_82FB264C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6ac50
	ctx.lr = 0x82FB261C;
	sub_82F6AC50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f167d8
	ctx.lr = 0x82FB262C;
	sub_82F167D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB2638;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb2680
	if (ctx.cr6.lt) goto loc_82FB2680;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82fb267c
	goto loc_82FB267C;
loc_82FB264C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f167d8
	ctx.lr = 0x82FB2660;
	sub_82F167D8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB266C;
	sub_82F6BBB0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb2680
	if (ctx.cr6.lt) goto loc_82FB2680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82FB267C:
	// bl 0x82f6baa0
	ctx.lr = 0x82FB2680;
	sub_82F6BAA0(ctx, base);
loc_82FB2680:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f167d8
	ctx.lr = 0x82FB26B0;
	sub_82F167D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82f6bbb0
	ctx.lr = 0x82FB26C8;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fb26dc
	if (ctx.cr6.lt) goto loc_82FB26DC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82FB26DC;
	sub_82F6BAA0(ctx, base);
loc_82FB26DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f12548
	ctx.lr = 0x82FB26E4;
	sub_82F12548(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,392
	ctx.r3.s64 = ctx.r3.s64 + 392;
	// bl 0x82f38870
	ctx.lr = 0x82FB26F0;
	sub_82F38870(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f12548
	ctx.lr = 0x82FB26FC;
	sub_82F12548(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f32ec0
	ctx.lr = 0x82FB2704;
	sub_82F32EC0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82f63440
	ctx.lr = 0x82FB2710;
	sub_82F63440(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82fb2724
	if (ctx.cr0.eq) goto loc_82FB2724;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82FB2724:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb2750
	if (ctx.cr6.eq) goto loc_82FB2750;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bgt 0x82fb2750
	if (ctx.cr0.gt) goto loc_82FB2750;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f605b0
	ctx.lr = 0x82FB2748;
	sub_82F605B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB2750;
	sub_82EF6F38(ctx, base);
loc_82FB2750:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb2774
	if (ctx.cr6.eq) goto loc_82FB2774;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB2774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB2774:
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82f36560
	ctx.lr = 0x82FB2790;
	sub_82F36560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f167d8
	ctx.lr = 0x82FB279C;
	sub_82F167D8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb27ac
	if (ctx.cr6.eq) goto loc_82FB27AC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB27AC;
	sub_82EF6F38(ctx, base);
loc_82FB27AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB27B4"))) PPC_WEAK_FUNC(sub_82FB27B4);
PPC_FUNC_IMPL(__imp__sub_82FB27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB27B8"))) PPC_WEAK_FUNC(sub_82FB27B8);
PPC_FUNC_IMPL(__imp__sub_82FB27B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r5,r10,26352
	ctx.r5.s64 = ctx.r10.s64 + 26352;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// b 0x82ef0a78
	sub_82EF0A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB27E0"))) PPC_WEAK_FUNC(sub_82FB27E0);
PPC_FUNC_IMPL(__imp__sub_82FB27E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82fb2904
	if (ctx.cr6.eq) goto loc_82FB2904;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x82fb2904
	if (!ctx.cr6.gt) goto loc_82FB2904;
	// cmpwi cr6,r4,360
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 360, ctx.xer);
	// blt cr6,0x82fb2818
	if (ctx.cr6.lt) goto loc_82FB2818;
	// li r11,360
	ctx.r11.s64 = 360;
	// divw r11,r4,r11
	ctx.r11.s32 = ctx.r4.s32 / ctx.r11.s32;
	// mulli r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 * 360;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82FB2818:
	// subfic r10,r5,255
	ctx.xer.ca = ctx.r5.u32 <= 255;
	ctx.r10.s64 = 255 - ctx.r5.s64;
	// li r11,60
	ctx.r11.s64 = 60;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// divw r9,r4,r11
	ctx.r9.s32 = ctx.r4.s32 / ctx.r11.s32;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r4,r11
	ctx.r11.s32 = ctx.r4.s32 / ctx.r11.s32;
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// li r31,510
	ctx.r31.s64 = 510;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi. r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// divwu r10,r10,r31
	ctx.r10.u32 = ctx.r10.u32 / ctx.r31.u32;
	// beq 0x82fb28a4
	if (ctx.cr0.eq) goto loc_82FB28A4;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// subfic r9,r9,15300
	ctx.xer.ca = ctx.r9.u32 <= 15300;
	ctx.r9.s64 = 15300 - ctx.r9.s64;
	// li r5,30600
	ctx.r5.s64 = 30600;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addi r9,r9,7650
	ctx.r9.s64 = ctx.r9.s64 + 7650;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r9,r5
	ctx.r9.u32 = ctx.r9.u32 / ctx.r5.u32;
	// beq cr6,0x82fb2894
	if (ctx.cr6.eq) goto loc_82FB2894;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fb288c
	if (ctx.cr6.eq) goto loc_82FB288C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82fb2904
	if (!ctx.cr6.eq) goto loc_82FB2904;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x82fb28f0
	goto loc_82FB28F0;
loc_82FB288C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82fb2900
	goto loc_82FB2900;
loc_82FB2894:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// b 0x82fb2904
	goto loc_82FB2904;
loc_82FB28A4:
	// subfic r9,r9,60
	ctx.xer.ca = ctx.r9.u32 <= 60;
	ctx.r9.s64 = 60 - ctx.r9.s64;
	// li r4,30600
	ctx.r4.s64 = 30600;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// subfic r9,r9,15300
	ctx.xer.ca = ctx.r9.u32 <= 15300;
	ctx.r9.s64 = 15300 - ctx.r9.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addi r9,r9,7650
	ctx.r9.s64 = ctx.r9.s64 + 7650;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r9,r4
	ctx.r9.u32 = ctx.r9.u32 / ctx.r4.u32;
	// beq cr6,0x82fb28f8
	if (ctx.cr6.eq) goto loc_82FB28F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fb28e8
	if (ctx.cr6.eq) goto loc_82FB28E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82fb2904
	if (!ctx.cr6.eq) goto loc_82FB2904;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x82fb2904
	goto loc_82FB2904;
loc_82FB28E8:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82FB28F0:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x82fb2904
	goto loc_82FB2904;
loc_82FB28F8:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82FB2900:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82FB2904:
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// stb r6,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB291C"))) PPC_WEAK_FUNC(sub_82FB291C);
PPC_FUNC_IMPL(__imp__sub_82FB291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB2920"))) PPC_WEAK_FUNC(sub_82FB2920);
PPC_FUNC_IMPL(__imp__sub_82FB2920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bne cr6,0x82fb293c
	if (!ctx.cr6.eq) goto loc_82FB293C;
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// b 0x82fb2a08
	goto loc_82FB2A08;
loc_82FB293C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82fb295c
	if (ctx.cr6.eq) goto loc_82FB295C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f13,2576(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2576);
	// fmul f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 * ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82FB295C:
	// fctiwz f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fnmsubs f13,f13,f2,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f0.f64)));
	// fnmsubs f0,f11,f2,f0
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f2.f64 - ctx.f0.f64)));
	// fmuls f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// blt cr6,0x82fb29fc
	if (ctx.cr6.lt) goto loc_82FB29FC;
	// beq cr6,0x82fb29f0
	if (ctx.cr6.eq) goto loc_82FB29F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82fb29e0
	if (ctx.cr6.lt) goto loc_82FB29E0;
	// beq cr6,0x82fb29d4
	if (ctx.cr6.eq) goto loc_82FB29D4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// blt cr6,0x82fb29cc
	if (ctx.cr6.lt) goto loc_82FB29CC;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// b 0x82fb2a08
	goto loc_82FB2A08;
loc_82FB29CC:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x82fb2a08
	goto loc_82FB2A08;
loc_82FB29D4:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82fb2a08
	goto loc_82FB2A08;
loc_82FB29E0:
	// fmr f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f3.f64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f3,f10
	ctx.f3.f64 = ctx.f10.f64;
	// b 0x82fb2a08
	goto loc_82FB2A08;
loc_82FB29F0:
	// fmr f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f3.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x82fb2a04
	goto loc_82FB2A04;
loc_82FB29FC:
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_82FB2A04:
	// fmr f3,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f12.f64;
loc_82FB2A08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2784);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctidz f12,f11
	ctx.f12.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// lbz r10,-1(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// lbz r9,-1(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB2A50"))) PPC_WEAK_FUNC(sub_82FB2A50);
PPC_FUNC_IMPL(__imp__sub_82FB2A50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82fb2a78
	if (!ctx.cr6.gt) goto loc_82FB2A78;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FB2A78:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82fb2a88
	if (!ctx.cr6.gt) goto loc_82FB2A88;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82FB2A88:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fb2a98
	if (!ctx.cr6.lt) goto loc_82FB2A98;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82FB2A98:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fb2aa4
	if (!ctx.cr6.lt) goto loc_82FB2AA4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FB2AA4:
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb2acc
	if (ctx.cr6.eq) goto loc_82FB2ACC;
	// mulli r6,r11,510
	ctx.r6.s64 = ctx.r11.s64 * 510;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r7,0
	// divwu r7,r6,r7
	ctx.r7.u32 = ctx.r6.u32 / ctx.r7.u32;
	// b 0x82fb2ad0
	goto loc_82FB2AD0;
loc_82FB2ACC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82FB2AD0:
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82fb2ae4
	if (!ctx.cr6.eq) goto loc_82FB2AE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fb2c04
	goto loc_82FB2C04;
loc_82FB2AE4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82fb2b9c
	if (ctx.cr6.lt) goto loc_82FB2B9C;
	// beq cr6,0x82fb2b50
	if (ctx.cr6.eq) goto loc_82FB2B50;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82fb2b2c
	if (!ctx.cr6.gt) goto loc_82FB2B2C;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r9,0
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
loc_82FB2B20:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// b 0x82fb2c00
	goto loc_82FB2C00;
loc_82FB2B2C:
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// b 0x82fb2bf4
	goto loc_82FB2BF4;
loc_82FB2B50:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// twllei r9,0
	// ble cr6,0x82fb2b7c
	if (!ctx.cr6.gt) goto loc_82FB2B7C;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// b 0x82fb2b20
	goto loc_82FB2B20;
loc_82FB2B7C:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// b 0x82fb2b20
	goto loc_82FB2B20;
loc_82FB2B9C:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82fb2bd4
	if (ctx.cr6.lt) goto loc_82FB2BD4;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r9,0
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// blr 
	return;
loc_82FB2BD4:
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r11,r11,300
	ctx.r11.s64 = ctx.r11.s64 + 300;
loc_82FB2BF4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r8,0
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
loc_82FB2C00:
	// twlgei r10,-1
loc_82FB2C04:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB2C0C"))) PPC_WEAK_FUNC(sub_82FB2C0C);
PPC_FUNC_IMPL(__imp__sub_82FB2C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB2C10"))) PPC_WEAK_FUNC(sub_82FB2C10);
PPC_FUNC_IMPL(__imp__sub_82FB2C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f8,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2960);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x82fb2c34
	if (!ctx.cr0.eq) goto loc_82FB2C34;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// b 0x82fb2c4c
	goto loc_82FB2C4C;
loc_82FB2C34:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB2C4C:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb2c60
	if (!ctx.cr0.eq) goto loc_82FB2C60;
	// fmr f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f8.f64;
	// b 0x82fb2c78
	goto loc_82FB2C78;
loc_82FB2C60:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB2C78:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb2c8c
	if (!ctx.cr0.eq) goto loc_82FB2C8C;
	// fmr f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f8.f64;
	// b 0x82fb2ca4
	goto loc_82FB2CA4;
loc_82FB2C8C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB2CA4:
	// fsubs f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f10,f9,f12,f13
	ctx.f10.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f7,f7,f11,f0
	ctx.f7.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsel f0,f6,f11,f10
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// beq cr6,0x82fb2d7c
	if (ctx.cr6.eq) goto loc_82FB2D7C;
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// beq cr6,0x82fb2d80
	if (ctx.cr6.eq) goto loc_82FB2D80;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82fb2cf4
	if (!ctx.cr6.eq) goto loc_82FB2CF4;
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// b 0x82fb2d20
	goto loc_82FB2D20;
loc_82FB2CF4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82fb2d0c
	if (!ctx.cr6.eq) goto loc_82FB2D0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82fb2d18
	goto loc_82FB2D18;
loc_82FB2D0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f0,2636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	ctx.f0.f64 = double(temp.f32);
loc_82FB2D18:
	// fdivs f13,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82FB2D20:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,26376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26376);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,3248(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3248);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82fb2d58
	if (!ctx.cr6.lt) goto loc_82FB2D58;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FB2D58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82FB2D7C:
	// stfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82FB2D80:
	// stfs f8,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB2D88"))) PPC_WEAK_FUNC(sub_82FB2D88);
PPC_FUNC_IMPL(__imp__sub_82FB2D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB2D90;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7508
	ctx.lr = 0x82FB2D98;
	sub_82CA7508(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lfd f13,3376(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// fadd f0,f1,f30
	ctx.f0.f64 = ctx.f1.f64 + ctx.f30.f64;
	// fadd f12,f0,f31
	ctx.f12.f64 = ctx.f0.f64 + ctx.f31.f64;
	// lfd f0,1184(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1184);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmul f29,f12,f0
	ctx.f29.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bne cr6,0x82fb2de0
	if (!ctx.cr6.eq) goto loc_82FB2DE0;
	// lfd f28,3248(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// b 0x82fb2dfc
	goto loc_82FB2DFC;
loc_82FB2DE0:
	// fsub f12,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f30.f64 - ctx.f1.f64;
	// lfd f0,3248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fsel f12,f12,f1,f30
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f1.f64 : ctx.f30.f64;
	// fsub f11,f31,f12
	ctx.f11.f64 = ctx.f31.f64 - ctx.f12.f64;
	// fsel f12,f11,f12,f31
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
	// fdiv f12,f12,f29
	ctx.f12.f64 = ctx.f12.f64 / ctx.f29.f64;
	// fsub f28,f0,f12
	ctx.f28.f64 = ctx.f0.f64 - ctx.f12.f64;
loc_82FB2DFC:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x82fb2e14
	if (!ctx.cr6.eq) goto loc_82FB2E14;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82fb2e14
	if (!ctx.cr6.eq) goto loc_82FB2E14;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82fb2e60
	goto loc_82FB2E60;
loc_82FB2E14:
	// fsub f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 - ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsub f12,f1,f31
	ctx.f12.f64 = ctx.f1.f64 - ctx.f31.f64;
	// fsub f11,f30,f31
	ctx.f11.f64 = ctx.f30.f64 - ctx.f31.f64;
	// lfd f0,3368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// fadd f10,f13,f1
	ctx.f10.f64 = ctx.f13.f64 + ctx.f1.f64;
	// fmul f13,f13,f13
	ctx.f13.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fsub f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 - ctx.f31.f64;
	// fmadd f13,f12,f11,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64;
	// fmul f0,f10,f0
	ctx.f0.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fsqrt f13,f13
	ctx.f13.f64 = sqrt(ctx.f13.f64);
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// bl 0x82260900
	ctx.lr = 0x82FB2E48;
	sub_82260900(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x82fb2e60
	if (ctx.cr6.gt) goto loc_82FB2E60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,26384(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26384);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
loc_82FB2E60:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// stfd f28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f28.u64);
	// stfd f29,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f29.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	ctx.lr = 0x82FB2E78;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB2E7C"))) PPC_WEAK_FUNC(sub_82FB2E7C);
PPC_FUNC_IMPL(__imp__sub_82FB2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB2E80"))) PPC_WEAK_FUNC(sub_82FB2E80);
PPC_FUNC_IMPL(__imp__sub_82FB2E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB2E88;
	sub_82CA2BEC(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82fb2ec8
	if (!ctx.cr6.eq) goto loc_82FB2EC8;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x82fb3014
	goto loc_82FB3014;
loc_82FB2EC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfd f0,26416(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26416);
	// ble cr6,0x82fb2f40
	if (!ctx.cr6.gt) goto loc_82FB2F40;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82fb2f40
	if (!ctx.cr6.lt) goto loc_82FB2F40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,26408(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26408);
	// fsub f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 - ctx.f0.f64;
	// bl 0x82293cd0
	ctx.lr = 0x82FB2EF0;
	sub_82293CD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f13,3560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3560);
	// fsqrt f10,f13
	ctx.f10.f64 = sqrt(ctx.f13.f64);
	// lfd f12,3248(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3248);
	// lfd f0,3776(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3776);
	// lfd f11,3368(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3368);
	// fdiv f10,f1,f10
	ctx.f10.f64 = ctx.f1.f64 / ctx.f10.f64;
	// fsub f12,f12,f30
	ctx.f12.f64 = ctx.f12.f64 - ctx.f30.f64;
	// fmul f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f12,f12,f31
	ctx.f12.f64 = ctx.f12.f64 * ctx.f31.f64;
	// fadd f11,f10,f11
	ctx.f11.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fadd f0,f10,f0
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f11,f11,f12
	ctx.f11.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmsub f0,f0,f31,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64 - ctx.f11.f64;
	// fmsub f13,f31,f13,f0
	ctx.f13.f64 = ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64;
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// b 0x82fb3014
	goto loc_82FB3014;
loc_82FB2F40:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82fb2fb8
	if (ctx.cr6.lt) goto loc_82FB2FB8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,26400(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26400);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82fb2fb8
	if (!ctx.cr6.lt) goto loc_82FB2FB8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f0,1368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1368);
	// fsub f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 - ctx.f0.f64;
	// bl 0x82293cd0
	ctx.lr = 0x82FB2F68;
	sub_82293CD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f0,3560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3560);
	// fsqrt f10,f0
	ctx.f10.f64 = sqrt(ctx.f0.f64);
	// lfd f13,3248(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3248);
	// lfd f12,3776(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3776);
	// lfd f11,3368(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3368);
	// fdiv f10,f1,f10
	ctx.f10.f64 = ctx.f1.f64 / ctx.f10.f64;
	// fsub f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 - ctx.f30.f64;
	// fmul f10,f10,f12
	ctx.f10.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fadd f11,f10,f11
	ctx.f11.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fadd f12,f10,f12
	ctx.f12.f64 = ctx.f10.f64 + ctx.f12.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmsub f12,f12,f31,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f31.f64 - ctx.f11.f64;
	// fmsub f0,f31,f0,f12
	ctx.f0.f64 = ctx.f31.f64 * ctx.f0.f64 - ctx.f12.f64;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// b 0x82fb3014
	goto loc_82FB3014;
loc_82FB2FB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,26392(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 26392);
	// fsub f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 - ctx.f0.f64;
	// bl 0x82293cd0
	ctx.lr = 0x82FB2FC8;
	sub_82293CD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f12,3560(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3560);
	// fsqrt f10,f12
	ctx.f10.f64 = sqrt(ctx.f12.f64);
	// lfd f0,3248(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3248);
	// lfd f13,3776(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3776);
	// lfd f11,3368(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3368);
	// fdiv f10,f1,f10
	ctx.f10.f64 = ctx.f1.f64 / ctx.f10.f64;
	// fsub f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 - ctx.f30.f64;
	// fmul f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fadd f11,f10,f11
	ctx.f11.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fadd f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 + ctx.f13.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmsub f13,f13,f31,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64 - ctx.f11.f64;
	// fmsub f12,f31,f12,f13
	ctx.f12.f64 = ctx.f31.f64 * ctx.f12.f64 - ctx.f13.f64;
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
loc_82FB3014:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// stfd f0,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
	// stfd f12,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f12.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB3030"))) PPC_WEAK_FUNC(sub_82FB3030);
PPC_FUNC_IMPL(__imp__sub_82FB3030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f0,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f12,-24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// std r7,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r7.u64);
	// lfd f10,-24(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f7,-24(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f12,f11,f1,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f11,f9,f1,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f13,f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f10,f7,f1,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB3154"))) PPC_WEAK_FUNC(sub_82FB3154);
PPC_FUNC_IMPL(__imp__sub_82FB3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3158"))) PPC_WEAK_FUNC(sub_82FB3158);
PPC_FUNC_IMPL(__imp__sub_82FB3158) {
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
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fb2e80
	ctx.lr = 0x82FB317C;
	sub_82FB2E80(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82FB31EC"))) PPC_WEAK_FUNC(sub_82FB31EC);
PPC_FUNC_IMPL(__imp__sub_82FB31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB31F0"))) PPC_WEAK_FUNC(sub_82FB31F0);
PPC_FUNC_IMPL(__imp__sub_82FB31F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB31F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f3,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,2960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2960);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x82fb322c
	if (!ctx.cr0.eq) goto loc_82FB322C;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// b 0x82fb3244
	goto loc_82FB3244;
loc_82FB322C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB3244:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb3258
	if (!ctx.cr0.eq) goto loc_82FB3258;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// b 0x82fb3270
	goto loc_82FB3270;
loc_82FB3258:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB3270:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb3294
	if (ctx.cr0.eq) goto loc_82FB3294;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82FB3294:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb2d88
	ctx.lr = 0x82FB32A4;
	sub_82FB2D88(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB32D0"))) PPC_WEAK_FUNC(sub_82FB32D0);
PPC_FUNC_IMPL(__imp__sub_82FB32D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,2960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2960);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f13,26424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26424);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x82fb3158
	ctx.lr = 0x82FB3338;
	sub_82FB3158(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB3348"))) PPC_WEAK_FUNC(sub_82FB3348);
PPC_FUNC_IMPL(__imp__sub_82FB3348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB3350;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb31f0
	ctx.lr = 0x82FB3370;
	sub_82FB31F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-30284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f13.u32);
	// fctiwz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f13,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f13.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f0.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB33B8"))) PPC_WEAK_FUNC(sub_82FB33B8);
PPC_FUNC_IMPL(__imp__sub_82FB33B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB33C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb33e0
	if (ctx.cr6.eq) goto loc_82FB33E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82FB33E0;
	sub_82EF1710(ctx, base);
loc_82FB33E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fb33f0
	if (ctx.cr6.eq) goto loc_82FB33F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82FB33F0;
	sub_82EF1710(ctx, base);
loc_82FB33F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3400
	if (ctx.cr6.eq) goto loc_82FB3400;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3400;
	sub_82EF1BF0(ctx, base);
loc_82FB3400:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3410
	if (ctx.cr6.eq) goto loc_82FB3410;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3410;
	sub_82EF1BF0(ctx, base);
loc_82FB3410:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB3420"))) PPC_WEAK_FUNC(sub_82FB3420);
PPC_FUNC_IMPL(__imp__sub_82FB3420) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3444
	if (ctx.cr6.eq) goto loc_82FB3444;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3444;
	sub_82EF1BF0(ctx, base);
loc_82FB3444:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3454
	if (ctx.cr6.eq) goto loc_82FB3454;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3454;
	sub_82EF1BF0(ctx, base);
loc_82FB3454:
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

__attribute__((alias("__imp__sub_82FB3468"))) PPC_WEAK_FUNC(sub_82FB3468);
PPC_FUNC_IMPL(__imp__sub_82FB3468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB3470;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82fb34b4
	if (!ctx.cr6.lt) goto loc_82FB34B4;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r28,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82FB3494:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb34a8
	if (ctx.cr6.eq) goto loc_82FB34A8;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB34A8;
	sub_82EF1BF0(ctx, base);
loc_82FB34A8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82fb3494
	if (!ctx.cr0.eq) goto loc_82FB3494;
loc_82FB34B4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fb3508
	if (!ctx.cr6.eq) goto loc_82FB3508;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb34e8
	if (ctx.cr0.eq) goto loc_82FB34E8;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fb34e0
	if (ctx.cr0.eq) goto loc_82FB34E0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fb3530
	if (!ctx.cr6.eq) goto loc_82FB3530;
loc_82FB34E0:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fb3530
	if (!ctx.cr0.eq) goto loc_82FB3530;
loc_82FB34E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3500
	if (ctx.cr6.eq) goto loc_82FB3500;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB3500;
	sub_82EF6F38(ctx, base);
loc_82FB3500:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82fb3530
	goto loc_82FB3530;
loc_82FB3508:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fb3520
	if (ctx.cr6.gt) goto loc_82FB3520;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fb3530
	if (ctx.cr6.gt) goto loc_82FB3530;
loc_82FB3520:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f14b28
	ctx.lr = 0x82FB3530;
	sub_82F14B28(ctx, base);
loc_82FB3530:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82fb355c
	if (!ctx.cr6.lt) goto loc_82FB355C;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r27,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_82FB3540:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb3550
	if (ctx.cr0.eq) goto loc_82FB3550;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
loc_82FB3550:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82fb3540
	if (!ctx.cr0.eq) goto loc_82FB3540;
loc_82FB355C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB3564"))) PPC_WEAK_FUNC(sub_82FB3564);
PPC_FUNC_IMPL(__imp__sub_82FB3564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3568"))) PPC_WEAK_FUNC(sub_82FB3568);
PPC_FUNC_IMPL(__imp__sub_82FB3568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82FB3570;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// andi. r23,r6,787
	ctx.r23.u64 = ctx.r6.u64 & 787;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb3770
	if (ctx.cr6.eq) goto loc_82FB3770;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82fb3638
	if (!ctx.cr6.gt) goto loc_82FB3638;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82FB35BC:
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fb3638
	if (!ctx.cr0.eq) goto loc_82FB3638;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82f2a870
	ctx.lr = 0x82FB35D4;
	sub_82F2A870(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwsync 
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb3620
	if (ctx.cr6.eq) goto loc_82FB3620;
loc_82FB35EC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82f2a6a0
	ctx.lr = 0x82FB35FC;
	sub_82F2A6A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb3618
	if (!ctx.cr0.eq) goto loc_82FB3618;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwsync 
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fb35ec
	if (!ctx.cr6.eq) goto loc_82FB35EC;
	// b 0x82fb3620
	goto loc_82FB3620;
loc_82FB3618:
	// lwz r22,8(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FB3620:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fb35bc
	if (ctx.cr6.lt) goto loc_82FB35BC;
loc_82FB3638:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb3770
	if (ctx.cr0.eq) goto loc_82FB3770;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB3648;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb3680
	if (ctx.cr0.eq) goto loc_82FB3680;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,24(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r4,20(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// bl 0x82f40910
	ctx.lr = 0x82FB3678;
	sub_82F40910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82fb3684
	goto loc_82FB3684;
loc_82FB3680:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82FB3684:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 | 1;
	// bl 0x82f01288
	ctx.lr = 0x82FB369C;
	sub_82F01288(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fb3750
	if (ctx.cr0.eq) goto loc_82FB3750;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lbz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb36e4
	if (ctx.cr0.eq) goto loc_82FB36E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fb36e4
	if (!ctx.cr6.lt) goto loc_82FB36E4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f070e8
	ctx.lr = 0x82FB36E0;
	sub_82F070E8(ctx, base);
	// b 0x82fb36f0
	goto loc_82FB36F0;
loc_82FB36E4:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8dc00
	ctx.lr = 0x82FB36F0;
	sub_82F8DC00(ctx, base);
loc_82FB36F0:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fb3748
	if (ctx.cr6.eq) goto loc_82FB3748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82fb33b8
	ctx.lr = 0x82FB3708;
	sub_82FB33B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb3718
	if (ctx.cr6.eq) goto loc_82FB3718;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3718;
	sub_82EF1BF0(ctx, base);
loc_82FB3718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3720;
	sub_82EF1BF0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fb3740
	if (ctx.cr6.eq) goto loc_82FB3740;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB3740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB3740:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fb3774
	goto loc_82FB3774;
loc_82FB3748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3750;
	sub_82EF1BF0(ctx, base);
loc_82FB3750:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fb3770
	if (ctx.cr6.eq) goto loc_82FB3770;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB3770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB3770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB3774:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82FB377C"))) PPC_WEAK_FUNC(sub_82FB377C);
PPC_FUNC_IMPL(__imp__sub_82FB377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3780"))) PPC_WEAK_FUNC(sub_82FB3780);
PPC_FUNC_IMPL(__imp__sub_82FB3780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB3788;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb3468
	ctx.lr = 0x82FB37A4;
	sub_82FB3468(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fb37c0
	if (ctx.cr6.eq) goto loc_82FB37C0;
	// bl 0x82ef1710
	ctx.lr = 0x82FB37C0;
	sub_82EF1710(ctx, base);
loc_82FB37C0:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb37d0
	if (ctx.cr6.eq) goto loc_82FB37D0;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB37D0;
	sub_82EF1BF0(ctx, base);
loc_82FB37D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB37E0"))) PPC_WEAK_FUNC(sub_82FB37E0);
PPC_FUNC_IMPL(__imp__sub_82FB37E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB37E8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb3870
	if (ctx.cr6.eq) goto loc_82FB3870;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb3870
	if (ctx.cr6.eq) goto loc_82FB3870;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb3824
	if (ctx.cr6.eq) goto loc_82FB3824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82FB3824;
	sub_82EF1710(ctx, base);
loc_82FB3824:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82fb3780
	ctx.lr = 0x82FB3834;
	sub_82FB3780(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb3844
	if (ctx.cr6.eq) goto loc_82FB3844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB3844;
	sub_82EF1BF0(ctx, base);
loc_82FB3844:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb3870
	if (ctx.cr0.eq) goto loc_82FB3870;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb3870
	if (ctx.cr6.eq) goto loc_82FB3870;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB3870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB3870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB3878"))) PPC_WEAK_FUNC(sub_82FB3878);
PPC_FUNC_IMPL(__imp__sub_82FB3878) {
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
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82FB3894;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,26428
	ctx.r11.s64 = ctx.r11.s64 + 26428;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB38A8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb38c8
	if (ctx.cr0.eq) goto loc_82FB38C8;
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
	// b 0x82fb38cc
	goto loc_82FB38CC;
loc_82FB38C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB38CC:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FB38E8"))) PPC_WEAK_FUNC(sub_82FB38E8);
PPC_FUNC_IMPL(__imp__sub_82FB38E8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fb3468
	ctx.lr = 0x82FB390C;
	sub_82FB3468(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb391c
	if (ctx.cr6.eq) goto loc_82FB391C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB391C;
	sub_82EF6F38(ctx, base);
loc_82FB391C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb392c
	if (ctx.cr0.eq) goto loc_82FB392C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB392C;
	sub_82EF6F38(ctx, base);
loc_82FB392C:
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

__attribute__((alias("__imp__sub_82FB3948"))) PPC_WEAK_FUNC(sub_82FB3948);
PPC_FUNC_IMPL(__imp__sub_82FB3948) {
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
	// addi r11,r11,26428
	ctx.r11.s64 = ctx.r11.s64 + 26428;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb397c
	if (ctx.cr6.eq) goto loc_82FB397C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fb38e8
	ctx.lr = 0x82FB397C;
	sub_82FB38E8(ctx, base);
loc_82FB397C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82FB3990;
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

__attribute__((alias("__imp__sub_82FB39A4"))) PPC_WEAK_FUNC(sub_82FB39A4);
PPC_FUNC_IMPL(__imp__sub_82FB39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB39A8"))) PPC_WEAK_FUNC(sub_82FB39A8);
PPC_FUNC_IMPL(__imp__sub_82FB39A8) {
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
	// bl 0x82fb3948
	ctx.lr = 0x82FB39C8;
	sub_82FB3948(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb39d8
	if (ctx.cr0.eq) goto loc_82FB39D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB39D8;
	sub_82EF6F38(ctx, base);
loc_82FB39D8:
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

__attribute__((alias("__imp__sub_82FB39F4"))) PPC_WEAK_FUNC(sub_82FB39F4);
PPC_FUNC_IMPL(__imp__sub_82FB39F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB39F8"))) PPC_WEAK_FUNC(sub_82FB39F8);
PPC_FUNC_IMPL(__imp__sub_82FB39F8) {
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
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ef7e30
	ctx.lr = 0x82FB3A1C;
	sub_82EF7E30(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ef7e30
	ctx.lr = 0x82FB3A2C;
	sub_82EF7E30(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
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

__attribute__((alias("__imp__sub_82FB3A54"))) PPC_WEAK_FUNC(sub_82FB3A54);
PPC_FUNC_IMPL(__imp__sub_82FB3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3A58"))) PPC_WEAK_FUNC(sub_82FB3A58);
PPC_FUNC_IMPL(__imp__sub_82FB3A58) {
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
	// bl 0x82ef7e30
	ctx.lr = 0x82FB3A78;
	sub_82EF7E30(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// bl 0x82ef7e30
	ctx.lr = 0x82FB3A84;
	sub_82EF7E30(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FB3AB0"))) PPC_WEAK_FUNC(sub_82FB3AB0);
PPC_FUNC_IMPL(__imp__sub_82FB3AB0) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82FB3AD4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb3ad4
	if (!ctx.cr0.eq) goto loc_82FB3AD4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb3b00
	if (!ctx.cr0.eq) goto loc_82FB3B00;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB3B00;
	sub_82EF6F38(ctx, base);
loc_82FB3B00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82FB3B08:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb3b08
	if (!ctx.cr0.eq) goto loc_82FB3B08;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb3b34
	if (!ctx.cr0.eq) goto loc_82FB3B34;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB3B34;
	sub_82EF6F38(ctx, base);
loc_82FB3B34:
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

__attribute__((alias("__imp__sub_82FB3B4C"))) PPC_WEAK_FUNC(sub_82FB3B4C);
PPC_FUNC_IMPL(__imp__sub_82FB3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3B50"))) PPC_WEAK_FUNC(sub_82FB3B50);
PPC_FUNC_IMPL(__imp__sub_82FB3B50) {
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
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3B84;
	sub_82EF7468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb40b8
	ctx.lr = 0x82FB3B94;
	sub_82FB40B8(ctx, base);
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

__attribute__((alias("__imp__sub_82FB3BAC"))) PPC_WEAK_FUNC(sub_82FB3BAC);
PPC_FUNC_IMPL(__imp__sub_82FB3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3BB0"))) PPC_WEAK_FUNC(sub_82FB3BB0);
PPC_FUNC_IMPL(__imp__sub_82FB3BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82FB3BD4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb3bd4
	if (!ctx.cr0.eq) goto loc_82FB3BD4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82FB3BFC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb3bfc
	if (!ctx.cr0.eq) goto loc_82FB3BFC;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB3C30"))) PPC_WEAK_FUNC(sub_82FB3C30);
PPC_FUNC_IMPL(__imp__sub_82FB3C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB3C38;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mulli r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 * 20;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82fb3d08
	if (ctx.cr6.eq) goto loc_82FB3D08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3C84;
	sub_82EF7468(ctx, base);
	// and r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 & ctx.r30.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fb3d08
	if (!ctx.cr6.eq) goto loc_82FB3D08;
loc_82FB3C90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3CB4;
	sub_82EF7468(ctx, base);
	// and r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 & ctx.r25.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fb3ce0
	if (!ctx.cr6.eq) goto loc_82FB3CE0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef7350
	ctx.lr = 0x82FB3CD8;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fb3d00
	if (ctx.cr0.eq) goto loc_82FB3D00;
loc_82FB3CE0:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82fb3d08
	if (ctx.cr6.eq) goto loc_82FB3D08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82fb3c90
	goto loc_82FB3C90;
loc_82FB3D00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82fb3d0c
	goto loc_82FB3D0C;
loc_82FB3D08:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FB3D0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB3D14"))) PPC_WEAK_FUNC(sub_82FB3D14);
PPC_FUNC_IMPL(__imp__sub_82FB3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3D18"))) PPC_WEAK_FUNC(sub_82FB3D18);
PPC_FUNC_IMPL(__imp__sub_82FB3D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB3D20;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mulli r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 * 20;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82fb3e10
	if (ctx.cr6.eq) goto loc_82FB3E10;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3D6C;
	sub_82EF7468(ctx, base);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fb3e10
	if (!ctx.cr6.eq) goto loc_82FB3E10;
loc_82FB3D78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3D9C;
	sub_82EF7468(ctx, base);
	// and r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 & ctx.r25.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fb3de8
	if (!ctx.cr6.eq) goto loc_82FB3DE8;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82FB3DBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb3de0
	if (ctx.cr0.eq) goto loc_82FB3DE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb3dbc
	if (ctx.cr6.eq) goto loc_82FB3DBC;
loc_82FB3DE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb3e08
	if (ctx.cr0.eq) goto loc_82FB3E08;
loc_82FB3DE8:
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82fb3e10
	if (ctx.cr6.eq) goto loc_82FB3E10;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r27,20
	ctx.r10.s64 = ctx.r27.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// b 0x82fb3d78
	goto loc_82FB3D78;
loc_82FB3E08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82fb3e14
	goto loc_82FB3E14;
loc_82FB3E10:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FB3E14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB3E1C"))) PPC_WEAK_FUNC(sub_82FB3E1C);
PPC_FUNC_IMPL(__imp__sub_82FB3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3E20"))) PPC_WEAK_FUNC(sub_82FB3E20);
PPC_FUNC_IMPL(__imp__sub_82FB3E20) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb3e50
	if (!ctx.cr6.eq) goto loc_82FB3E50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fb3e88
	goto loc_82FB3E88;
loc_82FB3E50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB3E6C;
	sub_82EF7468(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82fb3c30
	ctx.lr = 0x82FB3E88;
	sub_82FB3C30(ctx, base);
loc_82FB3E88:
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

__attribute__((alias("__imp__sub_82FB3EA0"))) PPC_WEAK_FUNC(sub_82FB3EA0);
PPC_FUNC_IMPL(__imp__sub_82FB3EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB3EA8;
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
	// beq cr6,0x82fb3f0c
	if (ctx.cr6.eq) goto loc_82FB3F0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82FB3EC8:
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
	// beq cr6,0x82fb3ef0
	if (ctx.cr6.eq) goto loc_82FB3EF0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82fb3ab0
	ctx.lr = 0x82FB3EE8;
	sub_82FB3AB0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FB3EF0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82fb3ec8
	if (!ctx.cr0.eq) goto loc_82FB3EC8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82FB3F04;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82FB3F0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB3F14"))) PPC_WEAK_FUNC(sub_82FB3F14);
PPC_FUNC_IMPL(__imp__sub_82FB3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3F18"))) PPC_WEAK_FUNC(sub_82FB3F18);
PPC_FUNC_IMPL(__imp__sub_82FB3F18) {
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
	// bl 0x82fb3e20
	ctx.lr = 0x82FB3F30;
	sub_82FB3E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fb3f4c
	if (ctx.cr0.lt) goto loc_82FB3F4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82fb3f50
	goto loc_82FB3F50;
loc_82FB3F4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB3F50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82fb3f60
	if (!ctx.cr6.eq) goto loc_82FB3F60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB3F60:
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

__attribute__((alias("__imp__sub_82FB3F74"))) PPC_WEAK_FUNC(sub_82FB3F74);
PPC_FUNC_IMPL(__imp__sub_82FB3F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB3F78"))) PPC_WEAK_FUNC(sub_82FB3F78);
PPC_FUNC_IMPL(__imp__sub_82FB3F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB3F80;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fb3f94
	if (!ctx.cr6.eq) goto loc_82FB3F94;
	// b 0x82fb40ac
	goto loc_82FB40AC;
loc_82FB3F94:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82fb3fa4
	if (!ctx.cr6.lt) goto loc_82FB3FA4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82fb3fec
	goto loc_82FB3FEC;
loc_82FB3FA4:
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
	ctx.lr = 0x82FB3FC0;
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
loc_82FB3FEC:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB4000;
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
	// beq cr6,0x82fb403c
	if (ctx.cr6.eq) goto loc_82FB403C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82FB4024:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82fb4024
	if (!ctx.cr0.eq) goto loc_82FB4024;
loc_82FB403C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb409c
	if (ctx.cr6.eq) goto loc_82FB409C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82FB4054:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82fb4088
	if (ctx.cr6.eq) goto loc_82FB4088;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fb3b50
	ctx.lr = 0x82FB407C;
	sub_82FB3B50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb3ab0
	ctx.lr = 0x82FB4084;
	sub_82FB3AB0(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82FB4088:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82fb4054
	if (!ctx.cr0.eq) goto loc_82FB4054;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82FB409C;
	sub_82EF6F38(ctx, base);
loc_82FB409C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82FB40AC:
	// bl 0x82fb3ea0
	ctx.lr = 0x82FB40B0;
	sub_82FB3EA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB40B8"))) PPC_WEAK_FUNC(sub_82FB40B8);
PPC_FUNC_IMPL(__imp__sub_82FB40B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FB40C0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb40e4
	if (!ctx.cr6.eq) goto loc_82FB40E4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb410c
	goto loc_82FB410C;
loc_82FB40E4:
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
	// ble cr6,0x82fb4114
	if (!ctx.cr6.gt) goto loc_82FB4114;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB410C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb3f78
	ctx.lr = 0x82FB4114;
	sub_82FB3F78(ctx, base);
loc_82FB4114:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 & ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 * 20;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82fb41bc
	if (!ctx.cr6.eq) goto loc_82FB41BC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FB4164:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4164
	if (!ctx.cr0.eq) goto loc_82FB4164;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FB418C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb418c
	if (!ctx.cr0.eq) goto loc_82FB418C;
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82fb42b0
	goto loc_82FB42B0;
loc_82FB41BC:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82FB41C4:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// and r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 & ctx.r29.u64;
	// mulli r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x82fb41c4
	if (!ctx.cr6.eq) goto loc_82FB41C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r26,20
	ctx.r9.s64 = ctx.r26.s64 * 20;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef7468
	ctx.lr = 0x82FB4208;
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fb423c
	if (!ctx.cr6.eq) goto loc_82FB423C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fb4228
	if (ctx.cr6.eq) goto loc_82FB4228;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fb3bb0
	ctx.lr = 0x82FB4228;
	sub_82FB3BB0(ctx, base);
loc_82FB4228:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb3a58
	ctx.lr = 0x82FB4234;
	sub_82FB3A58(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82fb42b0
	goto loc_82FB42B0;
loc_82FB423C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB425C;
	sub_82EF7468(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & ctx.r29.u64;
	// b 0x82fb426c
	goto loc_82FB426C;
loc_82FB4268:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FB426C:
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82fb4268
	if (!ctx.cr6.eq) goto loc_82FB4268;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fb4298
	if (ctx.cr6.eq) goto loc_82FB4298;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fb3bb0
	ctx.lr = 0x82FB4298;
	sub_82FB3BB0(ctx, base);
loc_82FB4298:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb3a58
	ctx.lr = 0x82FB42A8;
	sub_82FB3A58(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB42B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FB42B8"))) PPC_WEAK_FUNC(sub_82FB42B8);
PPC_FUNC_IMPL(__imp__sub_82FB42B8) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb436c
	if (ctx.cr6.eq) goto loc_82FB436C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82FB42EC;
	sub_82EF7638(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82fb3f18
	ctx.lr = 0x82FB4300;
	sub_82FB3F18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB4314:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4314
	if (!ctx.cr0.eq) goto loc_82FB4314;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb4340
	if (!ctx.cr0.eq) goto loc_82FB4340;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4340;
	sub_82EF6F38(ctx, base);
loc_82FB4340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb436c
	if (ctx.cr6.eq) goto loc_82FB436C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7e30
	ctx.lr = 0x82FB4354;
	sub_82EF7E30(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82fb4370
	goto loc_82FB4370;
loc_82FB436C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB4370:
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

__attribute__((alias("__imp__sub_82FB4388"))) PPC_WEAK_FUNC(sub_82FB4388);
PPC_FUNC_IMPL(__imp__sub_82FB4388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FB4390;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb43b4
	if (!ctx.cr6.eq) goto loc_82FB43B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb43dc
	goto loc_82FB43DC;
loc_82FB43B4:
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
	// ble cr6,0x82fb43e4
	if (!ctx.cr6.gt) goto loc_82FB43E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB43DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb3f78
	ctx.lr = 0x82FB43E4;
	sub_82FB3F78(ctx, base);
loc_82FB43E4:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 & ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 * 20;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82fb44e4
	if (!ctx.cr6.eq) goto loc_82FB44E4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82FB442C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb442c
	if (!ctx.cr0.eq) goto loc_82FB442C;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82FB4458:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4458
	if (!ctx.cr0.eq) goto loc_82FB4458;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
loc_82FB4494:
	// mfmsr r30
	ctx.r30.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r3,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r3.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4494
	if (!ctx.cr0.eq) goto loc_82FB4494;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82FB44B4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb44b4
	if (!ctx.cr0.eq) goto loc_82FB44B4;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb3ab0
	ctx.lr = 0x82FB44E0;
	sub_82FB3AB0(ctx, base);
	// b 0x82fb45d8
	goto loc_82FB45D8;
loc_82FB44E4:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82FB44EC:
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// and r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 & ctx.r29.u64;
	// mulli r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x82fb44ec
	if (!ctx.cr6.eq) goto loc_82FB44EC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r26,20
	ctx.r9.s64 = ctx.r26.s64 * 20;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// clrlwi r4,r8,1
	ctx.r4.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef7468
	ctx.lr = 0x82FB4530;
	sub_82EF7468(ctx, base);
	// and r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 & ctx.r29.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fb4564
	if (!ctx.cr6.eq) goto loc_82FB4564;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fb4550
	if (ctx.cr6.eq) goto loc_82FB4550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fb3bb0
	ctx.lr = 0x82FB4550;
	sub_82FB3BB0(ctx, base);
loc_82FB4550:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb39f8
	ctx.lr = 0x82FB455C;
	sub_82FB39F8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82fb45d8
	goto loc_82FB45D8;
loc_82FB4564:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB4584;
	sub_82EF7468(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// and r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 & ctx.r29.u64;
	// b 0x82fb4594
	goto loc_82FB4594;
loc_82FB4590:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FB4594:
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82fb4590
	if (!ctx.cr6.eq) goto loc_82FB4590;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fb45c0
	if (ctx.cr6.eq) goto loc_82FB45C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fb3bb0
	ctx.lr = 0x82FB45C0;
	sub_82FB3BB0(ctx, base);
loc_82FB45C0:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb39f8
	ctx.lr = 0x82FB45D0;
	sub_82FB39F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB45D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FB45E0"))) PPC_WEAK_FUNC(sub_82FB45E0);
PPC_FUNC_IMPL(__imp__sub_82FB45E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB45E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7468
	ctx.lr = 0x82FB4610;
	sub_82EF7468(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb4658
	if (ctx.cr6.eq) goto loc_82FB4658;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x82fb3d18
	ctx.lr = 0x82FB4634;
	sub_82FB3D18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fb4658
	if (ctx.cr0.lt) goto loc_82FB4658;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82fb39f8
	ctx.lr = 0x82FB4654;
	sub_82FB39F8(ctx, base);
	// b 0x82fb4668
	goto loc_82FB4668;
loc_82FB4658:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb4388
	ctx.lr = 0x82FB4668;
	sub_82FB4388(ctx, base);
loc_82FB4668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB4670"))) PPC_WEAK_FUNC(sub_82FB4670);
PPC_FUNC_IMPL(__imp__sub_82FB4670) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82FB468C;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r11,26436
	ctx.r11.s64 = ctx.r11.s64 + 26436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB46A0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb46b8
	if (ctx.cr0.eq) goto loc_82FB46B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82fb46bc
	goto loc_82FB46BC;
loc_82FB46B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB46BC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FB46D8"))) PPC_WEAK_FUNC(sub_82FB46D8);
PPC_FUNC_IMPL(__imp__sub_82FB46D8) {
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
	// addi r11,r11,26436
	ctx.r11.s64 = ctx.r11.s64 + 26436;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb4718
	if (ctx.cr6.eq) goto loc_82FB4718;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb3ea0
	ctx.lr = 0x82FB4710;
	sub_82FB3EA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4718;
	sub_82EF6F38(ctx, base);
loc_82FB4718:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82FB472C;
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

__attribute__((alias("__imp__sub_82FB4744"))) PPC_WEAK_FUNC(sub_82FB4744);
PPC_FUNC_IMPL(__imp__sub_82FB4744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB4748"))) PPC_WEAK_FUNC(sub_82FB4748);
PPC_FUNC_IMPL(__imp__sub_82FB4748) {
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
	// bl 0x82fb46d8
	ctx.lr = 0x82FB4768;
	sub_82FB46D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb4778
	if (ctx.cr0.eq) goto loc_82FB4778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4778;
	sub_82EF6F38(ctx, base);
loc_82FB4778:
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

__attribute__((alias("__imp__sub_82FB4794"))) PPC_WEAK_FUNC(sub_82FB4794);
PPC_FUNC_IMPL(__imp__sub_82FB4794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB4798"))) PPC_WEAK_FUNC(sub_82FB4798);
PPC_FUNC_IMPL(__imp__sub_82FB4798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB47A0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb482c
	if (ctx.cr6.eq) goto loc_82FB482C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb482c
	if (ctx.cr6.eq) goto loc_82FB482C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82FB47D4;
	sub_82EF7638(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82fb3f18
	ctx.lr = 0x82FB47E8;
	sub_82FB3F18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb483c
	if (ctx.cr0.eq) goto loc_82FB483C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB4800:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4800
	if (!ctx.cr0.eq) goto loc_82FB4800;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb482c
	if (!ctx.cr0.eq) goto loc_82FB482C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB482C;
	sub_82EF6F38(ctx, base);
loc_82FB482C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB4830:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82FB483C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7638
	ctx.lr = 0x82FB4848;
	sub_82EF7638(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82FB4858:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82fb4858
	if (!ctx.cr0.eq) goto loc_82FB4858;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB488C:
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
	// bne 0x82fb488c
	if (!ctx.cr0.eq) goto loc_82FB488C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb48b8
	if (!ctx.cr0.eq) goto loc_82FB48B8;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB48B8;
	sub_82EF6F38(ctx, base);
loc_82FB48B8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82fb45e0
	ctx.lr = 0x82FB48D4;
	sub_82FB45E0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB48E0:
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
	// bne 0x82fb48e0
	if (!ctx.cr0.eq) goto loc_82FB48E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb490c
	if (!ctx.cr0.eq) goto loc_82FB490C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB490C;
	sub_82EF6F38(ctx, base);
loc_82FB490C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82FB4918:
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
	// bne 0x82fb4918
	if (!ctx.cr0.eq) goto loc_82FB4918;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb4944
	if (!ctx.cr0.eq) goto loc_82FB4944;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4944;
	sub_82EF6F38(ctx, base);
loc_82FB4944:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fb4830
	goto loc_82FB4830;
}

__attribute__((alias("__imp__sub_82FB494C"))) PPC_WEAK_FUNC(sub_82FB494C);
PPC_FUNC_IMPL(__imp__sub_82FB494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB4950"))) PPC_WEAK_FUNC(sub_82FB4950);
PPC_FUNC_IMPL(__imp__sub_82FB4950) {
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
	// beq cr6,0x82fb4988
	if (ctx.cr6.eq) goto loc_82FB4988;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB4988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB4988:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb49a8
	if (ctx.cr6.eq) goto loc_82FB49A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB49A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB49A8:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82FB49C4"))) PPC_WEAK_FUNC(sub_82FB49C4);
PPC_FUNC_IMPL(__imp__sub_82FB49C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB49C8"))) PPC_WEAK_FUNC(sub_82FB49C8);
PPC_FUNC_IMPL(__imp__sub_82FB49C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB49D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB4A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb4af0
	if (ctx.cr0.eq) goto loc_82FB4AF0;
	// lwa r11,4(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,26440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26440);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r30,268
	ctx.r31.s64 = ctx.r30.s64 + 268;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82f44678
	ctx.lr = 0x82FB4A40;
	sub_82F44678(ctx, base);
	// addi r26,r30,156
	ctx.r26.s64 = ctx.r30.s64 + 156;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fc7a48
	ctx.lr = 0x82FB4A4C;
	sub_82FC7A48(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,26444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26444);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,4(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fc8bf8
	ctx.lr = 0x82FB4A7C;
	sub_82FC8BF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fc86a8
	ctx.lr = 0x82FB4A84;
	sub_82FC86A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb4af0
	if (ctx.cr0.eq) goto loc_82FB4AF0;
	// lwz r10,248(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r30,r8,1
	ctx.xer.ca = ctx.r8.u32 > 4294967294;
	ctx.r30.s64 = ctx.r8.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x82fb4af0
	if (ctx.cr0.eq) goto loc_82FB4AF0;
	// addi r29,r25,16
	ctx.r29.s64 = ctx.r25.s64 + 16;
loc_82FB4ABC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r31,r27
	ctx.r9.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fc7aa0
	ctx.lr = 0x82FB4AE4;
	sub_82FC7AA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82fb4abc
	if (ctx.cr6.lt) goto loc_82FB4ABC;
loc_82FB4AF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB4AF8"))) PPC_WEAK_FUNC(sub_82FB4AF8);
PPC_FUNC_IMPL(__imp__sub_82FB4AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fb4b34
	if (ctx.cr6.eq) goto loc_82FB4B34;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_82FB4B34:
	// lwa r11,-16(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -16));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-11080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11080);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB4B58"))) PPC_WEAK_FUNC(sub_82FB4B58);
PPC_FUNC_IMPL(__imp__sub_82FB4B58) {
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
	// beq 0x82fb4ba0
	if (ctx.cr0.eq) goto loc_82FB4BA0;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb4b90
	if (ctx.cr0.eq) goto loc_82FB4B90;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fb4c04
	if (ctx.cr6.lt) goto loc_82FB4C04;
loc_82FB4B90:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb4ba0
	if (ctx.cr0.eq) goto loc_82FB4BA0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb4c04
	if (ctx.cr6.eq) goto loc_82FB4C04;
loc_82FB4BA0:
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
	// bne cr6,0x82fb4bd0
	if (!ctx.cr6.eq) goto loc_82FB4BD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4bc4
	if (ctx.cr6.eq) goto loc_82FB4BC4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4BC4;
	sub_82EF6F38(ctx, base);
loc_82FB4BC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fb4c04
	goto loc_82FB4C04;
loc_82FB4BD0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4be8
	if (ctx.cr6.eq) goto loc_82FB4BE8;
	// mulli r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 * 40;
	// bl 0x82ef6f18
	ctx.lr = 0x82FB4BE0;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fb4c04
	goto loc_82FB4C04;
loc_82FB4BE8:
	// mulli r30,r4,40
	ctx.r30.s64 = ctx.r4.s64 * 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB4BF4;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FB4C04;
	sub_82CA3190(ctx, base);
loc_82FB4C04:
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

__attribute__((alias("__imp__sub_82FB4C1C"))) PPC_WEAK_FUNC(sub_82FB4C1C);
PPC_FUNC_IMPL(__imp__sub_82FB4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB4C20"))) PPC_WEAK_FUNC(sub_82FB4C20);
PPC_FUNC_IMPL(__imp__sub_82FB4C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB4C28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb4c90
	if (ctx.cr6.lt) goto loc_82FB4C90;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB4C50;
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb4c7c
	if (ctx.cr6.eq) goto loc_82FB4C7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FB4C6C;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4c7c
	if (ctx.cr6.eq) goto loc_82FB4C7C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4C7C;
	sub_82EF6F38(ctx, base);
loc_82FB4C7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FB4C90:
	// li r3,3072
	ctx.r3.s64 = 3072;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB4C98;
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB4CB8"))) PPC_WEAK_FUNC(sub_82FB4CB8);
PPC_FUNC_IMPL(__imp__sub_82FB4CB8) {
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
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4CD4;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4CDC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4CE4;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4CEC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4CF4;
	sub_82FBC7B8(ctx, base);
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

__attribute__((alias("__imp__sub_82FB4D08"))) PPC_WEAK_FUNC(sub_82FB4D08);
PPC_FUNC_IMPL(__imp__sub_82FB4D08) {
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
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4d2c
	if (ctx.cr6.eq) goto loc_82FB4D2C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4D2C;
	sub_82EF6F38(ctx, base);
loc_82FB4D2C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4d3c
	if (ctx.cr6.eq) goto loc_82FB4D3C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4D3C;
	sub_82EF6F38(ctx, base);
loc_82FB4D3C:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB4D44;
	sub_82FBC7B8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4d54
	if (ctx.cr6.eq) goto loc_82FB4D54;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4D54;
	sub_82EF6F38(ctx, base);
loc_82FB4D54:
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

__attribute__((alias("__imp__sub_82FB4D68"))) PPC_WEAK_FUNC(sub_82FB4D68);
PPC_FUNC_IMPL(__imp__sub_82FB4D68) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fb4d9c
	if (ctx.cr6.lt) goto loc_82FB4D9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb4c20
	ctx.lr = 0x82FB4D9C;
	sub_82FB4C20(ctx, base);
loc_82FB4D9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82FB4DD0"))) PPC_WEAK_FUNC(sub_82FB4DD0);
PPC_FUNC_IMPL(__imp__sub_82FB4DD0) {
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
	// bne cr6,0x82fb4e3c
	if (!ctx.cr6.eq) goto loc_82FB4E3C;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb4e18
	if (ctx.cr0.eq) goto loc_82FB4E18;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fb4e10
	if (ctx.cr0.eq) goto loc_82FB4E10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fb4e60
	if (!ctx.cr6.eq) goto loc_82FB4E60;
loc_82FB4E10:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fb4e60
	if (!ctx.cr0.eq) goto loc_82FB4E60;
loc_82FB4E18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb4e30
	if (ctx.cr6.eq) goto loc_82FB4E30;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4E30;
	sub_82EF6F38(ctx, base);
loc_82FB4E30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fb4e60
	goto loc_82FB4E60;
loc_82FB4E3C:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fb4e50
	if (ctx.cr6.gt) goto loc_82FB4E50;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fb4e60
	if (ctx.cr6.gt) goto loc_82FB4E60;
loc_82FB4E50:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82fb4b58
	ctx.lr = 0x82FB4E60;
	sub_82FB4B58(ctx, base);
loc_82FB4E60:
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

__attribute__((alias("__imp__sub_82FB4E74"))) PPC_WEAK_FUNC(sub_82FB4E74);
PPC_FUNC_IMPL(__imp__sub_82FB4E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB4E78"))) PPC_WEAK_FUNC(sub_82FB4E78);
PPC_FUNC_IMPL(__imp__sub_82FB4E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB4E80;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fb4e94
	if (!ctx.cr6.eq) goto loc_82FB4E94;
	// b 0x82fb4fb4
	goto loc_82FB4FB4;
loc_82FB4E94:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82fb4ea4
	if (!ctx.cr6.lt) goto loc_82FB4EA4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82fb4eec
	goto loc_82FB4EEC;
loc_82FB4EA4:
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
	ctx.lr = 0x82FB4EC0;
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
loc_82FB4EEC:
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB4F00;
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
	// beq cr6,0x82fb4f3c
	if (ctx.cr6.eq) goto loc_82FB4F3C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82FB4F24:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bne 0x82fb4f24
	if (!ctx.cr0.eq) goto loc_82FB4F24;
loc_82FB4F3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb4fa4
	if (ctx.cr6.eq) goto loc_82FB4FA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82FB4F54:
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
	// beq cr6,0x82fb4f90
	if (ctx.cr6.eq) goto loc_82FB4F90;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x82fb5110
	ctx.lr = 0x82FB4F8C;
	sub_82FB5110(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82FB4F90:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82fb4f54
	if (!ctx.cr0.eq) goto loc_82FB4F54;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82FB4FA4;
	sub_82EF6F38(ctx, base);
loc_82FB4FA4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82FB4FB4:
	// bl 0x82fc3a10
	ctx.lr = 0x82FB4FB8;
	sub_82FC3A10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB4FC0"))) PPC_WEAK_FUNC(sub_82FB4FC0);
PPC_FUNC_IMPL(__imp__sub_82FB4FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB4FC8;
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
	// mulli r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 * 20;
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
	// beq cr6,0x82fb50a0
	if (ctx.cr6.eq) goto loc_82FB50A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r10,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fb50a0
	if (!ctx.cr6.eq) goto loc_82FB50A0;
loc_82FB501C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82fb5078
	if (!ctx.cr6.eq) goto loc_82FB5078;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fb506c
	if (!ctx.cr6.eq) goto loc_82FB506C;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82f43408
	ctx.lr = 0x82FB5060;
	sub_82F43408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82fb5070
	if (!ctx.cr0.eq) goto loc_82FB5070;
loc_82FB506C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB5070:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb5098
	if (!ctx.cr0.eq) goto loc_82FB5098;
loc_82FB5078:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82fb50a0
	if (ctx.cr6.eq) goto loc_82FB50A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r28,20
	ctx.r10.s64 = ctx.r28.s64 * 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// b 0x82fb501c
	goto loc_82FB501C;
loc_82FB5098:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82fb50a4
	goto loc_82FB50A4;
loc_82FB50A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FB50A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB50AC"))) PPC_WEAK_FUNC(sub_82FB50AC);
PPC_FUNC_IMPL(__imp__sub_82FB50AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB50B0"))) PPC_WEAK_FUNC(sub_82FB50B0);
PPC_FUNC_IMPL(__imp__sub_82FB50B0) {
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
	// bl 0x82fb4d68
	ctx.lr = 0x82FB50D0;
	sub_82FB4D68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FB510C"))) PPC_WEAK_FUNC(sub_82FB510C);
PPC_FUNC_IMPL(__imp__sub_82FB510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5110"))) PPC_WEAK_FUNC(sub_82FB5110);
PPC_FUNC_IMPL(__imp__sub_82FB5110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB5118;
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
	// bne cr6,0x82fb513c
	if (!ctx.cr6.eq) goto loc_82FB513C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb5164
	goto loc_82FB5164;
loc_82FB513C:
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
	// ble cr6,0x82fb516c
	if (!ctx.cr6.gt) goto loc_82FB516C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB5164:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb4e78
	ctx.lr = 0x82FB516C;
	sub_82FB4E78(ctx, base);
loc_82FB516C:
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
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
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
	// bne cr6,0x82fb51cc
	if (!ctx.cr6.eq) goto loc_82FB51CC;
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
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// b 0x82fb5304
	goto loc_82FB5304;
loc_82FB51CC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82FB51D4:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82fb51d4
	if (!ctx.cr6.eq) goto loc_82FB51D4;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 * 20;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r31,r3,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fb5274
	if (!ctx.cr6.eq) goto loc_82FB5274;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb524c
	if (ctx.cr6.eq) goto loc_82FB524C;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB524C:
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
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82fb5304
	goto loc_82FB5304;
loc_82FB5274:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r30,r3,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// xor r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82fb5294
	goto loc_82FB5294;
loc_82FB5290:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82FB5294:
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82fb5290
	if (!ctx.cr6.eq) goto loc_82FB5290;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb52d8
	if (ctx.cr6.eq) goto loc_82FB52D8;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB52D8:
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
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82FB5304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB530C"))) PPC_WEAK_FUNC(sub_82FB530C);
PPC_FUNC_IMPL(__imp__sub_82FB530C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5310"))) PPC_WEAK_FUNC(sub_82FB5310);
PPC_FUNC_IMPL(__imp__sub_82FB5310) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb5370
	if (ctx.cr6.eq) goto loc_82FB5370;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fb5370
	if (ctx.cr6.eq) goto loc_82FB5370;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fb5370
	if (ctx.cr6.gt) goto loc_82FB5370;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fb5370
	if (ctx.cr6.gt) goto loc_82FB5370;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82fb50b0
	ctx.lr = 0x82FB536C;
	sub_82FB50B0(ctx, base);
	// b 0x82fb5388
	goto loc_82FB5388;
loc_82FB5370:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fd7e90
	ctx.lr = 0x82FB5378;
	sub_82FD7E90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82FB5388:
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

__attribute__((alias("__imp__sub_82FB53A0"))) PPC_WEAK_FUNC(sub_82FB53A0);
PPC_FUNC_IMPL(__imp__sub_82FB53A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB53A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// beq cr6,0x82fb5400
	if (ctx.cr6.eq) goto loc_82FB5400;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB5400:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fb5420
	if (ctx.cr6.eq) goto loc_82FB5420;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB5420:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fb5440
	if (ctx.cr6.eq) goto loc_82FB5440;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB5440:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc91b8
	ctx.lr = 0x82FB5450;
	sub_82FC91B8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82fc7f70
	ctx.lr = 0x82FB5458;
	sub_82FC7F70(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82f430b0
	ctx.lr = 0x82FB5460;
	sub_82F430B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb5498
	if (ctx.cr6.eq) goto loc_82FB5498;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82FB5498:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB54B4"))) PPC_WEAK_FUNC(sub_82FB54B4);
PPC_FUNC_IMPL(__imp__sub_82FB54B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB54B8"))) PPC_WEAK_FUNC(sub_82FB54B8);
PPC_FUNC_IMPL(__imp__sub_82FB54B8) {
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
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// bl 0x82fc3a10
	ctx.lr = 0x82FB54D8;
	sub_82FC3A10(ctx, base);
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB54E4;
	sub_82FBC7B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FB54EC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82fb4d08
	ctx.lr = 0x82FB54F4;
	sub_82FB4D08(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82fb4cb8
	ctx.lr = 0x82FB54FC;
	sub_82FB4CB8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb551c
	if (ctx.cr6.eq) goto loc_82FB551C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB551C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB551C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb553c
	if (ctx.cr6.eq) goto loc_82FB553C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB553C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB553C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb555c
	if (ctx.cr6.eq) goto loc_82FB555C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB555C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB555C:
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

__attribute__((alias("__imp__sub_82FB5574"))) PPC_WEAK_FUNC(sub_82FB5574);
PPC_FUNC_IMPL(__imp__sub_82FB5574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5578"))) PPC_WEAK_FUNC(sub_82FB5578);
PPC_FUNC_IMPL(__imp__sub_82FB5578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FB5580;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r26,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r26.u32);
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// stw r26,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r26.u32);
	// stw r26,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r26.u32);
	// stw r26,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r26.u32);
	// bge cr6,0x82fb5608
	if (!ctx.cr6.lt) goto loc_82FB5608;
	// mulli r27,r5,40
	ctx.r27.s64 = ctx.r5.s64 * 40;
loc_82FB55C0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82fb55f8
	if (!ctx.cr6.eq) goto loc_82FB55F8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bl 0x82fb5310
	ctx.lr = 0x82FB55F8;
	sub_82FB5310(ctx, base);
loc_82FB55F8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fb55c0
	if (ctx.cr6.lt) goto loc_82FB55C0;
loc_82FB5608:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc9620
	ctx.lr = 0x82FB5610;
	sub_82FC9620(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb56f4
	if (!ctx.cr6.gt) goto loc_82FB56F4;
loc_82FB5620:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm r8,r3,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r3,3,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x78;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb56e4
	if (!ctx.cr6.gt) goto loc_82FB56E4;
	// add r4,r3,r24
	ctx.r4.u64 = ctx.r3.u64 + ctx.r24.u64;
loc_82FB5648:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r11,26,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// subf r7,r31,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb5648
	if (ctx.cr6.lt) goto loc_82FB5648;
loc_82FB56E4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb5620
	if (ctx.cr6.lt) goto loc_82FB5620;
loc_82FB56F4:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// add r3,r24,r11
	ctx.r3.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FB5704"))) PPC_WEAK_FUNC(sub_82FB5704);
PPC_FUNC_IMPL(__imp__sub_82FB5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5708"))) PPC_WEAK_FUNC(sub_82FB5708);
PPC_FUNC_IMPL(__imp__sub_82FB5708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB5710;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb5790
	if (ctx.cr0.eq) goto loc_82FB5790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fb5794
	if (!ctx.cr6.gt) goto loc_82FB5794;
	// li r28,40
	ctx.r28.s64 = 40;
loc_82FB5748:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,-40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fb5778
	if (ctx.cr6.eq) goto loc_82FB5778;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb5578
	ctx.lr = 0x82FB5770;
	sub_82FB5578(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82FB5778:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb5748
	if (ctx.cr6.lt) goto loc_82FB5748;
	// b 0x82fb5794
	goto loc_82FB5794;
loc_82FB5790:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82FB5794:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb5578
	ctx.lr = 0x82FB57A4;
	sub_82FB5578(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB57AC"))) PPC_WEAK_FUNC(sub_82FB57AC);
PPC_FUNC_IMPL(__imp__sub_82FB57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB57B0"))) PPC_WEAK_FUNC(sub_82FB57B0);
PPC_FUNC_IMPL(__imp__sub_82FB57B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82FB57B8;
	sub_82CA2BB0(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fb5c38
	if (ctx.cr6.eq) goto loc_82FB5C38;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-11664
	ctx.r11.s64 = ctx.r11.s64 + -11664;
	// lfs f29,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82fb5808
	goto loc_82FB5808;
loc_82FB5804:
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FB5808:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb585c
	if (ctx.cr6.eq) goto loc_82FB585C;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_82FB5824:
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82fb5850
	if (!ctx.cr6.eq) goto loc_82FB5850;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82fb5840
	if (!ctx.cr6.gt) goto loc_82FB5840;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82FB5840:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82fb5850
	if (!ctx.cr6.gt) goto loc_82FB5850;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_82FB5850:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// bne 0x82fb5824
	if (!ctx.cr0.eq) goto loc_82FB5824;
loc_82FB585C:
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r30,16(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fb588c
	if (ctx.cr6.gt) goto loc_82FB588C;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82fb588c
	if (!ctx.cr6.gt) goto loc_82FB588C;
loc_82FB5880:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fb5880
	if (ctx.cr6.lt) goto loc_82FB5880;
loc_82FB588C:
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fb58b0
	if (ctx.cr6.gt) goto loc_82FB58B0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82fb58b0
	if (!ctx.cr6.gt) goto loc_82FB58B0;
loc_82FB58A4:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82fb58a4
	if (ctx.cr6.lt) goto loc_82FB58A4;
loc_82FB58B0:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB58B8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb58f0
	if (ctx.cr0.eq) goto loc_82FB58F0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82eff360
	ctx.lr = 0x82FB58E8;
	sub_82EFF360(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fb58f4
	goto loc_82FB58F4;
loc_82FB58F0:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82FB58F4:
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82FB5904;
	sub_82CA3190(ctx, base);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb594c
	if (!ctx.cr6.gt) goto loc_82FB594C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82FB5918:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82fb5938
	if (!ctx.cr6.eq) goto loc_82FB5938;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82fb49c8
	ctx.lr = 0x82FB5938;
	sub_82FB49C8(ctx, base);
loc_82FB5938:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb5918
	if (ctx.cr6.lt) goto loc_82FB5918;
loc_82FB594C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,20(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r19,0(r9)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r3,24(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,28(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// fdivs f30,f29,f0
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// stb r15,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r15.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f31,f29,f13
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB59D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB59DC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb59f8
	if (ctx.cr0.eq) goto loc_82FB59F8;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82f01690
	ctx.lr = 0x82FB59F0;
	sub_82F01690(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x82fb59fc
	goto loc_82FB59FC;
loc_82FB59F8:
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
loc_82FB59FC:
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
	ctx.lr = 0x82FB5A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb5bf8
	if (!ctx.cr6.gt) goto loc_82FB5BF8;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
loc_82FB5A28:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// add r11,r21,r10
	ctx.r11.u64 = ctx.r21.u64 + ctx.r10.u64;
	// lwzx r23,r21,r10
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r24,36(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// beq cr6,0x82fb5a84
	if (ctx.cr6.eq) goto loc_82FB5A84;
	// mulli r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r24,36(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82FB5A84:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fb5bdc
	if (!ctx.cr6.eq) goto loc_82FB5BDC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB5A98;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fb5ad4
	if (ctx.cr0.eq) goto loc_82FB5AD4;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82ef6fe0
	ctx.lr = 0x82FB5AC0;
	sub_82EF6FE0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r15,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r15.u32);
	// stw r15,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r15.u32);
	// b 0x82fb5ad8
	goto loc_82FB5AD8;
loc_82FB5AD4:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82FB5AD8:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f461a0
	ctx.lr = 0x82FB5AE8;
	sub_82F461A0(ctx, base);
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f9,152(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f0,f9,f31
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r30,16(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82f461a0
	ctx.lr = 0x82FB5BA0;
	sub_82F461A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82f49918
	ctx.lr = 0x82FB5BB0;
	sub_82F49918(ctx, base);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4bca0
	ctx.lr = 0x82FB5BC4;
	sub_82F4BCA0(ctx, base);
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
	ctx.lr = 0x82FB5BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB5BDC:
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r21,r21,40
	ctx.r21.s64 = ctx.r21.s64 + 40;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb5a28
	if (ctx.cr6.lt) goto loc_82FB5A28;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,404(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
loc_82FB5BF8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82fb5c08
	if (ctx.cr6.eq) goto loc_82FB5C08;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB5C08;
	sub_82EF1BF0(ctx, base);
loc_82FB5C08:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82fb5c28
	if (ctx.cr6.eq) goto loc_82FB5C28;
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB5C28:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82fb5804
	if (ctx.cr6.lt) goto loc_82FB5804;
loc_82FB5C38:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB5C4C"))) PPC_WEAK_FUNC(sub_82FB5C4C);
PPC_FUNC_IMPL(__imp__sub_82FB5C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5C50"))) PPC_WEAK_FUNC(sub_82FB5C50);
PPC_FUNC_IMPL(__imp__sub_82FB5C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB5C58;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb4dd0
	ctx.lr = 0x82FB5C74;
	sub_82FB4DD0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r7,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r7.u32);
	// stw r8,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r8.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB5CDC"))) PPC_WEAK_FUNC(sub_82FB5CDC);
PPC_FUNC_IMPL(__imp__sub_82FB5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5CE0"))) PPC_WEAK_FUNC(sub_82FB5CE0);
PPC_FUNC_IMPL(__imp__sub_82FB5CE0) {
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
	// beq cr6,0x82fb5d3c
	if (ctx.cr6.eq) goto loc_82FB5D3C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r10,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82fb4fc0
	ctx.lr = 0x82FB5D20;
	sub_82FB4FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82fb5d3c
	if (ctx.cr0.lt) goto loc_82FB5D3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82fb5d40
	goto loc_82FB5D40;
loc_82FB5D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB5D40:
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

__attribute__((alias("__imp__sub_82FB5D54"))) PPC_WEAK_FUNC(sub_82FB5D54);
PPC_FUNC_IMPL(__imp__sub_82FB5D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5D58"))) PPC_WEAK_FUNC(sub_82FB5D58);
PPC_FUNC_IMPL(__imp__sub_82FB5D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB5D60;
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
	// bne cr6,0x82fb5d84
	if (!ctx.cr6.eq) goto loc_82FB5D84;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82fb5dac
	goto loc_82FB5DAC;
loc_82FB5D84:
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
	// ble cr6,0x82fb5db4
	if (!ctx.cr6.gt) goto loc_82FB5DB4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FB5DAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb4e78
	ctx.lr = 0x82FB5DB4;
	sub_82FB4E78(ctx, base);
loc_82FB5DB4:
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
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
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
	// bne cr6,0x82fb5e1c
	if (!ctx.cr6.eq) goto loc_82FB5E1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r9,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r9.u32);
	// b 0x82fb5f64
	goto loc_82FB5F64;
loc_82FB5E1C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82FB5E24:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// and r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r11,r5,20
	ctx.r11.s64 = ctx.r5.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82fb5e24
	if (!ctx.cr6.eq) goto loc_82FB5E24;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r7,r5,20
	ctx.r7.s64 = ctx.r5.s64 * 20;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r31,r3,26,6,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xor r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fb5ecc
	if (!ctx.cr6.eq) goto loc_82FB5ECC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb5e9c
	if (ctx.cr6.eq) goto loc_82FB5E9C;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB5E9C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// b 0x82fb5f64
	goto loc_82FB5F64;
loc_82FB5ECC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r30,r3,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// xor r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// xor r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 ^ ctx.r3.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// b 0x82fb5eec
	goto loc_82FB5EEC;
loc_82FB5EE8:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82FB5EEC:
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82fb5ee8
	if (!ctx.cr6.eq) goto loc_82FB5EE8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb5f30
	if (ctx.cr6.eq) goto loc_82FB5F30;
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
loc_82FB5F30:
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
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_82FB5F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB5F6C"))) PPC_WEAK_FUNC(sub_82FB5F6C);
PPC_FUNC_IMPL(__imp__sub_82FB5F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB5F70"))) PPC_WEAK_FUNC(sub_82FB5F70);
PPC_FUNC_IMPL(__imp__sub_82FB5F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82FB5F78;
	sub_82CA2BC8(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb628c
	if (ctx.cr0.eq) goto loc_82FB628C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB5FB4;
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r22,0
	ctx.r22.s64 = 0;
	// beq 0x82fb6004
	if (ctx.cr0.eq) goto loc_82FB6004;
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
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB5FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efac40
	ctx.lr = 0x82FB5FFC;
	sub_82EFAC40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82fb6008
	goto loc_82FB6008;
loc_82FB6004:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82FB6008:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bl 0x82fb4950
	ctx.lr = 0x82FB603C;
	sub_82FB4950(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lfs f0,26444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26444);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,4(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 4));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// beq 0x82fb6274
	if (ctx.cr0.eq) goto loc_82FB6274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r23,-1
	ctx.r23.s64 = -1;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
loc_82FB6088:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f48e10
	ctx.lr = 0x82FB6094;
	sub_82F48E10(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82fb60b4
	if (!ctx.cr6.eq) goto loc_82FB60B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82fb60b8
	if (ctx.cr6.eq) goto loc_82FB60B8;
loc_82FB60B4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82FB60B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb6268
	if (ctx.cr0.eq) goto loc_82FB6268;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB60DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82fb6268
	if (ctx.cr0.eq) goto loc_82FB6268;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f435f8
	ctx.lr = 0x82FB60F0;
	sub_82F435F8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82fb6268
	if (!ctx.cr6.gt) goto loc_82FB6268;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82fb6268
	if (!ctx.cr6.gt) goto loc_82FB6268;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82FB6120;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// bl 0x8222c3e8
	ctx.lr = 0x82FB6148;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// bl 0x822955c0
	ctx.lr = 0x82FB6170;
	sub_822955C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bl 0x822955c0
	ctx.lr = 0x82FB6198;
	sub_822955C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf. r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// ble 0x82fb6268
	if (!ctx.cr0.gt) goto loc_82FB6268;
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82fb6268
	if (!ctx.cr0.gt) goto loc_82FB6268;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// bl 0x82f432d0
	ctx.lr = 0x82FB61E4;
	sub_82F432D0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r30,r31,348
	ctx.r30.s64 = ctx.r31.s64 + 348;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb5ce0
	ctx.lr = 0x82FB6200;
	sub_82FB5CE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// bne 0x82fb6210
	if (!ctx.cr0.eq) goto loc_82FB6210;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82FB6210:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb6224
	if (ctx.cr6.eq) goto loc_82FB6224;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// b 0x82fb625c
	goto loc_82FB625C;
loc_82FB6224:
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r9,r11,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// bl 0x82fb5d58
	ctx.lr = 0x82FB625C;
	sub_82FB5D58(ctx, base);
loc_82FB625C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82fb5c50
	ctx.lr = 0x82FB6268;
	sub_82FB5C50(ctx, base);
loc_82FB6268:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82fb6088
	if (ctx.cr6.lt) goto loc_82FB6088;
loc_82FB6274:
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
	ctx.lr = 0x82FB628C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB628C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82FB629C"))) PPC_WEAK_FUNC(sub_82FB629C);
PPC_FUNC_IMPL(__imp__sub_82FB629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB62A0"))) PPC_WEAK_FUNC(sub_82FB62A0);
PPC_FUNC_IMPL(__imp__sub_82FB62A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB62A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb634c
	if (!ctx.cr6.gt) goto loc_82FB634C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82FB62D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82fb6338
	if (!ctx.cr6.eq) goto loc_82FB6338;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fb6318
	if (ctx.cr6.eq) goto loc_82FB6318;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82fb6338
	if (ctx.cr6.gt) goto loc_82FB6338;
loc_82FB6318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_82FB6338:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb62d0
	if (ctx.cr6.lt) goto loc_82FB62D0;
loc_82FB634C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82fb4b58
	ctx.lr = 0x82FB6364;
	sub_82FB4B58(ctx, base);
	// addi r3,r27,348
	ctx.r3.s64 = ctx.r27.s64 + 348;
	// bl 0x82fc3a10
	ctx.lr = 0x82FB636C;
	sub_82FC3A10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb63ec
	if (!ctx.cr6.gt) goto loc_82FB63EC;
loc_82FB637C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82fb63d8
	if (!ctx.cr6.eq) goto loc_82FB63D8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fb63c4
	if (ctx.cr6.eq) goto loc_82FB63C4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB63B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82fb63d8
	if (ctx.cr6.gt) goto loc_82FB63D8;
loc_82FB63C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82fb5f70
	ctx.lr = 0x82FB63D8;
	sub_82FB5F70(ctx, base);
loc_82FB63D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb637c
	if (ctx.cr6.lt) goto loc_82FB637C;
loc_82FB63EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb5708
	ctx.lr = 0x82FB63F8;
	sub_82FB5708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb57b0
	ctx.lr = 0x82FB6408;
	sub_82FB57B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb4dd0
	ctx.lr = 0x82FB6414;
	sub_82FB4DD0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6424
	if (ctx.cr6.eq) goto loc_82FB6424;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB6424;
	sub_82EF6F38(ctx, base);
loc_82FB6424:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB642C"))) PPC_WEAK_FUNC(sub_82FB642C);
PPC_FUNC_IMPL(__imp__sub_82FB642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB6430"))) PPC_WEAK_FUNC(sub_82FB6430);
PPC_FUNC_IMPL(__imp__sub_82FB6430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6474
	if (ctx.cr6.eq) goto loc_82FB6474;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fb6474
	if (ctx.cr6.eq) goto loc_82FB6474;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb53a0
	ctx.lr = 0x82FB6460;
	sub_82FB53A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb62a0
	ctx.lr = 0x82FB646C;
	sub_82FB62A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb54b8
	ctx.lr = 0x82FB6474;
	sub_82FB54B8(ctx, base);
loc_82FB6474:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB6488"))) PPC_WEAK_FUNC(sub_82FB6488);
PPC_FUNC_IMPL(__imp__sub_82FB6488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB6490;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FB64D8;
	sub_82F65FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r11,26448
	ctx.r5.s64 = ctx.r11.s64 + 26448;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82fb6534
	if (ctx.cr6.eq) goto loc_82FB6534;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6534:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82fb655c
	if (ctx.cr6.eq) goto loc_82FB655C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB655C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB655C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq cr6,0x82fb6584
	if (ctx.cr6.eq) goto loc_82FB6584;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6584:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb65ac
	if (ctx.cr6.eq) goto loc_82FB65AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB65AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB65AC:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb65d4
	if (ctx.cr6.eq) goto loc_82FB65D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB65D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB65D4:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fb65f4
	if (ctx.cr6.eq) goto loc_82FB65F4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB65F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB65F4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6614
	if (ctx.cr6.eq) goto loc_82FB6614;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6614:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82FB664C;
	sub_82F65E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB665C"))) PPC_WEAK_FUNC(sub_82FB665C);
PPC_FUNC_IMPL(__imp__sub_82FB665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB6660"))) PPC_WEAK_FUNC(sub_82FB6660);
PPC_FUNC_IMPL(__imp__sub_82FB6660) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6694
	if (ctx.cr6.eq) goto loc_82FB6694;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6694:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb66b4
	if (ctx.cr6.eq) goto loc_82FB66B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB66B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB66B4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb66d4
	if (ctx.cr6.eq) goto loc_82FB66D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB66D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB66D4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb66f4
	if (ctx.cr6.eq) goto loc_82FB66F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB66F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB66F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6714
	if (ctx.cr6.eq) goto loc_82FB6714;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6714:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb6734
	if (ctx.cr6.eq) goto loc_82FB6734;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB6734:
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

__attribute__((alias("__imp__sub_82FB6748"))) PPC_WEAK_FUNC(sub_82FB6748);
PPC_FUNC_IMPL(__imp__sub_82FB6748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB6750;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB678C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82fb67a4
	if (!ctx.cr6.lt) goto loc_82FB67A4;
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82FB67A4:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB67E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FB67EC;
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r7,56(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB682C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB6860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB6868"))) PPC_WEAK_FUNC(sub_82FB6868);
PPC_FUNC_IMPL(__imp__sub_82FB6868) {
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
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bne 0x82fb68ac
	if (!ctx.cr0.eq) goto loc_82FB68AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB68A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82FB68AC:
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

__attribute__((alias("__imp__sub_82FB68C0"))) PPC_WEAK_FUNC(sub_82FB68C0);
PPC_FUNC_IMPL(__imp__sub_82FB68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FB68C8;
	sub_82CA2BD8(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7508
	ctx.lr = 0x82FB68D0;
	sub_82CA7508(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb68fc
	if (!ctx.cr6.lt) goto loc_82FB68FC;
	// bl 0x82f29438
	ctx.lr = 0x82FB68FC;
	sub_82F29438(ctx, base);
loc_82FB68FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,26528
	ctx.r4.s64 = ctx.r10.s64 + 26528;
	// lbz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef9600
	ctx.lr = 0x82FB6924;
	sub_82EF9600(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb70cc
	if (ctx.cr6.eq) goto loc_82FB70CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,2756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	ctx.f28.f64 = double(temp.f32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfd f29,26472(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 26472);
	// addi r24,r11,26504
	ctx.r24.s64 = ctx.r11.s64 + 26504;
	// lfs f30,26480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26480);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2200(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2200);
	ctx.f31.f64 = double(temp.f32);
loc_82FB695C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r30,255
	ctx.r10.s64 = ctx.r30.s64 + 255;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb6984
	if (!ctx.cr6.lt) goto loc_82FB6984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB6984;
	sub_82F29438(ctx, base);
loc_82FB6984:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// sth r29,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r29.u16);
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// sth r29,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r29.u16);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r29.u8);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// bgt cr6,0x82fb719c
	if (ctx.cr6.gt) goto loc_82FB719C;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,26488
	ctx.r12.s64 = ctx.r12.s64 + 26488;
	// rlwinm r0,r5,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32005
	ctx.r12.s64 = -2097479680;
	// addi r12,r12,27116
	ctx.r12.s64 = ctx.r12.s64 + 27116;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_82FB69EC;
	case 1:
		goto loc_82FB6D2C;
	case 2:
		goto loc_82FB6E6C;
	case 3:
		goto loc_82FB7088;
	case 4:
		goto loc_82FB70E0;
	case 5:
		goto loc_82FB7120;
	case 6:
		goto loc_82FB7194;
	case 7:
		goto loc_82FB70E0;
	default:
		__builtin_unreachable();
	}
loc_82FB69EC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2a1b8
	ctx.lr = 0x82FB69F8;
	sub_82F2A1B8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82fb6a1c
	if (!ctx.cr6.lt) goto loc_82FB6A1C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6A1C;
	sub_82F29318(ctx, base);
loc_82FB6A1C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6a64
	if (!ctx.cr6.gt) goto loc_82FB6A64;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6A64:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bge cr6,0x82fb6a94
	if (!ctx.cr6.lt) goto loc_82FB6A94;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6A94;
	sub_82F29318(ctx, base);
loc_82FB6A94:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6adc
	if (!ctx.cr6.gt) goto loc_82FB6ADC;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6ADC:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// bge cr6,0x82fb6b0c
	if (!ctx.cr6.lt) goto loc_82FB6B0C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6B0C;
	sub_82F29318(ctx, base);
loc_82FB6B0C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82200800
	ctx.lr = 0x82FB6B68;
	sub_82200800(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sth r9,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r9.u16);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82fb6b9c
	if (!ctx.cr6.lt) goto loc_82FB6B9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6B9C;
	sub_82F29318(ctx, base);
loc_82FB6B9C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lbz r8,51(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// bge cr6,0x82fb6c20
	if (!ctx.cr6.lt) goto loc_82FB6C20;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6C20;
	sub_82F29318(ctx, base);
loc_82FB6C20:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6c54
	if (!ctx.cr6.gt) goto loc_82FB6C54;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6C54:
	// rlwinm r9,r9,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb6c7c
	if (!ctx.cr6.lt) goto loc_82FB6C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB6C7C;
	sub_82F29438(ctx, base);
loc_82FB6C7C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq 0x82fb6ca4
	if (ctx.cr0.eq) goto loc_82FB6CA4;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82FB6CA4:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb6cb4
	if (!ctx.cr0.eq) goto loc_82FB6CB4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82FB6CB4:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fb6cc8
	if (!ctx.cr6.gt) goto loc_82FB6CC8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_82FB6CC8:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82FB6CD4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// beq cr6,0x82fb70c4
	if (ctx.cr6.eq) goto loc_82FB70C4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bge cr6,0x82fb70c4
	if (!ctx.cr6.lt) goto loc_82FB70C4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r9,105(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r8,106(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r7,107(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lhz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r5,110(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r5,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
loc_82FB6D18:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x82fb70c4
	goto loc_82FB70C4;
loc_82FB6D2C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82fb6d4c
	if (!ctx.cr6.lt) goto loc_82FB6D4C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6D4C;
	sub_82F29318(ctx, base);
loc_82FB6D4C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6d94
	if (!ctx.cr6.gt) goto loc_82FB6D94;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6D94:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bge cr6,0x82fb6dc4
	if (!ctx.cr6.lt) goto loc_82FB6DC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6DC4;
	sub_82F29318(ctx, base);
loc_82FB6DC4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6e0c
	if (!ctx.cr6.gt) goto loc_82FB6E0C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6E0C:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// bge cr6,0x82fb6e38
	if (!ctx.cr6.lt) goto loc_82FB6E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB6E38;
	sub_82F29438(ctx, base);
loc_82FB6E38:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subfic r11,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r11.s64 = 8 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82fb6cd4
	goto loc_82FB6CD4;
loc_82FB6E6C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2a1b8
	ctx.lr = 0x82FB6E78;
	sub_82F2A1B8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82fb6e9c
	if (!ctx.cr6.lt) goto loc_82FB6E9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6E9C;
	sub_82F29318(ctx, base);
loc_82FB6E9C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6ee4
	if (!ctx.cr6.gt) goto loc_82FB6EE4;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6EE4:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// bge cr6,0x82fb6f14
	if (!ctx.cr6.lt) goto loc_82FB6F14;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6F14;
	sub_82F29318(ctx, base);
loc_82FB6F14:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6f5c
	if (!ctx.cr6.gt) goto loc_82FB6F5C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6F5C:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// bge cr6,0x82fb6f8c
	if (!ctx.cr6.lt) goto loc_82FB6F8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82FB6F8C;
	sub_82F29318(ctx, base);
loc_82FB6F8C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82fb6fc0
	if (!ctx.cr6.gt) goto loc_82FB6FC0;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB6FC0:
	// rlwinm r9,r9,28,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb6fe8
	if (!ctx.cr6.lt) goto loc_82FB6FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB6FE8;
	sub_82F29438(ctx, base);
loc_82FB6FE8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq 0x82fb7010
	if (ctx.cr0.eq) goto loc_82FB7010;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82FB7010:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb7020
	if (!ctx.cr0.eq) goto loc_82FB7020;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82FB7020:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fb7034
	if (!ctx.cr6.gt) goto loc_82FB7034;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_82FB7034:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// beq cr6,0x82fb70c4
	if (ctx.cr6.eq) goto loc_82FB70C4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bge cr6,0x82fb70c4
	if (!ctx.cr6.lt) goto loc_82FB70C4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lhz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lbz r7,105(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r6,106(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r5,107(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// sth r8,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// b 0x82fb6d18
	goto loc_82FB6D18;
loc_82FB7088:
	// li r30,27
	ctx.r30.s64 = 27;
loc_82FB708C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb70b0
	if (!ctx.cr6.lt) goto loc_82FB70B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB70B0;
	sub_82F29438(ctx, base);
loc_82FB70B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82FB70BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb708c
	if (!ctx.cr6.eq) goto loc_82FB708C;
loc_82FB70C4:
	// clrlwi. r30,r25,24
	ctx.r30.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fb695c
	if (!ctx.cr0.eq) goto loc_82FB695C;
loc_82FB70CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7554
	ctx.lr = 0x82FB70DC;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82FB70E0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb70fc
	if (!ctx.cr6.lt) goto loc_82FB70FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB70FC;
	sub_82F29438(ctx, base);
loc_82FB70FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// addi r30,r11,19
	ctx.r30.s64 = ctx.r11.s64 + 19;
	// b 0x82fb70bc
	goto loc_82FB70BC;
loc_82FB7120:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82fb713c
	if (!ctx.cr6.lt) goto loc_82FB713C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB713C;
	sub_82F29438(ctx, base);
loc_82FB713C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lbz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 48);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// bge cr6,0x82fb716c
	if (!ctx.cr6.lt) goto loc_82FB716C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82FB716C;
	sub_82F29438(ctx, base);
loc_82FB716C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,13
	ctx.r30.s64 = ctx.r11.s64 + 13;
	// b 0x82fb70bc
	goto loc_82FB70BC;
loc_82FB7194:
	// li r30,80
	ctx.r30.s64 = 80;
	// b 0x82fb708c
	goto loc_82FB708C;
loc_82FB719C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef9600
	ctx.lr = 0x82FB71A8;
	sub_82EF9600(ctx, base);
	// b 0x82fb70bc
	goto loc_82FB70BC;
}

__attribute__((alias("__imp__sub_82FB71AC"))) PPC_WEAK_FUNC(sub_82FB71AC);
PPC_FUNC_IMPL(__imp__sub_82FB71AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB71B0"))) PPC_WEAK_FUNC(sub_82FB71B0);
PPC_FUNC_IMPL(__imp__sub_82FB71B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB71B8"))) PPC_WEAK_FUNC(sub_82FB71B8);
PPC_FUNC_IMPL(__imp__sub_82FB71B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB71C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82FB71D8;
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,26548
	ctx.r10.s64 = ctx.r10.s64 + 26548;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82ef70f0
	ctx.lr = 0x82FB7200;
	sub_82EF70F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb721c
	if (ctx.cr6.eq) goto loc_82FB721C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB721C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB721C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb723c
	if (ctx.cr6.eq) goto loc_82FB723C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB723C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB723C:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fb725c
	if (ctx.cr6.eq) goto loc_82FB725C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB725C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB725C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb727c
	if (ctx.cr6.eq) goto loc_82FB727C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB727C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB727C:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fb729c
	if (ctx.cr6.eq) goto loc_82FB729C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB729C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB729C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb72bc
	if (ctx.cr6.eq) goto loc_82FB72BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB72BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB72BC:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB72CC"))) PPC_WEAK_FUNC(sub_82FB72CC);
PPC_FUNC_IMPL(__imp__sub_82FB72CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB72D0"))) PPC_WEAK_FUNC(sub_82FB72D0);
PPC_FUNC_IMPL(__imp__sub_82FB72D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fb7338
	if (!ctx.cr6.eq) goto loc_82FB7338;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fb7338
	if (!ctx.cr6.eq) goto loc_82FB7338;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
loc_82FB7308:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82fb732c
	if (ctx.cr0.eq) goto loc_82FB732C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fb7308
	if (ctx.cr6.eq) goto loc_82FB7308;
loc_82FB732C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82fb733c
	if (ctx.cr0.eq) goto loc_82FB733C;
loc_82FB7338:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB733C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB7344"))) PPC_WEAK_FUNC(sub_82FB7344);
PPC_FUNC_IMPL(__imp__sub_82FB7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB7348"))) PPC_WEAK_FUNC(sub_82FB7348);
PPC_FUNC_IMPL(__imp__sub_82FB7348) {
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
	// li r5,5381
	ctx.r5.s64 = 5381;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef7440
	ctx.lr = 0x82FB737C;
	sub_82EF7440(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82FB73B4"))) PPC_WEAK_FUNC(sub_82FB73B4);
PPC_FUNC_IMPL(__imp__sub_82FB73B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB73B8"))) PPC_WEAK_FUNC(sub_82FB73B8);
PPC_FUNC_IMPL(__imp__sub_82FB73B8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb73ec
	if (ctx.cr6.eq) goto loc_82FB73EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB73EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB73EC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb740c
	if (ctx.cr6.eq) goto loc_82FB740C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB740C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB740C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb742c
	if (ctx.cr6.eq) goto loc_82FB742C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB742C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB742C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82FB7434;
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

__attribute__((alias("__imp__sub_82FB7448"))) PPC_WEAK_FUNC(sub_82FB7448);
PPC_FUNC_IMPL(__imp__sub_82FB7448) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82fb7348
	sub_82FB7348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB7450"))) PPC_WEAK_FUNC(sub_82FB7450);
PPC_FUNC_IMPL(__imp__sub_82FB7450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fb7464
	if (ctx.cr6.eq) goto loc_82FB7464;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FB7464:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x82fb72d0
	sub_82FB72D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB7470"))) PPC_WEAK_FUNC(sub_82FB7470);
PPC_FUNC_IMPL(__imp__sub_82FB7470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB7480"))) PPC_WEAK_FUNC(sub_82FB7480);
PPC_FUNC_IMPL(__imp__sub_82FB7480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB7488;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB74A4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb74dc
	if (ctx.cr0.eq) goto loc_82FB74DC;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb71b8
	ctx.lr = 0x82FB74D4;
	sub_82FB71B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82fb74e0
	goto loc_82FB74E0;
loc_82FB74DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FB74E0:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-3496
	ctx.r30.s64 = ctx.r11.s64 + -3496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-3496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3496);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB7500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82fb7528
	if (ctx.cr6.eq) goto loc_82FB7528;
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
	ctx.lr = 0x82FB7528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB7528:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB7534"))) PPC_WEAK_FUNC(sub_82FB7534);
PPC_FUNC_IMPL(__imp__sub_82FB7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB7538"))) PPC_WEAK_FUNC(sub_82FB7538);
PPC_FUNC_IMPL(__imp__sub_82FB7538) {
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
	// bl 0x82fb73b8
	ctx.lr = 0x82FB7558;
	sub_82FB73B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb7568
	if (ctx.cr0.eq) goto loc_82FB7568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB7568;
	sub_82EF6F38(ctx, base);
loc_82FB7568:
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

__attribute__((alias("__imp__sub_82FB7584"))) PPC_WEAK_FUNC(sub_82FB7584);
PPC_FUNC_IMPL(__imp__sub_82FB7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB7588"))) PPC_WEAK_FUNC(sub_82FB7588);
PPC_FUNC_IMPL(__imp__sub_82FB7588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB7590;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb75f8
	if (ctx.cr6.lt) goto loc_82FB75F8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB75B8;
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb75e4
	if (ctx.cr6.eq) goto loc_82FB75E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FB75D4;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb75e4
	if (ctx.cr6.eq) goto loc_82FB75E4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB75E4;
	sub_82EF6F38(ctx, base);
loc_82FB75E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FB75F8:
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB7600;
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB7620"))) PPC_WEAK_FUNC(sub_82FB7620);
PPC_FUNC_IMPL(__imp__sub_82FB7620) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fb7654
	if (ctx.cr6.lt) goto loc_82FB7654;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb7588
	ctx.lr = 0x82FB7654;
	sub_82FB7588(ctx, base);
loc_82FB7654:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82FB7688"))) PPC_WEAK_FUNC(sub_82FB7688);
PPC_FUNC_IMPL(__imp__sub_82FB7688) {
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
	// bl 0x82fb7620
	ctx.lr = 0x82FB76A8;
	sub_82FB7620(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FB76E4"))) PPC_WEAK_FUNC(sub_82FB76E4);
PPC_FUNC_IMPL(__imp__sub_82FB76E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB76E8"))) PPC_WEAK_FUNC(sub_82FB76E8);
PPC_FUNC_IMPL(__imp__sub_82FB76E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB76F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// beq 0x82fb77bc
	if (ctx.cr0.eq) goto loc_82FB77BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb77bc
	if (ctx.cr6.eq) goto loc_82FB77BC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ble cr6,0x82fb77b4
	if (!ctx.cr6.gt) goto loc_82FB77B4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r8,r11,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r6,r10,28,4,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb7798
	if (ctx.cr6.gt) goto loc_82FB7798;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FB7798:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb77b4
	if (!ctx.cr0.eq) goto loc_82FB77B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb77b4
	if (ctx.cr6.eq) goto loc_82FB77B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB77B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7688
	ctx.lr = 0x82FB77BC;
	sub_82FB7688(ctx, base);
loc_82FB77BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fb7934
	if (!ctx.cr6.gt) goto loc_82FB7934;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb7824
	if (ctx.cr6.gt) goto loc_82FB7824;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FB7824:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// ble cr6,0x82fb7938
	if (!ctx.cr6.gt) goto loc_82FB7938;
	// b 0x82fb7848
	goto loc_82FB7848;
loc_82FB7844:
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
loc_82FB7848:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r10,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r6,12
	ctx.r9.s64 = ctx.r6.s64 * 12;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb78bc
	if (ctx.cr6.gt) goto loc_82FB78BC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FB78BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb7938
	if (!ctx.cr0.eq) goto loc_82FB7938;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82fb791c
	if (ctx.cr6.eq) goto loc_82FB791C;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82fb791c
	if (ctx.cr0.eq) goto loc_82FB791C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB791C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7688
	ctx.lr = 0x82FB7928;
	sub_82FB7688(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82fb7844
	if (ctx.cr6.gt) goto loc_82FB7844;
loc_82FB7934:
	// lfs f0,26584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
loc_82FB7938:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb79dc
	if (ctx.cr0.eq) goto loc_82FB79DC;
	// b 0x82fb79c0
	goto loc_82FB79C0;
loc_82FB7948:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb79a4
	if (ctx.cr6.gt) goto loc_82FB79A4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FB79A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb79cc
	if (!ctx.cr0.eq) goto loc_82FB79CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb79c0
	if (ctx.cr6.eq) goto loc_82FB79C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB79C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82fb7948
	if (ctx.cr6.gt) goto loc_82FB7948;
loc_82FB79CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82fb79dc
	if (!ctx.cr6.lt) goto loc_82FB79DC;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
loc_82FB79DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB79E4"))) PPC_WEAK_FUNC(sub_82FB79E4);
PPC_FUNC_IMPL(__imp__sub_82FB79E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB79E8"))) PPC_WEAK_FUNC(sub_82FB79E8);
PPC_FUNC_IMPL(__imp__sub_82FB79E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB79F0;
	sub_82CA2BE8(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca74f8
	ctx.lr = 0x82FB79F8;
	sub_82CA74F8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f27,f3
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f3.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f24,f4
	ctx.f24.f64 = ctx.f4.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x8219ec50
	ctx.lr = 0x82FB7A28;
	sub_8219EC50(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x8219ec50
	ctx.lr = 0x82FB7A38;
	sub_8219EC50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82260900
	ctx.lr = 0x82FB7A58;
	sub_82260900(ctx, base);
	// fadds f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f28,f24
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f24.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7A88;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82fb7aac
	if (!ctx.cr6.gt) goto loc_82FB7AAC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,26868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26868);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_82FB7AAC:
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fdivs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f31,f27,f30
	ctx.f31.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// ble cr6,0x82fb7b40
	if (!ctx.cr6.gt) goto loc_82FB7B40;
loc_82FB7AE8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239f68
	ctx.lr = 0x82FB7AF4;
	sub_82239F68(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239e88
	ctx.lr = 0x82FB7B00;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f24,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 + ctx.f28.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmadds f0,f13,f0,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7B24;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fadds f31,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne 0x82fb7ae8
	if (!ctx.cr0.eq) goto loc_82FB7AE8;
loc_82FB7B40:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f28,f25
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7B5C;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7544
	ctx.lr = 0x82FB7B78;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

