#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EAF048"))) PPC_WEAK_FUNC(sub_82EAF048);
PPC_FUNC_IMPL(__imp__sub_82EAF048) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EAF060;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-22364
	ctx.r11.s64 = ctx.r11.s64 + -22364;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf084
	if (ctx.cr0.eq) goto loc_82EAF084;
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82eaf08c
	goto loc_82EAF08C;
loc_82EAF084:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
loc_82EAF08C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lfs f0,-8704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8704);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-16940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16940);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82239e88
	ctx.lr = 0x82EAF0B4;
	sub_82239E88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_82EAF0DC"))) PPC_WEAK_FUNC(sub_82EAF0DC);
PPC_FUNC_IMPL(__imp__sub_82EAF0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF0E0"))) PPC_WEAK_FUNC(sub_82EAF0E0);
PPC_FUNC_IMPL(__imp__sub_82EAF0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-13288
	ctx.r3.s64 = ctx.r11.s64 + -13288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF0EC"))) PPC_WEAK_FUNC(sub_82EAF0EC);
PPC_FUNC_IMPL(__imp__sub_82EAF0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF0F0"))) PPC_WEAK_FUNC(sub_82EAF0F0);
PPC_FUNC_IMPL(__imp__sub_82EAF0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF0FC"))) PPC_WEAK_FUNC(sub_82EAF0FC);
PPC_FUNC_IMPL(__imp__sub_82EAF0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF100"))) PPC_WEAK_FUNC(sub_82EAF100);
PPC_FUNC_IMPL(__imp__sub_82EAF100) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stb r11,413(r3)
	PPC_STORE_U8(ctx.r3.u32 + 413, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF110"))) PPC_WEAK_FUNC(sub_82EAF110);
PPC_FUNC_IMPL(__imp__sub_82EAF110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,161(r5)
	PPC_STORE_U8(ctx.r5.u32 + 161, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF128"))) PPC_WEAK_FUNC(sub_82EAF128);
PPC_FUNC_IMPL(__imp__sub_82EAF128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,920(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r8,440(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// bne cr6,0x82eaf1f0
	if (!ctx.cr6.eq) goto loc_82EAF1F0;
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eaf1f0
	if (ctx.cr6.eq) goto loc_82EAF1F0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
loc_82EAF198:
	// lfs f11,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82eaf1d8
	if (ctx.cr6.eq) goto loc_82EAF1D8;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_82EAF1D8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82eaf198
	if (!ctx.cr6.eq) goto loc_82EAF198;
	// blr 
	return;
loc_82EAF1F0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,732(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,736(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,740(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF230"))) PPC_WEAK_FUNC(sub_82EAF230);
PPC_FUNC_IMPL(__imp__sub_82EAF230) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stb r11,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF240"))) PPC_WEAK_FUNC(sub_82EAF240);
PPC_FUNC_IMPL(__imp__sub_82EAF240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EAF248;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf4a4
	if (ctx.cr0.eq) goto loc_82EAF4A4;
	// lwz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82eaf4a4
	if (!ctx.cr6.eq) goto loc_82EAF4A4;
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eaf298
	if (!ctx.cr0.eq) goto loc_82EAF298;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-3824
	ctx.r4.s64 = ctx.r11.s64 + -3824;
	// bl 0x82ec6398
	ctx.lr = 0x82EAF294;
	sub_82EC6398(ctx, base);
	// stb r29,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r29.u8);
loc_82EAF298:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eaf2e4
	if (ctx.cr6.eq) goto loc_82EAF2E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eaf2e4
	if (ctx.cr6.eq) goto loc_82EAF2E4;
	// bl 0x82eccfd0
	ctx.lr = 0x82EAF2B8;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf2e4
	if (ctx.cr0.eq) goto loc_82EAF2E4;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eaf2d8
	if (ctx.cr0.eq) goto loc_82EAF2D8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAF2D4;
	sub_82ECC6B0(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82EAF2D8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82EAF2E4:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf310
	if (ctx.cr0.eq) goto loc_82EAF310;
	// bl 0x82ecd028
	ctx.lr = 0x82EAF2F4;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf310
	if (ctx.cr0.eq) goto loc_82EAF310;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAF308;
	sub_82ECC6B0(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r29,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r29.u8);
loc_82EAF310:
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f12,f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bne cr6,0x82eaf358
	if (!ctx.cr6.eq) goto loc_82EAF358;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf3ac
	if (ctx.cr6.eq) goto loc_82EAF3AC;
loc_82EAF358:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf378
	if (ctx.cr0.eq) goto loc_82EAF378;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eaf37c
	goto loc_82EAF37C;
loc_82EAF378:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82EAF37C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf388
	if (ctx.cr0.eq) goto loc_82EAF388;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82EAF388:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82eaf3ac
	if (!ctx.cr6.lt) goto loc_82EAF3AC;
	// lbz r11,161(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 161);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf4a4
	if (ctx.cr0.eq) goto loc_82EAF4A4;
loc_82EAF3AC:
	// stfs f11,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// addi r28,r31,92
	ctx.r28.s64 = ctx.r31.s64 + 92;
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stb r30,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r30.u8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x82ecb620
	ctx.lr = 0x82EAF3D4;
	sub_82ECB620(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eaf3e8
	if (!ctx.cr6.gt) goto loc_82EAF3E8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82EAF3E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ecb818
	ctx.lr = 0x82EAF408;
	sub_82ECB818(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf4a4
	if (ctx.cr0.eq) goto loc_82EAF4A4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf4a4
	if (ctx.cr6.eq) goto loc_82EAF4A4;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eaf430
	if (ctx.cr0.eq) goto loc_82EAF430;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAF430;
	sub_82ECC6B0(ctx, base);
loc_82EAF430:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82ecb720
	ctx.lr = 0x82EAF43C;
	sub_82ECB720(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eaf488
	if (!ctx.cr6.gt) goto loc_82EAF488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f31,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f31.f64 = double(temp.f32);
loc_82EAF454:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EAF470;
	sub_82ECC4C8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eaf454
	if (ctx.cr6.lt) goto loc_82EAF454;
loc_82EAF488:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EAF490;
	sub_82ECB740(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82eaf4a4
	if (!ctx.cr6.lt) goto loc_82EAF4A4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82EAF4A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EAF4B0"))) PPC_WEAK_FUNC(sub_82EAF4B0);
PPC_FUNC_IMPL(__imp__sub_82EAF4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EAF4B8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82eaf56c
	if (ctx.cr6.eq) goto loc_82EAF56C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eaf56c
	if (ctx.cr6.eq) goto loc_82EAF56C;
	// lwz r31,444(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 444);
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82eaf56c
	if (ctx.cr6.eq) goto loc_82EAF56C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82eaf56c
	if (ctx.cr0.eq) goto loc_82EAF56C;
loc_82EAF4F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82ecd058
	ctx.lr = 0x82EAF508;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf518
	if (ctx.cr0.eq) goto loc_82EAF518;
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x82eaf51c
	goto loc_82EAF51C;
loc_82EAF518:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EAF51C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eaf550
	if (ctx.cr6.eq) goto loc_82EAF550;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eaf550
	if (ctx.cr6.eq) goto loc_82EAF550;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecf0e0
	ctx.lr = 0x82EAF53C;
	sub_82ECF0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf550
	if (ctx.cr0.eq) goto loc_82EAF550;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecdf10
	ctx.lr = 0x82EAF54C;
	sub_82ECDF10(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82EAF550:
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eaf56c
	if (ctx.cr6.eq) goto loc_82EAF56C;
	// addic. r31,r31,20
	ctx.xer.ca = ctx.r31.u32 > 4294967275;
	ctx.r31.s64 = ctx.r31.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82eaf4f4
	if (!ctx.cr0.eq) goto loc_82EAF4F4;
loc_82EAF56C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EAF574"))) PPC_WEAK_FUNC(sub_82EAF574);
PPC_FUNC_IMPL(__imp__sub_82EAF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF578"))) PPC_WEAK_FUNC(sub_82EAF578);
PPC_FUNC_IMPL(__imp__sub_82EAF578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF598"))) PPC_WEAK_FUNC(sub_82EAF598);
PPC_FUNC_IMPL(__imp__sub_82EAF598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82eaf5d4
	if (ctx.cr6.eq) goto loc_82EAF5D4;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
loc_82EAF5B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eaf5d0
	if (ctx.cr6.eq) goto loc_82EAF5D0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eaf5b0
	if (!ctx.cr6.eq) goto loc_82EAF5B0;
	// b 0x82eaf5d4
	goto loc_82EAF5D4;
loc_82EAF5D0:
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
loc_82EAF5D4:
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAF610"))) PPC_WEAK_FUNC(sub_82EAF610);
PPC_FUNC_IMPL(__imp__sub_82EAF610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EAF618;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf644
	if (ctx.cr0.eq) goto loc_82EAF644;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EAF644:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf664
	if (ctx.cr0.eq) goto loc_82EAF664;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
loc_82EAF664:
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eaf684
	if (ctx.cr0.eq) goto loc_82EAF684;
	// lwz r11,-9868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_82EAF684:
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EAF690"))) PPC_WEAK_FUNC(sub_82EAF690);
PPC_FUNC_IMPL(__imp__sub_82EAF690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EAF698;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eaf6dc
	if (ctx.cr6.eq) goto loc_82EAF6DC;
loc_82EAF6BC:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// beq 0x82eaf6dc
	if (ctx.cr0.eq) goto loc_82EAF6DC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x82eaf6bc
	goto loc_82EAF6BC;
loc_82EAF6DC:
	// clrlwi r26,r6,16
	ctx.r26.u64 = ctx.r6.u32 & 0xFFFF;
loc_82EAF6E0:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,408(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EAF6FC;
	sub_82ECCFB0(ctx, base);
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// sth r26,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r26.u16);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf774
	if (ctx.cr0.eq) goto loc_82EAF774;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf774
	if (ctx.cr0.eq) goto loc_82EAF774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ecf0e0
	ctx.lr = 0x82EAF754;
	sub_82ECF0E0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecced0
	ctx.lr = 0x82EAF764;
	sub_82ECCED0(ctx, base);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// b 0x82eaf778
	goto loc_82EAF778;
loc_82EAF774:
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
loc_82EAF778:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ece900
	ctx.lr = 0x82EAF780;
	sub_82ECE900(ctx, base);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r10.u32);
	// lwz r29,24(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82eaf6e0
	if (!ctx.cr0.eq) goto loc_82EAF6E0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82EAF7C8"))) PPC_WEAK_FUNC(sub_82EAF7C8);
PPC_FUNC_IMPL(__imp__sub_82EAF7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EAF7D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82eaf814
	if (ctx.cr6.eq) goto loc_82EAF814;
loc_82EAF7F4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// beq 0x82eaf814
	if (ctx.cr0.eq) goto loc_82EAF814;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x82eaf7f4
	goto loc_82EAF7F4;
loc_82EAF814:
	// clrlwi r26,r6,16
	ctx.r26.u64 = ctx.r6.u32 & 0xFFFF;
loc_82EAF818:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EAF834;
	sub_82ECCFB0(ctx, base);
	// sth r26,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r26.u16);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf8a4
	if (ctx.cr0.eq) goto loc_82EAF8A4;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eaf8a4
	if (ctx.cr0.eq) goto loc_82EAF8A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ecf0e0
	ctx.lr = 0x82EAF888;
	sub_82ECF0E0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecced0
	ctx.lr = 0x82EAF898;
	sub_82ECCED0(ctx, base);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
loc_82EAF8A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ece900
	ctx.lr = 0x82EAF8AC;
	sub_82ECE900(ctx, base);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r29,24(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82eaf818
	if (!ctx.cr0.eq) goto loc_82EAF818;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82EAF8F4"))) PPC_WEAK_FUNC(sub_82EAF8F4);
PPC_FUNC_IMPL(__imp__sub_82EAF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF8F8"))) PPC_WEAK_FUNC(sub_82EAF8F8);
PPC_FUNC_IMPL(__imp__sub_82EAF8F8) {
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
	// bl 0x82eaecd0
	ctx.lr = 0x82EAF918;
	sub_82EAECD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eaf934
	if (ctx.cr0.eq) goto loc_82EAF934;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EAF934:
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

__attribute__((alias("__imp__sub_82EAF950"))) PPC_WEAK_FUNC(sub_82EAF950);
PPC_FUNC_IMPL(__imp__sub_82EAF950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EAF958;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EAF978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82eafa88
	if (ctx.cr0.eq) goto loc_82EAFA88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eccfd0
	ctx.lr = 0x82EAF988;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafa88
	if (ctx.cr0.eq) goto loc_82EAFA88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EAF9D0:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eaf9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EAF9D0;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stb r30,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r30.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ececb0
	ctx.lr = 0x82EAFA14;
	sub_82ECECB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eafa88
	if (ctx.cr0.eq) goto loc_82EAFA88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82eafa88
	if (ctx.cr6.eq) goto loc_82EAFA88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ecd058
	ctx.lr = 0x82EAFA40;
	sub_82ECD058(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,29680
	ctx.r4.s64 = ctx.r10.s64 + 29680;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// bl 0x82e82f30
	ctx.lr = 0x82EAFA70;
	sub_82E82F30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eafa80
	if (ctx.cr0.eq) goto loc_82EAFA80;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82EAFA80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eafa8c
	goto loc_82EAFA8C;
loc_82EAFA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAFA8C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EAFA94"))) PPC_WEAK_FUNC(sub_82EAFA94);
PPC_FUNC_IMPL(__imp__sub_82EAFA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFA98"))) PPC_WEAK_FUNC(sub_82EAFA98);
PPC_FUNC_IMPL(__imp__sub_82EAFA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EAFAA0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,380(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eafac4
	if (ctx.cr0.eq) goto loc_82EAFAC4;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAFAC0;
	sub_82ECC6B0(ctx, base);
	// stw r31,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r31.u32);
loc_82EAFAC4:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eafb34
	if (!ctx.cr6.gt) goto loc_82EAFB34;
	// addi r30,r29,168
	ctx.r30.s64 = ctx.r29.s64 + 168;
loc_82EAFAD8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eafafc
	if (ctx.cr0.eq) goto loc_82EAFAFC;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAFAEC;
	sub_82ECC6B0(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
loc_82EAFAFC:
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eafb20
	if (ctx.cr0.eq) goto loc_82EAFB20;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EAFB10;
	sub_82ECC6B0(ctx, base);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// stb r31,100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 100, ctx.r31.u8);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
loc_82EAFB20:
	// lwz r11,360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eafad8
	if (ctx.cr6.lt) goto loc_82EAFAD8;
loc_82EAFB34:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,436(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r8,412(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// stw r31,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r31.u32);
	// stw r31,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r31.u32);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// stw r31,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r31.u32);
	// stw r8,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r9.u32);
	// stw r9,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EAFB70"))) PPC_WEAK_FUNC(sub_82EAFB70);
PPC_FUNC_IMPL(__imp__sub_82EAFB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lhz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r6,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r6.u16);
	// lhz r10,18(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// beq 0x82eafbe8
	if (ctx.cr0.eq) goto loc_82EAFBE8;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
loc_82EAFBCC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eafbcc
	if (ctx.cr6.lt) goto loc_82EAFBCC;
loc_82EAFBE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r10.u32);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFC08"))) PPC_WEAK_FUNC(sub_82EAFC08);
PPC_FUNC_IMPL(__imp__sub_82EAFC08) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r5.u32);
	// b 0x82eafc6c
	goto loc_82EAFC6C;
loc_82EAFC20:
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bne cr6,0x82eafc84
	if (!ctx.cr6.eq) goto loc_82EAFC84;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stw r10,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r10.u32);
loc_82EAFC6C:
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82eafc20
	if (!ctx.cr6.lt) goto loc_82EAFC20;
	// bl 0x82eafb70
	ctx.lr = 0x82EAFC7C;
	sub_82EAFB70(ctx, base);
	// stw r5,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r5.u32);
	// stw r5,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r5.u32);
loc_82EAFC84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFC94"))) PPC_WEAK_FUNC(sub_82EAFC94);
PPC_FUNC_IMPL(__imp__sub_82EAFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFC98"))) PPC_WEAK_FUNC(sub_82EAFC98);
PPC_FUNC_IMPL(__imp__sub_82EAFC98) {
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
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82eafdd8
	if (ctx.cr6.eq) goto loc_82EAFDD8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eafd1c
	if (!ctx.cr6.eq) goto loc_82EAFD1C;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lhz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r10,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r10.u16);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eafdb4
	if (ctx.cr0.eq) goto loc_82EAFDB4;
	// lhz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x82ca2c60
	ctx.lr = 0x82EAFD18;
	sub_82CA2C60(ctx, base);
	// b 0x82eafdb4
	goto loc_82EAFDB4;
loc_82EAFD1C:
	// lwz r30,408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r11,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eafd70
	if (ctx.cr0.eq) goto loc_82EAFD70;
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82ca2c60
	ctx.lr = 0x82EAFD70;
	sub_82CA2C60(ctx, base);
loc_82EAFD70:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
loc_82EAFDB4:
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_82EAFDD8:
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

__attribute__((alias("__imp__sub_82EAFDF0"))) PPC_WEAK_FUNC(sub_82EAFDF0);
PPC_FUNC_IMPL(__imp__sub_82EAFDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EAFDF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// bl 0x82625f08
	ctx.lr = 0x82EAFE14;
	sub_82625F08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82EAFE24;
	sub_82CA3190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// bl 0x82625f08
	ctx.lr = 0x82EAFE30;
	sub_82625F08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,416(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r3,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82EAFE40;
	sub_82CA3190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r29.u32);
	// bl 0x82625f08
	ctx.lr = 0x82EAFE4C;
	sub_82625F08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// stw r3,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82EAFE5C;
	sub_82CA3190(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,412(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// stw r9,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EAFE9C"))) PPC_WEAK_FUNC(sub_82EAFE9C);
PPC_FUNC_IMPL(__imp__sub_82EAFE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFEA0"))) PPC_WEAK_FUNC(sub_82EAFEA0);
PPC_FUNC_IMPL(__imp__sub_82EAFEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82EAFEA8;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7508
	ctx.lr = 0x82EAFEB0;
	sub_82CA7508(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x82ecd028
	ctx.lr = 0x82EAFED4;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb074c
	if (!ctx.cr0.eq) goto loc_82EB074C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31947
	ctx.r26.s64 = -2093678592;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// lwz r10,-25496(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwz r11,-25500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25500);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f30,20(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f11,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r19,r11,-30984
	ctx.r19.s64 = ctx.r11.s64 + -30984;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,-30984
	ctx.r25.s64 = ctx.r11.s64 + -30984;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lfs f28,3040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3040);
	ctx.f28.f64 = double(temp.f32);
	// addi r18,r11,-24812
	ctx.r18.s64 = ctx.r11.s64 + -24812;
	// lfs f29,3216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3216);
	ctx.f29.f64 = double(temp.f32);
	// lis r14,-31952
	ctx.r14.s64 = -2094006272;
	// li r20,-1
	ctx.r20.s64 = -1;
loc_82EB0034:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,-25472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25472);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25472, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// ble cr6,0x82eb00a8
	if (!ctx.cr6.gt) goto loc_82EB00A8;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,-25496(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
loc_82EB0070:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eb0098
	if (ctx.cr6.eq) goto loc_82EB0098;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82eb0098
	if (!ctx.cr6.lt) goto loc_82EB0098;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EB0098:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb0070
	if (ctx.cr6.lt) goto loc_82EB0070;
loc_82EB00A8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb074c
	if (ctx.cr0.eq) goto loc_82EB074C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-25496(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// lwzx r21,r11,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r10,-25496(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0760
	if (ctx.cr0.eq) goto loc_82EB0760;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecd9c0
	ctx.lr = 0x82EB0114;
	sub_82ECD9C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb06cc
	if (ctx.cr6.eq) goto loc_82EB06CC;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
loc_82EB0128:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r23,r17,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r22,r17,r11
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// stfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,796(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
	// bne cr6,0x82eb02d8
	if (!ctx.cr6.eq) goto loc_82EB02D8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb02d8
	if (ctx.cr0.eq) goto loc_82EB02D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82ece090
	ctx.lr = 0x82EB0178;
	sub_82ECE090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb06b4
	if (ctx.cr0.eq) goto loc_82EB06B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecdf10
	ctx.lr = 0x82EB0188;
	sub_82ECDF10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e939b0
	ctx.lr = 0x82EB0194;
	sub_82E939B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93a30
	ctx.lr = 0x82EB01A0;
	sub_82E93A30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB0200:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb0200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r29,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r29.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB021C;
	sub_821AE8C0(ctx, base);
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB0248:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb0248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0248;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r29,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, ctx.r29.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0264;
	sub_821AE8C0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb02c0
	if (!ctx.cr0.eq) goto loc_82EB02C0;
	// lbz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb02c0
	if (ctx.cr0.eq) goto loc_82EB02C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82eb06b4
	goto loc_82EB06B4;
loc_82EB02C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82EB02D8:
	// lfs f31,20(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb02f0
	if (ctx.cr0.eq) goto loc_82EB02F0;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82eb0474
	goto loc_82EB0474;
loc_82EB02F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb0454
	if (ctx.cr6.eq) goto loc_82EB0454;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82e939b0
	ctx.lr = 0x82EB0308;
	sub_82E939B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93a30
	ctx.lr = 0x82EB0314;
	sub_82E93A30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB0330;
	sub_82ECCFB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r19,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r19.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB0364:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb0364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0364;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r29,536(r1)
	PPC_STORE_U8(ctx.r1.u32 + 536, ctx.r29.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0380;
	sub_821AE8C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB0398;
	sub_82ECCFB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r19,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r19.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB03CC:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb03cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB03CC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r29,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r29.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB03E8;
	sub_821AE8C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb0438
	if (!ctx.cr0.eq) goto loc_82EB0438;
	// lbz r11,127(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 127);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb0438
	if (ctx.cr0.eq) goto loc_82EB0438;
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// b 0x82eb06b4
	goto loc_82EB06B4;
loc_82EB0438:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// b 0x82eb0474
	goto loc_82EB0474;
loc_82EB0454:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f0,f29,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f31.f64));
loc_82EB0474:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93ab0
	ctx.lr = 0x82EB047C;
	sub_82E93AB0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// ble cr6,0x82eb0508
	if (!ctx.cr6.gt) goto loc_82EB0508;
	// lwz r11,-25496(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
loc_82EB04B0:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb0508
	if (!ctx.cr0.eq) goto loc_82EB0508;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb04f4
	if (ctx.cr6.eq) goto loc_82EB04F4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82eb04f4
	if (!ctx.cr6.eq) goto loc_82EB04F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82eb04f4
	if (ctx.cr6.gt) goto loc_82EB04F4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EB04F4:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb04b0
	if (ctx.cr6.lt) goto loc_82EB04B0;
loc_82EB0508:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb06b4
	if (!ctx.cr0.eq) goto loc_82EB06B4;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb0580
	if (!ctx.cr6.gt) goto loc_82EB0580;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25492);
loc_82EB052C:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb0580
	if (!ctx.cr0.eq) goto loc_82EB0580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb056c
	if (ctx.cr6.eq) goto loc_82EB056C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r3,r3,1
	ctx.r3.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82eb056c
	if (!ctx.cr6.eq) goto loc_82EB056C;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82eb056c
	if (ctx.cr6.gt) goto loc_82EB056C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EB056C:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb052c
	if (ctx.cr6.lt) goto loc_82EB052C;
loc_82EB0580:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb06b4
	if (!ctx.cr0.eq) goto loc_82EB06B4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 * 28;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25500);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,-8712(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8712);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb074c
	if (ctx.cr6.eq) goto loc_82EB074C;
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f11,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// beq cr6,0x82eb0624
	if (ctx.cr6.eq) goto loc_82EB0624;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
loc_82EB0624:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb06b4
	if (!ctx.cr6.eq) goto loc_82EB06B4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82eb0640
	if (ctx.cr6.eq) goto loc_82EB0640;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// b 0x82eb06b4
	goto loc_82EB06B4;
loc_82EB0640:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82eb0684
	if (!ctx.cr6.gt) goto loc_82EB0684;
	// lwz r9,-25496(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
loc_82EB0654:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb0678
	if (ctx.cr6.eq) goto loc_82EB0678;
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb0654
	if (ctx.cr6.lt) goto loc_82EB0654;
	// b 0x82eb0684
	goto loc_82EB0684;
loc_82EB0678:
	// lwz r8,-25496(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_82EB0684:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb06b4
	if (ctx.cr6.lt) goto loc_82EB06B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lwz r10,-25496(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -25496);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,-8712(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8712);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb074c
	if (ctx.cr6.eq) goto loc_82EB074C;
loc_82EB06B4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb0128
	if (ctx.cr6.lt) goto loc_82EB0128;
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82EB06CC:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb0718
	if (!ctx.cr6.gt) goto loc_82EB0718;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r10,-25492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25492);
loc_82EB06E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eb0708
	if (ctx.cr6.eq) goto loc_82EB0708;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb06e4
	if (ctx.cr6.lt) goto loc_82EB06E4;
	// b 0x82eb0718
	goto loc_82EB0718;
loc_82EB0708:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-25492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25492);
	// stwx r21,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r21.u32);
loc_82EB0718:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0034
	if (ctx.cr6.lt) goto loc_82EB0034;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25492);
	// stwx r21,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r21.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,-8712(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8712);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb0034
	if (!ctx.cr6.eq) goto loc_82EB0034;
loc_82EB074C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EB0750:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7554
	ctx.lr = 0x82EB075C;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82EB0760:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82EB0768:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb0790
	if (ctx.cr6.eq) goto loc_82EB0790;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82ecdfc8
	ctx.lr = 0x82EB0790;
	sub_82ECDFC8(ctx, base);
loc_82EB0790:
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x82eb0768
	if (!ctx.cr0.eq) goto loc_82EB0768;
	// lwz r29,788(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82eb07c0
	if (!ctx.cr6.eq) goto loc_82EB07C0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r6,796(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf7c8
	ctx.lr = 0x82EB07C0;
	sub_82EAF7C8(ctx, base);
loc_82EB07C0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82eb080c
	if (!ctx.cr6.eq) goto loc_82EB080C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb07f8
	if (ctx.cr6.lt) goto loc_82EB07F8;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82EB07E4:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82e85528
	ctx.lr = 0x82EB07F0;
	sub_82E85528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eb0750
	goto loc_82EB0750;
loc_82EB07F8:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r6,796(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf690
	ctx.lr = 0x82EB080C;
	sub_82EAF690(ctx, base);
loc_82EB080C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82eb07e4
	goto loc_82EB07E4;
}

__attribute__((alias("__imp__sub_82EB0814"))) PPC_WEAK_FUNC(sub_82EB0814);
PPC_FUNC_IMPL(__imp__sub_82EB0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0818"))) PPC_WEAK_FUNC(sub_82EB0818);
PPC_FUNC_IMPL(__imp__sub_82EB0818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82EB0820;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f8
	ctx.lr = 0x82EB0828;
	sub_82CA74F8(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r9.u32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x82ecd028
	ctx.lr = 0x82EB0850;
	sub_82ECD028(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0888
	if (ctx.cr0.eq) goto loc_82EB0888;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r29,-25480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25480, ctx.r29.u32);
	// b 0x82eb12dc
	goto loc_82EB12DC;
loc_82EB0888:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// lis r7,-31947
	ctx.r7.s64 = -2093678592;
	// lis r25,-31947
	ctx.r25.s64 = -2093678592;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25488);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82eb08e4
	if (!ctx.cr6.eq) goto loc_82EB08E4;
	// lwz r11,-25484(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25484);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82eb08e4
	if (!ctx.cr6.eq) goto loc_82EB08E4;
	// lwz r11,-25480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25480);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82eb08e4
	if (!ctx.cr6.eq) goto loc_82EB08E4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,-25476(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -25476);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82eb09f0
	if (ctx.cr6.eq) goto loc_82EB09F0;
loc_82EB08E4:
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// lwz r11,-25500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25500);
	// lwz r10,-25496(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r14,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r14.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfs f30,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r14,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r14.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f13,4(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f11,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82EB09F0:
	// lwz r28,404(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x82260978
	ctx.lr = 0x82EB09FC;
	sub_82260978(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e7a000
	ctx.lr = 0x82EB0A04;
	sub_82E7A000(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r23,r11,-9856
	ctx.r23.s64 = ctx.r11.s64 + -9856;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb0a34
	if (ctx.cr6.eq) goto loc_82EB0A34;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// b 0x82eb0a38
	goto loc_82EB0A38;
loc_82EB0A34:
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
loc_82EB0A38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lfs f13,1100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f13,152(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f26,3056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3056);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,3040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3040);
	ctx.f24.f64 = double(temp.f32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// lfs f25,3216(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3216);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f27.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r18,r11,-30984
	ctx.r18.s64 = ctx.r11.s64 + -30984;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r17,r11,-24812
	ctx.r17.s64 = ctx.r11.s64 + -24812;
loc_82EB0AB4:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,-25472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25472);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,-25472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25472, ctx.r11.u32);
	// ble cr6,0x82eb0b8c
	if (!ctx.cr6.gt) goto loc_82EB0B8C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82e85528
	ctx.lr = 0x82EB0AE8;
	sub_82E85528(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb0b04
	if (ctx.cr6.eq) goto loc_82EB0B04;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eb0b08
	goto loc_82EB0B08;
loc_82EB0B04:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82EB0B08:
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fsubs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x82eb12ec
	if (!ctx.cr6.gt) goto loc_82EB12EC;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lfs f13,1100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82eb0b70
	if (ctx.cr6.gt) goto loc_82EB0B70;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb0b78
	if (!ctx.cr6.lt) goto loc_82EB0B78;
loc_82EB0B70:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82EB0B78:
	// li r26,1
	ctx.r26.s64 = 1;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_82EB0B8C:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb0be8
	if (!ctx.cr6.gt) goto loc_82EB0BE8;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,-25496(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
loc_82EB0BB0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eb0bd8
	if (ctx.cr6.eq) goto loc_82EB0BD8;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82eb0bd8
	if (!ctx.cr6.lt) goto loc_82EB0BD8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82EB0BD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82eb0bb0
	if (ctx.cr6.lt) goto loc_82EB0BB0;
loc_82EB0BE8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb1334
	if (ctx.cr0.eq) goto loc_82EB1334;
	// lwz r10,-25496(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r10,-25496(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// add r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb136c
	if (ctx.cr0.eq) goto loc_82EB136C;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecd9c0
	ctx.lr = 0x82EB0C54;
	sub_82ECD9C0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r15,r29
	ctx.r15.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb1224
	if (ctx.cr6.eq) goto loc_82EB1224;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
loc_82EB0C68:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r23,r19,r11
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwzx r22,r19,r11
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
	// bne cr6,0x82eb0e18
	if (!ctx.cr6.eq) goto loc_82EB0E18;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0e18
	if (ctx.cr0.eq) goto loc_82EB0E18;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82ece090
	ctx.lr = 0x82EB0CB8;
	sub_82ECE090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb1204
	if (ctx.cr0.eq) goto loc_82EB1204;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecdf10
	ctx.lr = 0x82EB0CC8;
	sub_82ECDF10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e939b0
	ctx.lr = 0x82EB0CD4;
	sub_82E939B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93a30
	ctx.lr = 0x82EB0CE0;
	sub_82E93A30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r18,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r18.u32);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB0D40:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb0d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0D40;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stb r29,472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 472, ctx.r29.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0D5C;
	sub_821AE8C0(ctx, base);
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB0D88:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb0d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0D88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r29,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r29.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0DA4;
	sub_821AE8C0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb0e00
	if (!ctx.cr0.eq) goto loc_82EB0E00;
	// lbz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb0e00
	if (ctx.cr0.eq) goto loc_82EB0E00;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// b 0x82eb1204
	goto loc_82EB1204;
loc_82EB0E00:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82EB0E18:
	// lfs f31,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb0e30
	if (ctx.cr0.eq) goto loc_82EB0E30;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x82eb0fbc
	goto loc_82EB0FBC;
loc_82EB0E30:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb0f9c
	if (ctx.cr6.eq) goto loc_82EB0F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f30,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82e939b0
	ctx.lr = 0x82EB0E48;
	sub_82E939B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93a30
	ctx.lr = 0x82EB0E54;
	sub_82E93A30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB0E70;
	sub_82ECCFB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r18,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r18.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,484(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,488(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,492(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB0EA4:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb0ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0EA4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r29,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r29.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0EC0;
	sub_821AE8C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB0ED8;
	sub_82ECCFB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r18,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r18.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB0F0C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb0f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB0F0C;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stb r29,376(r1)
	PPC_STORE_U8(ctx.r1.u32 + 376, ctx.r29.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821ae8c0
	ctx.lr = 0x82EB0F28;
	sub_821AE8C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB0F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb0f7c
	if (!ctx.cr0.eq) goto loc_82EB0F7C;
	// lbz r11,127(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 127);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb0f7c
	if (ctx.cr0.eq) goto loc_82EB0F7C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x82eb1204
	goto loc_82EB1204;
loc_82EB0F7C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x82eb0fbc
	goto loc_82EB0FBC;
loc_82EB0F9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f0,f25,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f31.f64));
loc_82EB0FBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e93ab0
	ctx.lr = 0x82EB0FC4;
	sub_82E93AB0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// ble cr6,0x82eb1050
	if (!ctx.cr6.gt) goto loc_82EB1050;
	// lwz r11,-25496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
loc_82EB0FF8:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb1050
	if (!ctx.cr0.eq) goto loc_82EB1050;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb103c
	if (ctx.cr6.eq) goto loc_82EB103C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82eb103c
	if (!ctx.cr6.eq) goto loc_82EB103C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82eb103c
	if (ctx.cr6.gt) goto loc_82EB103C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EB103C:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0ff8
	if (ctx.cr6.lt) goto loc_82EB0FF8;
loc_82EB1050:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb1204
	if (!ctx.cr0.eq) goto loc_82EB1204;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb10c8
	if (!ctx.cr6.gt) goto loc_82EB10C8;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25492);
loc_82EB1074:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82eb10c8
	if (!ctx.cr0.eq) goto loc_82EB10C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb10b4
	if (ctx.cr6.eq) goto loc_82EB10B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r3,r3,1
	ctx.r3.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82eb10b4
	if (!ctx.cr6.eq) goto loc_82EB10B4;
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82eb10b4
	if (ctx.cr6.gt) goto loc_82EB10B4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82EB10B4:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb1074
	if (ctx.cr6.lt) goto loc_82EB1074;
loc_82EB10C8:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb1204
	if (!ctx.cr0.eq) goto loc_82EB1204;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 * 28;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25500);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r8,-31952
	ctx.r8.s64 = -2094006272;
	// lwz r8,-8712(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8712);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82eb144c
	if (ctx.cr6.eq) goto loc_82EB144C;
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r24,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r24.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lfs f11,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// beq cr6,0x82eb1170
	if (ctx.cr6.eq) goto loc_82EB1170;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
loc_82EB1170:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82eb1204
	if (!ctx.cr6.eq) goto loc_82EB1204;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82eb118c
	if (ctx.cr6.eq) goto loc_82EB118C;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// b 0x82eb1204
	goto loc_82EB1204;
loc_82EB118C:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82eb11d0
	if (!ctx.cr6.gt) goto loc_82EB11D0;
	// lwz r9,-25496(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
loc_82EB11A0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82eb11c4
	if (ctx.cr6.eq) goto loc_82EB11C4;
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82eb11a0
	if (ctx.cr6.lt) goto loc_82EB11A0;
	// b 0x82eb11d0
	goto loc_82EB11D0;
loc_82EB11C4:
	// lwz r8,-25496(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_82EB11D0:
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb1204
	if (ctx.cr6.lt) goto loc_82EB1204;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lwz r10,-25496(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25496);
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r11,-8712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8712);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb144c
	if (ctx.cr6.eq) goto loc_82EB144C;
loc_82EB1204:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb0c68
	if (ctx.cr6.lt) goto loc_82EB0C68;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82EB1224:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb1270
	if (!ctx.cr6.gt) goto loc_82EB1270;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r10,-25492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25492);
loc_82EB123C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82eb1260
	if (ctx.cr6.eq) goto loc_82EB1260;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb123c
	if (ctx.cr6.lt) goto loc_82EB123C;
	// b 0x82eb1270
	goto loc_82EB1270;
loc_82EB1260:
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,-25492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25492);
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r24.u32);
loc_82EB1270:
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82eb0ab4
	if (ctx.cr6.lt) goto loc_82EB0AB4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,-25492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25492);
	// stwx r24,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u32);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,-8712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8712);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82eb0ab4
	if (!ctx.cr6.eq) goto loc_82EB0AB4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r29,-25480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25480, ctx.r29.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82e85528
	ctx.lr = 0x82EB12D8;
	sub_82E85528(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB12DC:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7544
	ctx.lr = 0x82EB12E8;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82EB12EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82260978
	ctx.lr = 0x82EB12F8;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e7a0f0
	ctx.lr = 0x82EB1300;
	sub_82E7A0F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r14,-25484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25484, ctx.r14.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r20,-25480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25480, ctx.r20.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// b 0x82eb12dc
	goto loc_82EB12DC;
loc_82EB1334:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r29,-25480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25480, ctx.r29.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82e85528
	ctx.lr = 0x82EB1364;
	sub_82E85528(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82eb12dc
	goto loc_82EB12DC;
loc_82EB136C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25480, ctx.r11.u32);
loc_82EB1398:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb13c0
	if (ctx.cr6.eq) goto loc_82EB13C0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82ecdfc8
	ctx.lr = 0x82EB13C0;
	sub_82ECDFC8(ctx, base);
loc_82EB13C0:
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x82eb1398
	if (!ctx.cr0.eq) goto loc_82EB1398;
	// lwz r29,852(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82eb13f0
	if (!ctx.cr6.eq) goto loc_82EB13F0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,860(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf7c8
	ctx.lr = 0x82EB13F0;
	sub_82EAF7C8(ctx, base);
loc_82EB13F0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82eb143c
	if (!ctx.cr6.eq) goto loc_82EB143C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1428
	if (ctx.cr6.lt) goto loc_82EB1428;
loc_82EB1410:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EB1414:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82e85528
	ctx.lr = 0x82EB1420;
	sub_82E85528(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eb12dc
	goto loc_82EB12DC;
loc_82EB1428:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,860(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf690
	ctx.lr = 0x82EB143C;
	sub_82EAF690(ctx, base);
loc_82EB143C:
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82eb1414
	goto loc_82EB1414;
loc_82EB144C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25476, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25488, ctx.r11.u32);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// stw r11,-25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25484, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r29,-25480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25480, ctx.r29.u32);
	// b 0x82eb1410
	goto loc_82EB1410;
}

__attribute__((alias("__imp__sub_82EB1474"))) PPC_WEAK_FUNC(sub_82EB1474);
PPC_FUNC_IMPL(__imp__sub_82EB1474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1478"))) PPC_WEAK_FUNC(sub_82EB1478);
PPC_FUNC_IMPL(__imp__sub_82EB1478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82EB1480;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb1754
	if (!ctx.cr0.eq) goto loc_82EB1754;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82eccfd0
	ctx.lr = 0x82EB14C0;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb1754
	if (ctx.cr0.eq) goto loc_82EB1754;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb158c
	if (!ctx.cr0.eq) goto loc_82EB158C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EB1514:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb1514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB1514;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r26.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82ececb0
	ctx.lr = 0x82EB1554;
	sub_82ECECB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// subf r10,r4,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r4.s64;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// xori r29,r10,1
	ctx.r29.u64 = ctx.r10.u64 ^ 1;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82ecd058
	ctx.lr = 0x82EB1588;
	sub_82ECD058(ctx, base);
	// b 0x82eb15a4
	goto loc_82EB15A4;
loc_82EB158C:
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ecd058
	ctx.lr = 0x82EB15A0;
	sub_82ECD058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82EB15A4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb186c
	if (ctx.cr0.eq) goto loc_82EB186C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB15DC;
	sub_82ECCFB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r3.u32);
	// beq 0x82eb16e4
	if (ctx.cr0.eq) goto loc_82EB16E4;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,364(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82eb1694
	if (ctx.cr6.eq) goto loc_82EB1694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82eb1670
	if (!ctx.cr6.gt) goto loc_82EB1670;
loc_82EB1628:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r9,18(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 * 96;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r9,76(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb1628
	if (ctx.cr6.lt) goto loc_82EB1628;
loc_82EB1670:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82EB1694:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r11,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82eccfb0
	ctx.lr = 0x82EB16DC;
	sub_82ECCFB0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// sth r26,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r26.u16);
loc_82EB16E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82eccf80
	ctx.lr = 0x82EB170C;
	sub_82ECCF80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// bne 0x82eb171c
	if (!ctx.cr0.eq) goto loc_82EB171C;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
loc_82EB171C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB1734;
	sub_82ECC6B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb186c
	goto loc_82EB186C;
loc_82EB1754:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb186c
	if (!ctx.cr0.eq) goto loc_82EB186C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ecd028
	ctx.lr = 0x82EB1774;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb186c
	if (ctx.cr0.eq) goto loc_82EB186C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB1794;
	sub_82ECC6B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb17e4
	if (!ctx.cr6.eq) goto loc_82EB17E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,164(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB17D0;
	sub_82ECC4C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82eb186c
	goto loc_82EB186C;
loc_82EB17E4:
	// bl 0x82ecb720
	ctx.lr = 0x82EB17E8;
	sub_82ECB720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1864
	if (!ctx.cr6.gt) goto loc_82EB1864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f31.f64 = double(temp.f32);
loc_82EB180C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB1838;
	sub_82ECC4C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb180c
	if (ctx.cr6.lt) goto loc_82EB180C;
loc_82EB1864:
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB186C;
	sub_82ECB740(ctx, base);
loc_82EB186C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82EB1878"))) PPC_WEAK_FUNC(sub_82EB1878);
PPC_FUNC_IMPL(__imp__sub_82EB1878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EB1880;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r31,820
	ctx.r11.s64 = ctx.r31.s64 + 820;
	// lfs f0,3040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,636
	ctx.r10.s64 = ctx.r31.s64 + 636;
	// addi r9,r31,932
	ctx.r9.s64 = ctx.r31.s64 + 932;
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r8,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r30,918(r31)
	PPC_STORE_U8(ctx.r31.u32 + 918, ctx.r30.u8);
	// stb r30,919(r31)
	PPC_STORE_U8(ctx.r31.u32 + 919, ctx.r30.u8);
	// stb r30,917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 917, ctx.r30.u8);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stb r30,1024(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1024, ctx.r30.u8);
	// lfs f13,3088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3088);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,1077(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1077, ctx.r30.u8);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r30,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r30.u8);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stb r30,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r30.u8);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r30,88(r9)
	PPC_STORE_U8(ctx.r9.u32 + 88, ctx.r30.u8);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stfs f13,1060(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f13,1080(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// stb r30,916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 916, ctx.r30.u8);
	// stb r30,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb194c
	if (!ctx.cr6.gt) goto loc_82EB194C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82EB1920:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1920
	if (ctx.cr6.lt) goto loc_82EB1920;
loc_82EB194C:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb198c
	if (!ctx.cr6.gt) goto loc_82EB198C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1960:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1960
	if (ctx.cr6.lt) goto loc_82EB1960;
loc_82EB198C:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb19cc
	if (!ctx.cr6.gt) goto loc_82EB19CC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB19A0:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB19B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb19a0
	if (ctx.cr6.lt) goto loc_82EB19A0;
loc_82EB19CC:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1a0c
	if (!ctx.cr6.gt) goto loc_82EB1A0C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB19E0:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB19F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb19e0
	if (ctx.cr6.lt) goto loc_82EB19E0;
loc_82EB1A0C:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1a4c
	if (!ctx.cr6.gt) goto loc_82EB1A4C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1A20:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1a20
	if (ctx.cr6.lt) goto loc_82EB1A20;
loc_82EB1A4C:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1a8c
	if (!ctx.cr6.gt) goto loc_82EB1A8C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1A60:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1a60
	if (ctx.cr6.lt) goto loc_82EB1A60;
loc_82EB1A8C:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1acc
	if (!ctx.cr6.gt) goto loc_82EB1ACC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1AA0:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1aa0
	if (ctx.cr6.lt) goto loc_82EB1AA0;
loc_82EB1ACC:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1b0c
	if (!ctx.cr6.gt) goto loc_82EB1B0C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1AE0:
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1ae0
	if (ctx.cr6.lt) goto loc_82EB1AE0;
loc_82EB1B0C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1b4c
	if (!ctx.cr6.gt) goto loc_82EB1B4C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1B20:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1b20
	if (ctx.cr6.lt) goto loc_82EB1B20;
loc_82EB1B4C:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1b8c
	if (!ctx.cr6.gt) goto loc_82EB1B8C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1B60:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1b60
	if (ctx.cr6.lt) goto loc_82EB1B60;
loc_82EB1B8C:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb1bcc
	if (!ctx.cr6.gt) goto loc_82EB1BCC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82EB1BA0:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB1BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1ba0
	if (ctx.cr6.lt) goto loc_82EB1BA0;
loc_82EB1BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eafa98
	ctx.lr = 0x82EB1BD4;
	sub_82EAFA98(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eb1c08
	if (ctx.cr0.eq) goto loc_82EB1C08;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1c08
	if (ctx.cr0.eq) goto loc_82EB1C08;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb1c08
	if (ctx.cr0.eq) goto loc_82EB1C08;
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB1C04;
	sub_82ECC6B0(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82EB1C08:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eb1c34
	if (ctx.cr0.eq) goto loc_82EB1C34;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb1c34
	if (ctx.cr0.eq) goto loc_82EB1C34;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb1c34
	if (ctx.cr0.eq) goto loc_82EB1C34;
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB1C30;
	sub_82ECC6B0(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82EB1C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EB1C3C"))) PPC_WEAK_FUNC(sub_82EB1C3C);
PPC_FUNC_IMPL(__imp__sub_82EB1C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB1C40"))) PPC_WEAK_FUNC(sub_82EB1C40);
PPC_FUNC_IMPL(__imp__sub_82EB1C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82EB1C48;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb1d54
	if (!ctx.cr0.eq) goto loc_82EB1D54;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb1cdc
	if (ctx.cr6.eq) goto loc_82EB1CDC;
loc_82EB1C74:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb1cc0
	if (!ctx.cr0.eq) goto loc_82EB1CC0;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82eb2408
	if (ctx.cr6.eq) goto loc_82EB2408;
	// bl 0x82eafc98
	ctx.lr = 0x82EB1CA0;
	sub_82EAFC98(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82eb1c74
	goto loc_82EB1C74;
loc_82EB1CC0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r9.u32);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB1CDC:
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f13,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb1d18
	if (!ctx.cr6.eq) goto loc_82EB1D18;
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb1d18
	if (!ctx.cr6.eq) goto loc_82EB1D18;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb1d1c
	if (ctx.cr6.eq) goto loc_82EB1D1C;
loc_82EB1D18:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82EB1D1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb2408
	if (ctx.cr0.eq) goto loc_82EB2408;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r10,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB1D54:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb2408
	if (!ctx.cr6.eq) goto loc_82EB2408;
	// lwz r11,444(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 444);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,440(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82eb1da4
	if (ctx.cr6.eq) goto loc_82EB1DA4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82eb2408
	if (ctx.cr6.gt) goto loc_82EB2408;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82eb1d9c
	if (!ctx.cr6.lt) goto loc_82EB1D9C;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// b 0x82eb1da8
	goto loc_82EB1DA8;
loc_82EB1D9C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82eb1da8
	if (!ctx.cr6.lt) goto loc_82EB1DA8;
loc_82EB1DA4:
	// li r25,2
	ctx.r25.s64 = 2;
loc_82EB1DA8:
	// lwz r11,428(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 428);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb20d4
	if (!ctx.cr0.eq) goto loc_82EB20D4;
	// lwz r11,404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 404);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r30,8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb1e0c
	if (!ctx.cr6.eq) goto loc_82EB1E0C;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb1e0c
	if (!ctx.cr6.eq) goto loc_82EB1E0C;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb1e10
	if (ctx.cr6.eq) goto loc_82EB1E10;
loc_82EB1E0C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EB1E10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb1e30
	if (ctx.cr0.eq) goto loc_82EB1E30;
	// stw r23,420(r28)
	PPC_STORE_U32(ctx.r28.u32 + 420, ctx.r23.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82eafc08
	ctx.lr = 0x82EB1E24;
	sub_82EAFC08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1c40
	ctx.lr = 0x82EB1E2C;
	sub_82EB1C40(ctx, base);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB1E30:
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb1eb8
	if (!ctx.cr0.eq) goto loc_82EB1EB8;
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb1eb8
	if (!ctx.cr0.eq) goto loc_82EB1EB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82eaf598
	ctx.lr = 0x82EB1E58;
	sub_82EAF598(ctx, base);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb1e8c
	if (ctx.cr6.eq) goto loc_82EB1E8C;
loc_82EB1E64:
	// lhz r11,18(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82eaf598
	ctx.lr = 0x82EB1E80;
	sub_82EAF598(ctx, base);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb1e64
	if (!ctx.cr6.eq) goto loc_82EB1E64;
loc_82EB1E8C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// stw r9,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r9.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82eafc08
	ctx.lr = 0x82EB1EB4;
	sub_82EAFC08(ctx, base);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB1EB8:
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1f68
	if (ctx.cr6.lt) goto loc_82EB1F68;
	// beq cr6,0x82eb1f68
	if (ctx.cr6.eq) goto loc_82EB1F68;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb720
	ctx.lr = 0x82EB1ED0;
	sub_82ECB720(ctx, base);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lwz r26,84(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82eb1f20
	if (ctx.cr0.eq) goto loc_82EB1F20;
loc_82EB1EF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB1F08;
	sub_82ECC4C8(ctx, base);
	// stw r3,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r3.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1ef0
	if (ctx.cr6.lt) goto loc_82EB1EF0;
loc_82EB1F20:
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// addi r28,r29,20
	ctx.r28.s64 = ctx.r29.s64 + 20;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb20c0
	if (ctx.cr0.eq) goto loc_82EB20C0;
loc_82EB1F34:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB1F4C;
	sub_82ECC4C8(ctx, base);
	// stw r3,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r3.u32);
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1f34
	if (ctx.cr6.lt) goto loc_82EB1F34;
	// b 0x82eb20c0
	goto loc_82EB20C0;
loc_82EB1F68:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb720
	ctx.lr = 0x82EB1F70;
	sub_82ECB720(ctx, base);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r27,r30,20
	ctx.r27.s64 = ctx.r30.s64 + 20;
	// lwz r26,84(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82eb1fc0
	if (ctx.cr0.eq) goto loc_82EB1FC0;
loc_82EB1F90:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB1FA8;
	sub_82ECC4C8(ctx, base);
	// stw r3,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r3.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb1f90
	if (ctx.cr6.lt) goto loc_82EB1F90;
loc_82EB1FC0:
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB1FE4;
	sub_82ECC4C8(ctx, base);
	// stw r3,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r3.u32);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82eb20c0
	if (!ctx.cr6.lt) goto loc_82EB20C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f1,19900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19900);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lhz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// bl 0x82ecb818
	ctx.lr = 0x82EB207C;
	sub_82ECB818(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb20c0
	if (ctx.cr6.eq) goto loc_82EB20C0;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_82EB2090:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB20A8;
	sub_82ECC4C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r3,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2090
	if (ctx.cr6.lt) goto loc_82EB2090;
loc_82EB20C0:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB20C8;
	sub_82ECB740(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82EB20CC:
	// stw r24,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r24.u32);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB20D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb2128
	if (!ctx.cr6.eq) goto loc_82EB2128;
	// lwz r3,432(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// bl 0x82eccfd0
	ctx.lr = 0x82EB20E4;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb20fc
	if (ctx.cr0.eq) goto loc_82EB20FC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r10.u32);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB20FC:
	// lwz r3,432(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// bl 0x82ecd028
	ctx.lr = 0x82EB2104;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2408
	if (ctx.cr0.eq) goto loc_82EB2408;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r23,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r23.u32);
	// lwz r4,432(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB2120;
	sub_82ECC6B0(ctx, base);
	// stw r23,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r23.u32);
	// b 0x82eb2408
	goto loc_82EB2408;
loc_82EB2128:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eb2408
	if (!ctx.cr6.eq) goto loc_82EB2408;
	// lwz r3,432(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// bl 0x82eccfd0
	ctx.lr = 0x82EB2138;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq 0x82eb20cc
	if (ctx.cr0.eq) goto loc_82EB20CC;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r27,432(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhz r9,18(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// lhz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r29
	ctx.r28.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lhz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82eb2254
	if (!ctx.cr6.lt) goto loc_82EB2254;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ecd058
	ctx.lr = 0x82EB2184;
	sub_82ECD058(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecf018
	ctx.lr = 0x82EB218C;
	sub_82ECF018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82eb21a8
	if (!ctx.cr6.eq) goto loc_82EB21A8;
loc_82EB2198:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// b 0x82eb240c
	goto loc_82EB240C;
loc_82EB21A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ecd058
	ctx.lr = 0x82EB21B4;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb21c4
	if (!ctx.cr0.eq) goto loc_82EB21C4;
loc_82EB21BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb240c
	goto loc_82EB240C;
loc_82EB21C4:
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82eb21bc
	if (ctx.cr6.eq) goto loc_82EB21BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lhz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// bl 0x82eafea0
	ctx.lr = 0x82EB2220;
	sub_82EAFEA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eb21bc
	if (ctx.cr6.eq) goto loc_82EB21BC;
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82eb23ec
	if (!ctx.cr0.gt) goto loc_82EB23EC;
loc_82EB2230:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bne 0x82eb2230
	if (!ctx.cr0.eq) goto loc_82EB2230;
	// b 0x82eb23ec
	goto loc_82EB23EC;
loc_82EB2254:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bne cr6,0x82eb2334
	if (!ctx.cr6.eq) goto loc_82EB2334;
	// bl 0x82ecd058
	ctx.lr = 0x82EB2260;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2198
	if (ctx.cr0.eq) goto loc_82EB2198;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecf018
	ctx.lr = 0x82EB2270;
	sub_82ECF018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82eb2198
	if (ctx.cr6.eq) goto loc_82EB2198;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ecd058
	ctx.lr = 0x82EB2288;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2198
	if (ctx.cr0.eq) goto loc_82EB2198;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecf018
	ctx.lr = 0x82EB2298;
	sub_82ECF018(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82eb2198
	if (ctx.cr6.eq) goto loc_82EB2198;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb2198
	if (ctx.cr6.eq) goto loc_82EB2198;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// bl 0x82eafea0
	ctx.lr = 0x82EB2300;
	sub_82EAFEA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eb2198
	if (ctx.cr6.eq) goto loc_82EB2198;
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82eb23ec
	if (!ctx.cr0.gt) goto loc_82EB23EC;
loc_82EB2310:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bne 0x82eb2310
	if (!ctx.cr0.eq) goto loc_82EB2310;
	// b 0x82eb23ec
	goto loc_82EB23EC;
loc_82EB2334:
	// bl 0x82ecd058
	ctx.lr = 0x82EB2338;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2198
	if (ctx.cr0.eq) goto loc_82EB2198;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecf018
	ctx.lr = 0x82EB2348;
	sub_82ECF018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82eb2198
	if (ctx.cr6.eq) goto loc_82EB2198;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ecd058
	ctx.lr = 0x82EB2360;
	sub_82ECD058(ctx, base);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82eb21bc
	if (ctx.cr6.eq) goto loc_82EB21BC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lhz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// bl 0x82eafea0
	ctx.lr = 0x82EB23BC;
	sub_82EAFEA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82eb21bc
	if (ctx.cr6.eq) goto loc_82EB21BC;
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82eb23ec
	if (!ctx.cr0.gt) goto loc_82EB23EC;
loc_82EB23CC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bne 0x82eb23cc
	if (!ctx.cr0.eq) goto loc_82EB23CC;
loc_82EB23EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB23F8;
	sub_82ECC6B0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r23,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r23.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r23,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r23.u32);
loc_82EB2408:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB240C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82EB2418"))) PPC_WEAK_FUNC(sub_82EB2418);
PPC_FUNC_IMPL(__imp__sub_82EB2418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82EB2420;
	sub_82CA2BC0(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r19,88(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi r19,0
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82eb2560
	if (!ctx.cr0.eq) goto loc_82EB2560;
	// addi r29,r18,4
	ctx.r29.s64 = ctx.r18.s64 + 4;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb2488
	if (!ctx.cr6.eq) goto loc_82EB2488;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb2488
	if (!ctx.cr6.eq) goto loc_82EB2488;
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb248c
	if (ctx.cr6.eq) goto loc_82EB248C;
loc_82EB2488:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82EB248C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb249c
	if (ctx.cr0.eq) goto loc_82EB249C;
	// stw r22,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r22.u32);
	// b 0x82eb2ab4
	goto loc_82EB2AB4;
loc_82EB249C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82eb2ab4
	if (!ctx.cr6.eq) goto loc_82EB2AB4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82ecbfb0
	ctx.lr = 0x82EB24BC;
	sub_82ECBFB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb24d0
	if (!ctx.cr0.eq) goto loc_82EB24D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r20,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r20.u32);
	// b 0x82eb2ab8
	goto loc_82EB2AB8;
loc_82EB24D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,-16940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16940);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB24F0;
	sub_82ECC4C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r22.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r22,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r22.u8);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82ecbfb0
	ctx.lr = 0x82EB2518;
	sub_82ECBFB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb2530
	if (!ctx.cr0.eq) goto loc_82EB2530;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82EB2524:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// b 0x82eb2ab8
	goto loc_82EB2AB8;
loc_82EB2530:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB2548;
	sub_82ECC4C8(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r22,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r22.u32);
	// stb r22,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r22.u8);
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r20,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r20.u32);
loc_82EB2560:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r21,3
	ctx.r21.s64 = 3;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// lfs f29,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x82eb2780
	if (!ctx.cr6.eq) goto loc_82EB2780;
	// addi r25,r18,4
	ctx.r25.s64 = ctx.r18.s64 + 4;
	// lfs f13,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r23,r31,92
	ctx.r23.s64 = ctx.r31.s64 + 92;
	// lfs f10,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82EB25C0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r22.u8);
	// bl 0x82ecc908
	ctx.lr = 0x82EB25EC;
	sub_82ECC908(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb275c
	if (ctx.cr6.eq) goto loc_82EB275C;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// mulli r11,r29,96
	ctx.r11.s64 = ctx.r29.s64 * 96;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r27,r30,240
	ctx.r27.s64 = ctx.r30.s64 + 240;
	// addi r26,r30,176
	ctx.r26.s64 = ctx.r30.s64 + 176;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r22,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r22.u32);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82ecb818
	ctx.lr = 0x82EB2648;
	sub_82ECB818(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb720
	ctx.lr = 0x82EB2650;
	sub_82ECB720(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2690
	if (!ctx.cr6.gt) goto loc_82EB2690;
loc_82EB2660:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB2678;
	sub_82ECC4C8(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2660
	if (ctx.cr6.lt) goto loc_82EB2660;
loc_82EB2690:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB2698;
	sub_82ECB740(ctx, base);
	// addi r27,r30,336
	ctx.r27.s64 = ctx.r30.s64 + 336;
	// stw r22,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r22.u32);
	// addi r26,r30,272
	ctx.r26.s64 = ctx.r30.s64 + 272;
	// stb r22,172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 172, ctx.r22.u8);
	// stw r22,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r22.u32);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r8,16
	ctx.r8.s64 = 16;
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// bl 0x82ecb818
	ctx.lr = 0x82EB26D4;
	sub_82ECB818(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb720
	ctx.lr = 0x82EB26DC;
	sub_82ECB720(ctx, base);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb271c
	if (!ctx.cr6.gt) goto loc_82EB271C;
loc_82EB26EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB2704;
	sub_82ECC4C8(ctx, base);
	// stw r3,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb26ec
	if (ctx.cr6.lt) goto loc_82EB26EC;
loc_82EB271C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB2724;
	sub_82ECB740(ctx, base);
	// stw r22,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r22.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stb r22,268(r30)
	PPC_STORE_U8(ctx.r30.u32 + 268, ctx.r22.u8);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
loc_82EB2734:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb688
	ctx.lr = 0x82EB273C;
	sub_82ECB688(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82eb274c
	if (!ctx.cr6.gt) goto loc_82EB274C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82EB274C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82eb2768
	if (!ctx.cr6.gt) goto loc_82EB2768;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82eb25c0
	goto loc_82EB25C0;
loc_82EB275C:
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x82eb2734
	goto loc_82EB2734;
loc_82EB2768:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82EB2780:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2, ctx.xer);
	// bne cr6,0x82eb2808
	if (!ctx.cr6.eq) goto loc_82EB2808;
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r29,r31,364
	ctx.r29.s64 = ctx.r31.s64 + 364;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb27b8
	if (ctx.cr6.gt) goto loc_82EB27B8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r31,368
	ctx.r6.s64 = ctx.r31.s64 + 368;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1478
	ctx.lr = 0x82EB27B8;
	sub_82EB1478(ctx, base);
loc_82EB27B8:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r30,r31,372
	ctx.r30.s64 = ctx.r31.s64 + 372;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82eb27e8
	if (ctx.cr6.gt) goto loc_82EB27E8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r18,4
	ctx.r7.s64 = ctx.r18.s64 + 4;
	// addi r6,r31,376
	ctx.r6.s64 = ctx.r31.s64 + 376;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1478
	ctx.lr = 0x82EB27E8;
	sub_82EB1478(ctx, base);
loc_82EB27E8:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb2ab4
	if (!ctx.cr6.gt) goto loc_82EB2AB4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb2ab4
	if (!ctx.cr6.gt) goto loc_82EB2AB4;
	// stw r21,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r21.u32);
loc_82EB2808:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// bne cr6,0x82eb287c
	if (!ctx.cr6.eq) goto loc_82EB287C;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r22,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r22.u32);
	// bl 0x82ecb720
	ctx.lr = 0x82EB2820;
	sub_82ECB720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2870
	if (!ctx.cr6.gt) goto loc_82EB2870;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82EB2834:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB2850;
	sub_82ECC4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// beq 0x82eb28a0
	if (ctx.cr0.eq) goto loc_82EB28A0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2834
	if (ctx.cr6.lt) goto loc_82EB2834;
loc_82EB2870:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB2878;
	sub_82ECB740(ctx, base);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_82EB287C:
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bne cr6,0x82eb28d0
	if (!ctx.cr6.eq) goto loc_82EB28D0;
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82eccfd0
	ctx.lr = 0x82EB288C;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb28a8
	if (ctx.cr0.eq) goto loc_82EB28A8;
	// li r19,7
	ctx.r19.s64 = 7;
	// stw r19,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r19.u32);
	// b 0x82eb28d8
	goto loc_82EB28D8;
loc_82EB28A0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82eb2524
	goto loc_82EB2524;
loc_82EB28A8:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82ecd028
	ctx.lr = 0x82EB28B0;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2ab4
	if (ctx.cr0.eq) goto loc_82EB2AB4;
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB28C4;
	sub_82ECC6B0(ctx, base);
	// stw r22,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r22.u32);
	// stw r21,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r21.u32);
	// b 0x82eb2ab4
	goto loc_82EB2AB4;
loc_82EB28D0:
	// cmpwi cr6,r19,7
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 7, ctx.xer);
	// bne cr6,0x82eb2aa0
	if (!ctx.cr6.eq) goto loc_82EB2AA0;
loc_82EB28D8:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb2ab8
	if (ctx.cr0.eq) goto loc_82EB2AB8;
	// bl 0x82eccfd0
	ctx.lr = 0x82EB28E8;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb28f8
	if (!ctx.cr0.eq) goto loc_82EB28F8;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x82eb2ab4
	goto loc_82EB2AB4;
loc_82EB28F8:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82ecd058
	ctx.lr = 0x82EB2910;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb2924
	if (!ctx.cr0.eq) goto loc_82EB2924;
loc_82EB2918:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// b 0x82eb2ab8
	goto loc_82EB2AB8;
loc_82EB2924:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// bl 0x82ecd058
	ctx.lr = 0x82EB2940;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2918
	if (ctx.cr0.eq) goto loc_82EB2918;
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,360(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82eafea0
	ctx.lr = 0x82EB2964;
	sub_82EAFEA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB2974;
	sub_82ECC6B0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r22,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r22.u32);
	// bne cr6,0x82eb29b4
	if (!ctx.cr6.eq) goto loc_82EB29B4;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82ecb638
	ctx.lr = 0x82EB2994;
	sub_82ECB638(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82eb29ac
	if (!ctx.cr6.gt) goto loc_82EB29AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r21,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r21.u32);
	// b 0x82eb2ab8
	goto loc_82EB2AB8;
loc_82EB29AC:
	// stw r20,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r20.u32);
	// b 0x82eb2ab4
	goto loc_82EB2AB4;
loc_82EB29B4:
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82eb2a68
	if (!ctx.cr0.gt) goto loc_82EB2A68;
	// mulli r11,r9,96
	ctx.r11.s64 = ctx.r9.s64 * 96;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,348
	ctx.r10.s64 = ctx.r11.s64 + 348;
loc_82EB29CC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// sth r22,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r22.u16);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x82eb2a40
	if (!ctx.cr6.gt) goto loc_82EB2A40;
	// addi r6,r10,-76
	ctx.r6.s64 = ctx.r10.s64 + -76;
loc_82EB2A14:
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lhz r5,18(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r5,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r5.u16);
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82eb2a14
	if (ctx.cr6.lt) goto loc_82EB2A14;
loc_82EB2A40:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-96
	ctx.r10.s64 = ctx.r10.s64 + -96;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r7,18(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 18);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bgt 0x82eb29cc
	if (ctx.cr0.gt) goto loc_82EB29CC;
loc_82EB2A68:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// sth r22,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r22.u16);
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// sth r22,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r22.u16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_82EB2AA0:
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// bne cr6,0x82eb2ab4
	if (!ctx.cr6.eq) goto loc_82EB2AB4;
	// addi r4,r18,4
	ctx.r4.s64 = ctx.r18.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1c40
	ctx.lr = 0x82EB2AB4;
	sub_82EB1C40(ctx, base);
loc_82EB2AB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB2AB8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82EB2ACC"))) PPC_WEAK_FUNC(sub_82EB2ACC);
PPC_FUNC_IMPL(__imp__sub_82EB2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2AD0"))) PPC_WEAK_FUNC(sub_82EB2AD0);
PPC_FUNC_IMPL(__imp__sub_82EB2AD0) {
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
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82eb2b0c
	if (ctx.cr0.eq) goto loc_82EB2B0C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB2B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB2B0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
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

__attribute__((alias("__imp__sub_82EB2B2C"))) PPC_WEAK_FUNC(sub_82EB2B2C);
PPC_FUNC_IMPL(__imp__sub_82EB2B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2B30"))) PPC_WEAK_FUNC(sub_82EB2B30);
PPC_FUNC_IMPL(__imp__sub_82EB2B30) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb2bcc
	if (!ctx.cr6.gt) goto loc_82EB2BCC;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb2b70
	if (!ctx.cr6.gt) goto loc_82EB2B70;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EB2B70:
	// bl 0x82625f08
	ctx.lr = 0x82EB2B74;
	sub_82625F08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2bac
	if (!ctx.cr6.gt) goto loc_82EB2BAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EB2B8C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb2b8c
	if (ctx.cr6.lt) goto loc_82EB2B8C;
loc_82EB2BAC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb2bc8
	if (ctx.cr0.eq) goto loc_82EB2BC8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB2BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB2BC8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82EB2BCC:
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

__attribute__((alias("__imp__sub_82EB2BE4"))) PPC_WEAK_FUNC(sub_82EB2BE4);
PPC_FUNC_IMPL(__imp__sub_82EB2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB2BE8"))) PPC_WEAK_FUNC(sub_82EB2BE8);
PPC_FUNC_IMPL(__imp__sub_82EB2BE8) {
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
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB2C08;
	sub_82EB2AD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2c24
	if (ctx.cr0.eq) goto loc_82EB2C24;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB2C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB2C24:
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

__attribute__((alias("__imp__sub_82EB2C40"))) PPC_WEAK_FUNC(sub_82EB2C40);
PPC_FUNC_IMPL(__imp__sub_82EB2C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82EB2C48;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// lwz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb2cb8
	if (!ctx.cr6.eq) goto loc_82EB2CB8;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb2cb8
	if (ctx.cr6.eq) goto loc_82EB2CB8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb2cb8
	if (ctx.cr6.eq) goto loc_82EB2CB8;
	// bl 0x82eccfd0
	ctx.lr = 0x82EB2C8C;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2cb8
	if (ctx.cr0.eq) goto loc_82EB2CB8;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eb2cac
	if (ctx.cr0.eq) goto loc_82EB2CAC;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB2CA8;
	sub_82ECC6B0(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_82EB2CAC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82EB2CB8:
	// addi r26,r30,4
	ctx.r26.s64 = ctx.r30.s64 + 4;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb2cf4
	if (!ctx.cr6.eq) goto loc_82EB2CF4;
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb2cf4
	if (!ctx.cr6.eq) goto loc_82EB2CF4;
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb2cf8
	if (ctx.cr6.eq) goto loc_82EB2CF8;
loc_82EB2CF4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82EB2CF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2d08
	if (ctx.cr0.eq) goto loc_82EB2D08;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x82eb32e4
	goto loc_82EB32E4;
loc_82EB2D08:
	// li r23,4
	ctx.r23.s64 = 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82eb2d1c
	if (!ctx.cr6.eq) goto loc_82EB2D1C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
loc_82EB2D1C:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82eb2da0
	if (!ctx.cr6.eq) goto loc_82EB2DA0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb720
	ctx.lr = 0x82EB2D2C;
	sub_82ECB720(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb2d94
	if (!ctx.cr6.gt) goto loc_82EB2D94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lfs f31,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f31.f64 = double(temp.f32);
loc_82EB2D48:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82ecc4c8
	ctx.lr = 0x82EB2D64;
	sub_82ECC4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bne 0x82eb2d80
	if (!ctx.cr0.eq) goto loc_82EB2D80;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB2D78;
	sub_82ECB740(ctx, base);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_82EB2D80:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb2d48
	if (ctx.cr6.lt) goto loc_82EB2D48;
loc_82EB2D94:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecb740
	ctx.lr = 0x82EB2D9C;
	sub_82ECB740(ctx, base);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
loc_82EB2DA0:
	// li r29,7
	ctx.r29.s64 = 7;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x82eb2e50
	if (!ctx.cr6.eq) goto loc_82EB2E50;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb32e4
	if (ctx.cr0.eq) goto loc_82EB32E4;
	// bl 0x82eccfd0
	ctx.lr = 0x82EB2DBC;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// beq 0x82eb2de4
	if (ctx.cr0.eq) goto loc_82EB2DE4;
	// li r27,5
	ctx.r27.s64 = 5;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bl 0x82eccec0
	ctx.lr = 0x82EB2DD8;
	sub_82ECCEC0(ctx, base);
	// stb r28,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r28.u8);
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// b 0x82eb2e60
	goto loc_82EB2E60;
loc_82EB2DE4:
	// bl 0x82ecd028
	ctx.lr = 0x82EB2DE8;
	sub_82ECD028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb2e18
	if (ctx.cr0.eq) goto loc_82EB2E18;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb2e08
	if (!ctx.cr6.eq) goto loc_82EB2E08;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB2E08;
	sub_82ECC6B0(ctx, base);
loc_82EB2E08:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_82EB2E10:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82eb32e4
	goto loc_82EB32E4;
loc_82EB2E18:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ori r11,r11,34008
	ctx.r11.u64 = ctx.r11.u64 | 34008;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb32e4
	if (!ctx.cr6.eq) goto loc_82EB32E4;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb2e44
	if (ctx.cr0.eq) goto loc_82EB2E44;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB2E44;
	sub_82ECC6B0(ctx, base);
loc_82EB2E44:
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_82EB2E50:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x82eb2e60
	if (ctx.cr6.eq) goto loc_82EB2E60;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// bne cr6,0x82eb2fdc
	if (!ctx.cr6.eq) goto loc_82EB2FDC;
loc_82EB2E60:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb2e74
	if (!ctx.cr0.eq) goto loc_82EB2E74;
loc_82EB2E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb32e8
	goto loc_82EB32E8;
loc_82EB2E74:
	// bl 0x82eccfd0
	ctx.lr = 0x82EB2E78;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb32e0
	if (ctx.cr0.eq) goto loc_82EB32E0;
	// lbz r11,125(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb2ea0
	if (!ctx.cr6.eq) goto loc_82EB2EA0;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82eb2e6c
	if (ctx.cr6.eq) goto loc_82EB2E6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82eb2e6c
	if (ctx.cr6.eq) goto loc_82EB2E6C;
loc_82EB2EA0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r24,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r24.u8);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bne cr6,0x82eb2ebc
	if (!ctx.cr6.eq) goto loc_82EB2EBC;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82EB2EBC:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-30984
	ctx.r10.s64 = ctx.r11.s64 + -30984;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82EB2EF8:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82eb2ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB2EF8;
	// lwz r3,632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addi r8,r31,140
	ctx.r8.s64 = ctx.r31.s64 + 140;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r28.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r31,728
	ctx.r5.s64 = ctx.r31.s64 + 728;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB2F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82eb2f54
	if (ctx.cr6.eq) goto loc_82EB2F54;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_82EB2F54:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb2f7c
	if (!ctx.cr0.eq) goto loc_82EB2F7C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,404(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82260978
	ctx.lr = 0x82EB2F6C;
	sub_82260978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82e7a720
	ctx.lr = 0x82EB2F78;
	sub_82E7A720(ctx, base);
	// b 0x82eb32e4
	goto loc_82EB32E4;
loc_82EB2F7C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82eb2fa8
	if (!ctx.cr6.eq) goto loc_82EB2FA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r24,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r24.u32);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82EB2F94:
	// bl 0x82260978
	ctx.lr = 0x82EB2F98;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e7a558
	ctx.lr = 0x82EB2FA4;
	sub_82E7A558(ctx, base);
	// b 0x82eb2e6c
	goto loc_82EB2E6C;
loc_82EB2FA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eb2fcc
	if (!ctx.cr6.eq) goto loc_82EB2FCC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x82eb2f94
	goto loc_82EB2F94;
loc_82EB2FCC:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stb r28,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r28.u8);
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
loc_82EB2FDC:
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7, ctx.xer);
	// bne cr6,0x82eb32e4
	if (!ctx.cr6.eq) goto loc_82EB32E4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82eccfd0
	ctx.lr = 0x82EB2FEC;
	sub_82ECCFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb32e0
	if (ctx.cr0.eq) goto loc_82EB32E0;
	// lbz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb300c
	if (!ctx.cr6.eq) goto loc_82EB300C;
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82eb2e6c
	if (ctx.cr6.eq) goto loc_82EB2E6C;
loc_82EB300C:
	// lwz r30,404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stb r24,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r24.u8);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82eb3044
	if (ctx.cr6.eq) goto loc_82EB3044;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82260978
	ctx.lr = 0x82EB3028;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82e6c3a0
	ctx.lr = 0x82EB3034;
	sub_82E6C3A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3044
	if (!ctx.cr0.eq) goto loc_82EB3044;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// b 0x82eb32e4
	goto loc_82EB32E4;
loc_82EB3044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eafa98
	ctx.lr = 0x82EB304C;
	sub_82EAFA98(ctx, base);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stb r24,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// bl 0x82ecd058
	ctx.lr = 0x82EB305C;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3070
	if (!ctx.cr0.eq) goto loc_82EB3070;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r24.u32);
	// b 0x82eb32e8
	goto loc_82EB32E8;
loc_82EB3070:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82ecd058
	ctx.lr = 0x82EB3080;
	sub_82ECD058(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3098
	if (!ctx.cr0.eq) goto loc_82EB3098;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82EB308C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// b 0x82eb32e8
	goto loc_82EB32E8;
loc_82EB3098:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// sth r28,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r28.u16);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lhz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// sth r28,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r28.u16);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3140
	if (ctx.cr0.eq) goto loc_82EB3140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82e964a8
	ctx.lr = 0x82EB3140;
	sub_82E964A8(ctx, base);
loc_82EB3140:
	// lbz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1088);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r7,2
	ctx.r7.s64 = 2;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82eb31a8
	if (ctx.cr0.eq) goto loc_82EB31A8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x82eb0818
	ctx.lr = 0x82EB3170;
	sub_82EB0818(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,404(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82260978
	ctx.lr = 0x82EB3184;
	sub_82260978(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82e7a7d0
	ctx.lr = 0x82EB3190;
	sub_82E7A7D0(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82eb32e4
	if (ctx.cr6.eq) goto loc_82EB32E4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82eb31d4
	if (ctx.cr6.eq) goto loc_82EB31D4;
loc_82EB31A0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82eb308c
	goto loc_82EB308C;
loc_82EB31A8:
	// bl 0x82eafea0
	ctx.lr = 0x82EB31AC;
	sub_82EAFEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,404(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82260978
	ctx.lr = 0x82EB31C0;
	sub_82260978(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82e7a7d0
	ctx.lr = 0x82EB31CC;
	sub_82E7A7D0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82eb31a0
	if (ctx.cr6.eq) goto loc_82EB31A0;
loc_82EB31D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r24,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r24.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r28,428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 428, ctx.r28.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r9,412(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,408(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 408);
	// b 0x82eb3238
	goto loc_82EB3238;
loc_82EB3224:
	// lhz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_82EB3238:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82eb3224
	if (!ctx.cr6.eq) goto loc_82EB3224;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb1c40
	ctx.lr = 0x82EB3250;
	sub_82EB1C40(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// lfs f13,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb328c
	if (!ctx.cr6.eq) goto loc_82EB328C;
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb328c
	if (!ctx.cr6.eq) goto loc_82EB328C;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb3290
	if (ctx.cr6.eq) goto loc_82EB3290;
loc_82EB328C:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82EB3290:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb32c4
	if (ctx.cr0.eq) goto loc_82EB32C4;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// stw r10,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
loc_82EB32C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r24,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// bl 0x82eaf4b0
	ctx.lr = 0x82EB32D8;
	sub_82EAF4B0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82eb2e10
	goto loc_82EB2E10;
loc_82EB32E0:
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
loc_82EB32E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB32E8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82EB32F4"))) PPC_WEAK_FUNC(sub_82EB32F4);
PPC_FUNC_IMPL(__imp__sub_82EB32F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB32F8"))) PPC_WEAK_FUNC(sub_82EB32F8);
PPC_FUNC_IMPL(__imp__sub_82EB32F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EB3300;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb339c
	if (ctx.cr0.eq) goto loc_82EB339C;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb3358
	if (!ctx.cr6.eq) goto loc_82EB3358;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb3358
	if (!ctx.cr6.eq) goto loc_82EB3358;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f13,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb335c
	if (ctx.cr6.eq) goto loc_82EB335C;
loc_82EB3358:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB335C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3378
	if (!ctx.cr0.eq) goto loc_82EB3378;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3378
	if (!ctx.cr0.eq) goto loc_82EB3378;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb33c0
	if (ctx.cr0.eq) goto loc_82EB33C0;
loc_82EB3378:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eb33a4
	if (!ctx.cr6.eq) goto loc_82EB33A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// bl 0x82eafa98
	ctx.lr = 0x82EB3398;
	sub_82EAFA98(ctx, base);
	// b 0x82eb33a4
	goto loc_82EB33A4;
loc_82EB339C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r11.u8);
loc_82EB33A4:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
loc_82EB33C0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eb33e4
	if (!ctx.cr6.eq) goto loc_82EB33E4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2c40
	ctx.lr = 0x82EB33E0;
	sub_82EB2C40(ctx, base);
	// b 0x82eb33fc
	goto loc_82EB33FC;
loc_82EB33E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eb33fc
	if (!ctx.cr6.eq) goto loc_82EB33FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb2418
	ctx.lr = 0x82EB33FC;
	sub_82EB2418(ctx, base);
loc_82EB33FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EB3404"))) PPC_WEAK_FUNC(sub_82EB3404);
PPC_FUNC_IMPL(__imp__sub_82EB3404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3408"))) PPC_WEAK_FUNC(sub_82EB3408);
PPC_FUNC_IMPL(__imp__sub_82EB3408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB3410;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x82e7f118
	ctx.lr = 0x82EB3420;
	sub_82E7F118(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r9,r31,260
	ctx.r9.s64 = ctx.r31.s64 + 260;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r8,r11,-22304
	ctx.r8.s64 = ctx.r11.s64 + -22304;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r7,r7,-22312
	ctx.r7.s64 = ctx.r7.s64 + -22312;
	// addi r6,r6,-22312
	ctx.r6.s64 = ctx.r6.s64 + -22312;
	// addi r5,r5,-22312
	ctx.r5.s64 = ctx.r5.s64 + -22312;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r8,r8,-22312
	ctx.r8.s64 = ctx.r8.s64 + -22312;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// addi r10,r31,636
	ctx.r10.s64 = ctx.r31.s64 + 636;
	// stfs f0,80(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// stfs f0,88(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stw r7,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r7.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r6,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r6.u32);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r5,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r5.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r8,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r8.u32);
	// addi r8,r9,-22312
	ctx.r8.s64 = ctx.r9.s64 + -22312;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// addi r7,r9,-22312
	ctx.r7.s64 = ctx.r9.s64 + -22312;
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r8,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r8.u32);
	// addi r6,r9,-22312
	ctx.r6.s64 = ctx.r9.s64 + -22312;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r7,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r7.u32);
	// addi r5,r9,-22312
	ctx.r5.s64 = ctx.r9.s64 + -22312;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// addi r4,r9,-22312
	ctx.r4.s64 = ctx.r9.s64 + -22312;
	// stw r6,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r6.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// addi r3,r9,-22312
	ctx.r3.s64 = ctx.r9.s64 + -22312;
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r5,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r5.u32);
	// addi r30,r9,-22312
	ctx.r30.s64 = ctx.r9.s64 + -22312;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r4,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r4.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r3,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r3.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EB35B0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82eb35b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB35B0;
	// addi r7,r31,728
	ctx.r7.s64 = ctx.r31.s64 + 728;
	// stb r11,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r11.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EB35E0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb35e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB35E0;
	// addi r8,r31,820
	ctx.r8.s64 = ctx.r31.s64 + 820;
	// stb r11,88(r7)
	PPC_STORE_U8(ctx.r7.u32 + 88, ctx.r11.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB3610:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82eb3610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB3610;
	// addi r10,r31,932
	ctx.r10.s64 = ctx.r31.s64 + 932;
	// stb r11,88(r8)
	PPC_STORE_U8(ctx.r8.u32 + 88, ctx.r11.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82EB3640:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb3640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB3640;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r11,88(r10)
	PPC_STORE_U8(ctx.r10.u32 + 88, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30992
	ctx.r9.s64 = ctx.r9.s64 + -30992;
	// stfs f0,1028(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stfs f0,1032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1032, temp.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stfs f0,1036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1036, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,1064(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stfs f0,1068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1068, temp.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r3,500
	ctx.r3.s64 = 500;
	// lfs f13,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,-25504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25504);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-25504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25504, ctx.r10.u32);
	// stfs f13,1100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r4.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// lfs f0,3040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r4,r11,-4424
	ctx.r4.s64 = ctx.r11.s64 + -4424;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stb r9,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r9.u8);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stb r30,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r30.u8);
	// stw r6,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r6.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stb r30,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r30.u8);
	// stb r9,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r9.u8);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stb r30,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r30.u8);
	// stb r30,1088(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1088, ctx.r30.u8);
	// stw r3,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r3.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stb r30,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r30.u8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82EB37A0;
	sub_82267BE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -720);
	// addi r4,r11,27544
	ctx.r4.s64 = ctx.r11.s64 + 27544;
	// bl 0x82267be0
	ctx.lr = 0x82EB37B4;
	sub_82267BE0(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB37F4"))) PPC_WEAK_FUNC(sub_82EB37F4);
PPC_FUNC_IMPL(__imp__sub_82EB37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB37F8"))) PPC_WEAK_FUNC(sub_82EB37F8);
PPC_FUNC_IMPL(__imp__sub_82EB37F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-25468
	ctx.r3.s64 = ctx.r11.s64 + -25468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3804"))) PPC_WEAK_FUNC(sub_82EB3804);
PPC_FUNC_IMPL(__imp__sub_82EB3804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3808"))) PPC_WEAK_FUNC(sub_82EB3808);
PPC_FUNC_IMPL(__imp__sub_82EB3808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3810"))) PPC_WEAK_FUNC(sub_82EB3810);
PPC_FUNC_IMPL(__imp__sub_82EB3810) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82eb384c
	if (!ctx.cr0.eq) goto loc_82EB384C;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb384c
	if (ctx.cr0.eq) goto loc_82EB384C;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82ecf1b0
	sub_82ECF1B0(ctx, base);
	return;
loc_82EB384C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3854"))) PPC_WEAK_FUNC(sub_82EB3854);
PPC_FUNC_IMPL(__imp__sub_82EB3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB3858"))) PPC_WEAK_FUNC(sub_82EB3858);
PPC_FUNC_IMPL(__imp__sub_82EB3858) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3860"))) PPC_WEAK_FUNC(sub_82EB3860);
PPC_FUNC_IMPL(__imp__sub_82EB3860) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,918(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 918);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3868"))) PPC_WEAK_FUNC(sub_82EB3868);
PPC_FUNC_IMPL(__imp__sub_82EB3868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EB3870;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22304
	ctx.r11.s64 = ctx.r11.s64 + -22304;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-31952
	ctx.r30.s64 = -2094006272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-25504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25504);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-25504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25504, ctx.r11.u32);
	// bne 0x82eb390c
	if (!ctx.cr0.eq) goto loc_82EB390C;
	// lis r29,-31947
	ctx.r29.s64 = -2093678592;
	// lwz r3,-25500(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb38c4
	if (ctx.cr6.eq) goto loc_82EB38C4;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB38BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-25500(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25500, ctx.r11.u32);
loc_82EB38C4:
	// lis r29,-31947
	ctx.r29.s64 = -2093678592;
	// lwz r3,-25496(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb38e8
	if (ctx.cr6.eq) goto loc_82EB38E8;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB38E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-25496(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25496, ctx.r11.u32);
loc_82EB38E8:
	// lis r29,-31947
	ctx.r29.s64 = -2093678592;
	// lwz r3,-25492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb390c
	if (ctx.cr6.eq) goto loc_82EB390C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,-25492(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25492, ctx.r11.u32);
loc_82EB390C:
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82eb3934
	if (ctx.cr0.eq) goto loc_82EB3934;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaf610
	ctx.lr = 0x82EB3920;
	sub_82EAF610(ctx, base);
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82EB3934:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3950
	if (ctx.cr0.eq) goto loc_82EB3950;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB394C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
loc_82EB3950:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb396c
	if (ctx.cr0.eq) goto loc_82EB396C;
	// lwz r11,-9868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82EB396C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb39c4
	if (!ctx.cr6.gt) goto loc_82EB39C4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3980:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb39b0
	if (ctx.cr6.eq) goto loc_82EB39B0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb39b0
	if (ctx.cr0.eq) goto loc_82EB39B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB39B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB39B0:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3980
	if (ctx.cr6.lt) goto loc_82EB3980;
loc_82EB39C4:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3a1c
	if (!ctx.cr6.gt) goto loc_82EB3A1C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB39D8:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3a08
	if (ctx.cr6.eq) goto loc_82EB3A08;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3a08
	if (ctx.cr0.eq) goto loc_82EB3A08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3A08:
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb39d8
	if (ctx.cr6.lt) goto loc_82EB39D8;
loc_82EB3A1C:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3a74
	if (!ctx.cr6.gt) goto loc_82EB3A74;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3A30:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3a60
	if (ctx.cr6.eq) goto loc_82EB3A60;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3a60
	if (ctx.cr0.eq) goto loc_82EB3A60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3A60:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3a30
	if (ctx.cr6.lt) goto loc_82EB3A30;
loc_82EB3A74:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3acc
	if (!ctx.cr6.gt) goto loc_82EB3ACC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3A88:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3ab8
	if (ctx.cr6.eq) goto loc_82EB3AB8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3ab8
	if (ctx.cr0.eq) goto loc_82EB3AB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3AB8:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3a88
	if (ctx.cr6.lt) goto loc_82EB3A88;
loc_82EB3ACC:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3b24
	if (!ctx.cr6.gt) goto loc_82EB3B24;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3AE0:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3b10
	if (ctx.cr6.eq) goto loc_82EB3B10;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3b10
	if (ctx.cr0.eq) goto loc_82EB3B10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3B10:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3ae0
	if (ctx.cr6.lt) goto loc_82EB3AE0;
loc_82EB3B24:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3b7c
	if (!ctx.cr6.gt) goto loc_82EB3B7C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3B38:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3b68
	if (ctx.cr6.eq) goto loc_82EB3B68;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3b68
	if (ctx.cr0.eq) goto loc_82EB3B68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3B68:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3b38
	if (ctx.cr6.lt) goto loc_82EB3B38;
loc_82EB3B7C:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3bd4
	if (!ctx.cr6.gt) goto loc_82EB3BD4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3B90:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3bc0
	if (ctx.cr6.eq) goto loc_82EB3BC0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3bc0
	if (ctx.cr0.eq) goto loc_82EB3BC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3BC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3BC0:
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3b90
	if (ctx.cr6.lt) goto loc_82EB3B90;
loc_82EB3BD4:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3c2c
	if (!ctx.cr6.gt) goto loc_82EB3C2C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3BE8:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3c18
	if (ctx.cr6.eq) goto loc_82EB3C18;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3c18
	if (ctx.cr0.eq) goto loc_82EB3C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3C18:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3be8
	if (ctx.cr6.lt) goto loc_82EB3BE8;
loc_82EB3C2C:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3c84
	if (!ctx.cr6.gt) goto loc_82EB3C84;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3C40:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3c70
	if (ctx.cr6.eq) goto loc_82EB3C70;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3c70
	if (ctx.cr0.eq) goto loc_82EB3C70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3C70:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3c40
	if (ctx.cr6.lt) goto loc_82EB3C40;
loc_82EB3C84:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3cdc
	if (!ctx.cr6.gt) goto loc_82EB3CDC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3C98:
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3cc8
	if (ctx.cr6.eq) goto loc_82EB3CC8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3cc8
	if (ctx.cr0.eq) goto loc_82EB3CC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3CC8:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3c98
	if (ctx.cr6.lt) goto loc_82EB3C98;
loc_82EB3CDC:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb3d34
	if (!ctx.cr6.gt) goto loc_82EB3D34;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82EB3CF0:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb3d20
	if (ctx.cr6.eq) goto loc_82EB3D20;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3d20
	if (ctx.cr0.eq) goto loc_82EB3D20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB3D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB3D20:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb3cf0
	if (ctx.cr6.lt) goto loc_82EB3CF0;
loc_82EB3D34:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb3d60
	if (ctx.cr0.eq) goto loc_82EB3D60;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3d60
	if (ctx.cr0.eq) goto loc_82EB3D60;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-3824
	ctx.r4.s64 = ctx.r11.s64 + -3824;
	// bl 0x82ec64f8
	ctx.lr = 0x82EB3D5C;
	sub_82EC64F8(ctx, base);
	// stb r28,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r28.u8);
loc_82EB3D60:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eb3d88
	if (ctx.cr0.eq) goto loc_82EB3D88;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3d88
	if (ctx.cr0.eq) goto loc_82EB3D88;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb3d88
	if (ctx.cr0.eq) goto loc_82EB3D88;
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB3D88;
	sub_82ECC6B0(ctx, base);
loc_82EB3D88:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eb3db4
	if (ctx.cr0.eq) goto loc_82EB3DB4;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb3db4
	if (ctx.cr0.eq) goto loc_82EB3DB4;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb3db4
	if (ctx.cr0.eq) goto loc_82EB3DB4;
	// bl 0x82ecc6b0
	ctx.lr = 0x82EB3DB4;
	sub_82ECC6B0(ctx, base);
loc_82EB3DB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3DE0;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3DE8;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3DF0;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3DF8;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E00;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E08;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E10;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E18;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E20;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E28;
	sub_82EB2AD0(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82eb2ad0
	ctx.lr = 0x82EB3E30;
	sub_82EB2AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7f090
	ctx.lr = 0x82EB3E38;
	sub_82E7F090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EB3E40"))) PPC_WEAK_FUNC(sub_82EB3E40);
PPC_FUNC_IMPL(__imp__sub_82EB3E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EB3E48;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,-720(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -720);
	// lfs f10,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb3e78
	if (ctx.cr0.eq) goto loc_82EB3E78;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb3e7c
	goto loc_82EB3E7C;
loc_82EB3E78:
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
loc_82EB3E7C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,27524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
loc_82EB3E94:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82eb3ea0
	if (ctx.cr6.lt) goto loc_82EB3EA0;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82EB3EA0:
	// fcmpu cr6,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f12.f64);
	// bne cr6,0x82eb3e94
	if (!ctx.cr6.eq) goto loc_82EB3E94;
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,-720(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb3ec0
	if (ctx.cr0.eq) goto loc_82EB3EC0;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82eb3ec4
	goto loc_82EB3EC4;
loc_82EB3EC0:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
loc_82EB3EC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82EB3ED4:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82eb3ee0
	if (ctx.cr6.lt) goto loc_82EB3EE0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB3EE0:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb3ed4
	if (!ctx.cr6.eq) goto loc_82EB3ED4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stfs f10,1084(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,3052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f13,1056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// stb r25,413(r31)
	PPC_STORE_U8(ctx.r31.u32 + 413, ctx.r25.u8);
	// stb r11,412(r31)
	PPC_STORE_U8(ctx.r31.u32 + 412, ctx.r11.u8);
	// bl 0x82e7ebc0
	ctx.lr = 0x82EB3F14;
	sub_82E7EBC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb3f24
	if (!ctx.cr0.eq) goto loc_82EB3F24;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb4b74
	goto loc_82EB4B74;
loc_82EB3F24:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82eb3f44
	if (!ctx.cr6.gt) goto loc_82EB3F44;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EB3F44:
	// bl 0x82625f08
	ctx.lr = 0x82EB3F48;
	sub_82625F08(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82eb3f7c
	if (!ctx.cr6.gt) goto loc_82EB3F7C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82EB3F60:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82eb3f60
	if (ctx.cr6.lt) goto loc_82EB3F60;
loc_82EB3F7C:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82625f08
	ctx.lr = 0x82EB3F84;
	sub_82625F08(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r30,-31947
	ctx.r30.s64 = -2093678592;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,-25500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4008
	if (!ctx.cr6.eq) goto loc_82EB4008;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// ori r10,r10,37449
	ctx.r10.u64 = ctx.r10.u64 | 37449;
	// lwz r11,-8712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8712);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 * 28;
	// ble cr6,0x82eb3fc0
	if (!ctx.cr6.gt) goto loc_82EB3FC0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EB3FC0:
	// bl 0x82625f08
	ctx.lr = 0x82EB3FC4;
	sub_82625F08(ctx, base);
	// lwz r11,-8712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8712);
	// stw r3,-25500(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25500, ctx.r3.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82eb3fdc
	if (!ctx.cr6.gt) goto loc_82EB3FDC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EB3FDC:
	// bl 0x82625f08
	ctx.lr = 0x82EB3FE0;
	sub_82625F08(ctx, base);
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-8712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8712);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// stw r3,-25496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25496, ctx.r3.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82eb3ffc
	if (!ctx.cr6.gt) goto loc_82EB3FFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EB3FFC:
	// bl 0x82625f08
	ctx.lr = 0x82EB4000;
	sub_82625F08(ctx, base);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// stw r3,-25492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -25492, ctx.r3.u32);
loc_82EB4008:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,452
	ctx.r3.s64 = 452;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eb4034
	if (!ctx.cr6.eq) goto loc_82EB4034;
	// bl 0x82625f08
	ctx.lr = 0x82EB401C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb4060
	if (ctx.cr0.eq) goto loc_82EB4060;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// li r4,14336
	ctx.r4.s64 = 14336;
	// b 0x82eb4058
	goto loc_82EB4058;
loc_82EB4034:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mulli r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 * 24;
	// mulli r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 * 20;
	// bl 0x82625f08
	ctx.lr = 0x82EB4044;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb4060
	if (ctx.cr0.eq) goto loc_82EB4060;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82EB4058:
	// bl 0x82eafdf0
	ctx.lr = 0x82EB405C;
	sub_82EAFDF0(ctx, base);
	// b 0x82eb4064
	goto loc_82EB4064;
loc_82EB4060:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4064:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r30,r11,-22112
	ctx.r30.s64 = ctx.r11.s64 + -22112;
	// bl 0x82260978
	ctx.lr = 0x82EB4074;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e79c50
	ctx.lr = 0x82EB407C;
	sub_82E79C50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// addi r30,r11,-22148
	ctx.r30.s64 = ctx.r11.s64 + -22148;
	// bl 0x82260978
	ctx.lr = 0x82EB408C;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e79c50
	ctx.lr = 0x82EB4094;
	sub_82E79C50(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r27,r31,432
	ctx.r27.s64 = ctx.r31.s64 + 432;
	// stw r3,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,-22156
	ctx.r26.s64 = ctx.r11.s64 + -22156;
	// bne cr6,0x82eb419c
	if (!ctx.cr6.eq) goto loc_82EB419C;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4134
	if (!ctx.cr6.gt) goto loc_82EB4134;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-8576
	ctx.r28.s64 = ctx.r11.s64 + -8576;
loc_82EB40CC:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB40E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB40E4:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb411c
	if (ctx.cr6.eq) goto loc_82EB411C;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb40e4
	if (!ctx.cr0.eq) goto loc_82EB40E4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB40FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb4124
	if (!ctx.cr0.eq) goto loc_82EB4124;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb40cc
	if (ctx.cr6.lt) goto loc_82EB40CC;
	// b 0x82eb4134
	goto loc_82EB4134;
loc_82EB411C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb40fc
	goto loc_82EB40FC;
loc_82EB4124:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4134:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb419c
	if (!ctx.cr6.eq) goto loc_82EB419C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	ctx.lr = 0x82EB4148;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb4174
	if (ctx.cr0.eq) goto loc_82EB4174;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB4160;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22600
	ctx.r11.s64 = ctx.r11.s64 + -22600;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4178
	goto loc_82EB4178;
loc_82EB4174:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4178:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82e80980
	ctx.lr = 0x82EB419C;
	sub_82E80980(ctx, base);
loc_82EB419C:
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// addi r27,r31,452
	ctx.r27.s64 = ctx.r31.s64 + 452;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4298
	if (!ctx.cr6.eq) goto loc_82EB4298;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4230
	if (!ctx.cr6.gt) goto loc_82EB4230;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-9404
	ctx.r28.s64 = ctx.r11.s64 + -9404;
loc_82EB41C8:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB41E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB41E0:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb4218
	if (ctx.cr6.eq) goto loc_82EB4218;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb41e0
	if (!ctx.cr0.eq) goto loc_82EB41E0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB41F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb4220
	if (!ctx.cr0.eq) goto loc_82EB4220;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb41c8
	if (ctx.cr6.lt) goto loc_82EB41C8;
	// b 0x82eb4230
	goto loc_82EB4230;
loc_82EB4218:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb41f8
	goto loc_82EB41F8;
loc_82EB4220:
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4230:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4298
	if (!ctx.cr6.eq) goto loc_82EB4298;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82625f08
	ctx.lr = 0x82EB4244;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb4270
	if (ctx.cr0.eq) goto loc_82EB4270;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB425C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4274
	goto loc_82EB4274;
loc_82EB4270:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4274:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB428C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82e80980
	ctx.lr = 0x82EB4298;
	sub_82E80980(ctx, base);
loc_82EB4298:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// addi r27,r31,472
	ctx.r27.s64 = ctx.r31.s64 + 472;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4394
	if (!ctx.cr6.eq) goto loc_82EB4394;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb432c
	if (!ctx.cr6.gt) goto loc_82EB432C;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-9956
	ctx.r28.s64 = ctx.r11.s64 + -9956;
loc_82EB42C4:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB42DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB42DC:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb4314
	if (ctx.cr6.eq) goto loc_82EB4314;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb42dc
	if (!ctx.cr0.eq) goto loc_82EB42DC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB42F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb431c
	if (!ctx.cr0.eq) goto loc_82EB431C;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb42c4
	if (ctx.cr6.lt) goto loc_82EB42C4;
	// b 0x82eb432c
	goto loc_82EB432C;
loc_82EB4314:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb42f4
	goto loc_82EB42F4;
loc_82EB431C:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB432C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4394
	if (!ctx.cr6.eq) goto loc_82EB4394;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	ctx.lr = 0x82EB4340;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb436c
	if (ctx.cr0.eq) goto loc_82EB436C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB4358;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22552
	ctx.r11.s64 = ctx.r11.s64 + -22552;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4370
	goto loc_82EB4370;
loc_82EB436C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4370:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82e80980
	ctx.lr = 0x82EB4394;
	sub_82E80980(ctx, base);
loc_82EB4394:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r27,r31,492
	ctx.r27.s64 = ctx.r31.s64 + 492;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb447c
	if (!ctx.cr6.eq) goto loc_82EB447C;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4428
	if (!ctx.cr6.gt) goto loc_82EB4428;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-10232
	ctx.r28.s64 = ctx.r11.s64 + -10232;
loc_82EB43C0:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB43D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB43D8:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb4410
	if (ctx.cr6.eq) goto loc_82EB4410;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb43d8
	if (!ctx.cr0.eq) goto loc_82EB43D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB43F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb4418
	if (!ctx.cr0.eq) goto loc_82EB4418;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb43c0
	if (ctx.cr6.lt) goto loc_82EB43C0;
	// b 0x82eb4428
	goto loc_82EB4428;
loc_82EB4410:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb43f0
	goto loc_82EB43F0;
loc_82EB4418:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4428:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb447c
	if (!ctx.cr6.eq) goto loc_82EB447C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82625f08
	ctx.lr = 0x82EB443C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb4454
	if (ctx.cr0.eq) goto loc_82EB4454;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82eaedb0
	ctx.lr = 0x82EB4450;
	sub_82EAEDB0(ctx, base);
	// b 0x82eb4458
	goto loc_82EB4458;
loc_82EB4454:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4458:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x82e80980
	ctx.lr = 0x82EB447C;
	sub_82E80980(ctx, base);
loc_82EB447C:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r27,r31,512
	ctx.r27.s64 = ctx.r31.s64 + 512;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4578
	if (!ctx.cr6.eq) goto loc_82EB4578;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4510
	if (!ctx.cr6.gt) goto loc_82EB4510;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-10508
	ctx.r28.s64 = ctx.r11.s64 + -10508;
loc_82EB44A8:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB44C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB44C0:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb44f8
	if (ctx.cr6.eq) goto loc_82EB44F8;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb44c0
	if (!ctx.cr0.eq) goto loc_82EB44C0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB44D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb4500
	if (!ctx.cr0.eq) goto loc_82EB4500;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb44a8
	if (ctx.cr6.lt) goto loc_82EB44A8;
	// b 0x82eb4510
	goto loc_82EB4510;
loc_82EB44F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb44d8
	goto loc_82EB44D8;
loc_82EB4500:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4510:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4578
	if (!ctx.cr6.eq) goto loc_82EB4578;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	ctx.lr = 0x82EB4524;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb4550
	if (ctx.cr0.eq) goto loc_82EB4550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB453C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22476
	ctx.r11.s64 = ctx.r11.s64 + -22476;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4554
	goto loc_82EB4554;
loc_82EB4550:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4554:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB456C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82e80980
	ctx.lr = 0x82EB4578;
	sub_82E80980(ctx, base);
loc_82EB4578:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// addi r27,r31,532
	ctx.r27.s64 = ctx.r31.s64 + 532;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4674
	if (!ctx.cr6.eq) goto loc_82EB4674;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb460c
	if (!ctx.cr6.gt) goto loc_82EB460C;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-11060
	ctx.r28.s64 = ctx.r11.s64 + -11060;
loc_82EB45A4:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB45BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB45BC:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb45f4
	if (ctx.cr6.eq) goto loc_82EB45F4;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb45bc
	if (!ctx.cr0.eq) goto loc_82EB45BC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB45D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb45fc
	if (!ctx.cr0.eq) goto loc_82EB45FC;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb45a4
	if (ctx.cr6.lt) goto loc_82EB45A4;
	// b 0x82eb460c
	goto loc_82EB460C;
loc_82EB45F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb45d4
	goto loc_82EB45D4;
loc_82EB45FC:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB460C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4674
	if (!ctx.cr6.eq) goto loc_82EB4674;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82625f08
	ctx.lr = 0x82EB4620;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb464c
	if (ctx.cr0.eq) goto loc_82EB464C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB4638;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22500
	ctx.r11.s64 = ctx.r11.s64 + -22500;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4650
	goto loc_82EB4650;
loc_82EB464C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4650:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82e80980
	ctx.lr = 0x82EB4674;
	sub_82E80980(ctx, base);
loc_82EB4674:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// addi r27,r31,552
	ctx.r27.s64 = ctx.r31.s64 + 552;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4774
	if (!ctx.cr6.eq) goto loc_82EB4774;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4708
	if (!ctx.cr6.gt) goto loc_82EB4708;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-11336
	ctx.r28.s64 = ctx.r11.s64 + -11336;
loc_82EB46A0:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB46B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB46B8:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb46f0
	if (ctx.cr6.eq) goto loc_82EB46F0;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb46b8
	if (!ctx.cr0.eq) goto loc_82EB46B8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB46D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb46f8
	if (!ctx.cr0.eq) goto loc_82EB46F8;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb46a0
	if (ctx.cr6.lt) goto loc_82EB46A0;
	// b 0x82eb4708
	goto loc_82EB4708;
loc_82EB46F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb46d0
	goto loc_82EB46D0;
loc_82EB46F8:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4708:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4774
	if (!ctx.cr6.eq) goto loc_82EB4774;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	ctx.lr = 0x82EB471C;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb474c
	if (ctx.cr0.eq) goto loc_82EB474C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB4734;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// addi r11,r11,-22408
	ctx.r11.s64 = ctx.r11.s64 + -22408;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4750
	goto loc_82EB4750;
loc_82EB474C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4750:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x82e80980
	ctx.lr = 0x82EB4774;
	sub_82E80980(ctx, base);
loc_82EB4774:
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// addi r27,r31,612
	ctx.r27.s64 = ctx.r31.s64 + 612;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb485c
	if (!ctx.cr6.eq) goto loc_82EB485C;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4808
	if (!ctx.cr6.gt) goto loc_82EB4808;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-13288
	ctx.r28.s64 = ctx.r11.s64 + -13288;
loc_82EB47A0:
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB47B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB47B8:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb47f0
	if (ctx.cr6.eq) goto loc_82EB47F0;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb47b8
	if (!ctx.cr0.eq) goto loc_82EB47B8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB47D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb47f8
	if (!ctx.cr0.eq) goto loc_82EB47F8;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb47a0
	if (ctx.cr6.lt) goto loc_82EB47A0;
	// b 0x82eb4808
	goto loc_82EB4808;
loc_82EB47F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb47d0
	goto loc_82EB47D0;
loc_82EB47F8:
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4808:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb485c
	if (!ctx.cr6.eq) goto loc_82EB485C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82625f08
	ctx.lr = 0x82EB481C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb4834
	if (ctx.cr0.eq) goto loc_82EB4834;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82eaf048
	ctx.lr = 0x82EB4830;
	sub_82EAF048(ctx, base);
	// b 0x82eb4838
	goto loc_82EB4838;
loc_82EB4834:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4838:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x82e80980
	ctx.lr = 0x82EB485C;
	sub_82E80980(ctx, base);
loc_82EB485C:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// addi r27,r31,592
	ctx.r27.s64 = ctx.r31.s64 + 592;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4944
	if (!ctx.cr6.eq) goto loc_82EB4944;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb48f0
	if (!ctx.cr6.gt) goto loc_82EB48F0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-30748
	ctx.r28.s64 = ctx.r11.s64 + -30748;
loc_82EB4888:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB48A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB48A0:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb48d8
	if (ctx.cr6.eq) goto loc_82EB48D8;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb48a0
	if (!ctx.cr0.eq) goto loc_82EB48A0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB48B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb48e0
	if (!ctx.cr0.eq) goto loc_82EB48E0;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb4888
	if (ctx.cr6.lt) goto loc_82EB4888;
	// b 0x82eb48f0
	goto loc_82EB48F0;
loc_82EB48D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb48b8
	goto loc_82EB48B8;
loc_82EB48E0:
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB48F0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4944
	if (!ctx.cr6.eq) goto loc_82EB4944;
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82625f08
	ctx.lr = 0x82EB4904;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb491c
	if (ctx.cr0.eq) goto loc_82EB491C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82ed4678
	ctx.lr = 0x82EB4918;
	sub_82ED4678(ctx, base);
	// b 0x82eb4920
	goto loc_82EB4920;
loc_82EB491C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4920:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82e80980
	ctx.lr = 0x82EB4944;
	sub_82E80980(ctx, base);
loc_82EB4944:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r27,r31,572
	ctx.r27.s64 = ctx.r31.s64 + 572;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4a2c
	if (!ctx.cr6.eq) goto loc_82EB4A2C;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb49d8
	if (!ctx.cr6.gt) goto loc_82EB49D8;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-12180
	ctx.r28.s64 = ctx.r11.s64 + -12180;
loc_82EB4970:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB4988:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb49c0
	if (ctx.cr6.eq) goto loc_82EB49C0;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb4988
	if (!ctx.cr0.eq) goto loc_82EB4988;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB49A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb49c8
	if (!ctx.cr0.eq) goto loc_82EB49C8;
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb4970
	if (ctx.cr6.lt) goto loc_82EB4970;
	// b 0x82eb49d8
	goto loc_82EB49D8;
loc_82EB49C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb49a0
	goto loc_82EB49A0;
loc_82EB49C8:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB49D8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4a2c
	if (!ctx.cr6.eq) goto loc_82EB4A2C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82625f08
	ctx.lr = 0x82EB49EC;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb4a04
	if (ctx.cr0.eq) goto loc_82EB4A04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82eaee40
	ctx.lr = 0x82EB4A00;
	sub_82EAEE40(ctx, base);
	// b 0x82eb4a08
	goto loc_82EB4A08;
loc_82EB4A04:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4A08:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x82e80980
	ctx.lr = 0x82EB4A2C;
	sub_82E80980(ctx, base);
loc_82EB4A2C:
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addi r27,r31,632
	ctx.r27.s64 = ctx.r31.s64 + 632;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4b28
	if (!ctx.cr6.eq) goto loc_82EB4B28;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb4ac0
	if (!ctx.cr6.gt) goto loc_82EB4AC0;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r11,-13840
	ctx.r28.s64 = ctx.r11.s64 + -13840;
loc_82EB4A58:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB4A70:
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb4aa8
	if (ctx.cr6.eq) goto loc_82EB4AA8;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb4a70
	if (!ctx.cr0.eq) goto loc_82EB4A70;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB4A88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb4ab0
	if (!ctx.cr0.eq) goto loc_82EB4AB0;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb4a58
	if (ctx.cr6.lt) goto loc_82EB4A58;
	// b 0x82eb4ac0
	goto loc_82EB4AC0;
loc_82EB4AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb4a88
	goto loc_82EB4A88;
loc_82EB4AB0:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82EB4AC0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb4b28
	if (!ctx.cr6.eq) goto loc_82EB4B28;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	ctx.lr = 0x82EB4AD4;
	sub_82625F08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82eb4b00
	if (ctx.cr0.eq) goto loc_82EB4B00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB4AEC;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22336
	ctx.r11.s64 = ctx.r11.s64 + -22336;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82eb4b04
	goto loc_82EB4B04;
loc_82EB4B00:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82EB4B04:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x82e80980
	ctx.lr = 0x82EB4B28;
	sub_82E80980(ctx, base);
loc_82EB4B28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,1048
	ctx.r4.s64 = ctx.r31.s64 + 1048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB4B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-22180
	ctx.r30.s64 = ctx.r11.s64 + -22180;
	// bl 0x82260978
	ctx.lr = 0x82EB4B60;
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e79d20
	ctx.lr = 0x82EB4B68;
	sub_82E79D20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82EB4B74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82EB4B7C"))) PPC_WEAK_FUNC(sub_82EB4B7C);
PPC_FUNC_IMPL(__imp__sub_82EB4B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4B80"))) PPC_WEAK_FUNC(sub_82EB4B80);
PPC_FUNC_IMPL(__imp__sub_82EB4B80) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-24164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-25192
	ctx.r31.s64 = ctx.r9.s64 + -25192;
	// bne 0x82eb4bdc
	if (!ctx.cr0.eq) goto loc_82EB4BDC;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8700(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8700);
	// stw r11,-24164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24164, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4bc8
	if (ctx.cr0.eq) goto loc_82EB4BC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4BC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5312
	ctx.r3.s64 = ctx.r10.s64 + 5312;
	// stb r11,-8700(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8700, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4BDC;
	sub_82CA3700(ctx, base);
loc_82EB4BDC:
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

__attribute__((alias("__imp__sub_82EB4BF4"))) PPC_WEAK_FUNC(sub_82EB4BF4);
PPC_FUNC_IMPL(__imp__sub_82EB4BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4BF8"))) PPC_WEAK_FUNC(sub_82EB4BF8);
PPC_FUNC_IMPL(__imp__sub_82EB4BF8) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-23132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-24160
	ctx.r31.s64 = ctx.r9.s64 + -24160;
	// bne 0x82eb4c54
	if (!ctx.cr0.eq) goto loc_82EB4C54;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8699(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8699);
	// stw r11,-23132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23132, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4c40
	if (ctx.cr0.eq) goto loc_82EB4C40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4C40:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5288
	ctx.r3.s64 = ctx.r10.s64 + 5288;
	// stb r11,-8699(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8699, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4C54;
	sub_82CA3700(ctx, base);
loc_82EB4C54:
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

__attribute__((alias("__imp__sub_82EB4C6C"))) PPC_WEAK_FUNC(sub_82EB4C6C);
PPC_FUNC_IMPL(__imp__sub_82EB4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4C70"))) PPC_WEAK_FUNC(sub_82EB4C70);
PPC_FUNC_IMPL(__imp__sub_82EB4C70) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-22100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-23128
	ctx.r31.s64 = ctx.r9.s64 + -23128;
	// bne 0x82eb4ccc
	if (!ctx.cr0.eq) goto loc_82EB4CCC;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8698(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8698);
	// stw r11,-22100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22100, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4cb8
	if (ctx.cr0.eq) goto loc_82EB4CB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5264
	ctx.r3.s64 = ctx.r10.s64 + 5264;
	// stb r11,-8698(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8698, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4CCC;
	sub_82CA3700(ctx, base);
loc_82EB4CCC:
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

__attribute__((alias("__imp__sub_82EB4CE4"))) PPC_WEAK_FUNC(sub_82EB4CE4);
PPC_FUNC_IMPL(__imp__sub_82EB4CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4CE8"))) PPC_WEAK_FUNC(sub_82EB4CE8);
PPC_FUNC_IMPL(__imp__sub_82EB4CE8) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-21068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-22096
	ctx.r31.s64 = ctx.r9.s64 + -22096;
	// bne 0x82eb4d44
	if (!ctx.cr0.eq) goto loc_82EB4D44;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8696(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8696);
	// stw r11,-21068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21068, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4d30
	if (ctx.cr0.eq) goto loc_82EB4D30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4D30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5240
	ctx.r3.s64 = ctx.r10.s64 + 5240;
	// stb r11,-8696(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8696, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4D44;
	sub_82CA3700(ctx, base);
loc_82EB4D44:
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

__attribute__((alias("__imp__sub_82EB4D5C"))) PPC_WEAK_FUNC(sub_82EB4D5C);
PPC_FUNC_IMPL(__imp__sub_82EB4D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4D60"))) PPC_WEAK_FUNC(sub_82EB4D60);
PPC_FUNC_IMPL(__imp__sub_82EB4D60) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-20036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-21064
	ctx.r31.s64 = ctx.r9.s64 + -21064;
	// bne 0x82eb4dbc
	if (!ctx.cr0.eq) goto loc_82EB4DBC;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8694(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8694);
	// stw r11,-20036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20036, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4da8
	if (ctx.cr0.eq) goto loc_82EB4DA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4DA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5216
	ctx.r3.s64 = ctx.r10.s64 + 5216;
	// stb r11,-8694(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8694, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4DBC;
	sub_82CA3700(ctx, base);
loc_82EB4DBC:
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

__attribute__((alias("__imp__sub_82EB4DD4"))) PPC_WEAK_FUNC(sub_82EB4DD4);
PPC_FUNC_IMPL(__imp__sub_82EB4DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4DD8"))) PPC_WEAK_FUNC(sub_82EB4DD8);
PPC_FUNC_IMPL(__imp__sub_82EB4DD8) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-19004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-20032
	ctx.r31.s64 = ctx.r9.s64 + -20032;
	// bne 0x82eb4e34
	if (!ctx.cr0.eq) goto loc_82EB4E34;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8695(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8695);
	// stw r11,-19004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19004, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4e20
	if (ctx.cr0.eq) goto loc_82EB4E20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4E20:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5192
	ctx.r3.s64 = ctx.r10.s64 + 5192;
	// stb r11,-8695(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8695, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4E34;
	sub_82CA3700(ctx, base);
loc_82EB4E34:
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

__attribute__((alias("__imp__sub_82EB4E4C"))) PPC_WEAK_FUNC(sub_82EB4E4C);
PPC_FUNC_IMPL(__imp__sub_82EB4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4E50"))) PPC_WEAK_FUNC(sub_82EB4E50);
PPC_FUNC_IMPL(__imp__sub_82EB4E50) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-17972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-19000
	ctx.r31.s64 = ctx.r9.s64 + -19000;
	// bne 0x82eb4eac
	if (!ctx.cr0.eq) goto loc_82EB4EAC;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8693(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8693);
	// stw r11,-17972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17972, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4e98
	if (ctx.cr0.eq) goto loc_82EB4E98;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4E98:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5168
	ctx.r3.s64 = ctx.r10.s64 + 5168;
	// stb r11,-8693(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8693, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4EAC;
	sub_82CA3700(ctx, base);
loc_82EB4EAC:
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

__attribute__((alias("__imp__sub_82EB4EC4"))) PPC_WEAK_FUNC(sub_82EB4EC4);
PPC_FUNC_IMPL(__imp__sub_82EB4EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4EC8"))) PPC_WEAK_FUNC(sub_82EB4EC8);
PPC_FUNC_IMPL(__imp__sub_82EB4EC8) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-16940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-17968
	ctx.r31.s64 = ctx.r9.s64 + -17968;
	// bne 0x82eb4f24
	if (!ctx.cr0.eq) goto loc_82EB4F24;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8697(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8697);
	// stw r11,-16940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16940, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4f10
	if (ctx.cr0.eq) goto loc_82EB4F10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4F10:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5144
	ctx.r3.s64 = ctx.r10.s64 + 5144;
	// stb r11,-8697(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8697, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4F24;
	sub_82CA3700(ctx, base);
loc_82EB4F24:
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

__attribute__((alias("__imp__sub_82EB4F3C"))) PPC_WEAK_FUNC(sub_82EB4F3C);
PPC_FUNC_IMPL(__imp__sub_82EB4F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4F40"))) PPC_WEAK_FUNC(sub_82EB4F40);
PPC_FUNC_IMPL(__imp__sub_82EB4F40) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-15908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-16936
	ctx.r31.s64 = ctx.r9.s64 + -16936;
	// bne 0x82eb4f9c
	if (!ctx.cr0.eq) goto loc_82EB4F9C;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8691(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8691);
	// stw r11,-15908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15908, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb4f88
	if (ctx.cr0.eq) goto loc_82EB4F88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB4F88:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5120
	ctx.r3.s64 = ctx.r10.s64 + 5120;
	// stb r11,-8691(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8691, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB4F9C;
	sub_82CA3700(ctx, base);
loc_82EB4F9C:
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

__attribute__((alias("__imp__sub_82EB4FB4"))) PPC_WEAK_FUNC(sub_82EB4FB4);
PPC_FUNC_IMPL(__imp__sub_82EB4FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB4FB8"))) PPC_WEAK_FUNC(sub_82EB4FB8);
PPC_FUNC_IMPL(__imp__sub_82EB4FB8) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-14876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-15904
	ctx.r31.s64 = ctx.r9.s64 + -15904;
	// bne 0x82eb5014
	if (!ctx.cr0.eq) goto loc_82EB5014;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8692(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8692);
	// stw r11,-14876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14876, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb5000
	if (ctx.cr0.eq) goto loc_82EB5000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB5000:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5096
	ctx.r3.s64 = ctx.r10.s64 + 5096;
	// stb r11,-8692(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8692, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB5014;
	sub_82CA3700(ctx, base);
loc_82EB5014:
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

__attribute__((alias("__imp__sub_82EB502C"))) PPC_WEAK_FUNC(sub_82EB502C);
PPC_FUNC_IMPL(__imp__sub_82EB502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB5030"))) PPC_WEAK_FUNC(sub_82EB5030);
PPC_FUNC_IMPL(__imp__sub_82EB5030) {
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
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r11,-13844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r31,r9,-14872
	ctx.r31.s64 = ctx.r9.s64 + -14872;
	// bne 0x82eb508c
	if (!ctx.cr0.eq) goto loc_82EB508C;
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lbz r8,-8690(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -8690);
	// stw r11,-13844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13844, ctx.r11.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82eb5078
	if (ctx.cr0.eq) goto loc_82EB5078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
loc_82EB5078:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,5072
	ctx.r3.s64 = ctx.r10.s64 + 5072;
	// stb r11,-8690(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8690, ctx.r11.u8);
	// bl 0x82ca3700
	ctx.lr = 0x82EB508C;
	sub_82CA3700(ctx, base);
loc_82EB508C:
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

__attribute__((alias("__imp__sub_82EB50A4"))) PPC_WEAK_FUNC(sub_82EB50A4);
PPC_FUNC_IMPL(__imp__sub_82EB50A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB50A8"))) PPC_WEAK_FUNC(sub_82EB50A8);
PPC_FUNC_IMPL(__imp__sub_82EB50A8) {
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
	// beq cr6,0x82eb5124
	if (ctx.cr6.eq) goto loc_82EB5124;
	// bl 0x82eb4b80
	ctx.lr = 0x82EB50C8;
	sub_82EB4B80(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5124
	if (!ctx.cr0.gt) goto loc_82EB5124;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB50DC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB50E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb510c
	if (ctx.cr0.eq) goto loc_82EB510C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb50e8
	if (ctx.cr6.eq) goto loc_82EB50E8;
loc_82EB510C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb513c
	if (ctx.cr0.eq) goto loc_82EB513C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb50dc
	if (ctx.cr6.lt) goto loc_82EB50DC;
loc_82EB5124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5128:
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
loc_82EB513C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5128
	goto loc_82EB5128;
}

__attribute__((alias("__imp__sub_82EB5148"))) PPC_WEAK_FUNC(sub_82EB5148);
PPC_FUNC_IMPL(__imp__sub_82EB5148) {
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
	// beq cr6,0x82eb51c4
	if (ctx.cr6.eq) goto loc_82EB51C4;
	// bl 0x82eb4bf8
	ctx.lr = 0x82EB5168;
	sub_82EB4BF8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb51c4
	if (!ctx.cr0.gt) goto loc_82EB51C4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB517C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5188:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb51ac
	if (ctx.cr0.eq) goto loc_82EB51AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5188
	if (ctx.cr6.eq) goto loc_82EB5188;
loc_82EB51AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb51dc
	if (ctx.cr0.eq) goto loc_82EB51DC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb517c
	if (ctx.cr6.lt) goto loc_82EB517C;
loc_82EB51C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB51C8:
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
loc_82EB51DC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb51c8
	goto loc_82EB51C8;
}

__attribute__((alias("__imp__sub_82EB51E8"))) PPC_WEAK_FUNC(sub_82EB51E8);
PPC_FUNC_IMPL(__imp__sub_82EB51E8) {
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
	// beq cr6,0x82eb5264
	if (ctx.cr6.eq) goto loc_82EB5264;
	// bl 0x82eb4c70
	ctx.lr = 0x82EB5208;
	sub_82EB4C70(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5264
	if (!ctx.cr0.gt) goto loc_82EB5264;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB521C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5228:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb524c
	if (ctx.cr0.eq) goto loc_82EB524C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5228
	if (ctx.cr6.eq) goto loc_82EB5228;
loc_82EB524C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb527c
	if (ctx.cr0.eq) goto loc_82EB527C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb521c
	if (ctx.cr6.lt) goto loc_82EB521C;
loc_82EB5264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5268:
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
loc_82EB527C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5268
	goto loc_82EB5268;
}

__attribute__((alias("__imp__sub_82EB5288"))) PPC_WEAK_FUNC(sub_82EB5288);
PPC_FUNC_IMPL(__imp__sub_82EB5288) {
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
	// beq cr6,0x82eb5304
	if (ctx.cr6.eq) goto loc_82EB5304;
	// bl 0x82eb4ce8
	ctx.lr = 0x82EB52A8;
	sub_82EB4CE8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5304
	if (!ctx.cr0.gt) goto loc_82EB5304;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB52BC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB52C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb52ec
	if (ctx.cr0.eq) goto loc_82EB52EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb52c8
	if (ctx.cr6.eq) goto loc_82EB52C8;
loc_82EB52EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb531c
	if (ctx.cr0.eq) goto loc_82EB531C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb52bc
	if (ctx.cr6.lt) goto loc_82EB52BC;
loc_82EB5304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5308:
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
loc_82EB531C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5308
	goto loc_82EB5308;
}

__attribute__((alias("__imp__sub_82EB5328"))) PPC_WEAK_FUNC(sub_82EB5328);
PPC_FUNC_IMPL(__imp__sub_82EB5328) {
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
	// beq cr6,0x82eb53a4
	if (ctx.cr6.eq) goto loc_82EB53A4;
	// bl 0x82eb4d60
	ctx.lr = 0x82EB5348;
	sub_82EB4D60(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb53a4
	if (!ctx.cr0.gt) goto loc_82EB53A4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB535C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5368:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb538c
	if (ctx.cr0.eq) goto loc_82EB538C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5368
	if (ctx.cr6.eq) goto loc_82EB5368;
loc_82EB538C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb53bc
	if (ctx.cr0.eq) goto loc_82EB53BC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb535c
	if (ctx.cr6.lt) goto loc_82EB535C;
loc_82EB53A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB53A8:
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
loc_82EB53BC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb53a8
	goto loc_82EB53A8;
}

__attribute__((alias("__imp__sub_82EB53C8"))) PPC_WEAK_FUNC(sub_82EB53C8);
PPC_FUNC_IMPL(__imp__sub_82EB53C8) {
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
	// beq cr6,0x82eb5444
	if (ctx.cr6.eq) goto loc_82EB5444;
	// bl 0x82eb4dd8
	ctx.lr = 0x82EB53E8;
	sub_82EB4DD8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5444
	if (!ctx.cr0.gt) goto loc_82EB5444;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB53FC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5408:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb542c
	if (ctx.cr0.eq) goto loc_82EB542C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5408
	if (ctx.cr6.eq) goto loc_82EB5408;
loc_82EB542C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb545c
	if (ctx.cr0.eq) goto loc_82EB545C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb53fc
	if (ctx.cr6.lt) goto loc_82EB53FC;
loc_82EB5444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5448:
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
loc_82EB545C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5448
	goto loc_82EB5448;
}

__attribute__((alias("__imp__sub_82EB5468"))) PPC_WEAK_FUNC(sub_82EB5468);
PPC_FUNC_IMPL(__imp__sub_82EB5468) {
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
	// beq cr6,0x82eb54e4
	if (ctx.cr6.eq) goto loc_82EB54E4;
	// bl 0x82eb4e50
	ctx.lr = 0x82EB5488;
	sub_82EB4E50(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb54e4
	if (!ctx.cr0.gt) goto loc_82EB54E4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB549C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB54A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb54cc
	if (ctx.cr0.eq) goto loc_82EB54CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb54a8
	if (ctx.cr6.eq) goto loc_82EB54A8;
loc_82EB54CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb54fc
	if (ctx.cr0.eq) goto loc_82EB54FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb549c
	if (ctx.cr6.lt) goto loc_82EB549C;
loc_82EB54E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB54E8:
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
loc_82EB54FC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb54e8
	goto loc_82EB54E8;
}

__attribute__((alias("__imp__sub_82EB5508"))) PPC_WEAK_FUNC(sub_82EB5508);
PPC_FUNC_IMPL(__imp__sub_82EB5508) {
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
	// beq cr6,0x82eb5584
	if (ctx.cr6.eq) goto loc_82EB5584;
	// bl 0x82eb4ec8
	ctx.lr = 0x82EB5528;
	sub_82EB4EC8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5584
	if (!ctx.cr0.gt) goto loc_82EB5584;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB553C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5548:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb556c
	if (ctx.cr0.eq) goto loc_82EB556C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5548
	if (ctx.cr6.eq) goto loc_82EB5548;
loc_82EB556C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb559c
	if (ctx.cr0.eq) goto loc_82EB559C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb553c
	if (ctx.cr6.lt) goto loc_82EB553C;
loc_82EB5584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5588:
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
loc_82EB559C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5588
	goto loc_82EB5588;
}

__attribute__((alias("__imp__sub_82EB55A8"))) PPC_WEAK_FUNC(sub_82EB55A8);
PPC_FUNC_IMPL(__imp__sub_82EB55A8) {
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
	// beq cr6,0x82eb5624
	if (ctx.cr6.eq) goto loc_82EB5624;
	// bl 0x82eb4f40
	ctx.lr = 0x82EB55C8;
	sub_82EB4F40(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5624
	if (!ctx.cr0.gt) goto loc_82EB5624;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB55DC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB55E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb560c
	if (ctx.cr0.eq) goto loc_82EB560C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb55e8
	if (ctx.cr6.eq) goto loc_82EB55E8;
loc_82EB560C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb563c
	if (ctx.cr0.eq) goto loc_82EB563C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb55dc
	if (ctx.cr6.lt) goto loc_82EB55DC;
loc_82EB5624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5628:
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
loc_82EB563C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5628
	goto loc_82EB5628;
}

__attribute__((alias("__imp__sub_82EB5648"))) PPC_WEAK_FUNC(sub_82EB5648);
PPC_FUNC_IMPL(__imp__sub_82EB5648) {
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
	// beq cr6,0x82eb56c4
	if (ctx.cr6.eq) goto loc_82EB56C4;
	// bl 0x82eb4fb8
	ctx.lr = 0x82EB5668;
	sub_82EB4FB8(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb56c4
	if (!ctx.cr0.gt) goto loc_82EB56C4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB567C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5688:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb56ac
	if (ctx.cr0.eq) goto loc_82EB56AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5688
	if (ctx.cr6.eq) goto loc_82EB5688;
loc_82EB56AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb56dc
	if (ctx.cr0.eq) goto loc_82EB56DC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb567c
	if (ctx.cr6.lt) goto loc_82EB567C;
loc_82EB56C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB56C8:
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
loc_82EB56DC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb56c8
	goto loc_82EB56C8;
}

__attribute__((alias("__imp__sub_82EB56E8"))) PPC_WEAK_FUNC(sub_82EB56E8);
PPC_FUNC_IMPL(__imp__sub_82EB56E8) {
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
	// beq cr6,0x82eb5764
	if (ctx.cr6.eq) goto loc_82EB5764;
	// bl 0x82eb5030
	ctx.lr = 0x82EB5708;
	sub_82EB5030(ctx, base);
	// lwz r5,1024(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82eb5764
	if (!ctx.cr0.gt) goto loc_82EB5764;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82EB571C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_82EB5728:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82eb574c
	if (ctx.cr0.eq) goto loc_82EB574C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82eb5728
	if (ctx.cr6.eq) goto loc_82EB5728;
loc_82EB574C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82eb577c
	if (ctx.cr0.eq) goto loc_82EB577C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82eb571c
	if (ctx.cr6.lt) goto loc_82EB571C;
loc_82EB5764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5768:
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
loc_82EB577C:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82eb5768
	goto loc_82EB5768;
}

__attribute__((alias("__imp__sub_82EB5788"))) PPC_WEAK_FUNC(sub_82EB5788);
PPC_FUNC_IMPL(__imp__sub_82EB5788) {
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
	// li r3,1104
	ctx.r3.s64 = 1104;
	// bl 0x82625f08
	ctx.lr = 0x82EB57A4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb57b8
	if (ctx.cr0.eq) goto loc_82EB57B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eb3408
	ctx.lr = 0x82EB57B4;
	sub_82EB3408(ctx, base);
	// b 0x82eb57bc
	goto loc_82EB57BC;
loc_82EB57B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB57BC:
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

__attribute__((alias("__imp__sub_82EB57D0"))) PPC_WEAK_FUNC(sub_82EB57D0);
PPC_FUNC_IMPL(__imp__sub_82EB57D0) {
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
	// bl 0x82eb3868
	ctx.lr = 0x82EB57F0;
	sub_82EB3868(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb580c
	if (ctx.cr0.eq) goto loc_82EB580C;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB580C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB580C:
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

__attribute__((alias("__imp__sub_82EB5828"))) PPC_WEAK_FUNC(sub_82EB5828);
PPC_FUNC_IMPL(__imp__sub_82EB5828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EB5830;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5848;
	sub_826B4B60(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82eb585c
	if (!ctx.cr6.eq) goto loc_82EB585C;
loc_82EB5854:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb59dc
	goto loc_82EB59DC;
loc_82EB585C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21320
	ctx.r30.s64 = ctx.r11.s64 + -21320;
	// bl 0x826b4b60
	ctx.lr = 0x82EB586C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5874;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb58b0
	if (!ctx.cr0.eq) goto loc_82EB58B0;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5884;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// bl 0x82ca3b30
	ctx.lr = 0x82EB5890;
	sub_82CA3B30(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x82eb589c
	if (!ctx.cr6.lt) goto loc_82EB589C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB589C:
	// cmplwi cr6,r3,4096
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4096, ctx.xer);
	// ble cr6,0x82eb58a8
	if (!ctx.cr6.gt) goto loc_82EB58A8;
	// li r3,4096
	ctx.r3.s64 = 4096;
loc_82EB58A8:
	// stw r3,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r3.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB58B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21340
	ctx.r30.s64 = ctx.r11.s64 + -21340;
	// bl 0x826b4b60
	ctx.lr = 0x82EB58BC;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB58C4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5900
	if (!ctx.cr0.eq) goto loc_82EB5900;
	// bl 0x82b568c0
	ctx.lr = 0x82EB58D4;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// bl 0x82ca3b30
	ctx.lr = 0x82EB58E0;
	sub_82CA3B30(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x82eb58ec
	if (!ctx.cr6.lt) goto loc_82EB58EC;
	// li r3,8
	ctx.r3.s64 = 8;
loc_82EB58EC:
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// ble cr6,0x82eb58f8
	if (!ctx.cr6.gt) goto loc_82EB58F8;
	// li r3,2048
	ctx.r3.s64 = 2048;
loc_82EB58F8:
	// stw r3,40(r26)
	PPC_STORE_U32(ctx.r26.u32 + 40, ctx.r3.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5900:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21380
	ctx.r30.s64 = ctx.r11.s64 + -21380;
	// bl 0x826b4b60
	ctx.lr = 0x82EB590C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5914;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5954
	if (!ctx.cr0.eq) goto loc_82EB5954;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5924;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// bl 0x82ca3b30
	ctx.lr = 0x82EB5930;
	sub_82CA3B30(ctx, base);
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// bge cr6,0x82eb593c
	if (!ctx.cr6.lt) goto loc_82EB593C;
	// li r3,1024
	ctx.r3.s64 = 1024;
loc_82EB593C:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82eb594c
	if (!ctx.cr6.gt) goto loc_82EB594C;
	// lis r3,4
	ctx.r3.s64 = 262144;
loc_82EB594C:
	// stw r3,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r3.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5954:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21432
	ctx.r30.s64 = ctx.r11.s64 + -21432;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5960;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5968;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb598c
	if (!ctx.cr0.eq) goto loc_82EB598C;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5978;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// bl 0x82ca3b30
	ctx.lr = 0x82EB5984;
	sub_82CA3B30(ctx, base);
	// stw r3,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r3.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB598C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-25476
	ctx.r30.s64 = ctx.r11.s64 + -25476;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5998;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB59A0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb59e8
	if (!ctx.cr0.eq) goto loc_82EB59E8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB59B0;
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ec7ed8
	ctx.lr = 0x82EB59CC;
	sub_82EC7ED8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r3.u32);
	// bne 0x82eb5854
	if (!ctx.cr0.eq) goto loc_82EB5854;
loc_82EB59D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB59DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82EB59E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21444
	ctx.r30.s64 = ctx.r11.s64 + -21444;
	// bl 0x826b4b60
	ctx.lr = 0x82EB59F4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB59FC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5a60
	if (!ctx.cr0.eq) goto loc_82EB5A60;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5A0C;
	sub_82B568C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10320
	ctx.r4.s64 = ctx.r11.s64 + -10320;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5A24;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb5a3c
	if (!ctx.cr0.eq) goto loc_82EB5A3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// b 0x82eb59dc
	goto loc_82EB59DC;
loc_82EB5A3C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21460
	ctx.r4.s64 = ctx.r11.s64 + -21460;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5A4C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb59d8
	if (!ctx.cr0.eq) goto loc_82EB59D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5A60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21488
	ctx.r30.s64 = ctx.r11.s64 + -21488;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5A6C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5A74;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5b28
	if (!ctx.cr0.eq) goto loc_82EB5B28;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5A84;
	sub_82B568C0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-24228
	ctx.r4.s64 = ctx.r11.s64 + -24228;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5A94;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5b1c
	if (ctx.cr0.eq) goto loc_82EB5B1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5AAC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5b1c
	if (ctx.cr0.eq) goto loc_82EB5B1C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32012
	ctx.r4.s64 = ctx.r11.s64 + -32012;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5AC4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5b1c
	if (ctx.cr0.eq) goto loc_82EB5B1C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24224
	ctx.r4.s64 = ctx.r11.s64 + -24224;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5ADC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5b14
	if (ctx.cr0.eq) goto loc_82EB5B14;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5664
	ctx.r4.s64 = ctx.r11.s64 + 5664;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5AF4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5b14
	if (ctx.cr0.eq) goto loc_82EB5B14;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10856
	ctx.r4.s64 = ctx.r11.s64 + -10856;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5B0C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb59d8
	if (!ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB5B14:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eb5b20
	goto loc_82EB5B20;
loc_82EB5B1C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB5B20:
	// stb r11,126(r26)
	PPC_STORE_U8(ctx.r26.u32 + 126, ctx.r11.u8);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5B28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21516
	ctx.r30.s64 = ctx.r11.s64 + -21516;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5B34;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5B3C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5bf8
	if (!ctx.cr0.eq) goto loc_82EB5BF8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5B4C;
	sub_82B568C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24228
	ctx.r4.s64 = ctx.r11.s64 + -24228;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5B64;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5bec
	if (ctx.cr0.eq) goto loc_82EB5BEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5B7C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5bec
	if (ctx.cr0.eq) goto loc_82EB5BEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32012
	ctx.r4.s64 = ctx.r11.s64 + -32012;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5B94;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5bec
	if (ctx.cr0.eq) goto loc_82EB5BEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24224
	ctx.r4.s64 = ctx.r11.s64 + -24224;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5BAC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5be4
	if (ctx.cr0.eq) goto loc_82EB5BE4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5664
	ctx.r4.s64 = ctx.r11.s64 + 5664;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5BC4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5be4
	if (ctx.cr0.eq) goto loc_82EB5BE4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10856
	ctx.r4.s64 = ctx.r11.s64 + -10856;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5BDC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb59d8
	if (!ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB5BE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eb5bf0
	goto loc_82EB5BF0;
loc_82EB5BEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB5BF0:
	// stb r11,127(r26)
	PPC_STORE_U8(ctx.r26.u32 + 127, ctx.r11.u8);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5BF8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21532
	ctx.r30.s64 = ctx.r11.s64 + -21532;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5C04;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5C0C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5c78
	if (!ctx.cr0.eq) goto loc_82EB5C78;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5C1C;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb5c3c
	if (ctx.cr0.eq) goto loc_82EB5C3C;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb5c44
	goto loc_82EB5C44;
loc_82EB5C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB5C44:
	// bl 0x82ca5860
	ctx.lr = 0x82EB5C48;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB5C5C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb5c68
	if (ctx.cr6.lt) goto loc_82EB5C68;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB5C68:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb5c5c
	if (!ctx.cr6.eq) goto loc_82EB5C5C;
	// stfs f0,36(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 36, temp.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5C78:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21560
	ctx.r30.s64 = ctx.r11.s64 + -21560;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5C84;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5C8C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5cf8
	if (!ctx.cr0.eq) goto loc_82EB5CF8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5C9C;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb5cbc
	if (ctx.cr0.eq) goto loc_82EB5CBC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb5cc4
	goto loc_82EB5CC4;
loc_82EB5CBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB5CC4:
	// bl 0x82ca5860
	ctx.lr = 0x82EB5CC8;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB5CDC:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb5ce8
	if (ctx.cr6.lt) goto loc_82EB5CE8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB5CE8:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb5cdc
	if (!ctx.cr6.eq) goto loc_82EB5CDC;
	// stfs f0,44(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 44, temp.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5CF8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21576
	ctx.r30.s64 = ctx.r11.s64 + -21576;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5D04;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5D0C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5df4
	if (!ctx.cr0.eq) goto loc_82EB5DF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,-24228
	ctx.r30.s64 = ctx.r11.s64 + -24228;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5D24;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5D2C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5ddc
	if (ctx.cr0.eq) goto loc_82EB5DDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,3900
	ctx.r30.s64 = ctx.r11.s64 + 3900;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5D44;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5D4C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5ddc
	if (ctx.cr0.eq) goto loc_82EB5DDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-32012
	ctx.r30.s64 = ctx.r11.s64 + -32012;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5D64;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5D6C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5ddc
	if (ctx.cr0.eq) goto loc_82EB5DDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-24224
	ctx.r30.s64 = ctx.r11.s64 + -24224;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5D84;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5D8C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5dd4
	if (ctx.cr0.eq) goto loc_82EB5DD4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5664
	ctx.r30.s64 = ctx.r11.s64 + 5664;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5DA4;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5DAC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5dd4
	if (ctx.cr0.eq) goto loc_82EB5DD4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-10856
	ctx.r30.s64 = ctx.r11.s64 + -10856;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5DC4;
	sub_82B568C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5DCC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb59d8
	if (!ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB5DD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82eb5de0
	goto loc_82EB5DE0;
loc_82EB5DDC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB5DE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb5854
	if (ctx.cr0.eq) goto loc_82EB5854;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1088(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1088, ctx.r11.u8);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5DF4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-23140
	ctx.r30.s64 = ctx.r11.s64 + -23140;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5E00;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5E08;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb5e60
	if (!ctx.cr0.eq) goto loc_82EB5E60;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5E18;
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// bl 0x82ca5860
	ctx.lr = 0x82EB5E24;
	sub_82CA5860(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1100(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1100);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f11,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
loc_82EB5E3C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82eb5e50
	if (ctx.cr6.lt) goto loc_82EB5E50;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82eb5e50
	if (ctx.cr6.gt) goto loc_82EB5E50;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82EB5E50:
	// fcmpu cr6,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f13.f64);
	// bne cr6,0x82eb5e3c
	if (!ctx.cr6.eq) goto loc_82EB5E3C;
	// stfs f13,1100(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1100, temp.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5E60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,-21600
	ctx.r30.s64 = ctx.r11.s64 + -21600;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5E6C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5E74;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb5f90
	if (!ctx.cr0.eq) goto loc_82EB5F90;
	// addi r3,r26,416
	ctx.r3.s64 = ctx.r26.s64 + 416;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB5E88;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb5f68
	if (!ctx.cr6.gt) goto loc_82EB5F68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB5EA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB5EB0;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5EB8;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5EC0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb5ed8
	if (!ctx.cr0.eq) goto loc_82EB5ED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB5ED0;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb5ef8
	goto loc_82EB5EF8;
loc_82EB5ED8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB5EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB5EF8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5ea4
	if (ctx.cr6.lt) goto loc_82EB5EA4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb5f68
	if (ctx.cr6.eq) goto loc_82EB5F68;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb5f68
	if (!ctx.cr6.gt) goto loc_82EB5F68;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB5F24:
	// lwz r11,420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 420);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB5F38;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb5f58
	if (ctx.cr0.eq) goto loc_82EB5F58;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5f24
	if (ctx.cr6.lt) goto loc_82EB5F24;
	// b 0x82eb5f68
	goto loc_82EB5F68;
loc_82EB5F58:
	// lwz r11,420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 420);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r11.u32);
loc_82EB5F68:
	// lwz r11,432(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,420(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 420);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,432(r26)
	PPC_STORE_U32(ctx.r26.u32 + 432, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB5F90:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21632
	ctx.r30.s64 = ctx.r11.s64 + -21632;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5FA0;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5FA8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb60c4
	if (!ctx.cr0.eq) goto loc_82EB60C4;
	// addi r3,r26,436
	ctx.r3.s64 = ctx.r26.s64 + 436;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB5FBC;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb609c
	if (!ctx.cr6.gt) goto loc_82EB609C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB5FD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB5FE4;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB5FEC;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB5FF4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb600c
	if (!ctx.cr0.eq) goto loc_82EB600C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6004;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb602c
	goto loc_82EB602C;
loc_82EB600C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB602C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb5fd8
	if (ctx.cr6.lt) goto loc_82EB5FD8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb609c
	if (ctx.cr6.eq) goto loc_82EB609C;
	// lwz r11,448(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb609c
	if (!ctx.cr6.gt) goto loc_82EB609C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB6058:
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB606C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb608c
	if (ctx.cr0.eq) goto loc_82EB608C;
	// lwz r11,448(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6058
	if (ctx.cr6.lt) goto loc_82EB6058;
	// b 0x82eb609c
	goto loc_82EB609C;
loc_82EB608C:
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,452(r26)
	PPC_STORE_U32(ctx.r26.u32 + 452, ctx.r11.u32);
loc_82EB609C:
	// lwz r11,452(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,448(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,452(r26)
	PPC_STORE_U32(ctx.r26.u32 + 452, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB60C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21664
	ctx.r30.s64 = ctx.r11.s64 + -21664;
	// bl 0x826b4b60
	ctx.lr = 0x82EB60D4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB60DC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb61f8
	if (!ctx.cr0.eq) goto loc_82EB61F8;
	// addi r3,r26,456
	ctx.r3.s64 = ctx.r26.s64 + 456;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB60F0;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb61d0
	if (!ctx.cr6.gt) goto loc_82EB61D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB610C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB6118;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6120;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6128;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6140
	if (!ctx.cr0.eq) goto loc_82EB6140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6138;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6160
	goto loc_82EB6160;
loc_82EB6140:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6160:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb610c
	if (ctx.cr6.lt) goto loc_82EB610C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb61d0
	if (ctx.cr6.eq) goto loc_82EB61D0;
	// lwz r11,468(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 468);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb61d0
	if (!ctx.cr6.gt) goto loc_82EB61D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB618C:
	// lwz r11,460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 460);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB61A0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb61c0
	if (ctx.cr0.eq) goto loc_82EB61C0;
	// lwz r11,468(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 468);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb618c
	if (ctx.cr6.lt) goto loc_82EB618C;
	// b 0x82eb61d0
	goto loc_82EB61D0;
loc_82EB61C0:
	// lwz r11,460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 460);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,472(r26)
	PPC_STORE_U32(ctx.r26.u32 + 472, ctx.r11.u32);
loc_82EB61D0:
	// lwz r11,472(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,468(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,460(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 460);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,472(r26)
	PPC_STORE_U32(ctx.r26.u32 + 472, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB61F8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21684
	ctx.r30.s64 = ctx.r11.s64 + -21684;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6208;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6210;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb632c
	if (!ctx.cr0.eq) goto loc_82EB632C;
	// addi r3,r26,536
	ctx.r3.s64 = ctx.r26.s64 + 536;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB6224;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6304
	if (!ctx.cr6.gt) goto loc_82EB6304;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6240:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB624C;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6254;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB625C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6274
	if (!ctx.cr0.eq) goto loc_82EB6274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB626C;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6294
	goto loc_82EB6294;
loc_82EB6274:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB628C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6294:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6240
	if (ctx.cr6.lt) goto loc_82EB6240;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6304
	if (ctx.cr6.eq) goto loc_82EB6304;
	// lwz r11,548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6304
	if (!ctx.cr6.gt) goto loc_82EB6304;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB62C0:
	// lwz r11,540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB62D4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb62f4
	if (ctx.cr0.eq) goto loc_82EB62F4;
	// lwz r11,548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb62c0
	if (ctx.cr6.lt) goto loc_82EB62C0;
	// b 0x82eb6304
	goto loc_82EB6304;
loc_82EB62F4:
	// lwz r11,540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,552(r26)
	PPC_STORE_U32(ctx.r26.u32 + 552, ctx.r11.u32);
loc_82EB6304:
	// lwz r11,552(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 540);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,552(r26)
	PPC_STORE_U32(ctx.r26.u32 + 552, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB632C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21712
	ctx.r30.s64 = ctx.r11.s64 + -21712;
	// bl 0x826b4b60
	ctx.lr = 0x82EB633C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6344;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6460
	if (!ctx.cr0.eq) goto loc_82EB6460;
	// addi r3,r26,476
	ctx.r3.s64 = ctx.r26.s64 + 476;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB6358;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6438
	if (!ctx.cr6.gt) goto loc_82EB6438;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6374:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB6380;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6388;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6390;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb63a8
	if (!ctx.cr0.eq) goto loc_82EB63A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB63A0;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb63c8
	goto loc_82EB63C8;
loc_82EB63A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB63C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB63C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6374
	if (ctx.cr6.lt) goto loc_82EB6374;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6438
	if (ctx.cr6.eq) goto loc_82EB6438;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6438
	if (!ctx.cr6.gt) goto loc_82EB6438;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB63F4:
	// lwz r11,480(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 480);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB6408;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb6428
	if (ctx.cr0.eq) goto loc_82EB6428;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb63f4
	if (ctx.cr6.lt) goto loc_82EB63F4;
	// b 0x82eb6438
	goto loc_82EB6438;
loc_82EB6428:
	// lwz r11,480(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 480);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,492(r26)
	PPC_STORE_U32(ctx.r26.u32 + 492, ctx.r11.u32);
loc_82EB6438:
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,480(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 480);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,492(r26)
	PPC_STORE_U32(ctx.r26.u32 + 492, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6460:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21748
	ctx.r30.s64 = ctx.r11.s64 + -21748;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6470;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6478;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6594
	if (!ctx.cr0.eq) goto loc_82EB6594;
	// addi r3,r26,496
	ctx.r3.s64 = ctx.r26.s64 + 496;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB648C;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb656c
	if (!ctx.cr6.gt) goto loc_82EB656C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB64A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB64B4;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB64BC;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB64C4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb64dc
	if (!ctx.cr0.eq) goto loc_82EB64DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB64D4;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb64fc
	goto loc_82EB64FC;
loc_82EB64DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB64F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB64FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb64a8
	if (ctx.cr6.lt) goto loc_82EB64A8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb656c
	if (ctx.cr6.eq) goto loc_82EB656C;
	// lwz r11,508(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 508);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb656c
	if (!ctx.cr6.gt) goto loc_82EB656C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB6528:
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB653C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb655c
	if (ctx.cr0.eq) goto loc_82EB655C;
	// lwz r11,508(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 508);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6528
	if (ctx.cr6.lt) goto loc_82EB6528;
	// b 0x82eb656c
	goto loc_82EB656C;
loc_82EB655C:
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,512(r26)
	PPC_STORE_U32(ctx.r26.u32 + 512, ctx.r11.u32);
loc_82EB656C:
	// lwz r11,512(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,508(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,512(r26)
	PPC_STORE_U32(ctx.r26.u32 + 512, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6594:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21784
	ctx.r30.s64 = ctx.r11.s64 + -21784;
	// bl 0x826b4b60
	ctx.lr = 0x82EB65A4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB65AC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb66c8
	if (!ctx.cr0.eq) goto loc_82EB66C8;
	// addi r3,r26,516
	ctx.r3.s64 = ctx.r26.s64 + 516;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB65C0;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb66a0
	if (!ctx.cr6.gt) goto loc_82EB66A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB65DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB65E8;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB65F0;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB65F8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6610
	if (!ctx.cr0.eq) goto loc_82EB6610;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6608;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6630
	goto loc_82EB6630;
loc_82EB6610:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6630:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb65dc
	if (ctx.cr6.lt) goto loc_82EB65DC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb66a0
	if (ctx.cr6.eq) goto loc_82EB66A0;
	// lwz r11,528(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb66a0
	if (!ctx.cr6.gt) goto loc_82EB66A0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB665C:
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB6670;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb6690
	if (ctx.cr0.eq) goto loc_82EB6690;
	// lwz r11,528(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb665c
	if (ctx.cr6.lt) goto loc_82EB665C;
	// b 0x82eb66a0
	goto loc_82EB66A0;
loc_82EB6690:
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,532(r26)
	PPC_STORE_U32(ctx.r26.u32 + 532, ctx.r11.u32);
loc_82EB66A0:
	// lwz r11,532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,528(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 520);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,532(r26)
	PPC_STORE_U32(ctx.r26.u32 + 532, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB66C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21816
	ctx.r30.s64 = ctx.r11.s64 + -21816;
	// bl 0x826b4b60
	ctx.lr = 0x82EB66D8;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB66E0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb67fc
	if (!ctx.cr0.eq) goto loc_82EB67FC;
	// addi r3,r26,556
	ctx.r3.s64 = ctx.r26.s64 + 556;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB66F4;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb67d4
	if (!ctx.cr6.gt) goto loc_82EB67D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6710:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB671C;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6724;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB672C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6744
	if (!ctx.cr0.eq) goto loc_82EB6744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB673C;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6764
	goto loc_82EB6764;
loc_82EB6744:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB675C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6764:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6710
	if (ctx.cr6.lt) goto loc_82EB6710;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb67d4
	if (ctx.cr6.eq) goto loc_82EB67D4;
	// lwz r11,568(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 568);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb67d4
	if (!ctx.cr6.gt) goto loc_82EB67D4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB6790:
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB67A4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb67c4
	if (ctx.cr0.eq) goto loc_82EB67C4;
	// lwz r11,568(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 568);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6790
	if (ctx.cr6.lt) goto loc_82EB6790;
	// b 0x82eb67d4
	goto loc_82EB67D4;
loc_82EB67C4:
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r11.u32);
loc_82EB67D4:
	// lwz r11,572(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,568(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,560(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,572(r26)
	PPC_STORE_U32(ctx.r26.u32 + 572, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB67FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21832
	ctx.r30.s64 = ctx.r11.s64 + -21832;
	// bl 0x826b4b60
	ctx.lr = 0x82EB680C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6814;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6930
	if (!ctx.cr0.eq) goto loc_82EB6930;
	// addi r3,r26,576
	ctx.r3.s64 = ctx.r26.s64 + 576;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB6828;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6908
	if (!ctx.cr6.gt) goto loc_82EB6908;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6844:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB6850;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6858;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6860;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6878
	if (!ctx.cr0.eq) goto loc_82EB6878;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6870;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6898
	goto loc_82EB6898;
loc_82EB6878:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6898:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6844
	if (ctx.cr6.lt) goto loc_82EB6844;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6908
	if (ctx.cr6.eq) goto loc_82EB6908;
	// lwz r11,588(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 588);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6908
	if (!ctx.cr6.gt) goto loc_82EB6908;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB68C4:
	// lwz r11,580(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 580);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB68D8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb68f8
	if (ctx.cr0.eq) goto loc_82EB68F8;
	// lwz r11,588(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 588);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb68c4
	if (ctx.cr6.lt) goto loc_82EB68C4;
	// b 0x82eb6908
	goto loc_82EB6908;
loc_82EB68F8:
	// lwz r11,580(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 580);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,592(r26)
	PPC_STORE_U32(ctx.r26.u32 + 592, ctx.r11.u32);
loc_82EB6908:
	// lwz r11,592(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,588(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,580(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 580);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,592(r26)
	PPC_STORE_U32(ctx.r26.u32 + 592, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6930:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21852
	ctx.r30.s64 = ctx.r11.s64 + -21852;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6940;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6948;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6a64
	if (!ctx.cr0.eq) goto loc_82EB6A64;
	// addi r3,r26,596
	ctx.r3.s64 = ctx.r26.s64 + 596;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB695C;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6a3c
	if (!ctx.cr6.gt) goto loc_82EB6A3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6978:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB6984;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB698C;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6994;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb69ac
	if (!ctx.cr0.eq) goto loc_82EB69AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB69A4;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb69cc
	goto loc_82EB69CC;
loc_82EB69AC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB69C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB69CC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6978
	if (ctx.cr6.lt) goto loc_82EB6978;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6a3c
	if (ctx.cr6.eq) goto loc_82EB6A3C;
	// lwz r11,608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 608);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6a3c
	if (!ctx.cr6.gt) goto loc_82EB6A3C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB69F8:
	// lwz r11,600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 600);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB6A0C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb6a2c
	if (ctx.cr0.eq) goto loc_82EB6A2C;
	// lwz r11,608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 608);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb69f8
	if (ctx.cr6.lt) goto loc_82EB69F8;
	// b 0x82eb6a3c
	goto loc_82EB6A3C;
loc_82EB6A2C:
	// lwz r11,600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 600);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,612(r26)
	PPC_STORE_U32(ctx.r26.u32 + 612, ctx.r11.u32);
loc_82EB6A3C:
	// lwz r11,612(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 600);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,612(r26)
	PPC_STORE_U32(ctx.r26.u32 + 612, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6A64:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21888
	ctx.r30.s64 = ctx.r11.s64 + -21888;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6A74;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6A7C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6b98
	if (!ctx.cr0.eq) goto loc_82EB6B98;
	// addi r3,r26,616
	ctx.r3.s64 = ctx.r26.s64 + 616;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82eb2b30
	ctx.lr = 0x82EB6A90;
	sub_82EB2B30(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6b70
	if (!ctx.cr6.gt) goto loc_82EB6B70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-22156
	ctx.r28.s64 = ctx.r11.s64 + -22156;
loc_82EB6AAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EB6AB8;
	sub_82E7D860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6AC0;
	sub_826B4B60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6AC8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6ae0
	if (!ctx.cr0.eq) goto loc_82EB6AE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6AD8;
	sub_82B568C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82eb6b00
	goto loc_82EB6B00;
loc_82EB6AE0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
loc_82EB6B00:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6aac
	if (ctx.cr6.lt) goto loc_82EB6AAC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82eb6b70
	if (ctx.cr6.eq) goto loc_82EB6B70;
	// lwz r11,628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eb6b70
	if (!ctx.cr6.gt) goto loc_82EB6B70;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EB6B2C:
	// lwz r11,620(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ca6320
	ctx.lr = 0x82EB6B40;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82eb6b60
	if (ctx.cr0.eq) goto loc_82EB6B60;
	// lwz r11,628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eb6b2c
	if (ctx.cr6.lt) goto loc_82EB6B2C;
	// b 0x82eb6b70
	goto loc_82EB6B70;
loc_82EB6B60:
	// lwz r11,620(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,632(r26)
	PPC_STORE_U32(ctx.r26.u32 + 632, ctx.r11.u32);
loc_82EB6B70:
	// lwz r11,632(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82eb5854
	if (!ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb5854
	if (ctx.cr6.eq) goto loc_82EB5854;
	// lwz r11,620(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 620);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,632(r26)
	PPC_STORE_U32(ctx.r26.u32 + 632, ctx.r11.u32);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6B98:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21900
	ctx.r30.s64 = ctx.r11.s64 + -21900;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6BA8;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6BB0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6c6c
	if (!ctx.cr0.eq) goto loc_82EB6C6C;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6BD4;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6be4
	if (ctx.cr0.eq) goto loc_82EB6BE4;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6BE0;
	sub_82B568C0(ctx, base);
	// b 0x82eb6be8
	goto loc_82EB6BE8;
loc_82EB6BE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6BE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb50a8
	ctx.lr = 0x82EB6BF4;
	sub_82EB50A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6c28
	if (!ctx.cr0.eq) goto loc_82EB6C28;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4b80
	ctx.lr = 0x82EB6C04;
	sub_82EB4B80(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB6C10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4b80
	ctx.lr = 0x82EB6C18;
	sub_82EB4B80(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb6c10
	if (ctx.cr6.lt) goto loc_82EB6C10;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB6C28:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,416
	ctx.r3.s64 = ctx.r26.s64 + 416;
	// bl 0x82e80980
	ctx.lr = 0x82EB6C68;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6C6C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21920
	ctx.r30.s64 = ctx.r11.s64 + -21920;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6C7C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6C84;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6d40
	if (!ctx.cr0.eq) goto loc_82EB6D40;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6CA8;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6cb8
	if (ctx.cr0.eq) goto loc_82EB6CB8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6CB4;
	sub_82B568C0(ctx, base);
	// b 0x82eb6cbc
	goto loc_82EB6CBC;
loc_82EB6CB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6CBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5148
	ctx.lr = 0x82EB6CC8;
	sub_82EB5148(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6cfc
	if (!ctx.cr0.eq) goto loc_82EB6CFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4bf8
	ctx.lr = 0x82EB6CD8;
	sub_82EB4BF8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB6CE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4bf8
	ctx.lr = 0x82EB6CEC;
	sub_82EB4BF8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb6ce4
	if (ctx.cr6.lt) goto loc_82EB6CE4;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB6CFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,436
	ctx.r3.s64 = ctx.r26.s64 + 436;
	// bl 0x82e80980
	ctx.lr = 0x82EB6D3C;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6D40:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21940
	ctx.r30.s64 = ctx.r11.s64 + -21940;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6D50;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6D58;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6e14
	if (!ctx.cr0.eq) goto loc_82EB6E14;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6D7C;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6d8c
	if (ctx.cr0.eq) goto loc_82EB6D8C;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6D88;
	sub_82B568C0(ctx, base);
	// b 0x82eb6d90
	goto loc_82EB6D90;
loc_82EB6D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6D90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb51e8
	ctx.lr = 0x82EB6D9C;
	sub_82EB51E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6dd0
	if (!ctx.cr0.eq) goto loc_82EB6DD0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4c70
	ctx.lr = 0x82EB6DAC;
	sub_82EB4C70(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB6DB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4c70
	ctx.lr = 0x82EB6DC0;
	sub_82EB4C70(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb6db8
	if (ctx.cr6.lt) goto loc_82EB6DB8;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB6DD0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,456
	ctx.r3.s64 = ctx.r26.s64 + 456;
	// bl 0x82e80980
	ctx.lr = 0x82EB6E10;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6E14:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21948
	ctx.r30.s64 = ctx.r11.s64 + -21948;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6E24;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6E2C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6ee8
	if (!ctx.cr0.eq) goto loc_82EB6EE8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6E50;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6e60
	if (ctx.cr0.eq) goto loc_82EB6E60;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6E5C;
	sub_82B568C0(ctx, base);
	// b 0x82eb6e64
	goto loc_82EB6E64;
loc_82EB6E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6E64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5508
	ctx.lr = 0x82EB6E70;
	sub_82EB5508(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6ea4
	if (!ctx.cr0.eq) goto loc_82EB6EA4;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4ec8
	ctx.lr = 0x82EB6E80;
	sub_82EB4EC8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB6E8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4ec8
	ctx.lr = 0x82EB6E94;
	sub_82EB4EC8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb6e8c
	if (ctx.cr6.lt) goto loc_82EB6E8C;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB6EA4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,536
	ctx.r3.s64 = ctx.r26.s64 + 536;
	// bl 0x82e80980
	ctx.lr = 0x82EB6EE4;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6EE8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21964
	ctx.r30.s64 = ctx.r11.s64 + -21964;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6EF8;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6F00;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb6fbc
	if (!ctx.cr0.eq) goto loc_82EB6FBC;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6F24;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb6f34
	if (ctx.cr0.eq) goto loc_82EB6F34;
	// bl 0x82b568c0
	ctx.lr = 0x82EB6F30;
	sub_82B568C0(ctx, base);
	// b 0x82eb6f38
	goto loc_82EB6F38;
loc_82EB6F34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB6F38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5288
	ctx.lr = 0x82EB6F44;
	sub_82EB5288(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb6f78
	if (!ctx.cr0.eq) goto loc_82EB6F78;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4ce8
	ctx.lr = 0x82EB6F54;
	sub_82EB4CE8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB6F60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4ce8
	ctx.lr = 0x82EB6F68;
	sub_82EB4CE8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb6f60
	if (ctx.cr6.lt) goto loc_82EB6F60;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB6F78:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB6FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,476
	ctx.r3.s64 = ctx.r26.s64 + 476;
	// bl 0x82e80980
	ctx.lr = 0x82EB6FB8;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB6FBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-21992
	ctx.r30.s64 = ctx.r11.s64 + -21992;
	// bl 0x826b4b60
	ctx.lr = 0x82EB6FCC;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB6FD4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7090
	if (!ctx.cr0.eq) goto loc_82EB7090;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB6FF8;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb7008
	if (ctx.cr0.eq) goto loc_82EB7008;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7004;
	sub_82B568C0(ctx, base);
	// b 0x82eb700c
	goto loc_82EB700C;
loc_82EB7008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB700C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb53c8
	ctx.lr = 0x82EB7018;
	sub_82EB53C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb704c
	if (!ctx.cr0.eq) goto loc_82EB704C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4dd8
	ctx.lr = 0x82EB7028;
	sub_82EB4DD8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB7034:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4dd8
	ctx.lr = 0x82EB703C;
	sub_82EB4DD8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb7034
	if (ctx.cr6.lt) goto loc_82EB7034;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB704C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,496
	ctx.r3.s64 = ctx.r26.s64 + 496;
	// bl 0x82e80980
	ctx.lr = 0x82EB708C;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB7090:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22016
	ctx.r30.s64 = ctx.r11.s64 + -22016;
	// bl 0x826b4b60
	ctx.lr = 0x82EB70A0;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB70A8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7164
	if (!ctx.cr0.eq) goto loc_82EB7164;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB70CC;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb70dc
	if (ctx.cr0.eq) goto loc_82EB70DC;
	// bl 0x82b568c0
	ctx.lr = 0x82EB70D8;
	sub_82B568C0(ctx, base);
	// b 0x82eb70e0
	goto loc_82EB70E0;
loc_82EB70DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB70E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5328
	ctx.lr = 0x82EB70EC;
	sub_82EB5328(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb7120
	if (!ctx.cr0.eq) goto loc_82EB7120;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4d60
	ctx.lr = 0x82EB70FC;
	sub_82EB4D60(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB7108:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4d60
	ctx.lr = 0x82EB7110;
	sub_82EB4D60(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb7108
	if (ctx.cr6.lt) goto loc_82EB7108;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB7120:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB714C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,516
	ctx.r3.s64 = ctx.r26.s64 + 516;
	// bl 0x82e80980
	ctx.lr = 0x82EB7160;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB7164:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22036
	ctx.r30.s64 = ctx.r11.s64 + -22036;
	// bl 0x826b4b60
	ctx.lr = 0x82EB7174;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB717C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7238
	if (!ctx.cr0.eq) goto loc_82EB7238;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB71A0;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb71b0
	if (ctx.cr0.eq) goto loc_82EB71B0;
	// bl 0x82b568c0
	ctx.lr = 0x82EB71AC;
	sub_82B568C0(ctx, base);
	// b 0x82eb71b4
	goto loc_82EB71B4;
loc_82EB71B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB71B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5468
	ctx.lr = 0x82EB71C0;
	sub_82EB5468(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb71f4
	if (!ctx.cr0.eq) goto loc_82EB71F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4e50
	ctx.lr = 0x82EB71D0;
	sub_82EB4E50(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB71DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4e50
	ctx.lr = 0x82EB71E4;
	sub_82EB4E50(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb71dc
	if (ctx.cr6.lt) goto loc_82EB71DC;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB71F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,556
	ctx.r3.s64 = ctx.r26.s64 + 556;
	// bl 0x82e80980
	ctx.lr = 0x82EB7234;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB7238:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22044
	ctx.r30.s64 = ctx.r11.s64 + -22044;
	// bl 0x826b4b60
	ctx.lr = 0x82EB7248;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7250;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb730c
	if (!ctx.cr0.eq) goto loc_82EB730C;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB7274;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb7284
	if (ctx.cr0.eq) goto loc_82EB7284;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7280;
	sub_82B568C0(ctx, base);
	// b 0x82eb7288
	goto loc_82EB7288;
loc_82EB7284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7288:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb5648
	ctx.lr = 0x82EB7294;
	sub_82EB5648(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb72c8
	if (!ctx.cr0.eq) goto loc_82EB72C8;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4fb8
	ctx.lr = 0x82EB72A4;
	sub_82EB4FB8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB72B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4fb8
	ctx.lr = 0x82EB72B8;
	sub_82EB4FB8(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb72b0
	if (ctx.cr6.lt) goto loc_82EB72B0;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB72C8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB72DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB72F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,576
	ctx.r3.s64 = ctx.r26.s64 + 576;
	// bl 0x82e80980
	ctx.lr = 0x82EB7308;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB730C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22056
	ctx.r30.s64 = ctx.r11.s64 + -22056;
	// bl 0x826b4b60
	ctx.lr = 0x82EB731C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7324;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb73e0
	if (!ctx.cr0.eq) goto loc_82EB73E0;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB7348;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb7358
	if (ctx.cr0.eq) goto loc_82EB7358;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7354;
	sub_82B568C0(ctx, base);
	// b 0x82eb735c
	goto loc_82EB735C;
loc_82EB7358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB735C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb55a8
	ctx.lr = 0x82EB7368;
	sub_82EB55A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb739c
	if (!ctx.cr0.eq) goto loc_82EB739C;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb4f40
	ctx.lr = 0x82EB7378;
	sub_82EB4F40(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB7384:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb4f40
	ctx.lr = 0x82EB738C;
	sub_82EB4F40(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb7384
	if (ctx.cr6.lt) goto loc_82EB7384;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB739C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB73B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB73C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,596
	ctx.r3.s64 = ctx.r26.s64 + 596;
	// bl 0x82e80980
	ctx.lr = 0x82EB73DC;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
loc_82EB73E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-22080
	ctx.r30.s64 = ctx.r11.s64 + -22080;
	// bl 0x826b4b60
	ctx.lr = 0x82EB73F0;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB73F8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb59d8
	if (!ctx.cr0.eq) goto loc_82EB59D8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x82e7d750
	ctx.lr = 0x82EB741C;
	sub_82E7D750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb742c
	if (ctx.cr0.eq) goto loc_82EB742C;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7428;
	sub_82B568C0(ctx, base);
	// b 0x82eb7430
	goto loc_82EB7430;
loc_82EB742C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb59d8
	if (ctx.cr6.eq) goto loc_82EB59D8;
	// bl 0x82eb56e8
	ctx.lr = 0x82EB743C;
	sub_82EB56E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb7470
	if (!ctx.cr0.eq) goto loc_82EB7470;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82eb5030
	ctx.lr = 0x82EB744C;
	sub_82EB5030(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82eb59d8
	if (!ctx.cr6.gt) goto loc_82EB59D8;
loc_82EB7458:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82eb5030
	ctx.lr = 0x82EB7460;
	sub_82EB5030(ctx, base);
	// lwz r11,1024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82eb7458
	if (ctx.cr6.lt) goto loc_82EB7458;
	// b 0x82eb59d8
	goto loc_82EB59D8;
loc_82EB7470:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB749C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb59d8
	if (ctx.cr0.eq) goto loc_82EB59D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,616
	ctx.r3.s64 = ctx.r26.s64 + 616;
	// bl 0x82e80980
	ctx.lr = 0x82EB74B0;
	sub_82E80980(ctx, base);
	// b 0x82eb5854
	goto loc_82EB5854;
}

__attribute__((alias("__imp__sub_82EB74B4"))) PPC_WEAK_FUNC(sub_82EB74B4);
PPC_FUNC_IMPL(__imp__sub_82EB74B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB74B8"))) PPC_WEAK_FUNC(sub_82EB74B8);
PPC_FUNC_IMPL(__imp__sub_82EB74B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB74C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB74D4;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb7500
	if (ctx.cr0.eq) goto loc_82EB7500;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB74EC;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22336
	ctx.r11.s64 = ctx.r11.s64 + -22336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb7504
	goto loc_82EB7504;
loc_82EB7500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB750C"))) PPC_WEAK_FUNC(sub_82EB750C);
PPC_FUNC_IMPL(__imp__sub_82EB750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7510"))) PPC_WEAK_FUNC(sub_82EB7510);
PPC_FUNC_IMPL(__imp__sub_82EB7510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EB7518;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r11,29680
	ctx.r4.s64 = ctx.r11.s64 + 29680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82e82f30
	ctx.lr = 0x82EB753C;
	sub_82E82F30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb75f4
	if (ctx.cr0.eq) goto loc_82EB75F4;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ecd058
	ctx.lr = 0x82EB7550;
	sub_82ECD058(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb7568
	if (ctx.cr0.eq) goto loc_82EB7568;
	// bl 0x82ecf190
	ctx.lr = 0x82EB7564;
	sub_82ECF190(ctx, base);
	// b 0x82eb756c
	goto loc_82EB756C;
loc_82EB7568:
	// bl 0x82ecf1a0
	ctx.lr = 0x82EB756C;
	sub_82ECF1A0(ctx, base);
loc_82EB756C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb75ec
	if (ctx.cr6.eq) goto loc_82EB75EC;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82eb75ec
	if (ctx.cr6.eq) goto loc_82EB75EC;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r11,27544
	ctx.r4.s64 = ctx.r11.s64 + 27544;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82EB7594;
	sub_82267BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb75f4
	if (ctx.cr0.eq) goto loc_82EB75F4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb75e4
	if (ctx.cr6.eq) goto loc_82EB75E4;
loc_82EB75AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ecf138
	ctx.lr = 0x82EB75B8;
	sub_82ECF138(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ece090
	ctx.lr = 0x82EB75C8;
	sub_82ECE090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb75e0
	if (!ctx.cr0.eq) goto loc_82EB75E0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82eb75ac
	if (ctx.cr6.lt) goto loc_82EB75AC;
	// b 0x82eb75e4
	goto loc_82EB75E4;
loc_82EB75E0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82EB75E4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb75f4
	if (!ctx.cr0.eq) goto loc_82EB75F4;
loc_82EB75EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb761c
	goto loc_82EB761C;
loc_82EB75F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB761C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB761C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82EB7624"))) PPC_WEAK_FUNC(sub_82EB7624);
PPC_FUNC_IMPL(__imp__sub_82EB7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7628"))) PPC_WEAK_FUNC(sub_82EB7628);
PPC_FUNC_IMPL(__imp__sub_82EB7628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82EB7630;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82eb76f0
	if (!ctx.cr6.eq) goto loc_82EB76F0;
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB767C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r5,r10,29968
	ctx.r5.s64 = ctx.r10.s64 + 29968;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ececb0
	ctx.lr = 0x82EB76DC;
	sub_82ECECB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7714
	if (!ctx.cr0.eq) goto loc_82EB7714;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82eb77a4
	if (ctx.cr6.eq) goto loc_82EB77A4;
loc_82EB76F0:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,29680
	ctx.r4.s64 = ctx.r11.s64 + 29680;
	// bl 0x82e82f30
	ctx.lr = 0x82EB7700;
	sub_82E82F30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb771c
	if (ctx.cr0.eq) goto loc_82EB771C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82eb77a4
	goto loc_82EB77A4;
loc_82EB7714:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb77a8
	goto loc_82EB77A8;
loc_82EB771C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB7738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r5,r10,29968
	ctx.r5.s64 = ctx.r10.s64 + 29968;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ececb0
	ctx.lr = 0x82EB7798;
	sub_82ECECB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82eb77a8
	if (!ctx.cr0.eq) goto loc_82EB77A8;
loc_82EB77A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB77A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82EB77B0"))) PPC_WEAK_FUNC(sub_82EB77B0);
PPC_FUNC_IMPL(__imp__sub_82EB77B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-13564
	ctx.r3.s64 = ctx.r11.s64 + -13564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB77BC"))) PPC_WEAK_FUNC(sub_82EB77BC);
PPC_FUNC_IMPL(__imp__sub_82EB77BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB77C0"))) PPC_WEAK_FUNC(sub_82EB77C0);
PPC_FUNC_IMPL(__imp__sub_82EB77C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB77C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB77DC;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb7808
	if (ctx.cr0.eq) goto loc_82EB7808;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB77F4;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21212
	ctx.r11.s64 = ctx.r11.s64 + -21212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb780c
	goto loc_82EB780C;
loc_82EB7808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB780C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB7814"))) PPC_WEAK_FUNC(sub_82EB7814);
PPC_FUNC_IMPL(__imp__sub_82EB7814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7818"))) PPC_WEAK_FUNC(sub_82EB7818);
PPC_FUNC_IMPL(__imp__sub_82EB7818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EB7820;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12324
	ctx.r4.s64 = ctx.r11.s64 + -12324;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x821e8238
	ctx.lr = 0x82EB784C;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb79b0
	if (ctx.cr0.eq) goto loc_82EB79B0;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb79b0
	if (ctx.cr0.eq) goto loc_82EB79B0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14816
	ctx.r4.s64 = ctx.r11.s64 + -14816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7874;
	sub_82E76FD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-10944
	ctx.r4.s64 = ctx.r11.s64 + -10944;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB788C;
	sub_82E76FD0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-15092
	ctx.r4.s64 = ctx.r11.s64 + -15092;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB78A4;
	sub_82E76FD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eb79b0
	if (ctx.cr6.eq) goto loc_82EB79B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb79b0
	if (ctx.cr6.eq) goto loc_82EB79B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82eb79b0
	if (ctx.cr6.eq) goto loc_82EB79B0;
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x82eb790c
	if (!ctx.cr6.eq) goto loc_82EB790C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb79b4
	goto loc_82EB79B4;
loc_82EB790C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e7f5c8
	ctx.lr = 0x82EB793C;
	sub_82E7F5C8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82239e88
	ctx.lr = 0x82EB7960;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stb r31,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r31.u8);
	// fmadds f0,f12,f0,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x82eb79b4
	goto loc_82EB79B4;
loc_82EB79B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB79B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EB79C0"))) PPC_WEAK_FUNC(sub_82EB79C0);
PPC_FUNC_IMPL(__imp__sub_82EB79C0) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB79E4;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb79fc
	if (ctx.cr0.eq) goto loc_82EB79FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eaf048
	ctx.lr = 0x82EB79F8;
	sub_82EAF048(ctx, base);
	// b 0x82eb7a00
	goto loc_82EB7A00;
loc_82EB79FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7A00:
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

__attribute__((alias("__imp__sub_82EB7A18"))) PPC_WEAK_FUNC(sub_82EB7A18);
PPC_FUNC_IMPL(__imp__sub_82EB7A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB7A20;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB7A38;
	sub_826B4B60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb7b68
	if (ctx.cr0.eq) goto loc_82EB7B68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21152
	ctx.r4.s64 = ctx.r11.s64 + -21152;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7A50;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7ab8
	if (!ctx.cr0.eq) goto loc_82EB7AB8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb7a70
	if (ctx.cr0.eq) goto loc_82EB7A70;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb7a78
	goto loc_82EB7A78;
loc_82EB7A70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB7A78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7A80;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB7A84;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB7A98:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb7aa4
	if (ctx.cr6.lt) goto loc_82EB7AA4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB7AA4:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb7a98
	if (!ctx.cr6.eq) goto loc_82EB7A98;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_82EB7AB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb7b74
	goto loc_82EB7B74;
loc_82EB7AB8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-21164
	ctx.r4.s64 = ctx.r11.s64 + -21164;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7AC8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb7b68
	if (!ctx.cr0.eq) goto loc_82EB7B68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7AD8;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB7ADC;
	sub_82CA5860(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82260900
	ctx.lr = 0x82EB7AEC;
	sub_82260900(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-8656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8656);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,2628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2628);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,-30288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30288);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_82EB7B10:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x82eb7b24
	if (ctx.cr6.lt) goto loc_82EB7B24;
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bgt cr6,0x82eb7b24
	if (ctx.cr6.gt) goto loc_82EB7B24;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82EB7B24:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb7b10
	if (!ctx.cr6.eq) goto loc_82EB7B10;
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x82239e88
	ctx.lr = 0x82EB7B38;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f13,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82eb7b60
	if (ctx.cr6.gt) goto loc_82EB7B60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb7ab0
	if (!ctx.cr6.lt) goto loc_82EB7AB0;
loc_82EB7B60:
	// stfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// b 0x82eb7ab0
	goto loc_82EB7AB0;
loc_82EB7B68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EB7B74;
	sub_82EAED28(ctx, base);
loc_82EB7B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB7B80"))) PPC_WEAK_FUNC(sub_82EB7B80);
PPC_FUNC_IMPL(__imp__sub_82EB7B80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7B8C"))) PPC_WEAK_FUNC(sub_82EB7B8C);
PPC_FUNC_IMPL(__imp__sub_82EB7B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7B90"))) PPC_WEAK_FUNC(sub_82EB7B90);
PPC_FUNC_IMPL(__imp__sub_82EB7B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EB7B98;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	ctx.lr = 0x82EB7BA0;
	sub_82CA7500(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb7bec
	if (!ctx.cr6.eq) goto loc_82EB7BEC;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb7bec
	if (!ctx.cr6.eq) goto loc_82EB7BEC;
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb7bf0
	if (ctx.cr6.eq) goto loc_82EB7BF0;
loc_82EB7BEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EB7BF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb7ea4
	if (!ctx.cr0.eq) goto loc_82EB7EA4;
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f28,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f30,f0
	ctx.f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82e7f5c8
	ctx.lr = 0x82EB7C4C;
	sub_82E7F5C8(ctx, base);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// lfs f13,2628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82eb7c7c
	if (!ctx.cr6.gt) goto loc_82EB7C7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-30284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30284);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82eb7ca0
	goto loc_82EB7CA0;
loc_82EB7C7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-30288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb7c9c
	if (!ctx.cr6.lt) goto loc_82EB7C9C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-30284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82eb7ca0
	goto loc_82EB7CA0;
loc_82EB7C9C:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
loc_82EB7CA0:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lfs f0,-8656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8656);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82239e88
	ctx.lr = 0x82EB7CBC;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14540
	ctx.r4.s64 = ctx.r11.s64 + -14540;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7CD8;
	sub_82E76FD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb7dd0
	if (ctx.cr0.eq) goto loc_82EB7DD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,3192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x82eb7cfc
	if (ctx.cr0.eq) goto loc_82EB7CFC;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82EB7CFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82eb7d10
	if (ctx.cr6.eq) goto loc_82EB7D10;
	// lfs f12,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82eb7d14
	goto loc_82EB7D14;
loc_82EB7D10:
	// lfs f31,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
loc_82EB7D14:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// stb r11,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r11.u8);
	// ble cr6,0x82eb7dd0
	if (!ctx.cr6.gt) goto loc_82EB7DD0;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x82eb7dd0
	if (!ctx.cr6.lt) goto loc_82EB7DD0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12048
	ctx.r4.s64 = ctx.r11.s64 + -12048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8238
	ctx.lr = 0x82EB7D40;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82eb7d50
	if (!ctx.cr0.eq) goto loc_82EB7D50;
	// addi r11,r30,76
	ctx.r11.s64 = ctx.r30.s64 + 76;
loc_82EB7D50:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82eb7dd0
	if (!ctx.cr6.lt) goto loc_82EB7DD0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r27,20(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20, ctx.r27.u8);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 940);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82e7f5c8
	ctx.lr = 0x82EB7DB8;
	sub_82E7F5C8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82EB7DD0:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15092
	ctx.r4.s64 = ctx.r11.s64 + -15092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7DE4;
	sub_82E76FD0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82eb7e3c
	if (!ctx.cr0.eq) goto loc_82EB7E3C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13988
	ctx.r4.s64 = ctx.r11.s64 + -13988;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7E10;
	sub_82E76FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb7e20
	if (!ctx.cr0.eq) goto loc_82EB7E20;
loc_82EB7E18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb7ea8
	goto loc_82EB7EA8;
loc_82EB7E20:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
	// ble cr6,0x82eb7e34
	if (!ctx.cr6.gt) goto loc_82EB7E34;
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82eb7e44
	goto loc_82EB7E44;
loc_82EB7E34:
	// stfs f30,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82eb7e44
	goto loc_82EB7E44;
loc_82EB7E3C:
	// stfs f26,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
loc_82EB7E44:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14816
	ctx.r4.s64 = ctx.r11.s64 + -14816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7E58;
	sub_82E76FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82eb7e9c
	if (!ctx.cr0.eq) goto loc_82EB7E9C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12884
	ctx.r4.s64 = ctx.r11.s64 + -12884;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e76fd0
	ctx.lr = 0x82EB7E74;
	sub_82E76FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb7e18
	if (ctx.cr0.eq) goto loc_82EB7E18;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x82eb7e94
	if (!ctx.cr6.gt) goto loc_82EB7E94;
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82eb7ea4
	goto loc_82EB7EA4;
loc_82EB7E94:
	// stfs f30,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x82eb7ea4
	goto loc_82EB7EA4;
loc_82EB7E9C:
	// stfs f27,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r27,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r27.u8);
loc_82EB7EA4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB7EA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	ctx.lr = 0x82EB7EB4;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EB7EB8"))) PPC_WEAK_FUNC(sub_82EB7EB8);
PPC_FUNC_IMPL(__imp__sub_82EB7EB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB7ED0"))) PPC_WEAK_FUNC(sub_82EB7ED0);
PPC_FUNC_IMPL(__imp__sub_82EB7ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-13012
	ctx.r3.s64 = ctx.r11.s64 + -13012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7EDC"))) PPC_WEAK_FUNC(sub_82EB7EDC);
PPC_FUNC_IMPL(__imp__sub_82EB7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7EE0"))) PPC_WEAK_FUNC(sub_82EB7EE0);
PPC_FUNC_IMPL(__imp__sub_82EB7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB7EE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB7EFC;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eb7f28
	if (ctx.cr0.eq) goto loc_82EB7F28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB7F14;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21108
	ctx.r11.s64 = ctx.r11.s64 + -21108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eb7f2c
	goto loc_82EB7F2C;
loc_82EB7F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB7F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB7F34"))) PPC_WEAK_FUNC(sub_82EB7F34);
PPC_FUNC_IMPL(__imp__sub_82EB7F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7F38"))) PPC_WEAK_FUNC(sub_82EB7F38);
PPC_FUNC_IMPL(__imp__sub_82EB7F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eaed28
	sub_82EAED28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7F3C"))) PPC_WEAK_FUNC(sub_82EB7F3C);
PPC_FUNC_IMPL(__imp__sub_82EB7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7F40"))) PPC_WEAK_FUNC(sub_82EB7F40);
PPC_FUNC_IMPL(__imp__sub_82EB7F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB7F74"))) PPC_WEAK_FUNC(sub_82EB7F74);
PPC_FUNC_IMPL(__imp__sub_82EB7F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB7F78"))) PPC_WEAK_FUNC(sub_82EB7F78);
PPC_FUNC_IMPL(__imp__sub_82EB7F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB7F80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-20952
	ctx.r29.s64 = ctx.r11.s64 + -20952;
	// bl 0x826b4b60
	ctx.lr = 0x82EB7F9C;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7FA4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb7fc8
	if (!ctx.cr0.eq) goto loc_82EB7FC8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7FB4;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB7FB8;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,216(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 216, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB7FC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-20968
	ctx.r29.s64 = ctx.r11.s64 + -20968;
	// bl 0x826b4b60
	ctx.lr = 0x82EB7FD4;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB7FDC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb8000
	if (!ctx.cr0.eq) goto loc_82EB8000;
	// bl 0x82b568c0
	ctx.lr = 0x82EB7FEC;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB7FF0;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,212(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB8000:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-20984
	ctx.r29.s64 = ctx.r11.s64 + -20984;
	// bl 0x826b4b60
	ctx.lr = 0x82EB800C;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB8014;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb8038
	if (!ctx.cr0.eq) goto loc_82EB8038;
	// bl 0x82b568c0
	ctx.lr = 0x82EB8024;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8028;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,220(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB8038:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-21000
	ctx.r29.s64 = ctx.r11.s64 + -21000;
	// bl 0x826b4b60
	ctx.lr = 0x82EB8044;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB804C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb8070
	if (!ctx.cr0.eq) goto loc_82EB8070;
	// bl 0x82b568c0
	ctx.lr = 0x82EB805C;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8060;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,224(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB8070:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-21016
	ctx.r29.s64 = ctx.r11.s64 + -21016;
	// bl 0x826b4b60
	ctx.lr = 0x82EB807C;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB8084;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb80a8
	if (!ctx.cr0.eq) goto loc_82EB80A8;
	// bl 0x82b568c0
	ctx.lr = 0x82EB8094;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8098;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB80A8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-21036
	ctx.r29.s64 = ctx.r11.s64 + -21036;
	// bl 0x826b4b60
	ctx.lr = 0x82EB80B4;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB80BC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82eb80e0
	if (!ctx.cr0.eq) goto loc_82EB80E0;
	// bl 0x82b568c0
	ctx.lr = 0x82EB80CC;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB80D0;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,232(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB80E0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-21060
	ctx.r29.s64 = ctx.r11.s64 + -21060;
	// bl 0x826b4b60
	ctx.lr = 0x82EB80EC;
	sub_826B4B60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB80F4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb8124
	if (!ctx.cr0.eq) goto loc_82EB8124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB8104;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8108;
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,236(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,208(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// b 0x82eb8130
	goto loc_82EB8130;
loc_82EB8124:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb7f38
	ctx.lr = 0x82EB8130;
	sub_82EB7F38(ctx, base);
loc_82EB8130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB8138"))) PPC_WEAK_FUNC(sub_82EB8138);
PPC_FUNC_IMPL(__imp__sub_82EB8138) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eba420
	sub_82EBA420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB813C"))) PPC_WEAK_FUNC(sub_82EB813C);
PPC_FUNC_IMPL(__imp__sub_82EB813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8140"))) PPC_WEAK_FUNC(sub_82EB8140);
PPC_FUNC_IMPL(__imp__sub_82EB8140) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 200, ctx.r11.u8);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8150"))) PPC_WEAK_FUNC(sub_82EB8150);
PPC_FUNC_IMPL(__imp__sub_82EB8150) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB8178;
	sub_82EAEC38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-20936
	ctx.r10.s64 = ctx.r11.s64 + -20936;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stfs f31,204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// lwz r11,-720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -720);
	// lfs f30,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8214
	if (ctx.cr0.eq) goto loc_82EB8214;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb8218
	goto loc_82EB8218;
loc_82EB8214:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_82EB8218:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lfs f0,27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,208(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f12,3052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,216(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f11,3800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,220(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f10,2680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f10,232(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f12,-16940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16940);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f12,244(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f0,2912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82EB828C;
	sub_82CA3190(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821e8238
	ctx.lr = 0x82EB82A8;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb82c0
	if (ctx.cr0.eq) goto loc_82EB82C0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82eb82dc
	if (!ctx.cr6.eq) goto loc_82EB82DC;
loc_82EB82C0:
	// lwz r11,-720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb82d4
	if (ctx.cr0.eq) goto loc_82EB82D4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82eb82d8
	goto loc_82EB82D8;
loc_82EB82D4:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82EB82D8:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82EB82DC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16472
	ctx.r4.s64 = ctx.r11.s64 + -16472;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821e8238
	ctx.lr = 0x82EB82F8;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8308
	if (ctx.cr0.eq) goto loc_82EB8308;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82EB8308:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = ctx.r11.s64 + -16196;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821e8238
	ctx.lr = 0x82EB8324;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8334
	if (ctx.cr0.eq) goto loc_82EB8334;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82EB8334:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -720);
	// addi r4,r11,6048
	ctx.r4.s64 = ctx.r11.s64 + 6048;
	// bl 0x82267be0
	ctx.lr = 0x82EB8344;
	sub_82267BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EB8370"))) PPC_WEAK_FUNC(sub_82EB8370);
PPC_FUNC_IMPL(__imp__sub_82EB8370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB837C"))) PPC_WEAK_FUNC(sub_82EB837C);
PPC_FUNC_IMPL(__imp__sub_82EB837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8380"))) PPC_WEAK_FUNC(sub_82EB8380);
PPC_FUNC_IMPL(__imp__sub_82EB8380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82eb83b0
	if (!ctx.cr6.eq) goto loc_82EB83B0;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x82eb83a0
	if (!ctx.cr6.eq) goto loc_82EB83A0;
loc_82EB8398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB83A0:
	// fdivs f0,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82eb83f4
	goto loc_82EB83F4;
loc_82EB83B0:
	// fmuls f12,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f13,f2,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82eb8398
	if (ctx.cr6.lt) goto loc_82EB8398;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsubs f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82EB83F4:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8400"))) PPC_WEAK_FUNC(sub_82EB8400);
PPC_FUNC_IMPL(__imp__sub_82EB8400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,2708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2708);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f13,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f12,f9,f9,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f13,f9,f10,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f1,f10,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f3,f8,f8,f12
	ctx.f3.f64 = double(float(-(ctx.f8.f64 * ctx.f8.f64 - ctx.f12.f64)));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82eb8380
	sub_82EB8380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8460"))) PPC_WEAK_FUNC(sub_82EB8460);
PPC_FUNC_IMPL(__imp__sub_82EB8460) {
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
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB8484;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb849c
	if (ctx.cr0.eq) goto loc_82EB849C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eb8150
	ctx.lr = 0x82EB8498;
	sub_82EB8150(ctx, base);
	// b 0x82eb84a0
	goto loc_82EB84A0;
loc_82EB849C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB84A0:
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

__attribute__((alias("__imp__sub_82EB84B8"))) PPC_WEAK_FUNC(sub_82EB84B8);
PPC_FUNC_IMPL(__imp__sub_82EB84B8) {
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
	// bl 0x82ca74f4
	ctx.lr = 0x82EB84CC;
	sub_82CA74F4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f27,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmr f12,f27
	ctx.f12.f64 = ctx.f27.f64;
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f26,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f26.f64 = double(temp.f32);
	// ble 0x82eb8568
	if (!ctx.cr0.gt) goto loc_82EB8568;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
loc_82EB8510:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f9,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f0,f9,f9
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb855c
	if (!ctx.cr6.gt) goto loc_82EB855C;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82EB855C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82eb8510
	if (!ctx.cr0.eq) goto loc_82EB8510;
loc_82EB8568:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb8594
	if (!ctx.cr6.gt) goto loc_82EB8594;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f25,f0,f13
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f23,f0,f12
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f24,f0,f11
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x82eb85a0
	goto loc_82EB85A0;
loc_82EB8594:
	// fmr f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f27.f64;
	// fmr f23,f27
	ctx.f23.f64 = ctx.f27.f64;
	// fmr f24,f27
	ctx.f24.f64 = ctx.f27.f64;
loc_82EB85A0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82eb85f4
	if (!ctx.cr6.gt) goto loc_82EB85F4;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82eb8600
	goto loc_82EB8600;
loc_82EB85F4:
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
loc_82EB8600:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lfs f28,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f28.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12324
	ctx.r4.s64 = ctx.r11.s64 + -12324;
	// bl 0x821e8238
	ctx.lr = 0x82EB8614;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8724
	if (ctx.cr0.eq) goto loc_82EB8724;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8724
	if (ctx.cr0.eq) goto loc_82EB8724;
	// fmuls f12,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// fmuls f0,f30,f23
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// fmuls f10,f24,f31
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// fmsubs f11,f23,f31,f12
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f31.f64 - ctx.f12.f64));
	// fmsubs f13,f29,f24,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f24.f64 - ctx.f0.f64));
	// fmsubs f12,f30,f25,f10
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 - ctx.f10.f64));
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x82eb86c8
	if (!ctx.cr6.eq) goto loc_82EB86C8;
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bne cr6,0x82eb8674
	if (!ctx.cr6.eq) goto loc_82EB8674;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bne cr6,0x82eb8674
	if (!ctx.cr6.eq) goto loc_82EB8674;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-9560
	ctx.r11.s64 = ctx.r11.s64 + -9560;
	// b 0x82eb867c
	goto loc_82EB867C;
loc_82EB8674:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
loc_82EB867C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f9,f29,f12
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f30,f12,f10
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f0,f31,f13,f9
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227ef68
	ctx.lr = 0x82EB86B8;
	sub_8227EF68(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82eb86f4
	goto loc_82EB86F4;
loc_82EB86C8:
	// fdivs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmsubs f10,f12,f30,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f10.f64));
	// fmsubs f12,f0,f31,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f11.f64));
	// fmsubs f11,f29,f13,f9
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_82EB86F4:
	// fsubs f0,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fmuls f10,f31,f28
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// fmuls f9,f29,f28
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmuls f8,f30,f28
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// b 0x82eb87a4
	goto loc_82EB87A4;
loc_82EB8724:
	// fmuls f0,f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// fmsubs f0,f30,f25,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82eb8740
	if (!ctx.cr6.lt) goto loc_82EB8740;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f13.f64 = double(temp.f32);
loc_82EB8740:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// fsubs f0,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fmuls f9,f31,f28
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// fmuls f7,f30,f28
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f29,f11
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f30,f10
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f5,f31,f12
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmsubs f12,f30,f12,f8
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f11,f31,f11,f6
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f10,f29,f10,f5
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmuls f8,f29,f28
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
loc_82EB87A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227ef68
	ctx.lr = 0x82EB87B8;
	sub_8227EF68(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7540
	ctx.lr = 0x82EB87DC;
	sub_82CA7540(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB87EC"))) PPC_WEAK_FUNC(sub_82EB87EC);
PPC_FUNC_IMPL(__imp__sub_82EB87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB87F0"))) PPC_WEAK_FUNC(sub_82EB87F0);
PPC_FUNC_IMPL(__imp__sub_82EB87F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB87F8;
	sub_82CA2BEC(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8830
	if (ctx.cr0.eq) goto loc_82EB8830;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82eb8834
	goto loc_82EB8834;
loc_82EB8830:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82EB8834:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8238
	ctx.lr = 0x82EB8848;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8854
	if (ctx.cr0.eq) goto loc_82EB8854;
	// lfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
loc_82EB8854:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f9,f0
	ctx.f9.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x82eb88b0
	if (!ctx.cr6.gt) goto loc_82EB88B0;
	// fdivs f0,f31,f9
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82eb88bc
	goto loc_82EB88BC;
loc_82EB88B0:
	// fmr f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82EB88BC:
	// lfs f12,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f8,f11,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82eb88e8
	if (ctx.cr6.gt) goto loc_82EB88E8;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82eb8aa4
	if (!ctx.cr6.lt) goto loc_82EB8AA4;
loc_82EB88E8:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// lfs f9,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f4,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f5,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f12,2624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f5,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsubs f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x82eb89ac
	if (ctx.cr6.eq) goto loc_82EB89AC;
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f10,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f31,f0,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
loc_82EB89AC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82eb8400
	ctx.lr = 0x82EB89F0;
	sub_82EB8400(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82eb8a04
	if (ctx.cr6.lt) goto loc_82EB8A04;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB8A04:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb8aa4
	if (ctx.cr0.eq) goto loc_82EB8AA4;
	// lfs f13,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb8aa4
	if (!ctx.cr6.lt) goto loc_82EB8AA4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82eb8aa4
	if (!ctx.cr6.lt) goto loc_82EB8AA4;
	// lfs f13,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82eb8aa4
	if (!ctx.cr6.gt) goto loc_82EB8AA4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bge cr6,0x82eb8a50
	if (!ctx.cr6.lt) goto loc_82EB8A50;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82EB8A50:
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb8aa4
	if (!ctx.cr6.lt) goto loc_82EB8AA4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_82EB8AA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB8AB4"))) PPC_WEAK_FUNC(sub_82EB8AB4);
PPC_FUNC_IMPL(__imp__sub_82EB8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8AB8"))) PPC_WEAK_FUNC(sub_82EB8AB8);
PPC_FUNC_IMPL(__imp__sub_82EB8AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f13,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f9,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f10,f9,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82eb8b64
	if (!ctx.cr6.gt) goto loc_82EB8B64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb8b30
	if (!ctx.cr6.lt) goto loc_82EB8B30;
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x82eb8b8c
	goto loc_82EB8B8C;
loc_82EB8B30:
	// lfs f11,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// b 0x82eb8b8c
	goto loc_82EB8B8C;
loc_82EB8B64:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// bge cr6,0x82eb8b84
	if (!ctx.cr6.lt) goto loc_82EB8B84;
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82eb8b88
	goto loc_82EB8B88;
loc_82EB8B84:
	// lfs f11,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
loc_82EB8B88:
	// fmuls f2,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
loc_82EB8B8C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EB8BCC:
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82eb8bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB8BCC;
	// stb r6,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r6.u8);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8C10"))) PPC_WEAK_FUNC(sub_82EB8C10);
PPC_FUNC_IMPL(__imp__sub_82EB8C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EB8C18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,3040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// beq 0x82eb8cb4
	if (ctx.cr0.eq) goto loc_82EB8CB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f1,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x82e80800
	ctx.lr = 0x82EB8C5C;
	sub_82E80800(ctx, base);
	// b 0x82eb8ca8
	goto loc_82EB8CA8;
loc_82EB8C60:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb8ca0
	if (ctx.cr6.eq) goto loc_82EB8CA0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8c90
	if (ctx.cr0.eq) goto loc_82EB8C90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb8ca0
	if (!ctx.cr6.eq) goto loc_82EB8CA0;
loc_82EB8C90:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb87f0
	ctx.lr = 0x82EB8CA0;
	sub_82EB87F0(ctx, base);
loc_82EB8CA0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82e802c8
	ctx.lr = 0x82EB8CA8;
	sub_82E802C8(ctx, base);
loc_82EB8CA8:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb8c60
	if (!ctx.cr0.eq) goto loc_82EB8C60;
	// b 0x82eb8d5c
	goto loc_82EB8D5C;
loc_82EB8CB4:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82eb8d54
	goto loc_82EB8D54;
loc_82EB8CC8:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb8d50
	if (ctx.cr6.eq) goto loc_82EB8D50;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8cfc
	if (ctx.cr0.eq) goto loc_82EB8CFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82eb8d50
	if (!ctx.cr6.eq) goto loc_82EB8D50;
loc_82EB8CFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82eb8d50
	if (!ctx.cr6.lt) goto loc_82EB8D50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb87f0
	ctx.lr = 0x82EB8D50;
	sub_82EB87F0(ctx, base);
loc_82EB8D50:
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
loc_82EB8D54:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82eb8cc8
	if (!ctx.cr0.eq) goto loc_82EB8CC8;
loc_82EB8D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EB8D64"))) PPC_WEAK_FUNC(sub_82EB8D64);
PPC_FUNC_IMPL(__imp__sub_82EB8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB8D68"))) PPC_WEAK_FUNC(sub_82EB8D68);
PPC_FUNC_IMPL(__imp__sub_82EB8D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EB8D70;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x82eb8c10
	ctx.lr = 0x82EB8D98;
	sub_82EB8C10(ctx, base);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8ddc
	if (ctx.cr0.eq) goto loc_82EB8DDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb84b8
	ctx.lr = 0x82EB8DB0;
	sub_82EB84B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb8ab8
	ctx.lr = 0x82EB8DC0;
	sub_82EB8AB8(ctx, base);
	// bl 0x82260978
	ctx.lr = 0x82EB8DC4;
	sub_82260978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
loc_82EB8DDC:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eb8dfc
	if (!ctx.cr0.eq) goto loc_82EB8DFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82eb7f40
	ctx.lr = 0x82EB8DF8;
	sub_82EB7F40(ctx, base);
	// b 0x82eb8e28
	goto loc_82EB8E28;
loc_82EB8DFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82eb8ab8
	ctx.lr = 0x82EB8E08;
	sub_82EB8AB8(ctx, base);
	// bl 0x82260978
	ctx.lr = 0x82EB8E0C;
	sub_82260978(ctx, base);
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82eb8e24
	if (!ctx.cr6.lt) goto loc_82EB8E24;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
loc_82EB8E24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB8E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EB8E30"))) PPC_WEAK_FUNC(sub_82EB8E30);
PPC_FUNC_IMPL(__imp__sub_82EB8E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB8E38;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB8E50;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8ed8
	if (ctx.cr0.eq) goto loc_82EB8ED8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20856
	ctx.r30.s64 = ctx.r11.s64 + -20856;
	// bl 0x826b4b60
	ctx.lr = 0x82EB8E68;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB8E70;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb8ed8
	if (!ctx.cr0.eq) goto loc_82EB8ED8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8e90
	if (ctx.cr0.eq) goto loc_82EB8E90;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb8e98
	goto loc_82EB8E98;
loc_82EB8E90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB8E98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB8EA0;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8EA4;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB8EB8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82eb8ec4
	if (!ctx.cr6.gt) goto loc_82EB8EC4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB8EC4:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb8eb8
	if (!ctx.cr6.eq) goto loc_82EB8EB8;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82EB8ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb8f4c
	goto loc_82EB8F4C;
loc_82EB8ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB8EE0;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb8f40
	if (ctx.cr0.eq) goto loc_82EB8F40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20872
	ctx.r30.s64 = ctx.r11.s64 + -20872;
	// bl 0x826b4b60
	ctx.lr = 0x82EB8EF8;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB8F00;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb8f40
	if (!ctx.cr0.eq) goto loc_82EB8F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB8F10;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB8F14;
	sub_82CA5860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,136(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
loc_82EB8F24:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb8f30
	if (ctx.cr6.lt) goto loc_82EB8F30;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB8F30:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb8f24
	if (!ctx.cr6.eq) goto loc_82EB8F24;
	// stfs f0,136(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 136, temp.u32);
	// b 0x82eb8ed0
	goto loc_82EB8ED0;
loc_82EB8F40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EB8F4C;
	sub_82EAED28(ctx, base);
loc_82EB8F4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB8F58"))) PPC_WEAK_FUNC(sub_82EB8F58);
PPC_FUNC_IMPL(__imp__sub_82EB8F58) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb8f8c
	if (ctx.cr0.eq) goto loc_82EB8F8C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb8f94
	goto loc_82EB8F94;
loc_82EB8F8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82EB8F94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2708);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB8FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebd970
	ctx.lr = 0x82EB8FD0;
	sub_82EBD970(ctx, base);
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

__attribute__((alias("__imp__sub_82EB8FE8"))) PPC_WEAK_FUNC(sub_82EB8FE8);
PPC_FUNC_IMPL(__imp__sub_82EB8FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,3088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9014"))) PPC_WEAK_FUNC(sub_82EB9014);
PPC_FUNC_IMPL(__imp__sub_82EB9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9018"))) PPC_WEAK_FUNC(sub_82EB9018);
PPC_FUNC_IMPL(__imp__sub_82EB9018) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EB9030;
	sub_82EAEC38(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r10,-20840
	ctx.r10.s64 = ctx.r10.s64 + -20840;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82EB9088:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82eb9088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB9088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_82EB90B0"))) PPC_WEAK_FUNC(sub_82EB90B0);
PPC_FUNC_IMPL(__imp__sub_82EB90B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-12460
	ctx.r3.s64 = ctx.r11.s64 + -12460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB90BC"))) PPC_WEAK_FUNC(sub_82EB90BC);
PPC_FUNC_IMPL(__imp__sub_82EB90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB90C0"))) PPC_WEAK_FUNC(sub_82EB90C0);
PPC_FUNC_IMPL(__imp__sub_82EB90C0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82eaecd0
	ctx.lr = 0x82EB90EC;
	sub_82EAECD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb9108
	if (ctx.cr0.eq) goto loc_82EB9108;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EB9108:
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

__attribute__((alias("__imp__sub_82EB9124"))) PPC_WEAK_FUNC(sub_82EB9124);
PPC_FUNC_IMPL(__imp__sub_82EB9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB9128"))) PPC_WEAK_FUNC(sub_82EB9128);
PPC_FUNC_IMPL(__imp__sub_82EB9128) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB914C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9164
	if (ctx.cr0.eq) goto loc_82EB9164;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eb9018
	ctx.lr = 0x82EB9160;
	sub_82EB9018(ctx, base);
	// b 0x82eb9168
	goto loc_82EB9168;
loc_82EB9164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9168:
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

__attribute__((alias("__imp__sub_82EB9180"))) PPC_WEAK_FUNC(sub_82EB9180);
PPC_FUNC_IMPL(__imp__sub_82EB9180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82EB9188;
	sub_82CA2BD4(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7504
	ctx.lr = 0x82EB9190;
	sub_82CA7504(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,924(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82eb91c4
	if (!ctx.cr6.eq) goto loc_82EB91C4;
loc_82EB91BC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82eb95dc
	goto loc_82EB95DC;
loc_82EB91C4:
	// bl 0x82260978
	ctx.lr = 0x82EB91C8;
	sub_82260978(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f11,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82eb91f8
	if (!ctx.cr6.gt) goto loc_82EB91F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eb9218
	goto loc_82EB9218;
loc_82EB91F8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82eb9214
	if (!ctx.cr6.gt) goto loc_82EB9214;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1040);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82eb9218
	if (!ctx.cr0.eq) goto loc_82EB9218;
loc_82EB9214:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB9218:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb92a8
	if (!ctx.cr0.eq) goto loc_82EB92A8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb9254
	if (!ctx.cr6.eq) goto loc_82EB9254;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb9254
	if (!ctx.cr6.eq) goto loc_82EB9254;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb9258
	if (ctx.cr6.eq) goto loc_82EB9258;
loc_82EB9254:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB9258:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb91bc
	if (ctx.cr0.eq) goto loc_82EB91BC;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb9294
	if (!ctx.cr6.eq) goto loc_82EB9294;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb9294
	if (!ctx.cr6.eq) goto loc_82EB9294;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb9298
	if (ctx.cr6.eq) goto loc_82EB9298;
loc_82EB9294:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EB9298:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne 0x82eb95dc
	if (!ctx.cr0.eq) goto loc_82EB95DC;
	// b 0x82eb91bc
	goto loc_82EB91BC;
loc_82EB92A8:
	// stfs f12,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb92e0
	if (!ctx.cr6.eq) goto loc_82EB92E0;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb92e0
	if (!ctx.cr6.eq) goto loc_82EB92E0;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb92e4
	if (ctx.cr6.eq) goto loc_82EB92E4;
loc_82EB92E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB92E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f30.f64 = double(temp.f32);
	// bne 0x82eb9334
	if (!ctx.cr0.eq) goto loc_82EB9334;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb9328
	if (!ctx.cr6.eq) goto loc_82EB9328;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb9328
	if (!ctx.cr6.eq) goto loc_82EB9328;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb932c
	if (ctx.cr6.eq) goto loc_82EB932C;
loc_82EB9328:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EB932C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb9374
	if (ctx.cr0.eq) goto loc_82EB9374;
loc_82EB9334:
	// lfs f0,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f30,132(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// bl 0x82e6c1c8
	ctx.lr = 0x82EB9374;
	sub_82E6C1C8(ctx, base);
loc_82EB9374:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82eb93c8
	if (!ctx.cr6.eq) goto loc_82EB93C8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e6c1c8
	ctx.lr = 0x82EB93BC;
	sub_82E6C1C8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// b 0x82eb95e0
	goto loc_82EB95E0;
loc_82EB93C8:
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bgt cr6,0x82eb95d8
	if (ctx.cr6.gt) goto loc_82EB95D8;
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// fadds f28,f10,f13
	ctx.f28.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f27,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r10,-30984
	ctx.r28.s64 = ctx.r10.s64 + -30984;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r29,592(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r30,20(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB94A4:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82eb94a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB94A4;
	// stb r25,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r25.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB94DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,-30984
	ctx.r26.s64 = ctx.r11.s64 + -30984;
	// beq 0x82eb95d4
	if (ctx.cr0.eq) goto loc_82EB95D4;
	// stfs f29,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stfs f27,108(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EB950C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eb950c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EB950C;
	// stb r25,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r25.u8);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb95d0
	if (ctx.cr0.eq) goto loc_82EB95D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb95d0
	if (ctx.cr0.eq) goto loc_82EB95D0;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82eb95d0
	if (ctx.cr6.gt) goto loc_82EB95D0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB95B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb95d0
	if (ctx.cr0.eq) goto loc_82EB95D0;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stfs f29,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f28,8(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f27,12(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r25,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r25.u8);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
loc_82EB95D0:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82EB95D4:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
loc_82EB95D8:
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
loc_82EB95DC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82EB95E0:
	// bl 0x82e6c1c8
	ctx.lr = 0x82EB95E4;
	sub_82E6C1C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7550
	ctx.lr = 0x82EB95F4;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82EB95F8"))) PPC_WEAK_FUNC(sub_82EB95F8);
PPC_FUNC_IMPL(__imp__sub_82EB95F8) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EB961C;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9634
	if (ctx.cr0.eq) goto loc_82EB9634;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eaee40
	ctx.lr = 0x82EB9630;
	sub_82EAEE40(ctx, base);
	// b 0x82eb9638
	goto loc_82EB9638;
loc_82EB9634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9638:
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

__attribute__((alias("__imp__sub_82EB9650"))) PPC_WEAK_FUNC(sub_82EB9650);
PPC_FUNC_IMPL(__imp__sub_82EB9650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EB9658;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB9670;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb96f8
	if (ctx.cr0.eq) goto loc_82EB96F8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20732
	ctx.r30.s64 = ctx.r11.s64 + -20732;
	// bl 0x826b4b60
	ctx.lr = 0x82EB9688;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB9690;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb96f8
	if (!ctx.cr0.eq) goto loc_82EB96F8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb96b0
	if (ctx.cr0.eq) goto loc_82EB96B0;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb96b8
	goto loc_82EB96B8;
loc_82EB96B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB96B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB96C0;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB96C4;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB96D8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb96e4
	if (ctx.cr6.lt) goto loc_82EB96E4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB96E4:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb96d8
	if (!ctx.cr6.eq) goto loc_82EB96D8;
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
loc_82EB96F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb9884
	goto loc_82EB9884;
loc_82EB96F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB9700;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9784
	if (ctx.cr0.eq) goto loc_82EB9784;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20744
	ctx.r30.s64 = ctx.r11.s64 + -20744;
	// bl 0x826b4b60
	ctx.lr = 0x82EB9718;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB9720;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb9784
	if (!ctx.cr0.eq) goto loc_82EB9784;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9740
	if (ctx.cr0.eq) goto loc_82EB9740;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb9748
	goto loc_82EB9748;
loc_82EB9740:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB9748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB9750;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB9754;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB9768:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb9774
	if (ctx.cr6.lt) goto loc_82EB9774;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB9774:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb9768
	if (!ctx.cr6.eq) goto loc_82EB9768;
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// b 0x82eb96f0
	goto loc_82EB96F0;
loc_82EB9784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB978C;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb97ec
	if (ctx.cr0.eq) goto loc_82EB97EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20764
	ctx.r30.s64 = ctx.r11.s64 + -20764;
	// bl 0x826b4b60
	ctx.lr = 0x82EB97A4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB97AC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb97ec
	if (!ctx.cr0.eq) goto loc_82EB97EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB97BC;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB97C0;
	sub_82CA5860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
loc_82EB97D0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb97dc
	if (ctx.cr6.lt) goto loc_82EB97DC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB97DC:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb97d0
	if (!ctx.cr6.eq) goto loc_82EB97D0;
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// b 0x82eb96f0
	goto loc_82EB96F0;
loc_82EB97EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EB97F4;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eb9878
	if (ctx.cr0.eq) goto loc_82EB9878;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20780
	ctx.r30.s64 = ctx.r11.s64 + -20780;
	// bl 0x826b4b60
	ctx.lr = 0x82EB980C;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EB9814;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82eb9878
	if (!ctx.cr0.eq) goto loc_82EB9878;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9834
	if (ctx.cr0.eq) goto loc_82EB9834;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb983c
	goto loc_82EB983C;
loc_82EB9834:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EB983C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EB9844;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EB9848;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EB985C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb9868
	if (ctx.cr6.lt) goto loc_82EB9868;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB9868:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82eb985c
	if (!ctx.cr6.eq) goto loc_82EB985C;
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// b 0x82eb96f0
	goto loc_82EB96F0;
loc_82EB9878:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EB9884;
	sub_82EAED28(ctx, base);
loc_82EB9884:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EB9890"))) PPC_WEAK_FUNC(sub_82EB9890);
PPC_FUNC_IMPL(__imp__sub_82EB9890) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// lfs f12,3080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb98cc
	if (ctx.cr0.eq) goto loc_82EB98CC;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82eb98d0
	goto loc_82EB98D0;
loc_82EB98CC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82EB98D0:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,27524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb98f4
	if (ctx.cr0.eq) goto loc_82EB98F4;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb98f8
	goto loc_82EB98F8;
loc_82EB98F4:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82EB98F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb991c
	if (ctx.cr0.eq) goto loc_82EB991C;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
loc_82EB991C:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r4,r10,6048
	ctx.r4.s64 = ctx.r10.s64 + 6048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2712(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82EB993C;
	sub_82267BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82ebd970
	ctx.lr = 0x82EB9950;
	sub_82EBD970(ctx, base);
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

__attribute__((alias("__imp__sub_82EB9968"))) PPC_WEAK_FUNC(sub_82EB9968);
PPC_FUNC_IMPL(__imp__sub_82EB9968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eb99a0
	if (!ctx.cr6.eq) goto loc_82EB99A0;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eb99a0
	if (!ctx.cr6.eq) goto loc_82EB99A0;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82eb99a4
	if (ctx.cr6.eq) goto loc_82EB99A4;
loc_82EB99A0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EB99A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82eb99b4
	if (ctx.cr0.eq) goto loc_82EB99B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EB99B4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9A08"))) PPC_WEAK_FUNC(sub_82EB9A08);
PPC_FUNC_IMPL(__imp__sub_82EB9A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EB9A10;
	sub_82CA2BE0(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca74f8
	ctx.lr = 0x82EB9A18;
	sub_82CA74F8(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r4,r11,-16472
	ctx.r4.s64 = ctx.r11.s64 + -16472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x821e8238
	ctx.lr = 0x82EB9A40;
	sub_821E8238(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lfs f29,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x82eb9a68
	if (ctx.cr0.eq) goto loc_82EB9A68;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// b 0x82eb9a80
	goto loc_82EB9A80;
loc_82EB9A68:
	// lwz r11,-720(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9a7c
	if (ctx.cr0.eq) goto loc_82EB9A7C;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82eb9a80
	goto loc_82EB9A80;
loc_82EB9A7C:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_82EB9A80:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,36(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82eb9e34
	if (ctx.cr6.gt) goto loc_82EB9E34;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82eb9e34
	if (ctx.cr6.eq) goto loc_82EB9E34;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82eb9e34
	if (ctx.cr6.eq) goto loc_82EB9E34;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9b10
	if (ctx.cr0.eq) goto loc_82EB9B10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EB9B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eb9e34
	if (ctx.cr0.eq) goto loc_82EB9E34;
loc_82EB9B10:
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f26,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f24,f0,f31
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x821e8238
	ctx.lr = 0x82EB9B3C;
	sub_821E8238(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-10116
	ctx.r4.s64 = ctx.r11.s64 + -10116;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e8238
	ctx.lr = 0x82EB9B54;
	sub_821E8238(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eb9b64
	if (ctx.cr6.eq) goto loc_82EB9B64;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82eb9b7c
	goto loc_82EB9B7C;
loc_82EB9B64:
	// lwz r11,-720(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82eb9b78
	if (ctx.cr0.eq) goto loc_82EB9B78;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82eb9b7c
	goto loc_82EB9B7C;
loc_82EB9B78:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_82EB9B7C:
	// lfs f13,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eb9d90
	if (ctx.cr6.eq) goto loc_82EB9D90;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// fmadds f11,f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f12.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addi r4,r11,-12048
	ctx.r4.s64 = ctx.r11.s64 + -12048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x821e8238
	ctx.lr = 0x82EB9BB8;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// bne 0x82eb9bc8
	if (!ctx.cr0.eq) goto loc_82EB9BC8;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
loc_82EB9BC8:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lfs f28,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f27,f12
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmsubs f0,f27,f0,f11
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f29,f13,f10
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f0,f28,f12,f9
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227ef68
	ctx.lr = 0x82EB9C18;
	sub_8227EF68(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f13,f11,f27,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmadds f13,f10,f29,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x82eb9e34
	if (ctx.cr6.gt) goto loc_82EB9E34;
	// fneg f12,f31
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82eb9e34
	if (ctx.cr6.lt) goto loc_82EB9E34;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f11,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f11,f0,f10,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bgt cr6,0x82eb9e34
	if (ctx.cr6.gt) goto loc_82EB9E34;
	// fneg f10,f30
	ctx.f10.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x82eb9e34
	if (ctx.cr6.lt) goto loc_82EB9E34;
	// fmuls f11,f29,f31
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// fmuls f10,f28,f31
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// fmuls f9,f27,f31
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f8,f11,f26
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// fadds f7,f10,f24
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fadds f6,f9,f25
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// fsubs f11,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// fsubs f10,f24,f10
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// fsubs f9,f25,f9
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_82EB9D24:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82288c00
	ctx.lr = 0x82EB9D50;
	sub_82288C00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb9d88
	if (!ctx.cr0.eq) goto loc_82EB9D88;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82eb9d24
	if (ctx.cr6.lt) goto loc_82EB9D24;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
loc_82EB9D7C:
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb9e38
	goto loc_82EB9E38;
loc_82EB9D88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eb9e38
	goto loc_82EB9E38;
loc_82EB9D90:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f8,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f8,f25
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f25.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f13,f9,f26
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x82eb9e34
	if (ctx.cr6.lt) goto loc_82EB9E34;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82eb9e34
	if (!ctx.cr6.lt) goto loc_82EB9E34;
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82eb9e34
	if (ctx.cr6.lt) goto loc_82EB9E34;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82eb9e34
	if (!ctx.cr6.lt) goto loc_82EB9E34;
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82eb9e00
	if (!ctx.cr6.lt) goto loc_82EB9E00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EB9E00:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// b 0x82eb9d7c
	goto loc_82EB9D7C;
loc_82EB9E34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9E38:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca7544
	ctx.lr = 0x82EB9E44;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EB9E48"))) PPC_WEAK_FUNC(sub_82EB9E48);
PPC_FUNC_IMPL(__imp__sub_82EB9E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EB9E50;
	sub_82CA2BE4(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eb9fe8
	if (ctx.cr6.eq) goto loc_82EB9FE8;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f30,f0
	ctx.f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x82eb9fe8
	if (ctx.cr6.eq) goto loc_82EB9FE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// fdivs f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821e8238
	ctx.lr = 0x82EB9F0C;
	sub_821E8238(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16472
	ctx.r4.s64 = ctx.r11.s64 + -16472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821e8238
	ctx.lr = 0x82EB9F24;
	sub_821E8238(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,-720(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// beq cr6,0x82eb9f3c
	if (ctx.cr6.eq) goto loc_82EB9F3C;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb9f50
	goto loc_82EB9F50;
loc_82EB9F3C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb9f4c
	if (ctx.cr0.eq) goto loc_82EB9F4C;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82eb9f50
	goto loc_82EB9F50;
loc_82EB9F4C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82EB9F50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82eb9f74
	if (ctx.cr6.eq) goto loc_82EB9F74;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82eb9f80
	goto loc_82EB9F80;
loc_82EB9F74:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eb9f80
	if (ctx.cr0.eq) goto loc_82EB9F80;
	// lfs f31,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_82EB9F80:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq 0x82eba004
	if (ctx.cr0.eq) goto loc_82EBA004;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x82e80800
	ctx.lr = 0x82EB9FB8;
	sub_82E80800(ctx, base);
	// b 0x82eb9fe0
	goto loc_82EB9FE0;
loc_82EB9FBC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eb9a08
	ctx.lr = 0x82EB9FD0;
	sub_82EB9A08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eb9ffc
	if (!ctx.cr0.eq) goto loc_82EB9FFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e802c8
	ctx.lr = 0x82EB9FE0;
	sub_82E802C8(ctx, base);
loc_82EB9FE0:
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82eb9fbc
	if (!ctx.cr0.eq) goto loc_82EB9FBC;
loc_82EB9FE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9FEC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82EB9FFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82eb9fec
	goto loc_82EB9FEC;
loc_82EBA004:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82eba034
	goto loc_82EBA034;
loc_82EBA010:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82eb9a08
	ctx.lr = 0x82EBA028;
	sub_82EB9A08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eba040
	if (!ctx.cr0.eq) goto loc_82EBA040;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82EBA034:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82eba010
	if (!ctx.cr0.eq) goto loc_82EBA010;
	// b 0x82eb9fe8
	goto loc_82EB9FE8;
loc_82EBA040:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82eb9fec
	goto loc_82EB9FEC;
}

__attribute__((alias("__imp__sub_82EBA048"))) PPC_WEAK_FUNC(sub_82EBA048);
PPC_FUNC_IMPL(__imp__sub_82EBA048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EBA050;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7504
	ctx.lr = 0x82EBA058;
	sub_82CA7504(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e6c1c8
	ctx.lr = 0x82EBA070;
	sub_82E6C1C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eba314
	if (!ctx.cr0.eq) goto loc_82EBA314;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82eba314
	if (ctx.cr6.eq) goto loc_82EBA314;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r10,-720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -720);
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f31,f0,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f29,f0,f12
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fneg f0,f30
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fmuls f11,f31,f27
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// fmsubs f13,f30,f27,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 - ctx.f13.f64));
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fmsubs f12,f31,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 - ctx.f12.f64));
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f10,f9,f30,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f28,f0,f31,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f10.f64));
	// ble 0x82eba2d0
	if (!ctx.cr0.gt) goto loc_82EBA2D0;
	// lis r27,-31947
	ctx.r27.s64 = -2093678592;
loc_82EBA198:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eb9e48
	ctx.lr = 0x82EBA1A8;
	sub_82EB9E48(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82eba2c8
	if (ctx.cr0.eq) goto loc_82EBA2C8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lfs f0,-12184(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12184);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f28,f0
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f10,f8,f30,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f10,f7,f31,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82eba254
	if (!ctx.cr6.gt) goto loc_82EBA254;
	// fcmpu cr6,f10,f27
	ctx.cr6.compare(ctx.f10.f64, ctx.f27.f64);
	// blt cr6,0x82eba238
	if (ctx.cr6.lt) goto loc_82EBA238;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x82eba238
	if (!ctx.cr6.gt) goto loc_82EBA238;
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82eba250
	goto loc_82EBA250;
loc_82EBA238:
	// lfs f11,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f27
	ctx.f10.f64 = ctx.f27.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
loc_82EBA250:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82EBA254:
	// stfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// fmr f28,f10
	ctx.f28.f64 = ctx.f10.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EBA274:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eba274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBA274;
	// stb r28,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r28.u8);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82eba2b0
	if (!ctx.cr6.eq) goto loc_82EBA2B0;
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82eba2b0
	if (!ctx.cr6.eq) goto loc_82EBA2B0;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82eba2b4
	if (ctx.cr6.eq) goto loc_82EBA2B4;
loc_82EBA2B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82EBA2B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eba2d0
	if (!ctx.cr0.eq) goto loc_82EBA2D0;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt 0x82eba198
	if (ctx.cr0.gt) goto loc_82EBA198;
	// b 0x82eba2d0
	goto loc_82EBA2D0;
loc_82EBA2C8:
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82EBA2D0:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82eba2f8
	if (!ctx.cr6.eq) goto loc_82EBA2F8;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82eba2f8
	if (!ctx.cr6.eq) goto loc_82EBA2F8;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82eba2fc
	if (ctx.cr6.eq) goto loc_82EBA2FC;
loc_82EBA2F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EBA2FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eba314
	if (ctx.cr0.eq) goto loc_82EBA314;
	// stfs f11,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f12,12(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stb r28,88(r29)
	PPC_STORE_U8(ctx.r29.u32 + 88, ctx.r28.u8);
loc_82EBA314:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7550
	ctx.lr = 0x82EBA324;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EBA328"))) PPC_WEAK_FUNC(sub_82EBA328);
PPC_FUNC_IMPL(__imp__sub_82EBA328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA334"))) PPC_WEAK_FUNC(sub_82EBA334);
PPC_FUNC_IMPL(__imp__sub_82EBA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA338"))) PPC_WEAK_FUNC(sub_82EBA338);
PPC_FUNC_IMPL(__imp__sub_82EBA338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBA340;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBA354;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eba380
	if (ctx.cr0.eq) goto loc_82EBA380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBA36C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20692
	ctx.r11.s64 = ctx.r11.s64 + -20692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eba384
	goto loc_82EBA384;
loc_82EBA380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBA384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBA38C"))) PPC_WEAK_FUNC(sub_82EBA38C);
PPC_FUNC_IMPL(__imp__sub_82EBA38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA390"))) PPC_WEAK_FUNC(sub_82EBA390);
PPC_FUNC_IMPL(__imp__sub_82EBA390) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e6c1c8
	ctx.lr = 0x82EBA3A4;
	sub_82E6C1C8(ctx, base);
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

__attribute__((alias("__imp__sub_82EBA3B8"))) PPC_WEAK_FUNC(sub_82EBA3B8);
PPC_FUNC_IMPL(__imp__sub_82EBA3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-11612
	ctx.r3.s64 = ctx.r11.s64 + -11612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA3C4"))) PPC_WEAK_FUNC(sub_82EBA3C4);
PPC_FUNC_IMPL(__imp__sub_82EBA3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA3C8"))) PPC_WEAK_FUNC(sub_82EBA3C8);
PPC_FUNC_IMPL(__imp__sub_82EBA3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBA3D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBA3E4;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eba410
	if (ctx.cr0.eq) goto loc_82EBA410;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBA3FC;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20636
	ctx.r11.s64 = ctx.r11.s64 + -20636;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eba414
	goto loc_82EBA414;
loc_82EBA410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBA414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBA41C"))) PPC_WEAK_FUNC(sub_82EBA41C);
PPC_FUNC_IMPL(__imp__sub_82EBA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA420"))) PPC_WEAK_FUNC(sub_82EBA420);
PPC_FUNC_IMPL(__imp__sub_82EBA420) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ebd970
	sub_82EBD970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA424"))) PPC_WEAK_FUNC(sub_82EBA424);
PPC_FUNC_IMPL(__imp__sub_82EBA424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA428"))) PPC_WEAK_FUNC(sub_82EBA428);
PPC_FUNC_IMPL(__imp__sub_82EBA428) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-9856
	ctx.r11.s64 = ctx.r11.s64 + -9856;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bne cr6,0x82eba468
	if (!ctx.cr6.eq) goto loc_82EBA468;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eba484
	goto loc_82EBA484;
loc_82EBA468:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f0,3140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA484:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82EBA4A0"))) PPC_WEAK_FUNC(sub_82EBA4A0);
PPC_FUNC_IMPL(__imp__sub_82EBA4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,-11616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// addi r8,r9,-11628
	ctx.r8.s64 = ctx.r9.s64 + -11628;
	// bne 0x82eba4e0
	if (!ctx.cr0.eq) goto loc_82EBA4E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-11616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11616, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_82EBA4E0:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r11,-9856
	ctx.r10.s64 = ctx.r11.s64 + -9856;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EBA51C"))) PPC_WEAK_FUNC(sub_82EBA51C);
PPC_FUNC_IMPL(__imp__sub_82EBA51C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA520"))) PPC_WEAK_FUNC(sub_82EBA520);
PPC_FUNC_IMPL(__imp__sub_82EBA520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r3,r11,-20044
	ctx.r3.s64 = ctx.r11.s64 + -20044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA52C"))) PPC_WEAK_FUNC(sub_82EBA52C);
PPC_FUNC_IMPL(__imp__sub_82EBA52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA530"))) PPC_WEAK_FUNC(sub_82EBA530);
PPC_FUNC_IMPL(__imp__sub_82EBA530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBA538;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBA54C;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82eba580
	if (ctx.cr0.eq) goto loc_82EBA580;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBA564;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22408
	ctx.r11.s64 = ctx.r11.s64 + -22408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82eba584
	goto loc_82EBA584;
loc_82EBA580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBA584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBA58C"))) PPC_WEAK_FUNC(sub_82EBA58C);
PPC_FUNC_IMPL(__imp__sub_82EBA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA590"))) PPC_WEAK_FUNC(sub_82EBA590);
PPC_FUNC_IMPL(__imp__sub_82EBA590) {
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
	// addi r11,r11,-22408
	ctx.r11.s64 = ctx.r11.s64 + -22408;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82eba5d0
	if (ctx.cr0.eq) goto loc_82EBA5D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA5D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaecd0
	ctx.lr = 0x82EBA5D8;
	sub_82EAECD0(ctx, base);
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

__attribute__((alias("__imp__sub_82EBA5EC"))) PPC_WEAK_FUNC(sub_82EBA5EC);
PPC_FUNC_IMPL(__imp__sub_82EBA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA5F0"))) PPC_WEAK_FUNC(sub_82EBA5F0);
PPC_FUNC_IMPL(__imp__sub_82EBA5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EBA5F8;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r26,72(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x82eba71c
	if (ctx.cr0.eq) goto loc_82EBA71C;
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eba71c
	if (ctx.cr0.eq) goto loc_82EBA71C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-20044
	ctx.r31.s64 = ctx.r11.s64 + -20044;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bl 0x82e82f30
	ctx.lr = 0x82EBA648;
	sub_82E82F30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e82f30
	ctx.lr = 0x82EBA658;
	sub_82E82F30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eba674
	if (ctx.cr6.eq) goto loc_82EBA674;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eba678
	if (!ctx.cr0.eq) goto loc_82EBA678;
loc_82EBA674:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82EBA678:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba690
	if (ctx.cr6.eq) goto loc_82EBA690;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eba694
	if (!ctx.cr0.eq) goto loc_82EBA694;
loc_82EBA690:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82EBA694:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne cr6,0x82eba700
	if (!ctx.cr6.eq) goto loc_82EBA700;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// bl 0x830e7d50
	ctx.lr = 0x82EBA6D0;
	sub_830E7D50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eba6fc
	if (!ctx.cr0.eq) goto loc_82EBA6FC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eba720
	goto loc_82EBA720;
loc_82EBA6FC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_82EBA700:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r5,r27,4
	ctx.r5.s64 = ctx.r27.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// bl 0x830e88a8
	ctx.lr = 0x82EBA718;
	sub_830E88A8(ctx, base);
	// b 0x82eba720
	goto loc_82EBA720;
loc_82EBA71C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBA720:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EBA72C"))) PPC_WEAK_FUNC(sub_82EBA72C);
PPC_FUNC_IMPL(__imp__sub_82EBA72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA730"))) PPC_WEAK_FUNC(sub_82EBA730);
PPC_FUNC_IMPL(__imp__sub_82EBA730) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EBA740:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eba740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBA740;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r9,88(r7)
	PPC_STORE_U8(ctx.r7.u32 + 88, ctx.r9.u8);
	// b 0x82e6c1c8
	sub_82E6C1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBA758"))) PPC_WEAK_FUNC(sub_82EBA758);
PPC_FUNC_IMPL(__imp__sub_82EBA758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82EBA760;
	sub_82CA2BC8(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r20,72(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi r20,0
	ctx.cr0.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq 0x82eba940
	if (ctx.cr0.eq) goto loc_82EBA940;
	// lwz r10,72(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82eba940
	if (ctx.cr0.eq) goto loc_82EBA940;
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 4;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r27,r11,-20044
	ctx.r27.s64 = ctx.r11.s64 + -20044;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e82f30
	ctx.lr = 0x82EBA7D0;
	sub_82E82F30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e82f30
	ctx.lr = 0x82EBA7E0;
	sub_82E82F30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eba7fc
	if (ctx.cr6.eq) goto loc_82EBA7FC;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r24,r31,4
	ctx.r24.s64 = ctx.r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eba800
	if (!ctx.cr0.eq) goto loc_82EBA800;
loc_82EBA7FC:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82EBA800:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eba818
	if (ctx.cr6.eq) goto loc_82EBA818;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82eba81c
	if (!ctx.cr0.eq) goto loc_82EBA81C;
loc_82EBA818:
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
loc_82EBA81C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r28,r11,-17100
	ctx.r28.s64 = ctx.r11.s64 + -17100;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// bne cr6,0x82eba88c
	if (!ctx.cr6.eq) goto loc_82EBA88C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// bl 0x830e7d50
	ctx.lr = 0x82EBA858;
	sub_830E7D50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eba888
	if (!ctx.cr0.eq) goto loc_82EBA888;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82eba970
	goto loc_82EBA970;
loc_82EBA888:
	// addi r24,r1,144
	ctx.r24.s64 = ctx.r1.s64 + 144;
loc_82EBA88C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e82f30
	ctx.lr = 0x82EBA898;
	sub_82E82F30(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82eba8c0
	if (!ctx.cr0.eq) goto loc_82EBA8C0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82EBA8C0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// bl 0x830e82a8
	ctx.lr = 0x82EBA8E8;
	sub_830E82A8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82eba920
	if (ctx.cr6.eq) goto loc_82EBA920;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r11.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
loc_82EBA920:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// stfs f13,8(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// stfs f12,12(r21)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// stb r30,88(r21)
	PPC_STORE_U8(ctx.r21.u32 + 88, ctx.r30.u8);
	// b 0x82eba970
	goto loc_82EBA970;
loc_82EBA940:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r21,16
	ctx.r11.s64 = ctx.r21.s64 + 16;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EBA954:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82eba954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBA954;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stb r30,88(r21)
	PPC_STORE_U8(ctx.r21.u32 + 88, ctx.r30.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e6c1c8
	ctx.lr = 0x82EBA970;
	sub_82E6C1C8(ctx, base);
loc_82EBA970:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82EBA97C"))) PPC_WEAK_FUNC(sub_82EBA97C);
PPC_FUNC_IMPL(__imp__sub_82EBA97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA980"))) PPC_WEAK_FUNC(sub_82EBA980);
PPC_FUNC_IMPL(__imp__sub_82EBA980) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82eba9bc
	if (ctx.cr0.eq) goto loc_82EBA9BC;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBA9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBA9BC:
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

__attribute__((alias("__imp__sub_82EBA9D4"))) PPC_WEAK_FUNC(sub_82EBA9D4);
PPC_FUNC_IMPL(__imp__sub_82EBA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBA9D8"))) PPC_WEAK_FUNC(sub_82EBA9D8);
PPC_FUNC_IMPL(__imp__sub_82EBA9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EBA9E0;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-20044
	ctx.r4.s64 = ctx.r11.s64 + -20044;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e82f30
	ctx.lr = 0x82EBAA08;
	sub_82E82F30(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebaa24
	if (ctx.cr0.eq) goto loc_82EBAA24;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ebaa28
	if (!ctx.cr0.eq) goto loc_82EBAA28;
loc_82EBAA24:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82EBAA28:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r28,r11,-17100
	ctx.r28.s64 = ctx.r11.s64 + -17100;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r29,72(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bne cr6,0x82ebaab4
	if (!ctx.cr6.eq) goto loc_82EBAAB4;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// bl 0x830e7d50
	ctx.lr = 0x82EBAAA0;
	sub_830E7D50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebaab0
	if (!ctx.cr0.eq) goto loc_82EBAAB0;
loc_82EBAAA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebac28
	goto loc_82EBAC28;
loc_82EBAAB0:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
loc_82EBAAB4:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x830e82a8
	ctx.lr = 0x82EBAADC;
	sub_830E82A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,-30984
	ctx.r30.s64 = ctx.r11.s64 + -30984;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82EBAB10:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82ebab10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBAB10;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
	// addi r11,r11,-9856
	ctx.r11.s64 = ctx.r11.s64 + -9856;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bne cr6,0x82ebab48
	if (!ctx.cr6.eq) goto loc_82EBAB48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ebab6c
	goto loc_82EBAB6C;
loc_82EBAB48:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,3140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBAB6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bne 0x82ebaaa8
	if (!ctx.cr0.eq) goto loc_82EBAAA8;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82EBABAC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82ebabac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82EBABAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r31,392(r1)
	PPC_STORE_U8(ctx.r1.u32 + 392, ctx.r31.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r11,r11,-20580
	ctx.r11.s64 = ctx.r11.s64 + -20580;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r11.u8);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x821ae8c0
	ctx.lr = 0x82EBAC08;
	sub_821AE8C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBAC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EBAC28:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82EBAC34"))) PPC_WEAK_FUNC(sub_82EBAC34);
PPC_FUNC_IMPL(__imp__sub_82EBAC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAC38"))) PPC_WEAK_FUNC(sub_82EBAC38);
PPC_FUNC_IMPL(__imp__sub_82EBAC38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82ebac6c
	if (!ctx.cr0.eq) goto loc_82EBAC6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82EBAC6C:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r8,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82ebace8
	if (!ctx.cr6.eq) goto loc_82EBACE8;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82ebaccc
	if (!ctx.cr0.eq) goto loc_82EBACCC;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82ebad0c
	goto loc_82EBAD0C;
loc_82EBACCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82ebad0c
	goto loc_82EBAD0C;
loc_82EBACE8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// beq 0x82ebad08
	if (ctx.cr0.eq) goto loc_82EBAD08;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// b 0x82ebad0c
	goto loc_82EBAD0C;
loc_82EBAD08:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_82EBAD0C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,-17100
	ctx.r10.s64 = ctx.r10.s64 + -17100;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBAD2C"))) PPC_WEAK_FUNC(sub_82EBAD2C);
PPC_FUNC_IMPL(__imp__sub_82EBAD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAD30"))) PPC_WEAK_FUNC(sub_82EBAD30);
PPC_FUNC_IMPL(__imp__sub_82EBAD30) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebad80
	if (ctx.cr0.eq) goto loc_82EBAD80;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ebad78
	goto loc_82EBAD78;
loc_82EBAD5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82ca6320
	ctx.lr = 0x82EBAD6C;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ebad9c
	if (ctx.cr0.eq) goto loc_82EBAD9C;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82EBAD78:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82ebad5c
	if (!ctx.cr0.eq) goto loc_82EBAD5C;
loc_82EBAD80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAD84:
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
loc_82EBAD9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82ebad84
	goto loc_82EBAD84;
}

__attribute__((alias("__imp__sub_82EBADA4"))) PPC_WEAK_FUNC(sub_82EBADA4);
PPC_FUNC_IMPL(__imp__sub_82EBADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBADA8"))) PPC_WEAK_FUNC(sub_82EBADA8);
PPC_FUNC_IMPL(__imp__sub_82EBADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBADB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBADC0;
	sub_82EAED28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82ebadd4
	if (!ctx.cr6.eq) goto loc_82EBADD4;
loc_82EBADCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebae70
	goto loc_82EBAE70;
loc_82EBADD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBADDC;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebae6c
	if (ctx.cr0.eq) goto loc_82EBAE6C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-6356
	ctx.r31.s64 = ctx.r11.s64 + -6356;
	// bl 0x826b4b60
	ctx.lr = 0x82EBADF4;
	sub_826B4B60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBADFC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebae6c
	if (!ctx.cr0.eq) goto loc_82EBAE6C;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r4,r11,-18256
	ctx.r4.s64 = ctx.r11.s64 + -18256;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// bl 0x82267be0
	ctx.lr = 0x82EBAE18;
	sub_82267BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebadcc
	if (ctx.cr0.eq) goto loc_82EBADCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBAE28;
	sub_82B568C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebad30
	ctx.lr = 0x82EBAE34;
	sub_82EBAD30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebadcc
	if (ctx.cr0.eq) goto loc_82EBADCC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-17100
	ctx.r11.s64 = ctx.r11.s64 + -17100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ebac38
	ctx.lr = 0x82EBAE68;
	sub_82EBAC38(ctx, base);
	// b 0x82ebadcc
	goto loc_82EBADCC;
loc_82EBAE6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAE70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBAE78"))) PPC_WEAK_FUNC(sub_82EBAE78);
PPC_FUNC_IMPL(__imp__sub_82EBAE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EBAE80;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ebaf2c
	if (ctx.cr6.eq) goto loc_82EBAF2C;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82ebaf2c
	if (!ctx.cr6.gt) goto loc_82EBAF2C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-6356
	ctx.r27.s64 = ctx.r11.s64 + -6356;
loc_82EBAEB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e7d860
	ctx.lr = 0x82EBAEBC;
	sub_82E7D860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebaef0
	if (ctx.cr0.eq) goto loc_82EBAEF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBAECC;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebaef0
	if (ctx.cr0.eq) goto loc_82EBAEF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBAEDC;
	sub_826B4B60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBAEE4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebaef0
	if (!ctx.cr0.eq) goto loc_82EBAEF0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82EBAEF0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ebaeb0
	if (ctx.cr6.lt) goto loc_82EBAEB0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ebaf2c
	if (ctx.cr6.eq) goto loc_82EBAF2C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	ctx.lr = 0x82EBAF10;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebaf24
	if (ctx.cr0.eq) goto loc_82EBAF24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e92de8
	ctx.lr = 0x82EBAF20;
	sub_82E92DE8(ctx, base);
	// b 0x82ebaf28
	goto loc_82EBAF28;
loc_82EBAF24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAF28:
	// stw r3,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
loc_82EBAF2C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ebd970
	ctx.lr = 0x82EBAF38;
	sub_82EBD970(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EBAF40"))) PPC_WEAK_FUNC(sub_82EBAF40);
PPC_FUNC_IMPL(__imp__sub_82EBAF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBAF48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBAF5C;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebaf88
	if (ctx.cr0.eq) goto loc_82EBAF88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBAF74;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22500
	ctx.r11.s64 = ctx.r11.s64 + -22500;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebaf8c
	goto loc_82EBAF8C;
loc_82EBAF88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBAF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBAF94"))) PPC_WEAK_FUNC(sub_82EBAF94);
PPC_FUNC_IMPL(__imp__sub_82EBAF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBAF98"))) PPC_WEAK_FUNC(sub_82EBAF98);
PPC_FUNC_IMPL(__imp__sub_82EBAF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBAFA0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBAFB8;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb040
	if (ctx.cr0.eq) goto loc_82EBB040;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20732
	ctx.r30.s64 = ctx.r11.s64 + -20732;
	// bl 0x826b4b60
	ctx.lr = 0x82EBAFD0;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBAFD8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb040
	if (!ctx.cr0.eq) goto loc_82EBB040;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebaff8
	if (ctx.cr0.eq) goto loc_82EBAFF8;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebb000
	goto loc_82EBB000;
loc_82EBAFF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBB000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBB008;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBB00C;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBB020:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ebb02c
	if (!ctx.cr6.gt) goto loc_82EBB02C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBB02C:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebb020
	if (!ctx.cr6.eq) goto loc_82EBB020;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82EBB038:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebb0d8
	goto loc_82EBB0D8;
loc_82EBB040:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB048;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb0cc
	if (ctx.cr0.eq) goto loc_82EBB0CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23024
	ctx.r30.s64 = ctx.r11.s64 + -23024;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB060;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBB068;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb0cc
	if (!ctx.cr0.eq) goto loc_82EBB0CC;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb088
	if (ctx.cr0.eq) goto loc_82EBB088;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebb090
	goto loc_82EBB090;
loc_82EBB088:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBB090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBB098;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBB09C;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBB0B0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ebb0bc
	if (!ctx.cr6.gt) goto loc_82EBB0BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBB0BC:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebb0b0
	if (!ctx.cr6.eq) goto loc_82EBB0B0;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// b 0x82ebb038
	goto loc_82EBB038;
loc_82EBB0CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBB0D8;
	sub_82EAED28(ctx, base);
loc_82EBB0D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBB0E4"))) PPC_WEAK_FUNC(sub_82EBB0E4);
PPC_FUNC_IMPL(__imp__sub_82EBB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB0E8"))) PPC_WEAK_FUNC(sub_82EBB0E8);
PPC_FUNC_IMPL(__imp__sub_82EBB0E8) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r10,-16472
	ctx.r4.s64 = ctx.r10.s64 + -16472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821e8238
	ctx.lr = 0x82EBB120;
	sub_821E8238(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lfs f11,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x82ebb148
	if (ctx.cr0.eq) goto loc_82EBB148;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// b 0x82ebb16c
	goto loc_82EBB16C;
loc_82EBB148:
	// lwz r11,-720(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb15c
	if (ctx.cr0.eq) goto loc_82EBB15C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ebb160
	goto loc_82EBB160;
loc_82EBB15C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82EBB160:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,23732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23732);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_82EBB16C:
	// stfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,-720(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb180
	if (ctx.cr0.eq) goto loc_82EBB180;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82EBB180:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82ebd970
	ctx.lr = 0x82EBB194;
	sub_82EBD970(ctx, base);
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

__attribute__((alias("__imp__sub_82EBB1AC"))) PPC_WEAK_FUNC(sub_82EBB1AC);
PPC_FUNC_IMPL(__imp__sub_82EBB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB1B0"))) PPC_WEAK_FUNC(sub_82EBB1B0);
PPC_FUNC_IMPL(__imp__sub_82EBB1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ebb200
	if (!ctx.cr6.lt) goto loc_82EBB200;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82EBB200:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB208"))) PPC_WEAK_FUNC(sub_82EBB208);
PPC_FUNC_IMPL(__imp__sub_82EBB208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-10784
	ctx.r3.s64 = ctx.r11.s64 + -10784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB214"))) PPC_WEAK_FUNC(sub_82EBB214);
PPC_FUNC_IMPL(__imp__sub_82EBB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB218"))) PPC_WEAK_FUNC(sub_82EBB218);
PPC_FUNC_IMPL(__imp__sub_82EBB218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBB220;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBB234;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebb260
	if (ctx.cr0.eq) goto loc_82EBB260;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBB24C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20508
	ctx.r11.s64 = ctx.r11.s64 + -20508;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebb264
	goto loc_82EBB264;
loc_82EBB260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBB264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBB26C"))) PPC_WEAK_FUNC(sub_82EBB26C);
PPC_FUNC_IMPL(__imp__sub_82EBB26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB270"))) PPC_WEAK_FUNC(sub_82EBB270);
PPC_FUNC_IMPL(__imp__sub_82EBB270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb288
	if (ctx.cr0.eq) goto loc_82EBB288;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ebb290
	goto loc_82EBB290;
loc_82EBB288:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82EBB290:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82ebd970
	sub_82EBD970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB2A4"))) PPC_WEAK_FUNC(sub_82EBB2A4);
PPC_FUNC_IMPL(__imp__sub_82EBB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB2A8"))) PPC_WEAK_FUNC(sub_82EBB2A8);
PPC_FUNC_IMPL(__imp__sub_82EBB2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82ebb2f0
	if (ctx.cr6.lt) goto loc_82EBB2F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EBB2F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB2F8"))) PPC_WEAK_FUNC(sub_82EBB2F8);
PPC_FUNC_IMPL(__imp__sub_82EBB2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBB300;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBB314;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebb340
	if (ctx.cr0.eq) goto loc_82EBB340;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBB32C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22476
	ctx.r11.s64 = ctx.r11.s64 + -22476;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebb344
	goto loc_82EBB344;
loc_82EBB340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBB344:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBB34C"))) PPC_WEAK_FUNC(sub_82EBB34C);
PPC_FUNC_IMPL(__imp__sub_82EBB34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB350"))) PPC_WEAK_FUNC(sub_82EBB350);
PPC_FUNC_IMPL(__imp__sub_82EBB350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBB358;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB370;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb3b4
	if (ctx.cr0.eq) goto loc_82EBB3B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20428
	ctx.r30.s64 = ctx.r11.s64 + -20428;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB388;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBB390;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb3b4
	if (!ctx.cr0.eq) goto loc_82EBB3B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBB3A0;
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	ctx.lr = 0x82EBB3A4;
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x82ebb450
	goto loc_82EBB450;
loc_82EBB3B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB3BC;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb444
	if (ctx.cr0.eq) goto loc_82EBB444;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20444
	ctx.r30.s64 = ctx.r11.s64 + -20444;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB3D4;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBB3DC;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb444
	if (!ctx.cr0.eq) goto loc_82EBB444;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb3fc
	if (ctx.cr0.eq) goto loc_82EBB3FC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebb404
	goto loc_82EBB404;
loc_82EBB3FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBB404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBB40C;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBB410;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBB424:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82ebb430
	if (ctx.cr6.lt) goto loc_82EBB430;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBB430:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebb424
	if (!ctx.cr6.eq) goto loc_82EBB424;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebb450
	goto loc_82EBB450;
loc_82EBB444:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBB450;
	sub_82EAED28(ctx, base);
loc_82EBB450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBB45C"))) PPC_WEAK_FUNC(sub_82EBB45C);
PPC_FUNC_IMPL(__imp__sub_82EBB45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB460"))) PPC_WEAK_FUNC(sub_82EBB460);
PPC_FUNC_IMPL(__imp__sub_82EBB460) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebb49c
	if (ctx.cr0.eq) goto loc_82EBB49C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ebb4a4
	goto loc_82EBB4A4;
loc_82EBB49C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82EBB4A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ebd970
	ctx.lr = 0x82EBB4D4;
	sub_82EBD970(ctx, base);
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

__attribute__((alias("__imp__sub_82EBB4EC"))) PPC_WEAK_FUNC(sub_82EBB4EC);
PPC_FUNC_IMPL(__imp__sub_82EBB4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB4F0"))) PPC_WEAK_FUNC(sub_82EBB4F0);
PPC_FUNC_IMPL(__imp__sub_82EBB4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB508"))) PPC_WEAK_FUNC(sub_82EBB508);
PPC_FUNC_IMPL(__imp__sub_82EBB508) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82260978
	ctx.lr = 0x82EBB528;
	sub_82260978(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82ebb54c
	if (ctx.cr6.eq) goto loc_82EBB54C;
	// bl 0x82260978
	ctx.lr = 0x82EBB53C;
	sub_82260978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82EBB54C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ebb5c4
	if (!ctx.cr6.lt) goto loc_82EBB5C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82ebb5c4
	if (ctx.cr6.gt) goto loc_82EBB5C4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ebb5c8
	if (!ctx.cr6.eq) goto loc_82EBB5C8;
loc_82EBB5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBB5C8:
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

__attribute__((alias("__imp__sub_82EBB5E0"))) PPC_WEAK_FUNC(sub_82EBB5E0);
PPC_FUNC_IMPL(__imp__sub_82EBB5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EBB5E8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r31,592(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebb670
	if (!ctx.cr0.eq) goto loc_82EBB670;
loc_82EBB668:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebb6f0
	goto loc_82EBB6F0;
loc_82EBB670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebb668
	if (ctx.cr0.eq) goto loc_82EBB668;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB6C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebb668
	if (ctx.cr0.eq) goto loc_82EBB668;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82ebb6f0
	if (ctx.cr6.gt) goto loc_82EBB6F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBB6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EBB6F8"))) PPC_WEAK_FUNC(sub_82EBB6F8);
PPC_FUNC_IMPL(__imp__sub_82EBB6F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EBB71C"))) PPC_WEAK_FUNC(sub_82EBB71C);
PPC_FUNC_IMPL(__imp__sub_82EBB71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB720"))) PPC_WEAK_FUNC(sub_82EBB720);
PPC_FUNC_IMPL(__imp__sub_82EBB720) {
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
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBB744;
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb75c
	if (ctx.cr0.eq) goto loc_82EBB75C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82eaedb0
	ctx.lr = 0x82EBB758;
	sub_82EAEDB0(ctx, base);
	// b 0x82ebb760
	goto loc_82EBB760;
loc_82EBB75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBB760:
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

__attribute__((alias("__imp__sub_82EBB778"))) PPC_WEAK_FUNC(sub_82EBB778);
PPC_FUNC_IMPL(__imp__sub_82EBB778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBB780;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB794;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebb808
	if (ctx.cr0.eq) goto loc_82EBB808;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20360
	ctx.r30.s64 = ctx.r11.s64 + -20360;
	// bl 0x826b4b60
	ctx.lr = 0x82EBB7AC;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBB7B4;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebb808
	if (!ctx.cr0.eq) goto loc_82EBB808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBB7C4;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBB7C8;
	sub_82CA5860(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
loc_82EBB7E0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82ebb7f4
	if (ctx.cr6.lt) goto loc_82EBB7F4;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82ebb7f4
	if (ctx.cr6.gt) goto loc_82EBB7F4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82EBB7F4:
	// fcmpu cr6,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f13.f64);
	// bne cr6,0x82ebb7e0
	if (!ctx.cr6.eq) goto loc_82EBB7E0;
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebb814
	goto loc_82EBB814;
loc_82EBB808:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBB814;
	sub_82EAED28(ctx, base);
loc_82EBB814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBB81C"))) PPC_WEAK_FUNC(sub_82EBB81C);
PPC_FUNC_IMPL(__imp__sub_82EBB81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB820"))) PPC_WEAK_FUNC(sub_82EBB820);
PPC_FUNC_IMPL(__imp__sub_82EBB820) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82ebd970
	ctx.lr = 0x82EBB844;
	sub_82EBD970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebb854
	if (!ctx.cr0.eq) goto loc_82EBB854;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebb86c
	goto loc_82EBB86C;
loc_82EBB854:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBB868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBB86C:
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

__attribute__((alias("__imp__sub_82EBB880"))) PPC_WEAK_FUNC(sub_82EBB880);
PPC_FUNC_IMPL(__imp__sub_82EBB880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,3040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB8C8"))) PPC_WEAK_FUNC(sub_82EBB8C8);
PPC_FUNC_IMPL(__imp__sub_82EBB8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,1024(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1024);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82ebb924
	if (ctx.cr6.lt) goto loc_82EBB924;
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82ebb924
	if (ctx.cr6.gt) goto loc_82EBB924;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82ebb950
	if (!ctx.cr6.gt) goto loc_82EBB950;
loc_82EBB924:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r10,-720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -720);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ebb938
	if (ctx.cr0.eq) goto loc_82EBB938;
	// lfs f11,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82EBB938:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2704);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82ebb950
	if (!ctx.cr6.gt) goto loc_82EBB950;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBB950:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB964"))) PPC_WEAK_FUNC(sub_82EBB964);
PPC_FUNC_IMPL(__imp__sub_82EBB964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBB968"))) PPC_WEAK_FUNC(sub_82EBB968);
PPC_FUNC_IMPL(__imp__sub_82EBB968) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1024);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82ebba44
	if (!ctx.cr6.eq) goto loc_82EBBA44;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ebb9d4
	if (!ctx.cr6.eq) goto loc_82EBB9D4;
	// lfs f0,1032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82ebb9d4
	if (!ctx.cr6.eq) goto loc_82EBB9D4;
	// lfs f0,1036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82ebb9d8
	if (ctx.cr6.eq) goto loc_82EBB9D8;
loc_82EBB9D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EBB9D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebba44
	if (ctx.cr0.eq) goto loc_82EBBA44;
	// lfs f0,1028(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,1032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,1036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,1028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1032);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1036);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82EBBA44:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// beq cr6,0x82ebba98
	if (ctx.cr6.eq) goto loc_82EBBA98;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82EBBA98:
	// bl 0x82260978
	ctx.lr = 0x82EBBA9C;
	sub_82260978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-14816
	ctx.r4.s64 = ctx.r10.s64 + -14816;
	// lfs f30,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82e76fd0
	ctx.lr = 0x82EBBAB8;
	sub_82E76FD0(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebbadc
	if (ctx.cr0.eq) goto loc_82EBBADC;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebbad8
	if (ctx.cr0.eq) goto loc_82EBBAD8;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ebbadc
	goto loc_82EBBADC;
loc_82EBBAD8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82EBBADC:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82EBBB3C"))) PPC_WEAK_FUNC(sub_82EBBB3C);
PPC_FUNC_IMPL(__imp__sub_82EBBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBB40"))) PPC_WEAK_FUNC(sub_82EBBB40);
PPC_FUNC_IMPL(__imp__sub_82EBBB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBBB48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBBB5C;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebbb88
	if (ctx.cr0.eq) goto loc_82EBBB88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBBB74;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22552
	ctx.r11.s64 = ctx.r11.s64 + -22552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebbb8c
	goto loc_82EBBB8C;
loc_82EBBB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBBB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBBB94"))) PPC_WEAK_FUNC(sub_82EBBB94);
PPC_FUNC_IMPL(__imp__sub_82EBBB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBB98"))) PPC_WEAK_FUNC(sub_82EBBB98);
PPC_FUNC_IMPL(__imp__sub_82EBBB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBBBA0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBBBB8;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebbc40
	if (ctx.cr0.eq) goto loc_82EBBC40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20732
	ctx.r30.s64 = ctx.r11.s64 + -20732;
	// bl 0x826b4b60
	ctx.lr = 0x82EBBBD0;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBBBD8;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebbc40
	if (!ctx.cr0.eq) goto loc_82EBBC40;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebbbf8
	if (ctx.cr0.eq) goto loc_82EBBBF8;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebbc00
	goto loc_82EBBC00;
loc_82EBBBF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBBC00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBBC08;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBBC0C;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBBC20:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ebbc2c
	if (!ctx.cr6.gt) goto loc_82EBBC2C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBBC2C:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebbc20
	if (!ctx.cr6.eq) goto loc_82EBBC20;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebbc4c
	goto loc_82EBBC4C;
loc_82EBBC40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBBC4C;
	sub_82EAED28(ctx, base);
loc_82EBBC4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBBC58"))) PPC_WEAK_FUNC(sub_82EBBC58);
PPC_FUNC_IMPL(__imp__sub_82EBBC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebbc70
	if (ctx.cr0.eq) goto loc_82EBBC70;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ebbc78
	goto loc_82EBBC78;
loc_82EBBC70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
loc_82EBBC78:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82ebd970
	sub_82EBD970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBBC80"))) PPC_WEAK_FUNC(sub_82EBBC80);
PPC_FUNC_IMPL(__imp__sub_82EBBC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82ebbcc8
	if (ctx.cr6.lt) goto loc_82EBBCC8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EBBCC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBBCD0"))) PPC_WEAK_FUNC(sub_82EBBCD0);
PPC_FUNC_IMPL(__imp__sub_82EBBCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBBCDC"))) PPC_WEAK_FUNC(sub_82EBBCDC);
PPC_FUNC_IMPL(__imp__sub_82EBBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBCE0"))) PPC_WEAK_FUNC(sub_82EBBCE0);
PPC_FUNC_IMPL(__imp__sub_82EBBCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBBCE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBBCFC;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebbd28
	if (ctx.cr0.eq) goto loc_82EBBD28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBBD14;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20276
	ctx.r11.s64 = ctx.r11.s64 + -20276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebbd2c
	goto loc_82EBBD2C;
loc_82EBBD28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBBD2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBBD34"))) PPC_WEAK_FUNC(sub_82EBBD34);
PPC_FUNC_IMPL(__imp__sub_82EBBD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBD38"))) PPC_WEAK_FUNC(sub_82EBBD38);
PPC_FUNC_IMPL(__imp__sub_82EBBD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBBD40;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBBD58;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebbde0
	if (ctx.cr0.eq) goto loc_82EBBDE0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20732
	ctx.r30.s64 = ctx.r11.s64 + -20732;
	// bl 0x826b4b60
	ctx.lr = 0x82EBBD70;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBBD78;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebbde0
	if (!ctx.cr0.eq) goto loc_82EBBDE0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebbd98
	if (ctx.cr0.eq) goto loc_82EBBD98;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebbda0
	goto loc_82EBBDA0;
loc_82EBBD98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBBDA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBBDA8;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBBDAC;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBBDC0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ebbdcc
	if (!ctx.cr6.gt) goto loc_82EBBDCC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBBDCC:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebbdc0
	if (!ctx.cr6.eq) goto loc_82EBBDC0;
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebbdec
	goto loc_82EBBDEC;
loc_82EBBDE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ebc060
	ctx.lr = 0x82EBBDEC;
	sub_82EBC060(ctx, base);
loc_82EBBDEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBBDF8"))) PPC_WEAK_FUNC(sub_82EBBDF8);
PPC_FUNC_IMPL(__imp__sub_82EBBDF8) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebbe24
	if (ctx.cr0.eq) goto loc_82EBBE24;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ebbe2c
	goto loc_82EBBE2C;
loc_82EBBE24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82EBBE2C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82ebc120
	ctx.lr = 0x82EBBE44;
	sub_82EBC120(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebbe54
	if (!ctx.cr0.eq) goto loc_82EBBE54;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebbe6c
	goto loc_82EBBE6C;
loc_82EBBE54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBBE6C:
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

__attribute__((alias("__imp__sub_82EBBE80"))) PPC_WEAK_FUNC(sub_82EBBE80);
PPC_FUNC_IMPL(__imp__sub_82EBBE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBBE90"))) PPC_WEAK_FUNC(sub_82EBBE90);
PPC_FUNC_IMPL(__imp__sub_82EBBE90) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ebbebc
	if (ctx.cr0.eq) goto loc_82EBBEBC;
	// bl 0x824fe010
	ctx.lr = 0x82EBBEBC;
	sub_824FE010(ctx, base);
loc_82EBBEBC:
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

__attribute__((alias("__imp__sub_82EBBED4"))) PPC_WEAK_FUNC(sub_82EBBED4);
PPC_FUNC_IMPL(__imp__sub_82EBBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBBED8"))) PPC_WEAK_FUNC(sub_82EBBED8);
PPC_FUNC_IMPL(__imp__sub_82EBBED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBBEE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82ebc1f0
	ctx.lr = 0x82EBBEF4;
	sub_82EBC1F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebbf04
	if (ctx.cr0.eq) goto loc_82EBBF04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebbff8
	goto loc_82EBBFF8;
loc_82EBBF04:
	// bl 0x82260978
	ctx.lr = 0x82EBBF08;
	sub_82260978(ctx, base);
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82ebbf2c
	if (!ctx.cr6.gt) goto loc_82EBBF2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// b 0x82ebbff4
	goto loc_82EBBFF4;
loc_82EBBF2C:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82ebbff4
	if (!ctx.cr6.lt) goto loc_82EBBFF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBBF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r11,r11,-12180
	ctx.r11.s64 = ctx.r11.s64 + -12180;
loc_82EBBF8C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82ebc000
	if (ctx.cr6.eq) goto loc_82EBC000;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ebbf8c
	if (!ctx.cr0.eq) goto loc_82EBBF8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EBBFA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ebbff4
	if (ctx.cr0.eq) goto loc_82EBBFF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82ebbfe4
	if (!ctx.cr6.eq) goto loc_82EBBFE4;
	// lfs f0,940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 940);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82ebbfe4
	if (!ctx.cr6.eq) goto loc_82EBBFE4;
	// lfs f0,944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82ebbfe8
	if (ctx.cr6.eq) goto loc_82EBBFE8;
loc_82EBBFE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EBBFE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82ebbff8
	if (!ctx.cr0.eq) goto loc_82EBBFF8;
loc_82EBBFF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBBFF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82EBC000:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ebbfa4
	goto loc_82EBBFA4;
}

__attribute__((alias("__imp__sub_82EBC008"))) PPC_WEAK_FUNC(sub_82EBC008);
PPC_FUNC_IMPL(__imp__sub_82EBC008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBC010;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBC024;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebc050
	if (ctx.cr0.eq) goto loc_82EBC050;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBC03C;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebc054
	goto loc_82EBC054;
loc_82EBC050:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBC054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBC05C"))) PPC_WEAK_FUNC(sub_82EBC05C);
PPC_FUNC_IMPL(__imp__sub_82EBC05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC060"))) PPC_WEAK_FUNC(sub_82EBC060);
PPC_FUNC_IMPL(__imp__sub_82EBC060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBC068;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b4b60
	ctx.lr = 0x82EBC080;
	sub_826B4B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebc108
	if (ctx.cr0.eq) goto loc_82EBC108;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-23024
	ctx.r30.s64 = ctx.r11.s64 + -23024;
	// bl 0x826b4b60
	ctx.lr = 0x82EBC098;
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca6320
	ctx.lr = 0x82EBC0A0;
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ebc108
	if (!ctx.cr0.eq) goto loc_82EBC108;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebc0c0
	if (ctx.cr0.eq) goto loc_82EBC0C0;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82ebc0c8
	goto loc_82EBC0C8;
loc_82EBC0C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
loc_82EBC0C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b568c0
	ctx.lr = 0x82EBC0D0;
	sub_82B568C0(ctx, base);
	// bl 0x82ca5860
	ctx.lr = 0x82EBC0D4;
	sub_82CA5860(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_82EBC0E8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82ebc0f4
	if (!ctx.cr6.gt) goto loc_82EBC0F4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82EBC0F4:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// bne cr6,0x82ebc0e8
	if (!ctx.cr6.eq) goto loc_82EBC0E8;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ebc114
	goto loc_82EBC114;
loc_82EBC108:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaed28
	ctx.lr = 0x82EBC114;
	sub_82EAED28(ctx, base);
loc_82EBC114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBC120"))) PPC_WEAK_FUNC(sub_82EBC120);
PPC_FUNC_IMPL(__imp__sub_82EBC120) {
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
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r10,-16472
	ctx.r4.s64 = ctx.r10.s64 + -16472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821e8238
	ctx.lr = 0x82EBC158;
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ebc170
	if (ctx.cr0.eq) goto loc_82EBC170;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ebc198
	goto loc_82EBC198;
loc_82EBC170:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -720);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ebc188
	if (ctx.cr0.eq) goto loc_82EBC188;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82ebc190
	goto loc_82EBC190;
loc_82EBC188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82EBC190:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,23732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23732);
	ctx.f0.f64 = double(temp.f32);
loc_82EBC198:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x82ebd970
	ctx.lr = 0x82EBC1AC;
	sub_82EBD970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebc1bc
	if (!ctx.cr0.eq) goto loc_82EBC1BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebc1d4
	goto loc_82EBC1D4;
loc_82EBC1BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBC1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBC1D4:
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

__attribute__((alias("__imp__sub_82EBC1EC"))) PPC_WEAK_FUNC(sub_82EBC1EC);
PPC_FUNC_IMPL(__imp__sub_82EBC1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC1F0"))) PPC_WEAK_FUNC(sub_82EBC1F0);
PPC_FUNC_IMPL(__imp__sub_82EBC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ebc208
	if (ctx.cr0.eq) goto loc_82EBC208;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ebc20c
	goto loc_82EBC20C;
loc_82EBC208:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
loc_82EBC20C:
	// fmuls f12,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82ebc258
	if (!ctx.cr6.lt) goto loc_82EBC258;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82ebc25c
	if (ctx.cr6.lt) goto loc_82EBC25C;
loc_82EBC258:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EBC25C:
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC268"))) PPC_WEAK_FUNC(sub_82EBC268);
PPC_FUNC_IMPL(__imp__sub_82EBC268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC274"))) PPC_WEAK_FUNC(sub_82EBC274);
PPC_FUNC_IMPL(__imp__sub_82EBC274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC278"))) PPC_WEAK_FUNC(sub_82EBC278);
PPC_FUNC_IMPL(__imp__sub_82EBC278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EBC280;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82625f08
	ctx.lr = 0x82EBC294;
	sub_82625F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ebc2c0
	if (ctx.cr0.eq) goto loc_82EBC2C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBC2AC;
	sub_82EAEC38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20180
	ctx.r11.s64 = ctx.r11.s64 + -20180;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82ebc2c4
	goto loc_82EBC2C4;
loc_82EBC2C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EBC2C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EBC2CC"))) PPC_WEAK_FUNC(sub_82EBC2CC);
PPC_FUNC_IMPL(__imp__sub_82EBC2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC2D0"))) PPC_WEAK_FUNC(sub_82EBC2D0);
PPC_FUNC_IMPL(__imp__sub_82EBC2D0) {
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
	// bl 0x82ebd970
	ctx.lr = 0x82EBC2E8;
	sub_82EBD970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ebc2f8
	if (!ctx.cr0.eq) goto loc_82EBC2F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ebc310
	goto loc_82EBC310;
loc_82EBC2F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EBC30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EBC310:
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

__attribute__((alias("__imp__sub_82EBC324"))) PPC_WEAK_FUNC(sub_82EBC324);
PPC_FUNC_IMPL(__imp__sub_82EBC324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EBC328"))) PPC_WEAK_FUNC(sub_82EBC328);
PPC_FUNC_IMPL(__imp__sub_82EBC328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82ebc344
	if (ctx.cr0.eq) goto loc_82EBC344;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82ebc348
	goto loc_82EBC348;
loc_82EBC344:
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
loc_82EBC348:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82ebc38c
	if (ctx.cr6.lt) goto loc_82EBC38C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EBC38C:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r3,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBC398"))) PPC_WEAK_FUNC(sub_82EBC398);
PPC_FUNC_IMPL(__imp__sub_82EBC398) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaec38
	ctx.lr = 0x82EBC3B0;
	sub_82EAEC38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3040);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-20120
	ctx.r11.s64 = ctx.r11.s64 + -20120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_82EBC3F4"))) PPC_WEAK_FUNC(sub_82EBC3F4);
PPC_FUNC_IMPL(__imp__sub_82EBC3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

