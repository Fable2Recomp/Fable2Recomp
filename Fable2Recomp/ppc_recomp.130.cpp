#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_829C82B0"))) PPC_WEAK_FUNC(sub_829C82B0);
PPC_FUNC_IMPL(__imp__sub_829C82B0) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C82D4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c82ec
	if (ctx.cr6.eq) goto loc_829C82EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f12e0
	ctx.lr = 0x829C82E4;
	sub_827F12E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c82f0
	goto loc_829C82F0;
loc_829C82EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C82F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C82F8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C8314"))) PPC_WEAK_FUNC(sub_829C8314);
PPC_FUNC_IMPL(__imp__sub_829C8314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8318"))) PPC_WEAK_FUNC(sub_829C8318);
PPC_FUNC_IMPL(__imp__sub_829C8318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C8320;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x8221f388
	ctx.lr = 0x829C833C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8378
	if (ctx.cr6.eq) goto loc_829C8378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C835C;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x829d0398
	ctx.lr = 0x829C8370;
	sub_829D0398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c837c
	goto loc_829C837C;
loc_829C8378:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C837C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8384;
	sub_822BFFA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829c8398
	if (ctx.cr6.eq) goto loc_829C8398;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8398;
	sub_82214F08(ctx, base);
loc_829C8398:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C83A4"))) PPC_WEAK_FUNC(sub_829C83A4);
PPC_FUNC_IMPL(__imp__sub_829C83A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C83A8"))) PPC_WEAK_FUNC(sub_829C83A8);
PPC_FUNC_IMPL(__imp__sub_829C83A8) {
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
	// li r3,192
	ctx.r3.s64 = 192;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C83CC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c83e4
	if (ctx.cr6.eq) goto loc_829C83E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829f64d0
	ctx.lr = 0x829C83DC;
	sub_829F64D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c83e8
	goto loc_829C83E8;
loc_829C83E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C83E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C83F0;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C840C"))) PPC_WEAK_FUNC(sub_829C840C);
PPC_FUNC_IMPL(__imp__sub_829C840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8410"))) PPC_WEAK_FUNC(sub_829C8410);
PPC_FUNC_IMPL(__imp__sub_829C8410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8418;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C842C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8498
	if (ctx.cr6.eq) goto loc_829C8498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C844C;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937b0
	ctx.lr = 0x829C8460;
	sub_821937B0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-7776
	ctx.r9.s64 = ctx.r10.s64 + -7776;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82214f08
	ctx.lr = 0x829C8474;
	sub_82214F08(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r8,21384
	ctx.r7.s64 = ctx.r8.s64 + 21384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C848C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C8498:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C84A4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C84B0"))) PPC_WEAK_FUNC(sub_829C84B0);
PPC_FUNC_IMPL(__imp__sub_829C84B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C84B8;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8221f388
	ctx.lr = 0x829C84D8;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c857c
	if (ctx.cr6.eq) goto loc_829C857C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x829C84F8;
	sub_8222CF18(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,30400
	ctx.r4.s64 = ctx.r10.s64 + 30400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8222cf18
	ctx.lr = 0x829C8510;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C8528;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8530;
	sub_82214F08(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r9,30640
	ctx.r7.s64 = ctx.r9.s64 + 30640;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,30416
	ctx.r4.s64 = ctx.r6.s64 + 30416;
	// lfs f31,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821df018
	ctx.lr = 0x829C8558;
	sub_821DF018(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r5,30428
	ctx.r4.s64 = ctx.r5.s64 + 30428;
	// bl 0x821df018
	ctx.lr = 0x829C8570;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x829c8580
	goto loc_829C8580;
loc_829C857C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8580:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8588;
	sub_822BFFA0(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829c859c
	if (ctx.cr6.eq) goto loc_829C859C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x829C859C;
	sub_82214F08(ctx, base);
loc_829C859C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C85AC"))) PPC_WEAK_FUNC(sub_829C85AC);
PPC_FUNC_IMPL(__imp__sub_829C85AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C85B0"))) PPC_WEAK_FUNC(sub_829C85B0);
PPC_FUNC_IMPL(__imp__sub_829C85B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C85B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C85CC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8658
	if (ctx.cr6.eq) goto loc_829C8658;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-740
	ctx.r4.s64 = ctx.r11.s64 + -740;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C85EC;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d0398
	ctx.lr = 0x829C85FC;
	sub_829D0398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8604;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r8,r10,104
	ctx.r8.s64 = ctx.r10.s64 + 104;
	// addi r4,r9,-20072
	ctx.r4.s64 = ctx.r9.s64 + -20072;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x829C8620;
	sub_821F0108(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,21756
	ctx.r5.s64 = ctx.r7.s64 + 21756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8229f118
	ctx.lr = 0x829C8638;
	sub_8229F118(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r6,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r6.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C864C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C8658:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8664;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C8670"))) PPC_WEAK_FUNC(sub_829C8670);
PPC_FUNC_IMPL(__imp__sub_829C8670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8678;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C868C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c871c
	if (ctx.cr6.eq) goto loc_829C871C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-728
	ctx.r4.s64 = ctx.r11.s64 + -728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C86AC;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d0398
	ctx.lr = 0x829C86BC;
	sub_829D0398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C86C4;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r8,r10,184
	ctx.r8.s64 = ctx.r10.s64 + 184;
	// addi r4,r9,-20072
	ctx.r4.s64 = ctx.r9.s64 + -20072;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x829C86E0;
	sub_821F0108(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,21756
	ctx.r5.s64 = ctx.r7.s64 + 21756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x8229f118
	ctx.lr = 0x829C86F8;
	sub_8229F118(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C8710;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C871C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8728;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C8734"))) PPC_WEAK_FUNC(sub_829C8734);
PPC_FUNC_IMPL(__imp__sub_829C8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8738"))) PPC_WEAK_FUNC(sub_829C8738);
PPC_FUNC_IMPL(__imp__sub_829C8738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8740;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8754;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c87d4
	if (ctx.cr6.eq) goto loc_829C87D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-688
	ctx.r4.s64 = ctx.r11.s64 + -688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C8774;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d0398
	ctx.lr = 0x829C8784;
	sub_829D0398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C878C;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,344
	ctx.r8.s64 = ctx.r10.s64 + 344;
	// addi r4,r9,-664
	ctx.r4.s64 = ctx.r9.s64 + -664;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229db28
	ctx.lr = 0x829C87AC;
	sub_8229DB28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C87C8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C87D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C87E0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C87EC"))) PPC_WEAK_FUNC(sub_829C87EC);
PPC_FUNC_IMPL(__imp__sub_829C87EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C87F0"))) PPC_WEAK_FUNC(sub_829C87F0);
PPC_FUNC_IMPL(__imp__sub_829C87F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C87F8;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8814;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8894
	if (ctx.cr6.eq) goto loc_829C8894;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,15792
	ctx.r4.s64 = ctx.r11.s64 + 15792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C8834;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d0398
	ctx.lr = 0x829C8844;
	sub_829D0398(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C884C;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,264
	ctx.r8.s64 = ctx.r10.s64 + 264;
	// addi r5,r9,-716
	ctx.r5.s64 = ctx.r9.s64 + -716;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82488e60
	ctx.lr = 0x829C8874;
	sub_82488E60(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r7,-700
	ctx.r5.s64 = ctx.r7.s64 + -700;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82488e60
	ctx.lr = 0x829C888C;
	sub_82488E60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x829c8898
	goto loc_829C8898;
loc_829C8894:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8898:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C88A0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C88B4"))) PPC_WEAK_FUNC(sub_829C88B4);
PPC_FUNC_IMPL(__imp__sub_829C88B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C88B8"))) PPC_WEAK_FUNC(sub_829C88B8);
PPC_FUNC_IMPL(__imp__sub_829C88B8) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C88DC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c88f4
	if (ctx.cr6.eq) goto loc_829C88F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826f37a0
	ctx.lr = 0x829C88EC;
	sub_826F37A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c88f8
	goto loc_829C88F8;
loc_829C88F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C88F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8900;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C891C"))) PPC_WEAK_FUNC(sub_829C891C);
PPC_FUNC_IMPL(__imp__sub_829C891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8920"))) PPC_WEAK_FUNC(sub_829C8920);
PPC_FUNC_IMPL(__imp__sub_829C8920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8928;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C893C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c89dc
	if (ctx.cr6.eq) goto loc_829C89DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-6000
	ctx.r4.s64 = ctx.r11.s64 + -6000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C895C;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937b0
	ctx.lr = 0x829C8970;
	sub_821937B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8978;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,-5608
	ctx.r8.s64 = ctx.r10.s64 + -5608;
	// addi r4,r9,-5880
	ctx.r4.s64 = ctx.r9.s64 + -5880;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a28a0
	ctx.lr = 0x829C8998;
	sub_822A28A0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r7,5732
	ctx.r6.s64 = ctx.r7.s64 + 5732;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822149c8
	ctx.lr = 0x829C89BC;
	sub_822149C8(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C89D0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C89DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C89E8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C89F4"))) PPC_WEAK_FUNC(sub_829C89F4);
PPC_FUNC_IMPL(__imp__sub_829C89F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C89F8"))) PPC_WEAK_FUNC(sub_829C89F8);
PPC_FUNC_IMPL(__imp__sub_829C89F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8A00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,108
	ctx.r3.s64 = 108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8A14;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8a80
	if (ctx.cr6.eq) goto loc_829C8A80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-5788
	ctx.r4.s64 = ctx.r11.s64 + -5788;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C8A34;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937b0
	ctx.lr = 0x829C8A48;
	sub_821937B0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-7776
	ctx.r9.s64 = ctx.r10.s64 + -7776;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82214f08
	ctx.lr = 0x829C8A5C;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r8,-5440
	ctx.r7.s64 = ctx.r8.s64 + -5440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C8A74;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C8A80:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8A8C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C8A98"))) PPC_WEAK_FUNC(sub_829C8A98);
PPC_FUNC_IMPL(__imp__sub_829C8A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8AA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8AB4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8b4c
	if (ctx.cr6.eq) goto loc_829C8B4C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C8AD4;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C8AEC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8AF4;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-904
	ctx.r8.s64 = ctx.r10.s64 + -904;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-928
	ctx.r4.s64 = ctx.r7.s64 + -928;
	// lfs f1,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C8B18;
	sub_821DF018(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r3,r5,2
	ctx.r3.u64 = ctx.r5.u64 | 2;
	// lfs f0,476(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8B40;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C8B4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8B58;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C8B64"))) PPC_WEAK_FUNC(sub_829C8B64);
PPC_FUNC_IMPL(__imp__sub_829C8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8B68"))) PPC_WEAK_FUNC(sub_829C8B68);
PPC_FUNC_IMPL(__imp__sub_829C8B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C8B70;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8B84;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8bf4
	if (ctx.cr6.eq) goto loc_829C8BF4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C8BA4;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C8BBC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8BC4;
	sub_82214F08(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// addi r9,r10,-824
	ctx.r9.s64 = ctx.r10.s64 + -824;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8BE8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C8BF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8C00;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C8C0C"))) PPC_WEAK_FUNC(sub_829C8C0C);
PPC_FUNC_IMPL(__imp__sub_829C8C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8C10"))) PPC_WEAK_FUNC(sub_829C8C10);
PPC_FUNC_IMPL(__imp__sub_829C8C10) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8C34;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c8c4c
	if (ctx.cr6.eq) goto loc_829C8C4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d6a80
	ctx.lr = 0x829C8C44;
	sub_826D6A80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c8c50
	goto loc_829C8C50;
loc_829C8C4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8C58;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C8C74"))) PPC_WEAK_FUNC(sub_829C8C74);
PPC_FUNC_IMPL(__imp__sub_829C8C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8C78"))) PPC_WEAK_FUNC(sub_829C8C78);
PPC_FUNC_IMPL(__imp__sub_829C8C78) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8C9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c8cb4
	if (ctx.cr6.eq) goto loc_829C8CB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826d7750
	ctx.lr = 0x829C8CAC;
	sub_826D7750(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c8cb8
	goto loc_829C8CB8;
loc_829C8CB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8CB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8CC0;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C8CDC"))) PPC_WEAK_FUNC(sub_829C8CDC);
PPC_FUNC_IMPL(__imp__sub_829C8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8CE0"))) PPC_WEAK_FUNC(sub_829C8CE0);
PPC_FUNC_IMPL(__imp__sub_829C8CE0) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8D04;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c8d1c
	if (ctx.cr6.eq) goto loc_829C8D1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c3068
	ctx.lr = 0x829C8D14;
	sub_828C3068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c8d20
	goto loc_829C8D20;
loc_829C8D1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8D20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8D28;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C8D44"))) PPC_WEAK_FUNC(sub_829C8D44);
PPC_FUNC_IMPL(__imp__sub_829C8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8D48"))) PPC_WEAK_FUNC(sub_829C8D48);
PPC_FUNC_IMPL(__imp__sub_829C8D48) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8D6C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c8d84
	if (ctx.cr6.eq) goto loc_829C8D84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c34c8
	ctx.lr = 0x829C8D7C;
	sub_828C34C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c8d88
	goto loc_829C8D88;
loc_829C8D84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C8D88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8D90;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C8DAC"))) PPC_WEAK_FUNC(sub_829C8DAC);
PPC_FUNC_IMPL(__imp__sub_829C8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8DB0"))) PPC_WEAK_FUNC(sub_829C8DB0);
PPC_FUNC_IMPL(__imp__sub_829C8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C8DB8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8DCC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8e98
	if (ctx.cr6.eq) goto loc_829C8E98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222cf18
	ctx.lr = 0x829C8DF0;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C8E08;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C8E10;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,5456
	ctx.r8.s64 = ctx.r10.s64 + 5456;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r9,-5624
	ctx.r4.s64 = ctx.r9.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C8E30;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C8E40;
	sub_8222CF18(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r5,r7,5052
	ctx.r5.s64 = ctx.r7.s64 + 5052;
	// addi r4,r6,5072
	ctx.r4.s64 = ctx.r6.s64 + 5072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C8E58;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C8E68;
	sub_8222CF18(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,5160
	ctx.r4.s64 = ctx.r4.s64 + 5160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3e78
	ctx.lr = 0x829C8E7C;
	sub_821E3E78(ctx, base);
	// stb r3,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8E8C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C8E98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8EA4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C8EB0"))) PPC_WEAK_FUNC(sub_829C8EB0);
PPC_FUNC_IMPL(__imp__sub_829C8EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x829C8EB8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8ECC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c8f8c
	if (ctx.cr6.eq) goto loc_829C8F8C;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8229d980
	ctx.lr = 0x829C8EE4;
	sub_8229D980(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-5520
	ctx.r10.s64 = ctx.r11.s64 + -5520;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r5,r9,3224
	ctx.r5.s64 = ctx.r9.s64 + 3224;
	// addi r4,r8,-5624
	ctx.r4.s64 = ctx.r8.s64 + -5624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C8F10;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C8F20;
	sub_8222CF18(ctx, base);
	// lis r27,-32246
	ctx.r27.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// addi r6,r27,-27456
	ctx.r6.s64 = ctx.r27.s64 + -27456;
	// addi r4,r7,11476
	ctx.r4.s64 = ctx.r7.s64 + 11476;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C8F3C;
	sub_821DF018(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lfs f0,-27456(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,92(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r4,r5,-5432
	ctx.r4.s64 = ctx.r5.s64 + -5432;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r3,-5600
	ctx.r4.s64 = ctx.r3.s64 + -5600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3e78
	ctx.lr = 0x829C8F70;
	sub_821E3E78(ctx, base);
	// stb r3,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8F80;
	sub_822BFFA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_829C8F8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C8F98;
	sub_822BFFA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_829C8FA4"))) PPC_WEAK_FUNC(sub_829C8FA4);
PPC_FUNC_IMPL(__imp__sub_829C8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C8FA8"))) PPC_WEAK_FUNC(sub_829C8FA8);
PPC_FUNC_IMPL(__imp__sub_829C8FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C8FB0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C8FC4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c908c
	if (ctx.cr6.eq) goto loc_829C908C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222cf18
	ctx.lr = 0x829C8FE8;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9000;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9008;
	sub_82214F08(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,5536
	ctx.r8.s64 = ctx.r10.s64 + 5536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r9,5212
	ctx.r4.s64 = ctx.r9.s64 + 5212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C9028;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C9038;
	sub_8222CF18(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r5,r7,5052
	ctx.r5.s64 = ctx.r7.s64 + 5052;
	// addi r4,r6,5072
	ctx.r4.s64 = ctx.r6.s64 + 5072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C9050;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C9060;
	sub_8222CF18(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r5,-32268
	ctx.r3.s64 = ctx.r5.s64 + -32268;
	// stw r4,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9080;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C908C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9098;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C90A4"))) PPC_WEAK_FUNC(sub_829C90A4);
PPC_FUNC_IMPL(__imp__sub_829C90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C90A8"))) PPC_WEAK_FUNC(sub_829C90A8);
PPC_FUNC_IMPL(__imp__sub_829C90A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C90B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C90C4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9164
	if (ctx.cr6.eq) goto loc_829C9164;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222cf18
	ctx.lr = 0x829C90E8;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9100;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9108;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,4440
	ctx.r8.s64 = ctx.r10.s64 + 4440;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r9,4024
	ctx.r4.s64 = ctx.r9.s64 + 4024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C9128;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C9138;
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r7,-32268
	ctx.r5.s64 = ctx.r7.s64 + -32268;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9158;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C9164:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9170;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C917C"))) PPC_WEAK_FUNC(sub_829C917C);
PPC_FUNC_IMPL(__imp__sub_829C917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9180"))) PPC_WEAK_FUNC(sub_829C9180);
PPC_FUNC_IMPL(__imp__sub_829C9180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9188;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C919C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9214
	if (ctx.cr6.eq) goto loc_829C9214;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C91BC;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C91D4;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C91DC;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r10,4528
	ctx.r8.s64 = ctx.r10.s64 + 4528;
	// addi r7,r9,-32268
	ctx.r7.s64 = ctx.r9.s64 + -32268;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9208;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9214:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9220;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C922C"))) PPC_WEAK_FUNC(sub_829C922C);
PPC_FUNC_IMPL(__imp__sub_829C922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9230"))) PPC_WEAK_FUNC(sub_829C9230);
PPC_FUNC_IMPL(__imp__sub_829C9230) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9254;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c926c
	if (ctx.cr6.eq) goto loc_829C926C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827dda10
	ctx.lr = 0x829C9264;
	sub_827DDA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9270
	goto loc_829C9270;
loc_829C926C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9270:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9278;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9294"))) PPC_WEAK_FUNC(sub_829C9294);
PPC_FUNC_IMPL(__imp__sub_829C9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9298"))) PPC_WEAK_FUNC(sub_829C9298);
PPC_FUNC_IMPL(__imp__sub_829C9298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C92A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C92B4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9334
	if (ctx.cr6.eq) goto loc_829C9334;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C92D4;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C92EC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C92F4;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-18952
	ctx.r8.s64 = ctx.r10.s64 + -18952;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-19088
	ctx.r4.s64 = ctx.r7.s64 + -19088;
	// lfs f1,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C9318;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9328;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9334:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9340;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C934C"))) PPC_WEAK_FUNC(sub_829C934C);
PPC_FUNC_IMPL(__imp__sub_829C934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9350"))) PPC_WEAK_FUNC(sub_829C9350);
PPC_FUNC_IMPL(__imp__sub_829C9350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9358;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C936C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c93d0
	if (ctx.cr6.eq) goto loc_829C93D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C938C;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C93A4;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C93AC;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r10,-18792
	ctx.r9.s64 = ctx.r10.s64 + -18792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C93C4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C93D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C93DC;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C93E8"))) PPC_WEAK_FUNC(sub_829C93E8);
PPC_FUNC_IMPL(__imp__sub_829C93E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C93F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9404;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c946c
	if (ctx.cr6.eq) goto loc_829C946C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-19096
	ctx.r4.s64 = ctx.r11.s64 + -19096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C9424;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937b0
	ctx.lr = 0x829C9438;
	sub_821937B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9440;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-19032
	ctx.r8.s64 = ctx.r10.s64 + -19032;
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9460;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C946C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9478;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9484"))) PPC_WEAK_FUNC(sub_829C9484);
PPC_FUNC_IMPL(__imp__sub_829C9484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9488"))) PPC_WEAK_FUNC(sub_829C9488);
PPC_FUNC_IMPL(__imp__sub_829C9488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C9490;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C94A4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9540
	if (ctx.cr6.eq) goto loc_829C9540;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3416
	ctx.r4.s64 = ctx.r11.s64 + 3416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C94C4;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C94DC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C94E4;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// addi r9,r10,3520
	ctx.r9.s64 = ctx.r10.s64 + 3520;
	// addi r8,r28,-27468
	ctx.r8.s64 = ctx.r28.s64 + -27468;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,3424
	ctx.r4.s64 = ctx.r7.s64 + 3424;
	// lfs f1,9556(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C950C;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f1,-27468(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,3436
	ctx.r4.s64 = ctx.r6.s64 + 3436;
	// bl 0x821df018
	ctx.lr = 0x829C9524;
	sub_821DF018(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9534;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C9540:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C954C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C9558"))) PPC_WEAK_FUNC(sub_829C9558);
PPC_FUNC_IMPL(__imp__sub_829C9558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9560;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9574;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c95e4
	if (ctx.cr6.eq) goto loc_829C95E4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3456
	ctx.r4.s64 = ctx.r11.s64 + 3456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C9594;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C95AC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C95B4;
	sub_82214F08(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// addi r9,r10,3600
	ctx.r9.s64 = ctx.r10.s64 + 3600;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C95D8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C95E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C95F0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C95FC"))) PPC_WEAK_FUNC(sub_829C95FC);
PPC_FUNC_IMPL(__imp__sub_829C95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9600"))) PPC_WEAK_FUNC(sub_829C9600);
PPC_FUNC_IMPL(__imp__sub_829C9600) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9624;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c963c
	if (ctx.cr6.eq) goto loc_829C963C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829f30b0
	ctx.lr = 0x829C9634;
	sub_829F30B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9640
	goto loc_829C9640;
loc_829C963C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9648;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9664"))) PPC_WEAK_FUNC(sub_829C9664);
PPC_FUNC_IMPL(__imp__sub_829C9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9668"))) PPC_WEAK_FUNC(sub_829C9668);
PPC_FUNC_IMPL(__imp__sub_829C9668) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C968C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c96a4
	if (ctx.cr6.eq) goto loc_829C96A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829c5a28
	ctx.lr = 0x829C969C;
	sub_829C5A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c96a8
	goto loc_829C96A8;
loc_829C96A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C96A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C96B0;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C96CC"))) PPC_WEAK_FUNC(sub_829C96CC);
PPC_FUNC_IMPL(__imp__sub_829C96CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C96D0"))) PPC_WEAK_FUNC(sub_829C96D0);
PPC_FUNC_IMPL(__imp__sub_829C96D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C96D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C96EC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9750
	if (ctx.cr6.eq) goto loc_829C9750;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,4612
	ctx.r4.s64 = ctx.r11.s64 + 4612;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C970C;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9724;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C972C;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r10,4640
	ctx.r9.s64 = ctx.r10.s64 + 4640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C9744;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9750:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C975C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9768"))) PPC_WEAK_FUNC(sub_829C9768);
PPC_FUNC_IMPL(__imp__sub_829C9768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9770;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9784;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c97e8
	if (ctx.cr6.eq) goto loc_829C97E8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,4624
	ctx.r4.s64 = ctx.r11.s64 + 4624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C97A4;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C97BC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C97C4;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r10,4720
	ctx.r9.s64 = ctx.r10.s64 + 4720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C97DC;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C97E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C97F4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9800"))) PPC_WEAK_FUNC(sub_829C9800);
PPC_FUNC_IMPL(__imp__sub_829C9800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C9808;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C981C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c98d4
	if (ctx.cr6.eq) goto loc_829C98D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82866fe8
	ctx.lr = 0x829C9830;
	sub_82866FE8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// addi r7,r11,-6520
	ctx.r7.s64 = ctx.r11.s64 + -6520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,28344
	ctx.r6.s64 = ctx.r8.s64 + 28344;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r29,r31,124
	ctx.r29.s64 = ctx.r31.s64 + 124;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_829C9854:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829c9854
	if (!ctx.cr0.eq) goto loc_829C9854;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_829C9874:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwcx. r4,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829c9874
	if (!ctx.cr0.eq) goto loc_829C9874;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-6916
	ctx.r5.s64 = ctx.r11.s64 + -6916;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8229f118
	ctx.lr = 0x829C98A8;
	sub_8229F118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265160
	ctx.lr = 0x829C98B4;
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x829C98BC;
	sub_82214F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C98C8;
	sub_822BFFA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C98D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C98E0;
	sub_822BFFA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C98EC"))) PPC_WEAK_FUNC(sub_829C98EC);
PPC_FUNC_IMPL(__imp__sub_829C98EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C98F0"))) PPC_WEAK_FUNC(sub_829C98F0);
PPC_FUNC_IMPL(__imp__sub_829C98F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C98F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C990C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9984
	if (ctx.cr6.eq) goto loc_829C9984;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C992C;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9944;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C994C;
	sub_82214F08(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-6440
	ctx.r8.s64 = ctx.r10.s64 + -6440;
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stb r9,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r9.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9978;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9984:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9990;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C999C"))) PPC_WEAK_FUNC(sub_829C999C);
PPC_FUNC_IMPL(__imp__sub_829C999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C99A0"))) PPC_WEAK_FUNC(sub_829C99A0);
PPC_FUNC_IMPL(__imp__sub_829C99A0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C99C4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c99dc
	if (ctx.cr6.eq) goto loc_829C99DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82867478
	ctx.lr = 0x829C99D4;
	sub_82867478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c99e0
	goto loc_829C99E0;
loc_829C99DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C99E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C99E8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9A04"))) PPC_WEAK_FUNC(sub_829C9A04);
PPC_FUNC_IMPL(__imp__sub_829C9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9A08"))) PPC_WEAK_FUNC(sub_829C9A08);
PPC_FUNC_IMPL(__imp__sub_829C9A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9A10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9A24;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9abc
	if (ctx.cr6.eq) goto loc_829C9ABC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,1820
	ctx.r4.s64 = ctx.r11.s64 + 1820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C9A44;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821937b0
	ctx.lr = 0x829C9A58;
	sub_821937B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9A60;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,1848
	ctx.r8.s64 = ctx.r10.s64 + 1848;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,4908
	ctx.r4.s64 = ctx.r7.s64 + 4908;
	// lfs f1,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C9A84;
	sub_821DF018(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stb r6,79(r31)
	PPC_STORE_U8(ctx.r31.u32 + 79, ctx.r6.u8);
	// bl 0x822bffa0
	ctx.lr = 0x829C9AB0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9ABC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9AC8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9AD4"))) PPC_WEAK_FUNC(sub_829C9AD4);
PPC_FUNC_IMPL(__imp__sub_829C9AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9AD8"))) PPC_WEAK_FUNC(sub_829C9AD8);
PPC_FUNC_IMPL(__imp__sub_829C9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9AE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9AF4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9b64
	if (ctx.cr6.eq) goto loc_829C9B64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829c5a28
	ctx.lr = 0x829C9B08;
	sub_829C5A28(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r9,-4976
	ctx.r7.s64 = ctx.r9.s64 + -4976;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,5732
	ctx.r6.s64 = ctx.r8.s64 + 5732;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// bl 0x822bffa0
	ctx.lr = 0x829C9B58;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9B70;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9B7C"))) PPC_WEAK_FUNC(sub_829C9B7C);
PPC_FUNC_IMPL(__imp__sub_829C9B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9B80"))) PPC_WEAK_FUNC(sub_829C9B80);
PPC_FUNC_IMPL(__imp__sub_829C9B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9B88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9B9C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9bd4
	if (ctx.cr6.eq) goto loc_829C9BD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d3860
	ctx.lr = 0x829C9BB0;
	sub_826D3860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-4728
	ctx.r10.s64 = ctx.r11.s64 + -4728;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829C9BC8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9BD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9BE0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9BEC"))) PPC_WEAK_FUNC(sub_829C9BEC);
PPC_FUNC_IMPL(__imp__sub_829C9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9BF0"))) PPC_WEAK_FUNC(sub_829C9BF0);
PPC_FUNC_IMPL(__imp__sub_829C9BF0) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9C14;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c9c2c
	if (ctx.cr6.eq) goto loc_829C9C2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8286f058
	ctx.lr = 0x829C9C24;
	sub_8286F058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9c30
	goto loc_829C9C30;
loc_829C9C2C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9C30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9C38;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9C54"))) PPC_WEAK_FUNC(sub_829C9C54);
PPC_FUNC_IMPL(__imp__sub_829C9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9C58"))) PPC_WEAK_FUNC(sub_829C9C58);
PPC_FUNC_IMPL(__imp__sub_829C9C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9C60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9C74;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9cf4
	if (ctx.cr6.eq) goto loc_829C9CF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,2188
	ctx.r4.s64 = ctx.r11.s64 + 2188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C9C94;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9CAC;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9CB4;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,2488
	ctx.r8.s64 = ctx.r10.s64 + 2488;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,2208
	ctx.r4.s64 = ctx.r7.s64 + 2208;
	// lfs f1,-17752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829C9CD8;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9CE8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9CF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9D00;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829C9D0C"))) PPC_WEAK_FUNC(sub_829C9D0C);
PPC_FUNC_IMPL(__imp__sub_829C9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9D10"))) PPC_WEAK_FUNC(sub_829C9D10);
PPC_FUNC_IMPL(__imp__sub_829C9D10) {
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
	// li r3,196
	ctx.r3.s64 = 196;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9D34;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c9d4c
	if (ctx.cr6.eq) goto loc_829C9D4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829ee348
	ctx.lr = 0x829C9D44;
	sub_829EE348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9d50
	goto loc_829C9D50;
loc_829C9D4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9D50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9D58;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9D74"))) PPC_WEAK_FUNC(sub_829C9D74);
PPC_FUNC_IMPL(__imp__sub_829C9D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9D78"))) PPC_WEAK_FUNC(sub_829C9D78);
PPC_FUNC_IMPL(__imp__sub_829C9D78) {
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
	// li r3,220
	ctx.r3.s64 = 220;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9D9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c9db4
	if (ctx.cr6.eq) goto loc_829C9DB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829ef8a0
	ctx.lr = 0x829C9DAC;
	sub_829EF8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9db8
	goto loc_829C9DB8;
loc_829C9DB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9DB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9DC0;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9DDC"))) PPC_WEAK_FUNC(sub_829C9DDC);
PPC_FUNC_IMPL(__imp__sub_829C9DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9DE0"))) PPC_WEAK_FUNC(sub_829C9DE0);
PPC_FUNC_IMPL(__imp__sub_829C9DE0) {
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
	// li r3,188
	ctx.r3.s64 = 188;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9E04;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c9e1c
	if (ctx.cr6.eq) goto loc_829C9E1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829ef198
	ctx.lr = 0x829C9E14;
	sub_829EF198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9e20
	goto loc_829C9E20;
loc_829C9E1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9E20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9E28;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9E44"))) PPC_WEAK_FUNC(sub_829C9E44);
PPC_FUNC_IMPL(__imp__sub_829C9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9E48"))) PPC_WEAK_FUNC(sub_829C9E48);
PPC_FUNC_IMPL(__imp__sub_829C9E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829C9E50;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9E64;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9ef0
	if (ctx.cr6.eq) goto loc_829C9EF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222cf18
	ctx.lr = 0x829C9E88;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9EA0;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9EA8;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,2568
	ctx.r8.s64 = ctx.r10.s64 + 2568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r9,-7904
	ctx.r4.s64 = ctx.r9.s64 + -7904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829C9EC8;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829C9ED8;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9EE4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829C9EF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9EFC;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829C9F08"))) PPC_WEAK_FUNC(sub_829C9F08);
PPC_FUNC_IMPL(__imp__sub_829C9F08) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9F2C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829c9f44
	if (ctx.cr6.eq) goto loc_829C9F44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828670d0
	ctx.lr = 0x829C9F3C;
	sub_828670D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829c9f48
	goto loc_829C9F48;
loc_829C9F44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829C9F48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9F50;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829C9F6C"))) PPC_WEAK_FUNC(sub_829C9F6C);
PPC_FUNC_IMPL(__imp__sub_829C9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829C9F70"))) PPC_WEAK_FUNC(sub_829C9F70);
PPC_FUNC_IMPL(__imp__sub_829C9F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829C9F78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829C9F8C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829c9ff8
	if (ctx.cr6.eq) goto loc_829C9FF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829C9FAC;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829C9FC4;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829C9FCC;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-1864
	ctx.r8.s64 = ctx.r10.s64 + -1864;
	// stb r9,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r9.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829C9FEC;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829C9FF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA004;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA010"))) PPC_WEAK_FUNC(sub_829CA010);
PPC_FUNC_IMPL(__imp__sub_829CA010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CA018;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA02C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca0a0
	if (ctx.cr6.eq) goto loc_829CA0A0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829bb098
	ctx.lr = 0x829CA044;
	sub_829BB098(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// addi r10,r11,-1784
	ctx.r10.s64 = ctx.r11.s64 + -1784;
	// addi r9,r28,-17912
	ctx.r9.s64 = ctx.r28.s64 + -17912;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-1968
	ctx.r4.s64 = ctx.r8.s64 + -1968;
	// lfs f1,160(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829CA06C;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfs f1,-17912(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -17912);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-1956
	ctx.r4.s64 = ctx.r7.s64 + -1956;
	// bl 0x821df018
	ctx.lr = 0x829CA084;
	sub_821DF018(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA094;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829CA0A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA0AC;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CA0B8"))) PPC_WEAK_FUNC(sub_829CA0B8);
PPC_FUNC_IMPL(__imp__sub_829CA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA0C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA0D4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca120
	if (ctx.cr6.eq) goto loc_829CA120;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829bb098
	ctx.lr = 0x829CA0EC;
	sub_829BB098(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1704
	ctx.r9.s64 = ctx.r10.s64 + -1704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829CA114;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA120:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA12C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA138"))) PPC_WEAK_FUNC(sub_829CA138);
PPC_FUNC_IMPL(__imp__sub_829CA138) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA15C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca174
	if (ctx.cr6.eq) goto loc_829CA174;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829bc9d0
	ctx.lr = 0x829CA16C;
	sub_829BC9D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca178
	goto loc_829CA178;
loc_829CA174:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA180;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA19C"))) PPC_WEAK_FUNC(sub_829CA19C);
PPC_FUNC_IMPL(__imp__sub_829CA19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA1A0"))) PPC_WEAK_FUNC(sub_829CA1A0);
PPC_FUNC_IMPL(__imp__sub_829CA1A0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA1C4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca1dc
	if (ctx.cr6.eq) goto loc_829CA1DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827115c0
	ctx.lr = 0x829CA1D4;
	sub_827115C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca1e0
	goto loc_829CA1E0;
loc_829CA1DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA1E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA1E8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA204"))) PPC_WEAK_FUNC(sub_829CA204);
PPC_FUNC_IMPL(__imp__sub_829CA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA208"))) PPC_WEAK_FUNC(sub_829CA208);
PPC_FUNC_IMPL(__imp__sub_829CA208) {
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
	// li r3,164
	ctx.r3.s64 = 164;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA22C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca244
	if (ctx.cr6.eq) goto loc_829CA244;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712298
	ctx.lr = 0x829CA23C;
	sub_82712298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca248
	goto loc_829CA248;
loc_829CA244:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA248:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA250;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA26C"))) PPC_WEAK_FUNC(sub_829CA26C);
PPC_FUNC_IMPL(__imp__sub_829CA26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA270"))) PPC_WEAK_FUNC(sub_829CA270);
PPC_FUNC_IMPL(__imp__sub_829CA270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA278;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,152
	ctx.r3.s64 = 152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA28C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca31c
	if (ctx.cr6.eq) goto loc_829CA31C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d3860
	ctx.lr = 0x829CA2A0;
	sub_826D3860(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-8768
	ctx.r9.s64 = ctx.r11.s64 + -8768;
	// addi r4,r10,-20088
	ctx.r4.s64 = ctx.r10.s64 + -20088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x829CA2BC;
	sub_821F0108(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,-16964
	ctx.r5.s64 = ctx.r8.s64 + -16964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x8229f118
	ctx.lr = 0x829CA2D4;
	sub_8229F118(ctx, base);
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r7,-20096
	ctx.r4.s64 = ctx.r7.s64 + -20096;
	// bl 0x821f0108
	ctx.lr = 0x829CA2E4;
	sub_821F0108(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,-9636
	ctx.r5.s64 = ctx.r5.s64 + -9636;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x8229f118
	ctx.lr = 0x829CA2FC;
	sub_8229F118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r3,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA310;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA31C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA328;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA334"))) PPC_WEAK_FUNC(sub_829CA334);
PPC_FUNC_IMPL(__imp__sub_829CA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA338"))) PPC_WEAK_FUNC(sub_829CA338);
PPC_FUNC_IMPL(__imp__sub_829CA338) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA35C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca374
	if (ctx.cr6.eq) goto loc_829CA374;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713080
	ctx.lr = 0x829CA36C;
	sub_82713080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca378
	goto loc_829CA378;
loc_829CA374:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA378:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA380;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA39C"))) PPC_WEAK_FUNC(sub_829CA39C);
PPC_FUNC_IMPL(__imp__sub_829CA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA3A0"))) PPC_WEAK_FUNC(sub_829CA3A0);
PPC_FUNC_IMPL(__imp__sub_829CA3A0) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA3C4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca3dc
	if (ctx.cr6.eq) goto loc_829CA3DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829e71a0
	ctx.lr = 0x829CA3D4;
	sub_829E71A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca3e0
	goto loc_829CA3E0;
loc_829CA3DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA3E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA3E8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA404"))) PPC_WEAK_FUNC(sub_829CA404);
PPC_FUNC_IMPL(__imp__sub_829CA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA408"))) PPC_WEAK_FUNC(sub_829CA408);
PPC_FUNC_IMPL(__imp__sub_829CA408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA410;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA424;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca4b4
	if (ctx.cr6.eq) goto loc_829CA4B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CA444;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829CA45C;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CA464;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,2008
	ctx.r8.s64 = ctx.r10.s64 + 2008;
	// addi r4,r9,1968
	ctx.r4.s64 = ctx.r9.s64 + 1968;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CA484;
	sub_8222CF18(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r7,1996
	ctx.r5.s64 = ctx.r7.s64 + 1996;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8229f118
	ctx.lr = 0x829CA49C;
	sub_8229F118(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA4A8;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA4B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA4C0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA4CC"))) PPC_WEAK_FUNC(sub_829CA4CC);
PPC_FUNC_IMPL(__imp__sub_829CA4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA4D0"))) PPC_WEAK_FUNC(sub_829CA4D0);
PPC_FUNC_IMPL(__imp__sub_829CA4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA4D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA4EC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca564
	if (ctx.cr6.eq) goto loc_829CA564;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-16924
	ctx.r4.s64 = ctx.r11.s64 + -16924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CA50C;
	sub_8222CF18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db0e8
	ctx.lr = 0x829CA520;
	sub_827DB0E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CA528;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,31208
	ctx.r8.s64 = ctx.r10.s64 + 31208;
	// addi r4,r9,30932
	ctx.r4.s64 = ctx.r9.s64 + 30932;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3e78
	ctx.lr = 0x829CA548;
	sub_821E3E78(ctx, base);
	// stb r3,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r3.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA558;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA564:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA570;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA57C"))) PPC_WEAK_FUNC(sub_829CA57C);
PPC_FUNC_IMPL(__imp__sub_829CA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA580"))) PPC_WEAK_FUNC(sub_829CA580);
PPC_FUNC_IMPL(__imp__sub_829CA580) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA5A4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca5bc
	if (ctx.cr6.eq) goto loc_829CA5BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827dc818
	ctx.lr = 0x829CA5B4;
	sub_827DC818(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca5c0
	goto loc_829CA5C0;
loc_829CA5BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA5C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA5C8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA5E4"))) PPC_WEAK_FUNC(sub_829CA5E4);
PPC_FUNC_IMPL(__imp__sub_829CA5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA5E8"))) PPC_WEAK_FUNC(sub_829CA5E8);
PPC_FUNC_IMPL(__imp__sub_829CA5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA5F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA604;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca664
	if (ctx.cr6.eq) goto loc_829CA664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82866f70
	ctx.lr = 0x829CA618;
	sub_82866F70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,5624
	ctx.r9.s64 = ctx.r11.s64 + 5624;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r5,r10,5052
	ctx.r5.s64 = ctx.r10.s64 + 5052;
	// addi r4,r8,5072
	ctx.r4.s64 = ctx.r8.s64 + 5072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829CA63C;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829CA64C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA658;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA664:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA670;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA67C"))) PPC_WEAK_FUNC(sub_829CA67C);
PPC_FUNC_IMPL(__imp__sub_829CA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA680"))) PPC_WEAK_FUNC(sub_829CA680);
PPC_FUNC_IMPL(__imp__sub_829CA680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA688;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA69C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca6fc
	if (ctx.cr6.eq) goto loc_829CA6FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82193628
	ctx.lr = 0x829CA6B0;
	sub_82193628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,5704
	ctx.r9.s64 = ctx.r11.s64 + 5704;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r5,r10,5052
	ctx.r5.s64 = ctx.r10.s64 + 5052;
	// addi r4,r8,5072
	ctx.r4.s64 = ctx.r8.s64 + 5072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829CA6D4;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829CA6E4;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA6F0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA6FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA708;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA714"))) PPC_WEAK_FUNC(sub_829CA714);
PPC_FUNC_IMPL(__imp__sub_829CA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA718"))) PPC_WEAK_FUNC(sub_829CA718);
PPC_FUNC_IMPL(__imp__sub_829CA718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA720;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA734;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca794
	if (ctx.cr6.eq) goto loc_829CA794;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826d6558
	ctx.lr = 0x829CA748;
	sub_826D6558(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,5784
	ctx.r9.s64 = ctx.r11.s64 + 5784;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r5,r10,5052
	ctx.r5.s64 = ctx.r10.s64 + 5052;
	// addi r4,r8,5072
	ctx.r4.s64 = ctx.r8.s64 + 5072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244bc10
	ctx.lr = 0x829CA76C;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x829CA77C;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA788;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA794:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA7A0;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA7AC"))) PPC_WEAK_FUNC(sub_829CA7AC);
PPC_FUNC_IMPL(__imp__sub_829CA7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA7B0"))) PPC_WEAK_FUNC(sub_829CA7B0);
PPC_FUNC_IMPL(__imp__sub_829CA7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA7B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA7CC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca848
	if (ctx.cr6.eq) goto loc_829CA848;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CA7EC;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829CA804;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CA80C;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,3168
	ctx.r8.s64 = ctx.r10.s64 + 3168;
	// addi r4,r9,3112
	ctx.r4.s64 = ctx.r9.s64 + 3112;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229db28
	ctx.lr = 0x829CA82C;
	sub_8229DB28(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA83C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CA848:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA854;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA860"))) PPC_WEAK_FUNC(sub_829CA860);
PPC_FUNC_IMPL(__imp__sub_829CA860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CA868;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA880;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ca90c
	if (ctx.cr6.eq) goto loc_829CA90C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,2428
	ctx.r4.s64 = ctx.r11.s64 + 2428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CA8A0;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829CA8B8;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CA8C0;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,3032
	ctx.r8.s64 = ctx.r10.s64 + 3032;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,2436
	ctx.r4.s64 = ctx.r7.s64 + 2436;
	// lfs f31,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821df018
	ctx.lr = 0x829CA8E8;
	sub_821DF018(ctx, base);
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,2460
	ctx.r4.s64 = ctx.r6.s64 + 2460;
	// bl 0x821df018
	ctx.lr = 0x829CA900;
	sub_821DF018(ctx, base);
	// stfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x829ca910
	goto loc_829CA910;
loc_829CA90C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA910:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA918;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CA928"))) PPC_WEAK_FUNC(sub_829CA928);
PPC_FUNC_IMPL(__imp__sub_829CA928) {
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
	// li r3,192
	ctx.r3.s64 = 192;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA94C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca964
	if (ctx.cr6.eq) goto loc_829CA964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826dad10
	ctx.lr = 0x829CA95C;
	sub_826DAD10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca968
	goto loc_829CA968;
loc_829CA964:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA968:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA970;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA98C"))) PPC_WEAK_FUNC(sub_829CA98C);
PPC_FUNC_IMPL(__imp__sub_829CA98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA990"))) PPC_WEAK_FUNC(sub_829CA990);
PPC_FUNC_IMPL(__imp__sub_829CA990) {
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
	// li r3,224
	ctx.r3.s64 = 224;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CA9B4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ca9cc
	if (ctx.cr6.eq) goto loc_829CA9CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826db570
	ctx.lr = 0x829CA9C4;
	sub_826DB570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829ca9d0
	goto loc_829CA9D0;
loc_829CA9CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CA9D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CA9D8;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CA9F4"))) PPC_WEAK_FUNC(sub_829CA9F4);
PPC_FUNC_IMPL(__imp__sub_829CA9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CA9F8"))) PPC_WEAK_FUNC(sub_829CA9F8);
PPC_FUNC_IMPL(__imp__sub_829CA9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CAA00;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CAA14;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829caaa8
	if (ctx.cr6.eq) goto loc_829CAAA8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-24548
	ctx.r4.s64 = ctx.r11.s64 + -24548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CAA34;
	sub_8222CF18(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821936e8
	ctx.lr = 0x829CAA4C;
	sub_821936E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CAA54;
	sub_82214F08(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,3256
	ctx.r8.s64 = ctx.r10.s64 + 3256;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-9616
	ctx.r4.s64 = ctx.r7.s64 + -9616;
	// lfs f1,-17752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821df018
	ctx.lr = 0x829CAA78;
	sub_821DF018(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// li r6,128
	ctx.r6.s64 = 128;
	// stfs f1,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
	// bl 0x822bffa0
	ctx.lr = 0x829CAA9C;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CAAA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CAAB4;
	sub_822BFFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CAAC0"))) PPC_WEAK_FUNC(sub_829CAAC0);
PPC_FUNC_IMPL(__imp__sub_829CAAC0) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CAAE4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829caafc
	if (ctx.cr6.eq) goto loc_829CAAFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828697b0
	ctx.lr = 0x829CAAF4;
	sub_828697B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829cab00
	goto loc_829CAB00;
loc_829CAAFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CAB00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CAB08;
	sub_822BFFA0(ctx, base);
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

__attribute__((alias("__imp__sub_829CAB24"))) PPC_WEAK_FUNC(sub_829CAB24);
PPC_FUNC_IMPL(__imp__sub_829CAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CAB28"))) PPC_WEAK_FUNC(sub_829CAB28);
PPC_FUNC_IMPL(__imp__sub_829CAB28) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-1124
	ctx.r9.s64 = ctx.r11.s64 + -1124;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x829cab5c
	if (ctx.cr6.eq) goto loc_829CAB5C;
	// bl 0x8221be68
	ctx.lr = 0x829CAB58;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829CAB5C:
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

__attribute__((alias("__imp__sub_829CAB70"))) PPC_WEAK_FUNC(sub_829CAB70);
PPC_FUNC_IMPL(__imp__sub_829CAB70) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82601418
	ctx.lr = 0x829CAB94;
	sub_82601418(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-1124
	ctx.r9.s64 = ctx.r11.s64 + -1124;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x829cabb8
	if (ctx.cr6.eq) goto loc_829CABB8;
	// bl 0x8221be68
	ctx.lr = 0x829CABB4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829CABB8:
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

__attribute__((alias("__imp__sub_829CABD0"))) PPC_WEAK_FUNC(sub_829CABD0);
PPC_FUNC_IMPL(__imp__sub_829CABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x829CABD8;
	sub_82CA2BB0(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82b1f6d0
	ctx.lr = 0x829CAC18;
	sub_82B1F6D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cb17c
	if (ctx.cr6.eq) goto loc_829CB17C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829fbc40
	ctx.lr = 0x829CAC2C;
	sub_829FBC40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82366318
	ctx.lr = 0x829CAC3C;
	sub_82366318(ctx, base);
	// lwz r24,168(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x829cb130
	if (ctx.cr6.eq) goto loc_829CB130;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r18,-31927
	ctx.r18.s64 = -2092367872;
	// li r14,3
	ctx.r14.s64 = 3;
	// li r15,4
	ctx.r15.s64 = 4;
	// li r16,5
	ctx.r16.s64 = 5;
	// li r17,6
	ctx.r17.s64 = 6;
	// addi r25,r8,-1120
	ctx.r25.s64 = ctx.r8.s64 + -1120;
	// addi r23,r7,-1124
	ctx.r23.s64 = ctx.r7.s64 + -1124;
	// addi r22,r6,-1124
	ctx.r22.s64 = ctx.r6.s64 + -1124;
	// addi r19,r9,-1124
	ctx.r19.s64 = ctx.r9.s64 + -1124;
	// addi r21,r10,-1124
	ctx.r21.s64 = ctx.r10.s64 + -1124;
	// addi r20,r11,-1124
	ctx.r20.s64 = ctx.r11.s64 + -1124;
loc_829CAC90:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x829cb120
	if (ctx.cr6.gt) goto loc_829CB120;
	// lis r12,-32099
	ctx.r12.s64 = -2103640064;
	// addi r12,r12,-21300
	ctx.r12.s64 = ctx.r12.s64 + -21300;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_829CAEEC;
	case 1:
		goto loc_829CACEC;
	case 2:
		goto loc_829CAD98;
	case 3:
		goto loc_829CAE44;
	case 4:
		goto loc_829CAFA0;
	case 5:
		goto loc_829CAD98;
	case 6:
		goto loc_829CB04C;
	case 7:
		goto loc_829CAD98;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-20756(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20756);
	// lwz r20,-21268(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21268);
	// lwz r20,-21096(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21096);
	// lwz r20,-20924(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20924);
	// lwz r20,-20576(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20576);
	// lwz r20,-21096(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21096);
	// lwz r20,-20404(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20404);
	// lwz r20,-21096(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + -21096);
loc_829CACEC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221f388
	ctx.lr = 0x829CACFC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cad1c
	if (ctx.cr6.eq) goto loc_829CAD1C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x829cad20
	goto loc_829CAD20;
loc_829CAD1C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829CAD20:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x829cad38
	if (ctx.cr6.eq) goto loc_829CAD38;
	// bl 0x8254c780
	ctx.lr = 0x829CAD34;
	sub_8254C780(ctx, base);
	// b 0x829cad3c
	goto loc_829CAD3C;
loc_829CAD38:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_829CAD3C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// beq cr6,0x829cad74
	if (ctx.cr6.eq) goto loc_829CAD74;
loc_829CAD58:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829cad58
	if (!ctx.cr0.eq) goto loc_829CAD58;
loc_829CAD74:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CAD80;
	sub_826016B0(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x829ff648
	ctx.lr = 0x829CAD88;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x829CAD94;
	sub_829FF648(ctx, base);
	// b 0x829cb120
	goto loc_829CB120;
loc_829CAD98:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829fc0d0
	ctx.lr = 0x829CADA0;
	sub_829FC0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x829CADAC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cadc8
	if (ctx.cr6.eq) goto loc_829CADC8;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r14.u32);
	// b 0x829cadcc
	goto loc_829CADCC;
loc_829CADC8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829CADCC:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq cr6,0x829cade4
	if (ctx.cr6.eq) goto loc_829CADE4;
	// bl 0x8254c780
	ctx.lr = 0x829CADE0;
	sub_8254C780(ctx, base);
	// b 0x829cade8
	goto loc_829CADE8;
loc_829CADE4:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
loc_829CADE8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x829cae20
	if (ctx.cr6.eq) goto loc_829CAE20;
loc_829CAE04:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829cae04
	if (!ctx.cr0.eq) goto loc_829CAE04;
loc_829CAE20:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CAE2C;
	sub_826016B0(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x829ff648
	ctx.lr = 0x829CAE34;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x829CAE40;
	sub_829FF648(ctx, base);
	// b 0x829cb120
	goto loc_829CB120;
loc_829CAE44:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8221f388
	ctx.lr = 0x829CAE54;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cae70
	if (ctx.cr6.eq) goto loc_829CAE70;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// b 0x829cae74
	goto loc_829CAE74;
loc_829CAE70:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829CAE74:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x829cae8c
	if (ctx.cr6.eq) goto loc_829CAE8C;
	// bl 0x8254c780
	ctx.lr = 0x829CAE88;
	sub_8254C780(ctx, base);
	// b 0x829cae90
	goto loc_829CAE90;
loc_829CAE8C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_829CAE90:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// beq cr6,0x829caec8
	if (ctx.cr6.eq) goto loc_829CAEC8;
loc_829CAEAC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829caeac
	if (!ctx.cr0.eq) goto loc_829CAEAC;
loc_829CAEC8:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CAED4;
	sub_826016B0(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x829ff648
	ctx.lr = 0x829CAEDC;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x829CAEE8;
	sub_829FF648(ctx, base);
	// b 0x829cb120
	goto loc_829CB120;
loc_829CAEEC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r31,r8,1
	ctx.r31.u64 = ctx.r8.u64 ^ 1;
	// bl 0x8221f388
	ctx.lr = 0x829CAF08;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829caf24
	if (ctx.cr6.eq) goto loc_829CAF24;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// stw r15,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r15.u32);
	// b 0x829caf28
	goto loc_829CAF28;
loc_829CAF24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829CAF28:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// beq cr6,0x829caf40
	if (ctx.cr6.eq) goto loc_829CAF40;
	// bl 0x8254c780
	ctx.lr = 0x829CAF3C;
	sub_8254C780(ctx, base);
	// b 0x829caf44
	goto loc_829CAF44;
loc_829CAF40:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_829CAF44:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x829caf7c
	if (ctx.cr6.eq) goto loc_829CAF7C;
loc_829CAF60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829caf60
	if (!ctx.cr0.eq) goto loc_829CAF60;
loc_829CAF7C:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CAF88;
	sub_826016B0(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x829ff648
	ctx.lr = 0x829CAF90;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x829CAF9C;
	sub_829FF648(ctx, base);
	// b 0x829cb120
	goto loc_829CB120;
loc_829CAFA0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829fc0d0
	ctx.lr = 0x829CAFA8;
	sub_829FC0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x829CAFB4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cafd0
	if (ctx.cr6.eq) goto loc_829CAFD0;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r16,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r16.u32);
	// b 0x829cafd4
	goto loc_829CAFD4;
loc_829CAFD0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_829CAFD4:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x829cafec
	if (ctx.cr6.eq) goto loc_829CAFEC;
	// bl 0x8254c780
	ctx.lr = 0x829CAFE8;
	sub_8254C780(ctx, base);
	// b 0x829caff0
	goto loc_829CAFF0;
loc_829CAFEC:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_829CAFF0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// beq cr6,0x829cb028
	if (ctx.cr6.eq) goto loc_829CB028;
loc_829CB00C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829cb00c
	if (!ctx.cr0.eq) goto loc_829CB00C;
loc_829CB028:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CB034;
	sub_826016B0(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x829ff648
	ctx.lr = 0x829CB03C;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x829CB048;
	sub_829FF648(ctx, base);
	// b 0x829cb120
	goto loc_829CB120;
loc_829CB04C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829fc128
	ctx.lr = 0x829CB054;
	sub_829FC128(ctx, base);
	// lwz r11,27600(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 27600);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821e3e10
	ctx.lr = 0x829CB064;
	sub_821E3E10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x829CB070;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cb0a4
	if (ctx.cr6.eq) goto loc_829CB0A4;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stb r28,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r28.u8);
	// bl 0x829cabd0
	ctx.lr = 0x829CB0A0;
	sub_829CABD0(ctx, base);
	// b 0x829cb0a8
	goto loc_829CB0A8;
loc_829CB0A4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829CB0A8:
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// beq cr6,0x829cb0c0
	if (ctx.cr6.eq) goto loc_829CB0C0;
	// bl 0x8254c780
	ctx.lr = 0x829CB0BC;
	sub_8254C780(ctx, base);
	// b 0x829cb0c4
	goto loc_829CB0C4;
loc_829CB0C0:
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
loc_829CB0C4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// beq cr6,0x829cb0fc
	if (ctx.cr6.eq) goto loc_829CB0FC;
loc_829CB0E0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829cb0e0
	if (!ctx.cr0.eq) goto loc_829CB0E0;
loc_829CB0FC:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826016b0
	ctx.lr = 0x829CB108;
	sub_826016B0(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x829ff648
	ctx.lr = 0x829CB110;
	sub_829FF648(ctx, base);
	// stb r26,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r26.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x829CB11C;
	sub_829FF648(ctx, base);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_829CB120:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x829cac90
	if (!ctx.cr6.eq) goto loc_829CAC90;
loc_829CB130:
	// lbz r11,17(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cb174
	if (ctx.cr6.eq) goto loc_829CB174;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lbz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// divw r5,r8,r9
	ctx.r5.s32 = ctx.r8.s32 / ctx.r9.s32;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x82670670
	ctx.lr = 0x829CB170;
	sub_82670670(ctx, base);
	// stb r28,17(r27)
	PPC_STORE_U8(ctx.r27.u32 + 17, ctx.r28.u8);
loc_829CB174:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8221be68
	ctx.lr = 0x829CB17C;
	sub_8221BE68(ctx, base);
loc_829CB17C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CB188"))) PPC_WEAK_FUNC(sub_829CB188);
PPC_FUNC_IMPL(__imp__sub_829CB188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb1f0
	if (!ctx.cr0.gt) goto loc_829CB1F0;
loc_829CB1AC:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb1dc
	if (!ctx.cr6.lt) goto loc_829CB1DC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb1e4
	goto loc_829CB1E4;
loc_829CB1DC:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB1E4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb1ac
	if (ctx.cr6.gt) goto loc_829CB1AC;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_829CB1F0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb214
	if (ctx.cr6.eq) goto loc_829CB214;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb214
	if (ctx.cr6.lt) goto loc_829CB214;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x829cb218
	goto loc_829CB218;
loc_829CB214:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB218:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb240
	if (ctx.cr6.eq) goto loc_829CB240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x829cb240
	if (!ctx.cr6.eq) goto loc_829CB240;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_829CB240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB248"))) PPC_WEAK_FUNC(sub_829CB248);
PPC_FUNC_IMPL(__imp__sub_829CB248) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb2b0
	if (!ctx.cr0.gt) goto loc_829CB2B0;
loc_829CB26C:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb29c
	if (!ctx.cr6.lt) goto loc_829CB29C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb2a4
	goto loc_829CB2A4;
loc_829CB29C:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB2A4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb26c
	if (ctx.cr6.gt) goto loc_829CB26C;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_829CB2B0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb2d4
	if (ctx.cr6.eq) goto loc_829CB2D4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb2d4
	if (ctx.cr6.lt) goto loc_829CB2D4;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x829cb2d8
	goto loc_829CB2D8;
loc_829CB2D4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB2D8:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb300
	if (ctx.cr6.eq) goto loc_829CB300;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x829cb300
	if (!ctx.cr6.eq) goto loc_829CB300;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_829CB300:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB308"))) PPC_WEAK_FUNC(sub_829CB308);
PPC_FUNC_IMPL(__imp__sub_829CB308) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb370
	if (!ctx.cr0.gt) goto loc_829CB370;
loc_829CB32C:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb35c
	if (!ctx.cr6.lt) goto loc_829CB35C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb364
	goto loc_829CB364;
loc_829CB35C:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB364:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb32c
	if (ctx.cr6.gt) goto loc_829CB32C;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_829CB370:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb394
	if (ctx.cr6.eq) goto loc_829CB394;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb394
	if (ctx.cr6.lt) goto loc_829CB394;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x829cb398
	goto loc_829CB398;
loc_829CB394:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB398:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb3c8
	if (ctx.cr6.eq) goto loc_829CB3C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x829cb3c0
	if (!ctx.cr6.eq) goto loc_829CB3C0;
loc_829CB3B0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_829CB3C0:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x829cb3b0
	if (ctx.cr6.eq) goto loc_829CB3B0;
loc_829CB3C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB3D0"))) PPC_WEAK_FUNC(sub_829CB3D0);
PPC_FUNC_IMPL(__imp__sub_829CB3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb438
	if (!ctx.cr0.gt) goto loc_829CB438;
loc_829CB3F4:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb424
	if (!ctx.cr6.lt) goto loc_829CB424;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb42c
	goto loc_829CB42C;
loc_829CB424:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB42C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb3f4
	if (ctx.cr6.gt) goto loc_829CB3F4;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_829CB438:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb45c
	if (ctx.cr6.eq) goto loc_829CB45C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb45c
	if (ctx.cr6.lt) goto loc_829CB45C;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x829cb460
	goto loc_829CB460;
loc_829CB45C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB460:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb488
	if (ctx.cr6.eq) goto loc_829CB488;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x829cb488
	if (!ctx.cr6.eq) goto loc_829CB488;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_829CB488:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB490"))) PPC_WEAK_FUNC(sub_829CB490);
PPC_FUNC_IMPL(__imp__sub_829CB490) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb50c
	if (!ctx.cr0.gt) goto loc_829CB50C;
loc_829CB4C8:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb4f8
	if (!ctx.cr6.lt) goto loc_829CB4F8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb500
	goto loc_829CB500;
loc_829CB4F8:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB500:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb4c8
	if (ctx.cr6.gt) goto loc_829CB4C8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_829CB50C:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb530
	if (ctx.cr6.eq) goto loc_829CB530;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb530
	if (ctx.cr6.lt) goto loc_829CB530;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829cb534
	goto loc_829CB534;
loc_829CB530:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB534:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb588
	if (ctx.cr6.eq) goto loc_829CB588;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x829cb588
	if (!ctx.cr6.eq) goto loc_829CB588;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,27600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x829fc630
	ctx.lr = 0x829CB564;
	sub_829FC630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275368
	ctx.lr = 0x829CB570;
	sub_82275368(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_829CB588:
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

__attribute__((alias("__imp__sub_829CB5A0"))) PPC_WEAK_FUNC(sub_829CB5A0);
PPC_FUNC_IMPL(__imp__sub_829CB5A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829cb600
	if (ctx.cr6.lt) goto loc_829CB600;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x829cb600
	if (!ctx.cr6.lt) goto loc_829CB600;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x829cb5f8
	if (!ctx.cr6.eq) goto loc_829CB5F8;
loc_829CB5E8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_829CB5F8:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x829cb5e8
	if (ctx.cr6.eq) goto loc_829CB5E8;
loc_829CB600:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB608"))) PPC_WEAK_FUNC(sub_829CB608);
PPC_FUNC_IMPL(__imp__sub_829CB608) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x829cb6a0
	if (ctx.cr6.lt) goto loc_829CB6A0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x829cb6a0
	if (!ctx.cr6.lt) goto loc_829CB6A0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x829cb6a0
	if (!ctx.cr6.eq) goto loc_829CB6A0;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,27600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27600);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x829fc630
	ctx.lr = 0x829CB67C;
	sub_829FC630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275368
	ctx.lr = 0x829CB688;
	sub_82275368(ctx, base);
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
loc_829CB6A0:
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
}

__attribute__((alias("__imp__sub_829CB6B8"))) PPC_WEAK_FUNC(sub_829CB6B8);
PPC_FUNC_IMPL(__imp__sub_829CB6B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// subf r8,r9,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// divw. r10,r8,r11
	ctx.r10.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829cb720
	if (!ctx.cr0.gt) goto loc_829CB720;
loc_829CB6DC:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829cb70c
	if (!ctx.cr6.lt) goto loc_829CB70C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x829cb714
	goto loc_829CB714;
loc_829CB70C:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_829CB714:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x829cb6dc
	if (ctx.cr6.gt) goto loc_829CB6DC;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
loc_829CB720:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb744
	if (ctx.cr6.eq) goto loc_829CB744;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cb744
	if (ctx.cr6.lt) goto loc_829CB744;
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x829cb748
	goto loc_829CB748;
loc_829CB744:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_829CB748:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829cb764
	if (ctx.cr6.eq) goto loc_829CB764;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_829CB764:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CB76C"))) PPC_WEAK_FUNC(sub_829CB76C);
PPC_FUNC_IMPL(__imp__sub_829CB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CB770"))) PPC_WEAK_FUNC(sub_829CB770);
PPC_FUNC_IMPL(__imp__sub_829CB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x829CB778;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,4
	ctx.r24.s64 = 4;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cb7b8
	if (ctx.cr6.eq) goto loc_829CB7B8;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// b 0x829cb7c8
	goto loc_829CB7C8;
loc_829CB7B8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x829CB7C4;
	sub_82D4EA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_829CB7C8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829ce0d0
	ctx.lr = 0x829CB7D0;
	sub_829CE0D0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_829CB7E4:
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
	// bne 0x829cb7e4
	if (!ctx.cr0.eq) goto loc_829CB7E4;
	// addi r27,r23,44
	ctx.r27.s64 = ctx.r23.s64 + 44;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b0b38
	ctx.lr = 0x829CB810;
	sub_823B0B38(ctx, base);
	// lwz r6,16(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r22,r23,8
	ctx.r22.s64 = ctx.r23.s64 + 8;
	// clrlwi r11,r6,2
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x829cb848
	if (!ctx.cr6.lt) goto loc_829CB848;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cb838
	if (ctx.cr6.lt) goto loc_829CB838;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829CB838:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d51270
	ctx.lr = 0x829CB848;
	sub_82D51270(ctx, base);
loc_829CB848:
	// stw r30,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cb93c
	if (ctx.cr6.eq) goto loc_829CB93C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,63
	ctx.r26.s64 = ctx.r11.s64 + 63;
loc_829CB868:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r29,r30,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// beq cr6,0x829cb890
	if (ctx.cr6.eq) goto loc_829CB890;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829cb894
	if (ctx.cr6.lt) goto loc_829CB894;
loc_829CB890:
	// twi 31,r0,22
loc_829CB894:
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82275368
	ctx.lr = 0x829CB8A0;
	sub_82275368(ctx, base);
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cb8cc
	if (ctx.cr6.eq) goto loc_829CB8CC;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// b 0x829cb8d8
	goto loc_829CB8D8;
loc_829CB8CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x829CB8D8;
	sub_82D4EA30(ctx, base);
loc_829CB8D8:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cb900
	if (ctx.cr6.eq) goto loc_829CB900;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829cb904
	if (ctx.cr6.lt) goto loc_829CB904;
loc_829CB900:
	// twi 31,r0,22
loc_829CB904:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cb918
	if (!ctx.cr6.eq) goto loc_829CB918;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x829cb91c
	goto loc_829CB91C;
loc_829CB918:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_829CB91C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cb868
	if (!ctx.cr6.eq) goto loc_829CB868;
loc_829CB93C:
	// lwz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// addi r28,r23,32
	ctx.r28.s64 = ctx.r23.s64 + 32;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x829cb974
	if (!ctx.cr6.lt) goto loc_829CB974;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cb964
	if (ctx.cr6.lt) goto loc_829CB964;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829CB964:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d51270
	ctx.lr = 0x829CB974;
	sub_82D51270(ctx, base);
loc_829CB974:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cb9b0
	if (ctx.cr6.eq) goto loc_829CB9B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CB98C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sthx r7,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x829cb98c
	if (!ctx.cr6.eq) goto loc_829CB98C;
loc_829CB9B0:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r30,r23,20
	ctx.r30.s64 = ctx.r23.s64 + 20;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x829cb9e8
	if (!ctx.cr6.lt) goto loc_829CB9E8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829cb9d8
	if (ctx.cr6.lt) goto loc_829CB9D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829CB9D8:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d51270
	ctx.lr = 0x829CB9E8;
	sub_82D51270(ctx, base);
loc_829CB9E8:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cba44
	if (ctx.cr6.eq) goto loc_829CBA44;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
loc_829CBA08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829cba08
	if (!ctx.cr6.eq) goto loc_829CBA08;
loc_829CBA44:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cba5c
	if (!ctx.cr6.eq) goto loc_829CBA5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
	// b 0x829cba68
	goto loc_829CBA68;
loc_829CBA5C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_829CBA68:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_829CBAC0"))) PPC_WEAK_FUNC(sub_829CBAC0);
PPC_FUNC_IMPL(__imp__sub_829CBAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CBAC8;
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cbb58
	if (ctx.cr6.eq) goto loc_829CBB58;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829CBAE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829cbb3c
	if (ctx.cr6.eq) goto loc_829CBB3C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829cbb20
	if (ctx.cr6.lt) goto loc_829CBB20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d4eb08
	ctx.lr = 0x829CBB1C;
	sub_82D4EB08(ctx, base);
	// b 0x829cbb3c
	goto loc_829CBB3C;
loc_829CBB20:
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
loc_829CBB3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cbae8
	if (!ctx.cr6.eq) goto loc_829CBAE8;
loc_829CBB58:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cbb7c
	if (ctx.cr6.eq) goto loc_829CBB7C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822d52c0
	ctx.lr = 0x829CBB74;
	sub_822D52C0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x829CBB7C;
	sub_8221BE68(ctx, base);
loc_829CBB7C:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829cbbb4
	if (!ctx.cr6.eq) goto loc_829CBBB4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,1,1,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CBBB4;
	sub_82D4ECA8(ctx, base);
loc_829CBBB4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829cbbec
	if (!ctx.cr6.eq) goto loc_829CBBEC;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r11,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,4
	ctx.r8.s64 = 4;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CBBEC;
	sub_82D4ECA8(ctx, base);
loc_829CBBEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829cbc18
	if (!ctx.cr6.eq) goto loc_829CBC18;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CBC18;
	sub_82D4ECA8(ctx, base);
loc_829CBC18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x829CBC20;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CBC28"))) PPC_WEAK_FUNC(sub_829CBC28);
PPC_FUNC_IMPL(__imp__sub_829CBC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lfs f11,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lfs f10,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lfs f0,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// stfs f11,-40(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// stfs f10,-36(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,36(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-44(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f8,-40(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f5,-48(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f7,-36(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lvx128 v11,r0,r6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v10,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stfs f6,0(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stvewx v10,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f3,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,-40(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f2,-48(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f3,-36(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v8,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stvewx v8,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f9,-44(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f11,-48(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-36(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lvx128 v7,r0,r11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v6,v0,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// stfs f10,8(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stvewx v6,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CBD4C"))) PPC_WEAK_FUNC(sub_829CBD4C);
PPC_FUNC_IMPL(__imp__sub_829CBD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CBD50"))) PPC_WEAK_FUNC(sub_829CBD50);
PPC_FUNC_IMPL(__imp__sub_829CBD50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CBD58;
	sub_82CA2BEC(ctx, base);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r11,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r4,144
	ctx.r31.s64 = ctx.r4.s64 + 144;
	// lvx128 v12,r11,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,5
	ctx.r29.s64 = 5;
	// lvx128 v11,r11,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_829CBDCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bdnz 0x829cbdcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CBDCC;
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// lwz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// lwz r9,172(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// lwz r8,176(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// lwz r7,180(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// lwz r5,188(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// lhz r11,192(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 192);
	// sth r11,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r11.u16);
	// lhz r10,194(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 194);
	// sth r10,194(r3)
	PPC_STORE_U16(ctx.r3.u32 + 194, ctx.r10.u16);
	// lhz r9,196(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 196);
	// sth r9,196(r3)
	PPC_STORE_U16(ctx.r3.u32 + 196, ctx.r9.u16);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CBE34"))) PPC_WEAK_FUNC(sub_829CBE34);
PPC_FUNC_IMPL(__imp__sub_829CBE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CBE38"))) PPC_WEAK_FUNC(sub_829CBE38);
PPC_FUNC_IMPL(__imp__sub_829CBE38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x829CBE40;
	sub_82CA2BE4(ctx, base);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r30,48
	ctx.r30.s64 = 48;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r4,80
	ctx.r7.s64 = ctx.r4.s64 + 80;
	// lvx128 v13,r9,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r3,80
	ctx.r6.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r8,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r4,144
	ctx.r5.s64 = ctx.r4.s64 + 144;
	// lvx128 v12,r9,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// stvx128 v12,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// lvx128 v11,r9,r30
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stvx128 v11,r8,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r4,236
	ctx.r28.s64 = ctx.r4.s64 + 236;
	// lvx128 v10,r0,r7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r3,236
	ctx.r27.s64 = ctx.r3.s64 + 236;
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,5
	ctx.r29.s64 = 5;
	// lvx128 v9,r7,r10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r7,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r7,r30
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r6,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhz r6,144(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 144);
	// sth r6,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r6.u16);
	// lbz r9,146(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 146);
	// stb r9,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r9.u8);
	// lhz r8,148(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 148);
	// sth r8,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r8.u16);
	// lhz r7,150(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 150);
	// sth r7,150(r3)
	PPC_STORE_U16(ctx.r3.u32 + 150, ctx.r7.u16);
	// lvx128 v6,r0,r5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r5,r10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r5,r11
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,208(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r6,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r6.u32);
	// lwz r5,212(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// lwz r11,216(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lwz r10,224(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lwz r9,228(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// lwz r8,232(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r8,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r8.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_829CBF2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bdnz 0x829cbf2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CBF2C;
	// addi r11,r4,256
	ctx.r11.s64 = ctx.r4.s64 + 256;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CBF50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829cbf50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CBF50;
	// addi r11,r4,276
	ctx.r11.s64 = ctx.r4.s64 + 276;
	// addi r10,r3,276
	ctx.r10.s64 = ctx.r3.s64 + 276;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CBF74:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829cbf74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CBF74;
	// lhz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 296);
	// sth r11,296(r3)
	PPC_STORE_U16(ctx.r3.u32 + 296, ctx.r11.u16);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_829CBF94"))) PPC_WEAK_FUNC(sub_829CBF94);
PPC_FUNC_IMPL(__imp__sub_829CBF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CBF98"))) PPC_WEAK_FUNC(sub_829CBF98);
PPC_FUNC_IMPL(__imp__sub_829CBF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x829CBFA0;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7508
	ctx.lr = 0x829CBFA8;
	sub_82CA7508(ctx, base);
	// li r12,-224
	ctx.r12.s64 = -224;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-208
	ctx.r12.s64 = -208;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,32
	ctx.r28.s64 = 32;
	// lfs f28,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// li r27,48
	ctx.r27.s64 = 48;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r6,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r6.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-27468
	ctx.r29.s64 = ctx.r11.s64 + -27468;
	// lvx128 v127,r4,r28
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v126,r4,r27
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vaddfp128 v0,v127,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v126.f32)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,-384(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -384);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lfs f31,12(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x829cbc28
	ctx.lr = 0x829CC030;
	sub_829CBC28(ctx, base);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lfs f29,18768(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18768);
	ctx.f29.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvlx v9,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// vxor v7,v0,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v5,v0,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// vxor v3,v0,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_setzero_si128());
	// vmulfp128 v4,v6,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// vxor v2,v0,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vxor v1,v0,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_setzero_si128());
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stvx128 v2,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lvx128 v31,r0,r4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stvx128 v7,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,292(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f31,312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// bl 0x82d55a80
	ctx.lr = 0x829CC10C;
	sub_82D55A80(ctx, base);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82d55a80
	ctx.lr = 0x829CC11C;
	sub_82D55A80(ctx, base);
	// vsubfp128 v5,v126,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v127.f32)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// vmsum3fp128 v30,v5,v5
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// stvx128 v30,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v29,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v28,v29,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// stvewx v28,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-25888(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -25888);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829cc17c
	if (!ctx.cr6.gt) goto loc_829CC17C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v5,v5,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
loc_829CC17C:
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v13,v5,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x829cc1ac
	if (!ctx.cr6.gt) goto loc_829CC1AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_829CC1AC:
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r30,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v13,v5,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x829cc1d8
	if (!ctx.cr6.gt) goto loc_829CC1D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_829CC1D8:
	// lvx128 v0,r30,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v13,v5,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x829cc1fc
	if (!ctx.cr6.gt) goto loc_829CC1FC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_829CC1FC:
	// rlwinm r29,r10,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r29,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v5,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x829cc230
	if (!ctx.cr6.lt) goto loc_829CC230;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v5,v5,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
loc_829CC230:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// vor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// mulhwu r7,r9,r11
	ctx.r7.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r11.u32)) >> 32;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// mulhwu r5,r8,r6
	ctx.r5.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r26,r30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r25,r10,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// vmsum3fp128 v12,v13,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r25,r30
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// vmsum3fp128 v10,v11,v5
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,84
	ctx.r21.s64 = ctx.r1.s64 + 84;
	// addi r20,r1,84
	ctx.r20.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v5,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp v6,v13,v7
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v4,v6,v6
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// stvx128 v4,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stvewx v10,r0,r23
	ea = (ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v3,0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v2,v3,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vmulfp128 v1,v5,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)));
	// lvlx v30,0,r21
	temp.u32 = ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v31,r0,r9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v25,v31,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0xFF));
	// vsubfp v28,v11,v1
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v1.f32)));
	// vspltw v23,v29,0
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// vmulfp128 v4,v6,v25
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v25.f32)));
	// vspltw v22,v30,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// vmsum3fp128 v27,v28,v28
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v28.f32), 0xEF));
	// vmaddfp128 v0,v4,v23,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v23.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v27,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v26,r0,r8
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v24,v26,0
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0xFF));
	// vmulfp128 v3,v28,v24
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v0,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp128 v127,v3,v22,v127
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v22.f32)), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v127,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x829cbc28
	ctx.lr = 0x829CC368;
	sub_829CBC28(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x829cbc28
	ctx.lr = 0x829CC378;
	sub_829CBC28(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829cbc28
	ctx.lr = 0x829CC388;
	sub_829CBC28(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829cbc28
	ctx.lr = 0x829CC398;
	sub_829CBC28(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v21,r0,r9
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vsubfp v20,v21,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r23,r1,192
	ctx.r23.s64 = ctx.r1.s64 + 192;
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// addi r24,r1,84
	ctx.r24.s64 = ctx.r1.s64 + 84;
	// addi r22,r1,112
	ctx.r22.s64 = ctx.r1.s64 + 112;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r20,r1,84
	ctx.r20.s64 = ctx.r1.s64 + 84;
	// addi r21,r5,16912
	ctx.r21.s64 = ctx.r5.s64 + 16912;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r16,r4,-5520
	ctx.r16.s64 = ctx.r4.s64 + -5520;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v19,v20,v20
	_mm_store_ps(ctx.v19.f32, _mm_dp_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v20.f32), 0xEF));
	// addi r18,r1,84
	ctx.r18.s64 = ctx.r1.s64 + 84;
	// lvx128 v18,r0,r7
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r17,r1,84
	ctx.r17.s64 = ctx.r1.s64 + 84;
	// vsubfp v17,v18,v0
	_mm_store_ps(ctx.v17.f32, _mm_sub_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r15,r1,336
	ctx.r15.s64 = ctx.r1.s64 + 336;
	// addi r14,r1,336
	ctx.r14.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// vmsum3fp128 v16,v17,v17
	_mm_store_ps(ctx.v16.f32, _mm_dp_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v17.f32), 0xEF));
	// stvx128 v16,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v15,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v14,v15,0
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v15.u32), 0xFF));
	// stvewx v14,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v14.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v62,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v13,r0,r23
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v0,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lvlx128 v60,r0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v61,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v13,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r21
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v61,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v61.f32), 0xEF));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v8,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fadds f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// vrefp128 v0,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v59.f32)));
	// vor128 v13,v59,v59
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vnmsubfp v9,v0,v13,v12
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v6,v9,v0,v0
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// fmuls f9,f12,f30
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fdivs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f28.f64));
	// vmulfp128 v2,v7,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// stvewx v2,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v30,r0,r16
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f8,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v1,0,r18
	temp.u32 = ctx.r18.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v27,v1,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// lvlx v31,0,r17
	temp.u32 = ctx.r17.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v25,v31,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0xFF));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// vmulfp128 v24,v4,v27
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v27.f32)));
	// stfs f7,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vmulfp128 v23,v3,v25
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v25.f32)));
	// lvlx v29,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v28,v29,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// vmulfp128 v26,v5,v28
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v28.f32)));
	// stvx128 v26,r29,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v24,r26,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v23,r25,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d55a80
	ctx.lr = 0x829CC524;
	sub_82D55A80(ctx, base);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,860(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// bl 0x82d55a80
	ctx.lr = 0x829CC534;
	sub_82D55A80(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// li r0,-224
	ctx.r0.s64 = -224;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-208
	ctx.r0.s64 = -208;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7554
	ctx.lr = 0x829CC550;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CC554"))) PPC_WEAK_FUNC(sub_829CC554);
PPC_FUNC_IMPL(__imp__sub_829CC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CC558"))) PPC_WEAK_FUNC(sub_829CC558);
PPC_FUNC_IMPL(__imp__sub_829CC558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x829CC560;
	sub_82CA2BD8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r26,r3,16
	ctx.r26.s64 = ctx.r3.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cc6a8
	if (ctx.cr6.eq) goto loc_829CC6A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,17024
	ctx.r10.s64 = ctx.r11.s64 + 17024;
	// li r30,32
	ctx.r30.s64 = 32;
	// lvx128 v10,r0,r10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_829CC58C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r24,r1,-80
	ctx.r24.s64 = ctx.r1.s64 + -80;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r29,r9,16
	ctx.r29.s64 = ctx.r9.s64 + 16;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lvx128 v12,r0,r9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vpermwi128 v11,v12,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// vpermwi128 v9,v12,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r31,r8,16
	ctx.r31.s64 = ctx.r8.s64 + 16;
	// lvx128 v8,r0,r10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v7,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vpermwi128 v6,v0,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v5,v0,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmaddfp v4,v13,v13,v10
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v3,v6,v11
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v2,v5,v9
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v1,v12,v4
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw v31,v7,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v30,v2,v3
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v29,v31,v0,v1
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v28,v30,v13,v29
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v29.f32)));
	// vaddfp v27,v28,v28
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v28.f32)));
	// vaddfp v26,v8,v27
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v27.f32)));
	// stvx128 v26,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v25,v0,135
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v24,v13,99
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmsum3fp128 v23,v0,v13
	_mm_store_ps(ctx.v23.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v22,v13,135
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// vpermwi128 v21,v0,99
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v20,v25,v24
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v20.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v24.f32)));
	// vspltw v11,v13,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v19,v21,v22
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v22.f32)));
	// stvewx v23,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v23.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// vsubfp v18,v19,v20
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v20.f32)));
	// vmaddfp v17,v13,v12,v18
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v18.f32)));
	// vmaddfp v16,v0,v11,v17
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v17.f32)));
	// stvx128 v16,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f11,28(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lvx128 v15,r9,r30
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r30
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v63,v14,v15
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v15.f32)));
	// stvx128 v63,r8,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x829cc58c
	if (!ctx.cr6.eq) goto loc_829CC58C;
loc_829CC6A8:
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_829CC6AC"))) PPC_WEAK_FUNC(sub_829CC6AC);
PPC_FUNC_IMPL(__imp__sub_829CC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CC6B0"))) PPC_WEAK_FUNC(sub_829CC6B0);
PPC_FUNC_IMPL(__imp__sub_829CC6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x829CC6B8;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// ld r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r22,16(r18)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x829ce1f8
	ctx.lr = 0x829CC6F8;
	sub_829CE1F8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-27456
	ctx.r8.s64 = ctx.r10.s64 + -27456;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f31,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lfs f30,-12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x829ce150
	ctx.lr = 0x829CC784;
	sub_829CE150(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvlx v8,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvlx v7,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vrlimi128 v7,v9,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// stvx128 v7,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x829ce150
	ctx.lr = 0x829CC800;
	sub_829CE150(ctx, base);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r19,152(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r24,148(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r17,136(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r21,12
	ctx.r21.s64 = 12;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x829cc930
	if (ctx.cr6.eq) goto loc_829CC930;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,16
	ctx.r25.s64 = 16;
loc_829CC838:
	// lwzx r30,r11,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x829cc910
	if (ctx.cr6.eq) goto loc_829CC910;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829cc85c
	if (ctx.cr6.eq) goto loc_829CC85C;
	// subf r11,r24,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r24.s64;
	// divw r10,r11,r21
	ctx.r10.s32 = ctx.r11.s32 / ctx.r21.s32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829cc860
	if (ctx.cr6.lt) goto loc_829CC860;
loc_829CC85C:
	// twi 31,r0,22
loc_829CC860:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r31,r24
	ctx.r29.u64 = ctx.r31.u64 + ctx.r24.u64;
	// bl 0x82b6f388
	ctx.lr = 0x829CC87C;
	sub_82B6F388(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r3,r25
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r24
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, temp.u32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// beq cr6,0x829cc8c8
	if (ctx.cr6.eq) goto loc_829CC8C8;
	// subf r11,r23,r17
	ctx.r11.s64 = ctx.r17.s64 - ctx.r23.s64;
	// divw r10,r11,r21
	ctx.r10.s32 = ctx.r11.s32 / ctx.r21.s32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829cc8cc
	if (ctx.cr6.lt) goto loc_829CC8CC;
loc_829CC8C8:
	// twi 31,r0,22
loc_829CC8CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// add r30,r31,r23
	ctx.r30.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x82b6f388
	ctx.lr = 0x829CC8DC;
	sub_82B6F388(ctx, base);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfsx f13,r31,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, temp.u32);
loc_829CC910:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829cc838
	if (!ctx.cr6.eq) goto loc_829CC838;
loc_829CC930:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x829ccbb8
	if (ctx.cr6.eq) goto loc_829CCBB8;
	// stfs f30,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r24,4
	ctx.r8.s64 = ctx.r24.s64 + 4;
	// subf r31,r24,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r24.s64;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r28,36
	ctx.r28.s64 = 36;
	// li r29,-4
	ctx.r29.s64 = -4;
loc_829CC96C:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829cc9b0
	if (ctx.cr6.eq) goto loc_829CC9B0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829cc998
	if (ctx.cr6.eq) goto loc_829CC998;
	// subf r10,r24,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r24.s64;
	// divw r9,r10,r21
	ctx.r9.s32 = ctx.r10.s32 / ctx.r21.s32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829cc99c
	if (ctx.cr6.lt) goto loc_829CC99C;
loc_829CC998:
	// twi 31,r0,22
loc_829CC99C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x829cca20
	goto loc_829CCA20;
loc_829CC9B0:
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r27,r1,84
	ctx.r27.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// addi r26,r1,256
	ctx.r26.s64 = ctx.r1.s64 + 256;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvlx v11,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v12,v0,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// stvx128 v12,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v12,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_829CCA20:
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lvlx v12,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// beq cr6,0x829cca60
	if (ctx.cr6.eq) goto loc_829CCA60;
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r28
	ctx.r11.s32 = ctx.r9.s32 / ctx.r28.s32;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829cca64
	if (ctx.cr6.lt) goto loc_829CCA64;
loc_829CCA60:
	// twi 31,r0,22
loc_829CCA64:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829cca80
	if (ctx.cr6.eq) goto loc_829CCA80;
	// subf r11,r24,r19
	ctx.r11.s64 = ctx.r19.s64 - ctx.r24.s64;
	// divw r9,r11,r21
	ctx.r9.s32 = ctx.r11.s32 / ctx.r21.s32;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829cca84
	if (ctx.cr6.lt) goto loc_829CCA84;
loc_829CCA80:
	// twi 31,r0,22
loc_829CCA84:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r8,r29
	temp.u32 = ctx.r8.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v10,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vor v0,v12,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// beq cr6,0x829ccac0
	if (ctx.cr6.eq) goto loc_829CCAC0;
	// subf r11,r23,r17
	ctx.r11.s64 = ctx.r17.s64 - ctx.r23.s64;
	// divw r9,r11,r21
	ctx.r9.s32 = ctx.r11.s32 / ctx.r21.s32;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829ccac4
	if (ctx.cr6.lt) goto loc_829CCAC4;
loc_829CCAC0:
	// twi 31,r0,22
loc_829CCAC4:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
	// lvlx v10,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// addi r27,r1,304
	ctx.r27.s64 = ctx.r1.s64 + 304;
	// addi r16,r1,320
	ctx.r16.s64 = ctx.r1.s64 + 320;
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vrlimi128 v10,v9,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// addi r15,r1,384
	ctx.r15.s64 = ctx.r1.s64 + 384;
	// addi r14,r1,352
	ctx.r14.s64 = ctx.r1.s64 + 352;
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r1,272
	ctx.r26.s64 = ctx.r1.s64 + 272;
	// stvx128 v0,r0,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vrlimi128 v11,v10,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stvx128 v13,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f11,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v11,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f6.f64 = double(temp.f32);
	// stvx128 v11,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stvx128 v13,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f10,188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CCB88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ccb88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CCB88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,36
	ctx.r4.s64 = ctx.r4.s64 + 36;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x829cc96c
	if (!ctx.cr6.eq) goto loc_829CC96C;
loc_829CCBB8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x829ccbc8
	if (ctx.cr6.eq) goto loc_829CCBC8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8221be68
	ctx.lr = 0x829CCBC8;
	sub_8221BE68(ctx, base);
loc_829CCBC8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829ccbd8
	if (ctx.cr6.eq) goto loc_829CCBD8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8221be68
	ctx.lr = 0x829CCBD8;
	sub_8221BE68(ctx, base);
loc_829CCBD8:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CCBE8"))) PPC_WEAK_FUNC(sub_829CCBE8);
PPC_FUNC_IMPL(__imp__sub_829CCBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CCBF0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CCC08;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x829ccc58
	if (ctx.cr6.eq) goto loc_829CCC58;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// b 0x829ccc5c
	goto loc_829CCC5C;
loc_829CCC58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_829CCC5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8273a328
	ctx.lr = 0x829CCC64;
	sub_8273A328(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x829cb770
	ctx.lr = 0x829CCC70;
	sub_829CB770(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ccccc
	if (ctx.cr6.eq) goto loc_829CCCCC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
loc_829CCC90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829ccc90
	if (!ctx.cr6.eq) goto loc_829CCC90;
loc_829CCCCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CCCD4"))) PPC_WEAK_FUNC(sub_829CCCD4);
PPC_FUNC_IMPL(__imp__sub_829CCCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CCCD8"))) PPC_WEAK_FUNC(sub_829CCCD8);
PPC_FUNC_IMPL(__imp__sub_829CCCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x829CCCE0;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// addi r12,r1,-176
	ctx.r12.s64 = ctx.r1.s64 + -176;
	// bl 0x82fffefc
	ctx.lr = 0x829CCCF0;
	sub_82FFFEFC(ctx, base);
	// stwu r1,-2752(r1)
	ea = -2752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r28.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r17,2772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2772, ctx.r17.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r19,4(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x829cc6b0
	ctx.lr = 0x829CCD48;
	sub_829CC6B0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r16,0(r13)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r30,r11,-27468
	ctx.r30.s64 = ctx.r11.s64 + -27468;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r4,r7,16976
	ctx.r4.s64 = ctx.r7.s64 + 16976;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_setzero_si128());
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v125,v0,0
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v126,r0,r4
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CCDA8;
	sub_82D4EC28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r21,-32
	ctx.r21.s64 = -32;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// li r24,-16
	ctx.r24.s64 = -16;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x829ccde8
	if (!ctx.cr6.gt) goto loc_829CCDE8;
	// addi r11,r6,32
	ctx.r11.s64 = ctx.r6.s64 + 32;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_829CCDD0:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829ccdd0
	if (!ctx.cr0.eq) goto loc_829CCDD0;
loc_829CCDE8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d5ecb0
	ctx.lr = 0x829CCDF8;
	sub_82D5ECB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CCE1C;
	sub_82D4EC28(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r15,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r15.u32);
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// ble cr6,0x829cce54
	if (!ctx.cr6.gt) goto loc_829CCE54;
	// addi r11,r15,32
	ctx.r11.s64 = ctx.r15.s64 + 32;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_829CCE3C:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829cce3c
	if (!ctx.cr0.eq) goto loc_829CCE3C;
loc_829CCE54:
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x829cc558
	ctx.lr = 0x829CCE64;
	sub_829CC558(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CCE88;
	sub_82D4EC28(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r18,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r18.u32);
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// ble cr6,0x829ccec0
	if (!ctx.cr6.gt) goto loc_829CCEC0;
	// addi r11,r18,32
	ctx.r11.s64 = ctx.r18.s64 + 32;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_829CCEA8:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829ccea8
	if (!ctx.cr0.eq) goto loc_829CCEA8;
loc_829CCEC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// li r20,36
	ctx.r20.s64 = 36;
	// li r14,16
	ctx.r14.s64 = 16;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r22,4
	ctx.r22.s64 = 4;
	// li r23,8
	ctx.r23.s64 = 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ccfb0
	if (ctx.cr6.eq) goto loc_829CCFB0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_829CCEFC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x829ccf28
	if (ctx.cr6.eq) goto loc_829CCF28;
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r9,r8,r20
	ctx.r9.s32 = ctx.r8.s32 / ctx.r20.s32;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829ccf2c
	if (ctx.cr6.lt) goto loc_829CCF2C;
loc_829CCF28:
	// twi 31,r0,22
loc_829CCF2C:
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lvx128 v13,r5,r14
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r14.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stvx128 v13,r8,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// lvx128 v12,r5,r3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvlx v9,r9,r23
	temp.u32 = ctx.r9.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lvlx v8,r11,r23
	temp.u32 = ctx.r11.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r6,36
	ctx.r6.s64 = ctx.r6.s64 + 36;
	// lvlx v7,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lvlx v6,r9,r22
	temp.u32 = ctx.r9.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r11,r22
	temp.u32 = ctx.r11.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v10,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v7,v6,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// vrlimi128 v9,v5,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// vrlimi128 v8,v4,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// vrlimi128 v7,v9,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// vrlimi128 v11,v8,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vmaddfp v3,v0,v11,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x829ccefc
	if (!ctx.cr6.eq) goto loc_829CCEFC;
loc_829CCFB0:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r30,24(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CCFD4;
	sub_82D4EC28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
	// stw r30,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r30.u32);
	// ble cr6,0x829cd00c
	if (!ctx.cr6.gt) goto loc_829CD00C;
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_829CCFF4:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829ccff4
	if (!ctx.cr0.eq) goto loc_829CCFF4;
loc_829CD00C:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CD02C;
	sub_82D4EC28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// ble cr6,0x829cd064
	if (!ctx.cr6.gt) goto loc_829CD064;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_829CD04C:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829cd04c
	if (!ctx.cr0.eq) goto loc_829CD04C;
loc_829CD064:
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CD084;
	sub_82D4EC28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// ble cr6,0x829cd0bc
	if (!ctx.cr6.gt) goto loc_829CD0BC;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_829CD0A4:
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v127,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x829cd0a4
	if (!ctx.cr0.eq) goto loc_829CD0A4;
loc_829CD0BC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82d5ecb0
	ctx.lr = 0x829CD0D0;
	sub_82D5ECB0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x829cc558
	ctx.lr = 0x829CD0E0;
	sub_829CC558(ctx, base);
	// rlwinm r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cd110
	if (!ctx.cr6.eq) goto loc_829CD110;
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r10,r30,2
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r11,r30,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x7FFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x829CD110;
	sub_82D4ECA8(ctx, base);
loc_829CD110:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d5ecc8
	ctx.lr = 0x829CD128;
	sub_82D5ECC8(ctx, base);
	// rlwinm r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cd158
	if (!ctx.cr6.eq) goto loc_829CD158;
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r10,r29,2
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r11,r29,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x7FFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82d4eca8
	ctx.lr = 0x829CD158;
	sub_82D4ECA8(ctx, base);
loc_829CD158:
	// addi r29,r17,24
	ctx.r29.s64 = ctx.r17.s64 + 24;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ccbe8
	ctx.lr = 0x829CD16C;
	sub_829CCBE8(ctx, base);
	// addi r27,r17,32
	ctx.r27.s64 = ctx.r17.s64 + 32;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829ccbe8
	ctx.lr = 0x829CD180;
	sub_829CCBE8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f3f0
	ctx.lr = 0x829CD188;
	sub_8221F3F0(ctx, base);
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829cd7c8
	if (!ctx.cr6.eq) goto loc_829CD7C8;
	// lwz r11,28060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cd1b0
	if (ctx.cr6.eq) goto loc_829CD1B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CD1B0:
	// bl 0x82cbbb58
	ctx.lr = 0x829CD1B4;
	sub_82CBBB58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CD1B8:
	// addi r31,r17,8
	ctx.r31.s64 = ctx.r17.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273a2a8
	ctx.lr = 0x829CD1C4;
	sub_8273A2A8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f3f0
	ctx.lr = 0x829CD1CC;
	sub_8221F3F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x829cd7d8
	if (!ctx.cr6.eq) goto loc_829CD7D8;
	// lwz r11,28060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cd1f0
	if (ctx.cr6.eq) goto loc_829CD1F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829CD1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CD1F0:
	// bl 0x82cbbb58
	ctx.lr = 0x829CD1F4;
	sub_82CBBB58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CD1F8:
	// addi r3,r17,16
	ctx.r3.s64 = ctx.r17.s64 + 16;
	// bl 0x8273a2a8
	ctx.lr = 0x829CD200;
	sub_8273A2A8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,4
	ctx.r28.s64 = 4;
	// li r5,58
	ctx.r5.s64 = 58;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwzx r3,r28,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// lwz r18,0(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD230;
	sub_82D4EC28(ctx, base);
	// li r30,56
	ctx.r30.s64 = 56;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r30.u16);
	// bl 0x82d608f8
	ctx.lr = 0x829CD240;
	sub_82D608F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwzx r3,r28,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// li r5,58
	ctx.r5.s64 = 58;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r18,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r18.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r29,16(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD280;
	sub_82D4EC28(ctx, base);
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r30.u16);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82d608f8
	ctx.lr = 0x829CD28C;
	sub_82D608F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r18,92(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwzx r3,r28,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stw r26,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r26.u32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r30,r1,256
	ctx.r30.s64 = ctx.r1.s64 + 256;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,22
	ctx.r5.s64 = 22;
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stw r27,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r27.u32);
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r31,16(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// rlwinm r4,r31,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD31C;
	sub_82D4EC28(ctx, base);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lvx128 v118,r0,r10
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v117,r0,r9
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v116,r0,r8
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v115,r0,r7
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x829cd36c
	if (!ctx.cr6.gt) goto loc_829CD36C;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_829CD350:
	// stvx128 v117,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v115,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v116,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v118,r11,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x829cd350
	if (!ctx.cr0.eq) goto loc_829CD350;
loc_829CD36C:
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829cd6e0
	if (ctx.cr6.eq) goto loc_829CD6E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r17,288(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// lwz r15,176(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r11,-5520
	ctx.r10.s64 = ctx.r11.s64 + -5520;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// lis r25,-32246
	ctx.r25.s64 = -2113273856;
	// lvx128 v122,r0,r10
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v121,v122,v122
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v120,v122,v122
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v119,v122,v122
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v127,v122,v122
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v126,v122,v122
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v125,v122,v122
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v124,v122,v122
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v123,v122,v122
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
loc_829CD3C0:
	// lwz r9,20(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cd3f4
	if (ctx.cr6.eq) goto loc_829CD3F4;
	// lwz r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
loc_829CD3D4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x829cd7e4
	if (ctx.cr6.eq) goto loc_829CD7E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829cd3d4
	if (!ctx.cr6.eq) goto loc_829CD3D4;
loc_829CD3F4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_829CD3F8:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cd434
	if (ctx.cr6.eq) goto loc_829CD434;
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
loc_829CD414:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x829cd7ec
	if (ctx.cr6.eq) goto loc_829CD7EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829cd414
	if (!ctx.cr6.eq) goto loc_829CD414;
loc_829CD434:
	// li r29,0
	ctx.r29.s64 = 0;
loc_829CD438:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// bl 0x82d54d08
	ctx.lr = 0x829CD450;
	sub_82D54D08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82d559a8
	ctx.lr = 0x829CD45C;
	sub_82D559A8(ctx, base);
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stvx128 v122,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d54d08
	ctx.lr = 0x829CD470;
	sub_82D54D08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d559a8
	ctx.lr = 0x829CD47C;
	sub_82D559A8(ctx, base);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// stvx128 v121,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d54d08
	ctx.lr = 0x829CD490;
	sub_82D54D08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82d559a8
	ctx.lr = 0x829CD49C;
	sub_82D559A8(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,2112
	ctx.r4.s64 = ctx.r1.s64 + 2112;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82d55a80
	ctx.lr = 0x829CD4AC;
	sub_82D55A80(ctx, base);
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// lfs f1,-25888(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,624
	ctx.r9.s64 = ctx.r1.s64 + 624;
	// lvx128 v12,r0,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r1,1264
	ctx.r27.s64 = ctx.r1.s64 + 1264;
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v120,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d552d0
	ctx.lr = 0x829CD500;
	sub_82D552D0(ctx, base);
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82d55a80
	ctx.lr = 0x829CD510;
	sub_82D55A80(ctx, base);
	// addi r8,r1,1456
	ctx.r8.s64 = ctx.r1.s64 + 1456;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stvx128 v119,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x829cd538
	if (ctx.cr6.eq) goto loc_829CD538;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r20
	ctx.r8.s32 = ctx.r9.s32 / ctx.r20.s32;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x829cd53c
	if (ctx.cr6.lt) goto loc_829CD53C;
loc_829CD538:
	// twi 31,r0,22
loc_829CD53C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// lvlx v11,r11,r22
	temp.u32 = ctx.r11.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// lvlx v8,r11,r23
	temp.u32 = ctx.r11.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v11,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v8,v13,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v7,v0,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_setzero_si128());
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,1408
	ctx.r5.s64 = ctx.r1.s64 + 1408;
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// vrlimi128 v9,v8,3,2
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f12,404(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// bl 0x82d55a80
	ctx.lr = 0x829CD5E4;
	sub_82D55A80(ctx, base);
	// addi r7,r1,1328
	ctx.r7.s64 = ctx.r1.s64 + 1328;
	// addi r5,r1,1280
	ctx.r5.s64 = ctx.r1.s64 + 1280;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// stvx128 v126,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d55a80
	ctx.lr = 0x829CD5FC;
	sub_82D55A80(ctx, base);
	// addi r6,r1,1392
	ctx.r6.s64 = ctx.r1.s64 + 1392;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stvx128 v125,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d54d08
	ctx.lr = 0x829CD610;
	sub_82D54D08(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// bl 0x82d559a8
	ctx.lr = 0x829CD61C;
	sub_82D559A8(ctx, base);
	// addi r5,r1,1344
	ctx.r5.s64 = ctx.r1.s64 + 1344;
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// addi r3,r1,1472
	ctx.r3.s64 = ctx.r1.s64 + 1472;
	// bl 0x82d55a80
	ctx.lr = 0x829CD62C;
	sub_82D55A80(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lfs f1,-25888(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// lvx128 v6,r0,r5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// lvx128 v5,r0,r4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// lvx128 v4,r0,r9
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,1520
	ctx.r8.s64 = ctx.r1.s64 + 1520;
	// lvx128 v3,r0,r7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stvx128 v5,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d552d0
	ctx.lr = 0x829CD680;
	sub_82D552D0(ctx, base);
	// addi r5,r1,1472
	ctx.r5.s64 = ctx.r1.s64 + 1472;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82d55a80
	ctx.lr = 0x829CD690;
	sub_82D55A80(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// stvx128 v123,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// lvx128 v2,r0,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stvx128 v2,r30,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r30,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r10
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v30,r30,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// lwz r8,16(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x829cd3c0
	if (!ctx.cr6.eq) goto loc_829CD3C0;
loc_829CD6E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8246c600
	ctx.lr = 0x829CD6E8;
	sub_8246C600(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwzx r3,r11,r16
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r22,16(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82d4ec28
	ctx.lr = 0x829CD708;
	sub_82D4EC28(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// ble cr6,0x829cd73c
	if (!ctx.cr6.gt) goto loc_829CD73C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_829CD728:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x829cd728
	if (!ctx.cr0.eq) goto loc_829CD728;
loc_829CD73C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r15,16(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r3,r11,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// rlwinm r4,r15,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82d4ec28
	ctx.lr = 0x829CD75C;
	sub_82D4EC28(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x829cd78c
	if (!ctx.cr6.gt) goto loc_829CD78C;
	// addi r11,r16,32
	ctx.r11.s64 = ctx.r16.s64 + 32;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_829CD770:
	// stvx128 v117,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stvx128 v115,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v116,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v118,r11,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x829cd770
	if (!ctx.cr0.eq) goto loc_829CD770;
loc_829CD78C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x829cd900
	if (ctx.cr6.eq) goto loc_829CD900;
	// lwz r28,368(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r19,88(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// subf r26,r28,r16
	ctx.r26.s64 = ctx.r16.s64 - ctx.r28.s64;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r23,512
	ctx.r23.s64 = 512;
loc_829CD7B0:
	// lwz r11,32(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x829cd7f4
	if (!ctx.cr6.lt) goto loc_829CD7F4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x829cd800
	goto loc_829CD800;
loc_829CD7C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829cd1b8
	goto loc_829CD1B8;
loc_829CD7D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x829cd1f8
	goto loc_829CD1F8;
loc_829CD7E4:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x829cd3f8
	goto loc_829CD3F8;
loc_829CD7EC:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x829cd438
	goto loc_829CD438;
loc_829CD7F4:
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r9,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_829CD800:
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82d7aaa8
	ctx.lr = 0x829CD808;
	sub_82D7AAA8(ctx, base);
	// addi r4,r1,2176
	ctx.r4.s64 = ctx.r1.s64 + 2176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d7bdc0
	ctx.lr = 0x829CD814;
	sub_82D7BDC0(ctx, base);
	// lwz r30,2180(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2180);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x829cd8f0
	if (!ctx.cr6.eq) goto loc_829CD8F0;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r21,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD838;
	sub_82D4EC28(ctx, base);
	// sth r25,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r25.u16);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82daac88
	ctx.lr = 0x829CD84C;
	sub_82DAAC88(ctx, base);
	// add r6,r26,r28
	ctx.r6.u64 = ctx.r26.u64 + ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829cbf98
	ctx.lr = 0x829CD860;
	sub_829CBF98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cd8f0
	if (ctx.cr6.eq) goto loc_829CD8F0;
	// stw r31,2180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2180, ctx.r31.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwzx r3,r21,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD87C;
	sub_82D4EC28(ctx, base);
	// sth r23,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r23.u16);
	// addi r4,r1,2176
	ctx.r4.s64 = ctx.r1.s64 + 2176;
	// bl 0x82d7b138
	ctx.lr = 0x829CD888;
	sub_82D7B138(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stwx r10,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r10.u32);
	// bl 0x823660d0
	ctx.lr = 0x829CD8B4;
	sub_823660D0(ctx, base);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829cd8f0
	if (ctx.cr6.eq) goto loc_829CD8F0;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829cd8f0
	if (!ctx.cr6.eq) goto loc_829CD8F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CD8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CD8F0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x829cd7b0
	if (!ctx.cr0.eq) goto loc_829CD7B0;
loc_829CD900:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r31,r22,-1
	ctx.r31.s64 = ctx.r22.s64 + -1;
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r20
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CD918;
	sub_82D4EC28(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// ble cr6,0x829cd948
	if (!ctx.cr6.gt) goto loc_829CD948;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_829CD934:
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x829cd934
	if (!ctx.cr0.eq) goto loc_829CD934;
loc_829CD948:
	// li r27,48
	ctx.r27.s64 = 48;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x829cde18
	if (ctx.cr6.eq) goto loc_829CDE18;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// li r17,320
	ctx.r17.s64 = 320;
	// li r18,224
	ctx.r18.s64 = 224;
	// li r19,44
	ctx.r19.s64 = 44;
loc_829CD970:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r9,r20,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x829cde04
	if (ctx.cr0.lt) goto loc_829CDE04;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cde04
	if (ctx.cr6.eq) goto loc_829CDE04;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825cb448
	ctx.lr = 0x829CD9BC;
	sub_825CB448(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cd9cc
	if (!ctx.cr6.eq) goto loc_829CD9CC;
	// twi 31,r0,22
loc_829CD9CC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cd9e0
	if (!ctx.cr6.eq) goto loc_829CD9E0;
	// twi 31,r0,22
loc_829CD9E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r24,16(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825cb448
	ctx.lr = 0x829CD9F4;
	sub_825CB448(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cda04
	if (!ctx.cr6.eq) goto loc_829CDA04;
	// twi 31,r0,22
loc_829CDA04:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cda18
	if (!ctx.cr6.eq) goto loc_829CDA18;
	// twi 31,r0,22
loc_829CDA18:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r25,16(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CDA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhzx r7,r8,r23
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r23.u32);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// beq cr6,0x829cdbfc
	if (ctx.cr6.eq) goto loc_829CDBFC;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x829cde04
	if (!ctx.cr6.eq) goto loc_829CDE04;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,320
	ctx.r4.s64 = 320;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CDA6C;
	sub_82D4EC28(ctx, base);
	// sth r17,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r17.u16);
	// bl 0x82d7df78
	ctx.lr = 0x829CDA74;
	sub_82D7DF78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829cbe38
	ctx.lr = 0x829CDA88;
	sub_829CBE38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d7dbb0
	ctx.lr = 0x829CDA90;
	sub_82D7DBB0(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cdaa8
	if (ctx.cr6.eq) goto loc_829CDAA8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
loc_829CDAA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d7daf0
	ctx.lr = 0x829CDAB0;
	sub_82D7DAF0(ctx, base);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cdac8
	if (ctx.cr6.eq) goto loc_829CDAC8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
loc_829CDAC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d7db98
	ctx.lr = 0x829CDAD0;
	sub_82D7DB98(ctx, base);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cdae8
	if (ctx.cr6.eq) goto loc_829CDAE8;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
loc_829CDAE8:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d50058
	ctx.lr = 0x829CDAF8;
	sub_82D50058(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// bl 0x82d559a8
	ctx.lr = 0x829CDB04;
	sub_82D559A8(ctx, base);
	// addi r5,r1,1728
	ctx.r5.s64 = ctx.r1.s64 + 1728;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82d55a80
	ctx.lr = 0x829CDB14;
	sub_82D55A80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82d55920
	ctx.lr = 0x829CDB20;
	sub_82D55920(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,1168
	ctx.r4.s64 = ctx.r1.s64 + 1168;
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// bl 0x82d54de0
	ctx.lr = 0x829CDB30;
	sub_82D54DE0(ctx, base);
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d51008
	ctx.lr = 0x829CDB4C;
	sub_82D51008(ctx, base);
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d50058
	ctx.lr = 0x829CDB90;
	sub_82D50058(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// bl 0x82d559a8
	ctx.lr = 0x829CDB9C;
	sub_82D559A8(ctx, base);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,1856
	ctx.r5.s64 = ctx.r1.s64 + 1856;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82d55a80
	ctx.lr = 0x829CDBB0;
	sub_82D55A80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x82d55920
	ctx.lr = 0x829CDBBC;
	sub_82D55920(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,105
	ctx.r3.s64 = ctx.r1.s64 + 105;
	// bl 0x82d54de0
	ctx.lr = 0x829CDBCC;
	sub_82D54DE0(ctx, base);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d51008
	ctx.lr = 0x829CDBE8;
	sub_82D51008(ctx, base);
	// addi r9,r1,832
	ctx.r9.s64 = ctx.r1.s64 + 832;
	// addi r8,r1,848
	ctx.r8.s64 = ctx.r1.s64 + 848;
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// b 0x829cdd5c
	goto loc_829CDD5C;
loc_829CDBFC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,224
	ctx.r4.s64 = 224;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CDC14;
	sub_82D4EC28(ctx, base);
	// sth r18,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r18.u16);
	// bl 0x82d85118
	ctx.lr = 0x829CDC1C;
	sub_82D85118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829cbd50
	ctx.lr = 0x829CDC30;
	sub_829CBD50(ctx, base);
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cdc4c
	if (ctx.cr6.eq) goto loc_829CDC4C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
loc_829CDC4C:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d50058
	ctx.lr = 0x829CDC5C;
	sub_82D50058(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82d559a8
	ctx.lr = 0x829CDC68;
	sub_82D559A8(ctx, base);
	// addi r5,r1,1664
	ctx.r5.s64 = ctx.r1.s64 + 1664;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82d55a80
	ctx.lr = 0x829CDC78;
	sub_82D55A80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// bl 0x82d55920
	ctx.lr = 0x829CDC84;
	sub_82D55920(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d54de0
	ctx.lr = 0x829CDC94;
	sub_82D54DE0(ctx, base);
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d51008
	ctx.lr = 0x829CDCB0;
	sub_82D51008(ctx, base);
	// addi r9,r1,960
	ctx.r9.s64 = ctx.r1.s64 + 960;
	// addi r8,r1,976
	ctx.r8.s64 = ctx.r1.s64 + 976;
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,1008
	ctx.r6.s64 = ctx.r1.s64 + 1008;
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d50058
	ctx.lr = 0x829CDCF4;
	sub_82D50058(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,1920
	ctx.r3.s64 = ctx.r1.s64 + 1920;
	// bl 0x82d559a8
	ctx.lr = 0x829CDD00;
	sub_82D559A8(ctx, base);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,1920
	ctx.r5.s64 = ctx.r1.s64 + 1920;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82d55a80
	ctx.lr = 0x829CDD14;
	sub_82D55A80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x82d55920
	ctx.lr = 0x829CDD20;
	sub_82D55920(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d54de0
	ctx.lr = 0x829CDD30;
	sub_82D54DE0(ctx, base);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d51008
	ctx.lr = 0x829CDD4C;
	sub_82D51008(ctx, base);
	// addi r9,r1,896
	ctx.r9.s64 = ctx.r1.s64 + 896;
	// addi r8,r1,912
	ctx.r8.s64 = ctx.r1.s64 + 912;
	// addi r7,r1,928
	ctx.r7.s64 = ctx.r1.s64 + 928;
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
loc_829CDD5C:
	// lvx128 v8,r0,r9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// stvx128 v8,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r30,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lvx128 v6,r0,r7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r30,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r30,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x829cde04
	if (ctx.cr6.eq) goto loc_829CDE04;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CDDA4;
	sub_82D4EC28(ctx, base);
	// sth r19,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r19.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d80d60
	ctx.lr = 0x829CDDBC;
	sub_82D80D60(ctx, base);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stwx r3,r9,r21
	PPC_STORE_U32(ctx.r9.u32 + ctx.r21.u32, ctx.r3.u32);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829cde04
	if (ctx.cr6.eq) goto loc_829CDE04;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829cde04
	if (!ctx.cr6.eq) goto loc_829CDE04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CDE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CDE04:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// bne 0x829cd970
	if (!ctx.cr0.eq) goto loc_829CD970;
loc_829CDE18:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829CDE30;
	sub_82D4EC28(ctx, base);
	// sth r27,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r27.u16);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r30,2772(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2772);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82e67078
	ctx.lr = 0x829CDE50;
	sub_82E67078(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x829cde8c
	if (ctx.cr6.eq) goto loc_829CDE8C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_829CDE6C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d7a018
	ctx.lr = 0x829CDE78;
	sub_82D7A018(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829cde6c
	if (!ctx.cr6.eq) goto loc_829CDE6C;
loc_829CDE8C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cdef4
	if (ctx.cr6.eq) goto loc_829CDEF4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_829CDEA0:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cdee0
	if (ctx.cr6.eq) goto loc_829CDEE0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829cdee0
	if (!ctx.cr6.eq) goto loc_829CDEE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CDEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829CDEE0:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829cdea0
	if (!ctx.cr6.eq) goto loc_829CDEA0;
loc_829CDEF4:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829cdf1c
	if (!ctx.cr6.eq) goto loc_829CDF1C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CDF1C;
	sub_82D4ECA8(ctx, base);
loc_829CDF1C:
	// rlwinm r11,r15,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829cdf40
	if (!ctx.cr6.eq) goto loc_829CDF40;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r15,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CDF40;
	sub_82D4ECA8(ctx, base);
loc_829CDF40:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829cdf68
	if (!ctx.cr6.eq) goto loc_829CDF68;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CDF68;
	sub_82D4ECA8(ctx, base);
loc_829CDF68:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x8246e8b0
	ctx.lr = 0x829CDF9C;
	sub_8246E8B0(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8221be68
	ctx.lr = 0x829CDFA4;
	sub_8221BE68(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// rlwinm r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x829cdfd4
	if (!ctx.cr6.eq) goto loc_829CDFD4;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CDFD4;
	sub_82D4ECA8(ctx, base);
loc_829CDFD4:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829ce008
	if (!ctx.cr6.eq) goto loc_829CE008;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// rlwinm r11,r11,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CE008;
	sub_82D4ECA8(ctx, base);
loc_829CE008:
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829ce03c
	if (!ctx.cr6.eq) goto loc_829CE03C;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// rlwinm r11,r11,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CE03C;
	sub_82D4ECA8(ctx, base);
loc_829CE03C:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829ce070
	if (!ctx.cr6.eq) goto loc_829CE070;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r11,r11,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CE070;
	sub_82D4ECA8(ctx, base);
loc_829CE070:
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x829ce0a4
	if (!ctx.cr6.eq) goto loc_829CE0A4;
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// rlwinm r11,r11,1,1,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7FFFFFFE;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x829CE0A4;
	sub_82D4ECA8(ctx, base);
loc_829CE0A4:
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ce0b4
	if (ctx.cr6.eq) goto loc_829CE0B4;
	// bl 0x8221be68
	ctx.lr = 0x829CE0B4;
	sub_8221BE68(ctx, base);
loc_829CE0B4:
	// addi r1,r1,2752
	ctx.r1.s64 = ctx.r1.s64 + 2752;
	// addi r12,r1,-176
	ctx.r12.s64 = ctx.r1.s64 + -176;
	// bl 0x83000194
	ctx.lr = 0x829CE0C0;
	sub_83000194(ctx, base);
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829CE0CC"))) PPC_WEAK_FUNC(sub_829CE0CC);
PPC_FUNC_IMPL(__imp__sub_829CE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CE0D0"))) PPC_WEAK_FUNC(sub_829CE0D0);
PPC_FUNC_IMPL(__imp__sub_829CE0D0) {
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
	// bl 0x829ff648
	ctx.lr = 0x829CE0F0;
	sub_829FF648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829ce138
	if (ctx.cr6.eq) goto loc_829CE138;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x829CE104;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ce130
	if (ctx.cr6.eq) goto loc_829CE130;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32099
	ctx.r9.s64 = -2103640064;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-7288
	ctx.r7.s64 = ctx.r9.s64 + -7288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x829ce134
	goto loc_829CE134;
loc_829CE130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CE134:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_829CE138:
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

__attribute__((alias("__imp__sub_829CE150"))) PPC_WEAK_FUNC(sub_829CE150);
PPC_FUNC_IMPL(__imp__sub_829CE150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CE158;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x829ce188
	if (ctx.cr6.eq) goto loc_829CE188;
	// bl 0x828bb070
	ctx.lr = 0x829CE184;
	sub_828BB070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829CE188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce1e8
	if (ctx.cr6.eq) goto loc_829CE1E8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq cr6,0x829ce1d4
	if (ctx.cr6.eq) goto loc_829CE1D4;
loc_829CE1A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce1c8
	if (ctx.cr6.eq) goto loc_829CE1C8;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_829CE1C8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x829ce1a8
	if (!ctx.cr0.eq) goto loc_829CE1A8;
loc_829CE1D4:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_829CE1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CE1F4"))) PPC_WEAK_FUNC(sub_829CE1F4);
PPC_FUNC_IMPL(__imp__sub_829CE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CE1F8"))) PPC_WEAK_FUNC(sub_829CE1F8);
PPC_FUNC_IMPL(__imp__sub_829CE1F8) {
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
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// li r8,36
	ctx.r8.s64 = 36;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// bne cr6,0x829ce230
	if (!ctx.cr6.eq) goto loc_829CE230;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x829ce23c
	goto loc_829CE23C;
loc_829CE230:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r8
	ctx.r10.s32 = ctx.r9.s32 / ctx.r8.s32;
loc_829CE23C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829ce298
	if (!ctx.cr6.lt) goto loc_829CE298;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ce254
	if (!ctx.cr6.eq) goto loc_829CE254;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x829ce260
	goto loc_829CE260;
loc_829CE254:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
loc_829CE260:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829ce270
	if (!ctx.cr6.gt) goto loc_829CE270;
	// twi 31,r0,22
loc_829CE270:
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x829ce3e0
	ctx.lr = 0x829CE288;
	sub_829CE3E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829CE298:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ce374
	if (ctx.cr6.eq) goto loc_829CE374;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r10,r8
	ctx.r7.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x829ce374
	if (!ctx.cr6.lt) goto loc_829CE374;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x829ce2c4
	if (!ctx.cr6.gt) goto loc_829CE2C4;
	// twi 31,r0,22
	// twi 31,r0,22
loc_829CE2C4:
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x829ce2fc
	if (ctx.cr6.gt) goto loc_829CE2FC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x829ce300
	if (!ctx.cr6.lt) goto loc_829CE300;
loc_829CE2FC:
	// twi 31,r0,22
loc_829CE300:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x829ce310
	if (ctx.cr6.eq) goto loc_829CE310;
	// twi 31,r0,22
loc_829CE310:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x829ce374
	if (ctx.cr6.eq) goto loc_829CE374;
	// subf r10,r9,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, ctx.xer);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x829ce370
	if (ctx.cr6.eq) goto loc_829CE370;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_829CE340:
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_829CE350:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE350;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829ce340
	if (!ctx.cr6.eq) goto loc_829CE340;
loc_829CE370:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
loc_829CE374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE384"))) PPC_WEAK_FUNC(sub_829CE384);
PPC_FUNC_IMPL(__imp__sub_829CE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CE388"))) PPC_WEAK_FUNC(sub_829CE388);
PPC_FUNC_IMPL(__imp__sub_829CE388) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x829ce3bc
	if (ctx.cr6.lt) goto loc_829CE3BC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82d4eb08
	sub_82D4EB08(ctx, base);
	return;
loc_829CE3BC:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE3DC"))) PPC_WEAK_FUNC(sub_829CE3DC);
PPC_FUNC_IMPL(__imp__sub_829CE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CE3E0"))) PPC_WEAK_FUNC(sub_829CE3E0);
PPC_FUNC_IMPL(__imp__sub_829CE3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x829CE3E8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CE408:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE408;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,36
	ctx.r27.s64 = 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829ce434
	if (!ctx.cr6.eq) goto loc_829CE434;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x829ce440
	goto loc_829CE440;
loc_829CE434:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_829CE440:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ce868
	if (ctx.cr6.eq) goto loc_829CE868;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829ce458
	if (!ctx.cr6.eq) goto loc_829CE458;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x829ce464
	goto loc_829CE464;
loc_829CE458:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_829CE464:
	// lis r9,1820
	ctx.r9.s64 = 119275520;
	// ori r9,r9,29127
	ctx.r9.u64 = ctx.r9.u64 | 29127;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x829ce484
	if (!ctx.cr6.lt) goto loc_829CE484;
	// bl 0x82684b38
	ctx.lr = 0x829CE47C;
	sub_82684B38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_829CE484:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829ce494
	if (!ctx.cr6.eq) goto loc_829CE494;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x829ce4a0
	goto loc_829CE4A0;
loc_829CE494:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r7,r27
	ctx.r11.s32 = ctx.r7.s32 / ctx.r27.s32;
loc_829CE4A0:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x829ce67c
	if (!ctx.cr6.lt) goto loc_829CE67C;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x829ce4c4
	if (ctx.cr6.lt) goto loc_829CE4C4;
	// add r29,r11,r8
	ctx.r29.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_829CE4C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829ce4d4
	if (!ctx.cr6.eq) goto loc_829CE4D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x829ce4e0
	goto loc_829CE4E0;
loc_829CE4D4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r27
	ctx.r11.s32 = ctx.r9.s32 / ctx.r27.s32;
loc_829CE4E0:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x829ce50c
	if (!ctx.cr6.lt) goto loc_829CE50C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829ce4fc
	if (!ctx.cr6.eq) goto loc_829CE4FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x829ce508
	goto loc_829CE508;
loc_829CE4FC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r10,r27
	ctx.r11.s32 = ctx.r10.s32 / ctx.r27.s32;
loc_829CE508:
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_829CE50C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b428a0
	ctx.lr = 0x829CE518;
	sub_82B428A0(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// beq cr6,0x829ce56c
	if (ctx.cr6.eq) goto loc_829CE56C;
loc_829CE530:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829ce55c
	if (ctx.cr6.eq) goto loc_829CE55C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_829CE548:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE548;
loc_829CE55C:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x829ce530
	if (!ctx.cr6.eq) goto loc_829CE530;
loc_829CE56C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ce5b4
	if (ctx.cr6.eq) goto loc_829CE5B4;
loc_829CE57C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829ce5a8
	if (ctx.cr6.eq) goto loc_829CE5A8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CE594:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE594;
loc_829CE5A8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// bne 0x829ce57c
	if (!ctx.cr0.eq) goto loc_829CE57C;
loc_829CE5B4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// beq cr6,0x829ce618
	if (ctx.cr6.eq) goto loc_829CE618;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_829CE5DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829ce608
	if (ctx.cr6.eq) goto loc_829CE608;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_829CE5F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce5f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE5F4;
loc_829CE608:
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x829ce5dc
	if (!ctx.cr6.eq) goto loc_829CE5DC;
loc_829CE618:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829ce62c
	if (!ctx.cr6.eq) goto loc_829CE62C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x829ce638
	goto loc_829CE638;
loc_829CE62C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r11,r10,r27
	ctx.r11.s32 = ctx.r10.s32 / ctx.r27.s32;
loc_829CE638:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ce648
	if (ctx.cr6.eq) goto loc_829CE648;
	// bl 0x8221be68
	ctx.lr = 0x829CE648;
	sub_8221BE68(ctx, base);
loc_829CE648:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_829CE67C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// divw r10,r11,r27
	ctx.r10.s32 = ctx.r11.s32 / ctx.r27.s32;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bge cr6,0x829ce790
	if (!ctx.cr6.lt) goto loc_829CE790;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq cr6,0x829ce6ec
	if (ctx.cr6.eq) goto loc_829CE6EC;
	// subf r7,r6,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r6.s64;
loc_829CE6B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829ce6dc
	if (ctx.cr6.eq) goto loc_829CE6DC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_829CE6C8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce6c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE6C8;
loc_829CE6DC:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x829ce6b0
	if (!ctx.cr6.eq) goto loc_829CE6B0;
loc_829CE6EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// divw r9,r10,r27
	ctx.r9.s32 = ctx.r10.s32 / ctx.r27.s32;
	// subf. r7,r9,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x829ce73c
	if (ctx.cr0.eq) goto loc_829CE73C;
loc_829CE704:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829ce730
	if (ctx.cr6.eq) goto loc_829CE730;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CE71C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE71C;
loc_829CE730:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// bne 0x829ce704
	if (!ctx.cr0.eq) goto loc_829CE704;
loc_829CE73C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829ce868
	if (ctx.cr6.eq) goto loc_829CE868;
loc_829CE758:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_829CE768:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE768;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x829ce758
	if (!ctx.cr6.eq) goto loc_829CE758;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_829CE790:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x829ce7e4
	if (ctx.cr6.eq) goto loc_829CE7E4;
loc_829CE7A8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x829ce7d4
	if (ctx.cr6.eq) goto loc_829CE7D4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_829CE7C0:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x829ce7c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE7C0;
loc_829CE7D4:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x829ce7a8
	if (!ctx.cr6.eq) goto loc_829CE7A8;
loc_829CE7E4:
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829ce828
	if (ctx.cr6.eq) goto loc_829CE828;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_829CE7F4:
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_829CE80C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x829ce80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE80C;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829ce7f4
	if (!ctx.cr6.eq) goto loc_829CE7F4;
loc_829CE828:
	// add r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x829ce868
	if (ctx.cr6.eq) goto loc_829CE868;
loc_829CE838:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829CE848:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829ce848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829CE848;
	// addi r8,r8,36
	ctx.r8.s64 = ctx.r8.s64 + 36;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x829ce838
	if (!ctx.cr6.eq) goto loc_829CE838;
loc_829CE868:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_829CE870"))) PPC_WEAK_FUNC(sub_829CE870);
PPC_FUNC_IMPL(__imp__sub_829CE870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE874"))) PPC_WEAK_FUNC(sub_829CE874);
PPC_FUNC_IMPL(__imp__sub_829CE874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CE878"))) PPC_WEAK_FUNC(sub_829CE878);
PPC_FUNC_IMPL(__imp__sub_829CE878) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CE8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-17752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821eb050
	ctx.lr = 0x829CE8B8;
	sub_821EB050(ctx, base);
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

__attribute__((alias("__imp__sub_829CE8D0"))) PPC_WEAK_FUNC(sub_829CE8D0);
PPC_FUNC_IMPL(__imp__sub_829CE8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CE8D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-1048
	ctx.r9.s64 = ctx.r11.s64 + -1048;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r4,r8,-1116
	ctx.r4.s64 = ctx.r8.s64 + -1116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// bl 0x8239cd80
	ctx.lr = 0x829CE928;
	sub_8239CD80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829ce954
	if (ctx.cr6.eq) goto loc_829CE954;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829ce94c
	if (ctx.cr6.eq) goto loc_829CE94C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829ce958
	if (!ctx.cr6.eq) goto loc_829CE958;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x829ce958
	goto loc_829CE958;
loc_829CE94C:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x829ce958
	goto loc_829CE958;
loc_829CE954:
	// li r30,1
	ctx.r30.s64 = 1;
loc_829CE958:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1104
	ctx.r4.s64 = ctx.r11.s64 + -1104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8239cd80
	ctx.lr = 0x829CE978;
	sub_8239CD80(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-1092
	ctx.r4.s64 = ctx.r9.s64 + -1092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x829cef88
	ctx.lr = 0x829CE994;
	sub_829CEF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CE9A0"))) PPC_WEAK_FUNC(sub_829CE9A0);
PPC_FUNC_IMPL(__imp__sub_829CE9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829ce9c8
	if (!ctx.cr6.eq) goto loc_829CE9C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_829CE9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CE9D0"))) PPC_WEAK_FUNC(sub_829CE9D0);
PPC_FUNC_IMPL(__imp__sub_829CE9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CE9D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-1020
	ctx.r9.s64 = ctx.r11.s64 + -1020;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r4,r8,-1116
	ctx.r4.s64 = ctx.r8.s64 + -1116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// bl 0x8239cd80
	ctx.lr = 0x829CEA28;
	sub_8239CD80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cea54
	if (ctx.cr6.eq) goto loc_829CEA54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829cea4c
	if (ctx.cr6.eq) goto loc_829CEA4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829cea58
	if (!ctx.cr6.eq) goto loc_829CEA58;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x829cea58
	goto loc_829CEA58;
loc_829CEA4C:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x829cea58
	goto loc_829CEA58;
loc_829CEA54:
	// li r30,4
	ctx.r30.s64 = 4;
loc_829CEA58:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1072
	ctx.r4.s64 = ctx.r11.s64 + -1072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8239cd80
	ctx.lr = 0x829CEA78;
	sub_8239CD80(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-1092
	ctx.r4.s64 = ctx.r9.s64 + -1092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x829cef88
	ctx.lr = 0x829CEA94;
	sub_829CEF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CEAA0"))) PPC_WEAK_FUNC(sub_829CEAA0);
PPC_FUNC_IMPL(__imp__sub_829CEAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CEAA8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CEAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829CEAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x829ceb1c
	if (!ctx.cr6.eq) goto loc_829CEB1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829ceb0c
	if (!ctx.cr6.eq) goto loc_829CEB0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x829ceb10
	if (ctx.cr6.eq) goto loc_829CEB10;
loc_829CEB0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CEB10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CEB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CEB28"))) PPC_WEAK_FUNC(sub_829CEB28);
PPC_FUNC_IMPL(__imp__sub_829CEB28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829ceb50
	if (!ctx.cr6.eq) goto loc_829CEB50;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_829CEB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEB58"))) PPC_WEAK_FUNC(sub_829CEB58);
PPC_FUNC_IMPL(__imp__sub_829CEB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEB6C"))) PPC_WEAK_FUNC(sub_829CEB6C);
PPC_FUNC_IMPL(__imp__sub_829CEB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEB70"))) PPC_WEAK_FUNC(sub_829CEB70);
PPC_FUNC_IMPL(__imp__sub_829CEB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829CEB78;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-992
	ctx.r9.s64 = ctx.r11.s64 + -992;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r4,r8,-1116
	ctx.r4.s64 = ctx.r8.s64 + -1116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// bl 0x8239cd80
	ctx.lr = 0x829CEBC8;
	sub_8239CD80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829cebf4
	if (ctx.cr6.eq) goto loc_829CEBF4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829cebec
	if (ctx.cr6.eq) goto loc_829CEBEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829cebf8
	if (!ctx.cr6.eq) goto loc_829CEBF8;
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x829cebf8
	goto loc_829CEBF8;
loc_829CEBEC:
	// li r30,14
	ctx.r30.s64 = 14;
	// b 0x829cebf8
	goto loc_829CEBF8;
loc_829CEBF4:
	// li r30,13
	ctx.r30.s64 = 13;
loc_829CEBF8:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1060
	ctx.r4.s64 = ctx.r11.s64 + -1060;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8239cd80
	ctx.lr = 0x829CEC18;
	sub_8239CD80(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-1092
	ctx.r4.s64 = ctx.r9.s64 + -1092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x829cef88
	ctx.lr = 0x829CEC34;
	sub_829CEF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829CEC40"))) PPC_WEAK_FUNC(sub_829CEC40);
PPC_FUNC_IMPL(__imp__sub_829CEC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829cec74
	if (!ctx.cr6.eq) goto loc_829CEC74;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x829cec74
	if (!ctx.cr6.eq) goto loc_829CEC74;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_829CEC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEC7C"))) PPC_WEAK_FUNC(sub_829CEC7C);
PPC_FUNC_IMPL(__imp__sub_829CEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEC80"))) PPC_WEAK_FUNC(sub_829CEC80);
PPC_FUNC_IMPL(__imp__sub_829CEC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 12);
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CECA8"))) PPC_WEAK_FUNC(sub_829CECA8);
PPC_FUNC_IMPL(__imp__sub_829CECA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CECBC"))) PPC_WEAK_FUNC(sub_829CECBC);
PPC_FUNC_IMPL(__imp__sub_829CECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CECC0"))) PPC_WEAK_FUNC(sub_829CECC0);
PPC_FUNC_IMPL(__imp__sub_829CECC0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829CECEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829CED04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r7,r3,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_829CED28"))) PPC_WEAK_FUNC(sub_829CED28);
PPC_FUNC_IMPL(__imp__sub_829CED28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x829ced44
	if (!ctx.cr6.eq) goto loc_829CED44;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x829ced48
	if (ctx.cr6.eq) goto loc_829CED48;
loc_829CED44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CED48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CED50"))) PPC_WEAK_FUNC(sub_829CED50);
PPC_FUNC_IMPL(__imp__sub_829CED50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x829ced6c
	if (!ctx.cr6.eq) goto loc_829CED6C;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x829ced70
	if (ctx.cr6.eq) goto loc_829CED70;
loc_829CED6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CED70:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CED78"))) PPC_WEAK_FUNC(sub_829CED78);
PPC_FUNC_IMPL(__imp__sub_829CED78) {
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
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829fa020
	ctx.lr = 0x829CED94;
	sub_829FA020(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// lfs f12,-27456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f6,f7,f11,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x829cee00
	if (!ctx.cr6.gt) goto loc_829CEE00;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_829CEE00:
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

__attribute__((alias("__imp__sub_829CEE14"))) PPC_WEAK_FUNC(sub_829CEE14);
PPC_FUNC_IMPL(__imp__sub_829CEE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEE18"))) PPC_WEAK_FUNC(sub_829CEE18);
PPC_FUNC_IMPL(__imp__sub_829CEE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEE2C"))) PPC_WEAK_FUNC(sub_829CEE2C);
PPC_FUNC_IMPL(__imp__sub_829CEE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEE30"))) PPC_WEAK_FUNC(sub_829CEE30);
PPC_FUNC_IMPL(__imp__sub_829CEE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// addi r7,r9,-27456
	ctx.r7.s64 = ctx.r9.s64 + -27456;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lfs f11,-27456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27456);
	ctx.f11.f64 = double(temp.f32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f0,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// lvlx v13,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lvlx v12,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// lfs f0,1076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1460);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfs f5,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f4,f5,f9,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fsqrts f12,f4
	ctx.f12.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEEF4"))) PPC_WEAK_FUNC(sub_829CEEF4);
PPC_FUNC_IMPL(__imp__sub_829CEEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEEF8"))) PPC_WEAK_FUNC(sub_829CEEF8);
PPC_FUNC_IMPL(__imp__sub_829CEEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEF0C"))) PPC_WEAK_FUNC(sub_829CEF0C);
PPC_FUNC_IMPL(__imp__sub_829CEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEF10"))) PPC_WEAK_FUNC(sub_829CEF10);
PPC_FUNC_IMPL(__imp__sub_829CEF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEF28"))) PPC_WEAK_FUNC(sub_829CEF28);
PPC_FUNC_IMPL(__imp__sub_829CEF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x829cef4c
	if (!ctx.cr6.eq) goto loc_829CEF4C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-25888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_829CEF4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEF54"))) PPC_WEAK_FUNC(sub_829CEF54);
PPC_FUNC_IMPL(__imp__sub_829CEF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEF58"))) PPC_WEAK_FUNC(sub_829CEF58);
PPC_FUNC_IMPL(__imp__sub_829CEF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x829cef7c
	if (!ctx.cr6.eq) goto loc_829CEF7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_829CEF7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CEF84"))) PPC_WEAK_FUNC(sub_829CEF84);
PPC_FUNC_IMPL(__imp__sub_829CEF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CEF88"))) PPC_WEAK_FUNC(sub_829CEF88);
PPC_FUNC_IMPL(__imp__sub_829CEF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CEF90;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,-1092
	ctx.r3.s64 = ctx.r11.s64 + -1092;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3c28
	ctx.lr = 0x829CEFBC;
	sub_821F3C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8227b698
	ctx.lr = 0x829CEFCC;
	sub_8227B698(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829cf00c
	if (ctx.cr6.eq) goto loc_829CF00C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,11652
	ctx.r4.s64 = ctx.r11.s64 + 11652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ccb0
	ctx.lr = 0x829CEFEC;
	sub_8239CCB0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r4,r10,11656
	ctx.r4.s64 = ctx.r10.s64 + 11656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ccb0
	ctx.lr = 0x829CF000;
	sub_8239CCB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_829CF00C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF018"))) PPC_WEAK_FUNC(sub_829CF018);
PPC_FUNC_IMPL(__imp__sub_829CF018) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,27593(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27593, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF030"))) PPC_WEAK_FUNC(sub_829CF030);
PPC_FUNC_IMPL(__imp__sub_829CF030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27594, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF03C"))) PPC_WEAK_FUNC(sub_829CF03C);
PPC_FUNC_IMPL(__imp__sub_829CF03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF040"))) PPC_WEAK_FUNC(sub_829CF040);
PPC_FUNC_IMPL(__imp__sub_829CF040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stfs f1,-29380(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29380, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829CF04C"))) PPC_WEAK_FUNC(sub_829CF04C);
PPC_FUNC_IMPL(__imp__sub_829CF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF050"))) PPC_WEAK_FUNC(sub_829CF050);
PPC_FUNC_IMPL(__imp__sub_829CF050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF058;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF06C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf094
	if (ctx.cr6.eq) goto loc_829CF094;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF080;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-616
	ctx.r10.s64 = ctx.r11.s64 + -616;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf098
	goto loc_829CF098;
loc_829CF094:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF098:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF0A0;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf0b0
	if (ctx.cr6.eq) goto loc_829CF0B0;
	// bl 0x82180b28
	ctx.lr = 0x829CF0B0;
	sub_82180B28(ctx, base);
loc_829CF0B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF0BC"))) PPC_WEAK_FUNC(sub_829CF0BC);
PPC_FUNC_IMPL(__imp__sub_829CF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF0C0"))) PPC_WEAK_FUNC(sub_829CF0C0);
PPC_FUNC_IMPL(__imp__sub_829CF0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF0C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF0DC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf104
	if (ctx.cr6.eq) goto loc_829CF104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF0F0;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-536
	ctx.r10.s64 = ctx.r11.s64 + -536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf108
	goto loc_829CF108;
loc_829CF104:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF110;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf120
	if (ctx.cr6.eq) goto loc_829CF120;
	// bl 0x82180b28
	ctx.lr = 0x829CF120;
	sub_82180B28(ctx, base);
loc_829CF120:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF12C"))) PPC_WEAK_FUNC(sub_829CF12C);
PPC_FUNC_IMPL(__imp__sub_829CF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF130"))) PPC_WEAK_FUNC(sub_829CF130);
PPC_FUNC_IMPL(__imp__sub_829CF130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF138;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF14C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf174
	if (ctx.cr6.eq) goto loc_829CF174;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF160;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-456
	ctx.r10.s64 = ctx.r11.s64 + -456;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf178
	goto loc_829CF178;
loc_829CF174:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF180;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf190
	if (ctx.cr6.eq) goto loc_829CF190;
	// bl 0x82180b28
	ctx.lr = 0x829CF190;
	sub_82180B28(ctx, base);
loc_829CF190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF19C"))) PPC_WEAK_FUNC(sub_829CF19C);
PPC_FUNC_IMPL(__imp__sub_829CF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF1A0"))) PPC_WEAK_FUNC(sub_829CF1A0);
PPC_FUNC_IMPL(__imp__sub_829CF1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF1A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF1BC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf1e4
	if (ctx.cr6.eq) goto loc_829CF1E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF1D0;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-376
	ctx.r10.s64 = ctx.r11.s64 + -376;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf1e8
	goto loc_829CF1E8;
loc_829CF1E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF1E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF1F0;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf200
	if (ctx.cr6.eq) goto loc_829CF200;
	// bl 0x82180b28
	ctx.lr = 0x829CF200;
	sub_82180B28(ctx, base);
loc_829CF200:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF20C"))) PPC_WEAK_FUNC(sub_829CF20C);
PPC_FUNC_IMPL(__imp__sub_829CF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF210"))) PPC_WEAK_FUNC(sub_829CF210);
PPC_FUNC_IMPL(__imp__sub_829CF210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF218;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF22C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf254
	if (ctx.cr6.eq) goto loc_829CF254;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF240;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-296
	ctx.r10.s64 = ctx.r11.s64 + -296;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf258
	goto loc_829CF258;
loc_829CF254:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF260;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf270
	if (ctx.cr6.eq) goto loc_829CF270;
	// bl 0x82180b28
	ctx.lr = 0x829CF270;
	sub_82180B28(ctx, base);
loc_829CF270:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF27C"))) PPC_WEAK_FUNC(sub_829CF27C);
PPC_FUNC_IMPL(__imp__sub_829CF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF280"))) PPC_WEAK_FUNC(sub_829CF280);
PPC_FUNC_IMPL(__imp__sub_829CF280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF288;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF29C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf2c4
	if (ctx.cr6.eq) goto loc_829CF2C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF2B0;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-216
	ctx.r10.s64 = ctx.r11.s64 + -216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf2c8
	goto loc_829CF2C8;
loc_829CF2C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF2C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF2D0;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf2e0
	if (ctx.cr6.eq) goto loc_829CF2E0;
	// bl 0x82180b28
	ctx.lr = 0x829CF2E0;
	sub_82180B28(ctx, base);
loc_829CF2E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF2EC"))) PPC_WEAK_FUNC(sub_829CF2EC);
PPC_FUNC_IMPL(__imp__sub_829CF2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF2F0"))) PPC_WEAK_FUNC(sub_829CF2F0);
PPC_FUNC_IMPL(__imp__sub_829CF2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF2F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF30C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf334
	if (ctx.cr6.eq) goto loc_829CF334;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF320;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-136
	ctx.r10.s64 = ctx.r11.s64 + -136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf338
	goto loc_829CF338;
loc_829CF334:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF340;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf350
	if (ctx.cr6.eq) goto loc_829CF350;
	// bl 0x82180b28
	ctx.lr = 0x829CF350;
	sub_82180B28(ctx, base);
loc_829CF350:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF35C"))) PPC_WEAK_FUNC(sub_829CF35C);
PPC_FUNC_IMPL(__imp__sub_829CF35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF360"))) PPC_WEAK_FUNC(sub_829CF360);
PPC_FUNC_IMPL(__imp__sub_829CF360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF368;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF37C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf3a4
	if (ctx.cr6.eq) goto loc_829CF3A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823dbff8
	ctx.lr = 0x829CF390;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x829cf3a8
	goto loc_829CF3A8;
loc_829CF3A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF3A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF3B0;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf3c0
	if (ctx.cr6.eq) goto loc_829CF3C0;
	// bl 0x82180b28
	ctx.lr = 0x829CF3C0;
	sub_82180B28(ctx, base);
loc_829CF3C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF3CC"))) PPC_WEAK_FUNC(sub_829CF3CC);
PPC_FUNC_IMPL(__imp__sub_829CF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF3D0"))) PPC_WEAK_FUNC(sub_829CF3D0);
PPC_FUNC_IMPL(__imp__sub_829CF3D0) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF3F4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf40c
	if (ctx.cr6.eq) goto loc_829CF40C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829cf448
	ctx.lr = 0x829CF404;
	sub_829CF448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829cf410
	goto loc_829CF410;
loc_829CF40C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF418;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf428
	if (ctx.cr6.eq) goto loc_829CF428;
	// bl 0x82180b28
	ctx.lr = 0x829CF428;
	sub_82180B28(ctx, base);
loc_829CF428:
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

__attribute__((alias("__imp__sub_829CF444"))) PPC_WEAK_FUNC(sub_829CF444);
PPC_FUNC_IMPL(__imp__sub_829CF444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF448"))) PPC_WEAK_FUNC(sub_829CF448);
PPC_FUNC_IMPL(__imp__sub_829CF448) {
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
	// bl 0x823dbff8
	ctx.lr = 0x829CF468;
	sub_823DBFF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r9,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r9.u8);
	// lbz r8,121(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// stb r8,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r8.u8);
	// lbz r7,122(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 122);
	// stb r7,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_829CF4A8"))) PPC_WEAK_FUNC(sub_829CF4A8);
PPC_FUNC_IMPL(__imp__sub_829CF4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF4B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF4C4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf500
	if (ctx.cr6.eq) goto loc_829CF500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829cf448
	ctx.lr = 0x829CF4D8;
	sub_829CF448(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// addi r10,r11,104
	ctx.r10.s64 = ctx.r11.s64 + 104;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x829CF4F0;
	sub_821F0108(ctx, base);
	// lbz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r9.u8);
	// b 0x829cf504
	goto loc_829CF504;
loc_829CF500:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF504:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF50C;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf51c
	if (ctx.cr6.eq) goto loc_829CF51C;
	// bl 0x82180b28
	ctx.lr = 0x829CF51C;
	sub_82180B28(ctx, base);
loc_829CF51C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF528"))) PPC_WEAK_FUNC(sub_829CF528);
PPC_FUNC_IMPL(__imp__sub_829CF528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF530;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF544;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf578
	if (ctx.cr6.eq) goto loc_829CF578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829cf448
	ctx.lr = 0x829CF558;
	sub_829CF448(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// addi r10,r11,184
	ctx.r10.s64 = ctx.r11.s64 + 184;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x829CF570;
	sub_821F0108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x829cf57c
	goto loc_829CF57C;
loc_829CF578:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF57C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF584;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf594
	if (ctx.cr6.eq) goto loc_829CF594;
	// bl 0x82180b28
	ctx.lr = 0x829CF594;
	sub_82180B28(ctx, base);
loc_829CF594:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF5A0"))) PPC_WEAK_FUNC(sub_829CF5A0);
PPC_FUNC_IMPL(__imp__sub_829CF5A0) {
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
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x82214f08
	ctx.lr = 0x829CF5C4;
	sub_82214F08(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x829CF5CC;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acc20
	ctx.lr = 0x829CF5D4;
	sub_821ACC20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf5ec
	if (ctx.cr6.eq) goto loc_829CF5EC;
	// bl 0x8221be68
	ctx.lr = 0x829CF5E8;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829CF5EC:
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

__attribute__((alias("__imp__sub_829CF604"))) PPC_WEAK_FUNC(sub_829CF604);
PPC_FUNC_IMPL(__imp__sub_829CF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF608"))) PPC_WEAK_FUNC(sub_829CF608);
PPC_FUNC_IMPL(__imp__sub_829CF608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF610;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF624;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf664
	if (ctx.cr6.eq) goto loc_829CF664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829cf448
	ctx.lr = 0x829CF638;
	sub_829CF448(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,144
	ctx.r11.s64 = 144;
	// addi r8,r9,264
	ctx.r8.s64 = ctx.r9.s64 + 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lvx128 v0,r30,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r30,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x829cf668
	goto loc_829CF668;
loc_829CF664:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF668:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF670;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf680
	if (ctx.cr6.eq) goto loc_829CF680;
	// bl 0x82180b28
	ctx.lr = 0x829CF680;
	sub_82180B28(ctx, base);
loc_829CF680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF68C"))) PPC_WEAK_FUNC(sub_829CF68C);
PPC_FUNC_IMPL(__imp__sub_829CF68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF690"))) PPC_WEAK_FUNC(sub_829CF690);
PPC_FUNC_IMPL(__imp__sub_829CF690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x829CF698;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x829CF6AC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829cf6ec
	if (ctx.cr6.eq) goto loc_829CF6EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829cf448
	ctx.lr = 0x829CF6C0;
	sub_829CF448(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r8,128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// b 0x829cf6f0
	goto loc_829CF6F0;
loc_829CF6EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829CF6F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x829CF6F8;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829cf708
	if (ctx.cr6.eq) goto loc_829CF708;
	// bl 0x82180b28
	ctx.lr = 0x829CF708;
	sub_82180B28(ctx, base);
loc_829CF708:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_829CF714"))) PPC_WEAK_FUNC(sub_829CF714);
PPC_FUNC_IMPL(__imp__sub_829CF714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF718"))) PPC_WEAK_FUNC(sub_829CF718);
PPC_FUNC_IMPL(__imp__sub_829CF718) {
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
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf758
	if (ctx.cr6.eq) goto loc_829CF758;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cf754
	if (ctx.cr6.eq) goto loc_829CF754;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cf75c
	goto loc_829CF75C;
loc_829CF754:
	// bl 0x821940c8
	ctx.lr = 0x829CF758;
	sub_821940C8(ctx, base);
loc_829CF758:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CF75C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cf860
	if (ctx.cr6.eq) goto loc_829CF860;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cf798
	if (ctx.cr6.eq) goto loc_829CF798;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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
	// b 0x829cf868
	goto loc_829CF868;
loc_829CF798:
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
	// ble 0x829cf808
	if (!ctx.cr0.gt) goto loc_829CF808;
loc_829CF7B8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cf7d8
	if (ctx.cr6.lt) goto loc_829CF7D8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CF7D8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cf7f4
	if (ctx.cr6.eq) goto loc_829CF7F4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cf7fc
	goto loc_829CF7FC;
loc_829CF7F4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CF7FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cf7b8
	if (ctx.cr6.gt) goto loc_829CF7B8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CF808:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829cf84c
	if (ctx.cr6.eq) goto loc_829CF84C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829cf824
	if (ctx.cr6.gt) goto loc_829CF824;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CF824:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cf84c
	if (!ctx.cr6.eq) goto loc_829CF84C;
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
	// b 0x829cf868
	goto loc_829CF868;
loc_829CF84C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829cf868
	goto loc_829CF868;
loc_829CF860:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CF868:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf89c
	if (ctx.cr6.eq) goto loc_829CF89C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CF888;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1f88
	ctx.lr = 0x829CF894;
	sub_823F1F88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CF89C;
	sub_82214F08(ctx, base);
loc_829CF89C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829CF8A4;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829CF8BC"))) PPC_WEAK_FUNC(sub_829CF8BC);
PPC_FUNC_IMPL(__imp__sub_829CF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CF8C0"))) PPC_WEAK_FUNC(sub_829CF8C0);
PPC_FUNC_IMPL(__imp__sub_829CF8C0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cf8fc
	if (ctx.cr6.eq) goto loc_829CF8FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cf8f8
	if (ctx.cr6.eq) goto loc_829CF8F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cf900
	goto loc_829CF900;
loc_829CF8F8:
	// bl 0x821940c8
	ctx.lr = 0x829CF8FC;
	sub_821940C8(ctx, base);
loc_829CF8FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CF900:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cf9f8
	if (ctx.cr6.eq) goto loc_829CF9F8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cf938
	if (ctx.cr6.eq) goto loc_829CF938;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x829cfa00
	goto loc_829CFA00;
loc_829CF938:
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
	// ble 0x829cf9a8
	if (!ctx.cr0.gt) goto loc_829CF9A8;
loc_829CF958:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cf978
	if (ctx.cr6.lt) goto loc_829CF978;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CF978:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cf994
	if (ctx.cr6.eq) goto loc_829CF994;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cf99c
	goto loc_829CF99C;
loc_829CF994:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CF99C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cf958
	if (ctx.cr6.gt) goto loc_829CF958;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CF9A8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829cf9e8
	if (ctx.cr6.eq) goto loc_829CF9E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829cf9c4
	if (ctx.cr6.gt) goto loc_829CF9C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CF9C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cf9e8
	if (!ctx.cr6.eq) goto loc_829CF9E8;
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
	// b 0x829cfa00
	goto loc_829CFA00;
loc_829CF9E8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x829cfa00
	goto loc_829CFA00;
loc_829CF9F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_829CFA00:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfa18
	if (ctx.cr6.eq) goto loc_829CFA18;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823f27a8
	ctx.lr = 0x829CFA18;
	sub_823F27A8(ctx, base);
loc_829CFA18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829CFA20;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829CFA34"))) PPC_WEAK_FUNC(sub_829CFA34);
PPC_FUNC_IMPL(__imp__sub_829CFA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CFA38"))) PPC_WEAK_FUNC(sub_829CFA38);
PPC_FUNC_IMPL(__imp__sub_829CFA38) {
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
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cfa78
	if (ctx.cr6.eq) goto loc_829CFA78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfa74
	if (ctx.cr6.eq) goto loc_829CFA74;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cfa7c
	goto loc_829CFA7C;
loc_829CFA74:
	// bl 0x821940c8
	ctx.lr = 0x829CFA78;
	sub_821940C8(ctx, base);
loc_829CFA78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFA7C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cfb80
	if (ctx.cr6.eq) goto loc_829CFB80;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfab8
	if (ctx.cr6.eq) goto loc_829CFAB8;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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
	// b 0x829cfb88
	goto loc_829CFB88;
loc_829CFAB8:
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
	// ble 0x829cfb28
	if (!ctx.cr0.gt) goto loc_829CFB28;
loc_829CFAD8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cfaf8
	if (ctx.cr6.lt) goto loc_829CFAF8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CFAF8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cfb14
	if (ctx.cr6.eq) goto loc_829CFB14;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cfb1c
	goto loc_829CFB1C;
loc_829CFB14:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CFB1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cfad8
	if (ctx.cr6.gt) goto loc_829CFAD8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CFB28:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829cfb6c
	if (ctx.cr6.eq) goto loc_829CFB6C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829cfb44
	if (ctx.cr6.gt) goto loc_829CFB44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFB44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cfb6c
	if (!ctx.cr6.eq) goto loc_829CFB6C;
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
	// b 0x829cfb88
	goto loc_829CFB88;
loc_829CFB6C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829cfb88
	goto loc_829CFB88;
loc_829CFB80:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFB88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cfbbc
	if (ctx.cr6.eq) goto loc_829CFBBC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-900
	ctx.r4.s64 = ctx.r11.s64 + -900;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CFBA8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1f88
	ctx.lr = 0x829CFBB4;
	sub_823F1F88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CFBBC;
	sub_82214F08(ctx, base);
loc_829CFBBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829CFBC4;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829CFBDC"))) PPC_WEAK_FUNC(sub_829CFBDC);
PPC_FUNC_IMPL(__imp__sub_829CFBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CFBE0"))) PPC_WEAK_FUNC(sub_829CFBE0);
PPC_FUNC_IMPL(__imp__sub_829CFBE0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cfc1c
	if (ctx.cr6.eq) goto loc_829CFC1C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfc18
	if (ctx.cr6.eq) goto loc_829CFC18;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cfc20
	goto loc_829CFC20;
loc_829CFC18:
	// bl 0x821940c8
	ctx.lr = 0x829CFC1C;
	sub_821940C8(ctx, base);
loc_829CFC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFC20:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cfd18
	if (ctx.cr6.eq) goto loc_829CFD18;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfc58
	if (ctx.cr6.eq) goto loc_829CFC58;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x829cfd20
	goto loc_829CFD20;
loc_829CFC58:
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
	// ble 0x829cfcc8
	if (!ctx.cr0.gt) goto loc_829CFCC8;
loc_829CFC78:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cfc98
	if (ctx.cr6.lt) goto loc_829CFC98;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CFC98:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cfcb4
	if (ctx.cr6.eq) goto loc_829CFCB4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cfcbc
	goto loc_829CFCBC;
loc_829CFCB4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CFCBC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cfc78
	if (ctx.cr6.gt) goto loc_829CFC78;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CFCC8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829cfd08
	if (ctx.cr6.eq) goto loc_829CFD08;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829cfce4
	if (ctx.cr6.gt) goto loc_829CFCE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFCE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cfd08
	if (!ctx.cr6.eq) goto loc_829CFD08;
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
	// b 0x829cfd20
	goto loc_829CFD20;
loc_829CFD08:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x829cfd20
	goto loc_829CFD20;
loc_829CFD18:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_829CFD20:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfd38
	if (ctx.cr6.eq) goto loc_829CFD38;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823f27a8
	ctx.lr = 0x829CFD38;
	sub_823F27A8(ctx, base);
loc_829CFD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829CFD40;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829CFD54"))) PPC_WEAK_FUNC(sub_829CFD54);
PPC_FUNC_IMPL(__imp__sub_829CFD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CFD58"))) PPC_WEAK_FUNC(sub_829CFD58);
PPC_FUNC_IMPL(__imp__sub_829CFD58) {
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
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cfd98
	if (ctx.cr6.eq) goto loc_829CFD98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfd94
	if (ctx.cr6.eq) goto loc_829CFD94;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cfd9c
	goto loc_829CFD9C;
loc_829CFD94:
	// bl 0x821940c8
	ctx.lr = 0x829CFD98;
	sub_821940C8(ctx, base);
loc_829CFD98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFD9C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829cfea0
	if (ctx.cr6.eq) goto loc_829CFEA0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cfdd8
	if (ctx.cr6.eq) goto loc_829CFDD8;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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
	// b 0x829cfea8
	goto loc_829CFEA8;
loc_829CFDD8:
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
	// ble 0x829cfe48
	if (!ctx.cr0.gt) goto loc_829CFE48;
loc_829CFDF8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cfe18
	if (ctx.cr6.lt) goto loc_829CFE18;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CFE18:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cfe34
	if (ctx.cr6.eq) goto loc_829CFE34;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cfe3c
	goto loc_829CFE3C;
loc_829CFE34:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CFE3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cfdf8
	if (ctx.cr6.gt) goto loc_829CFDF8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CFE48:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829cfe8c
	if (ctx.cr6.eq) goto loc_829CFE8C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829cfe64
	if (ctx.cr6.gt) goto loc_829CFE64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFE64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829cfe8c
	if (!ctx.cr6.eq) goto loc_829CFE8C;
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
	// b 0x829cfea8
	goto loc_829CFEA8;
loc_829CFE8C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829cfea8
	goto loc_829CFEA8;
loc_829CFEA0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFEA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cfedc
	if (ctx.cr6.eq) goto loc_829CFEDC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-840
	ctx.r4.s64 = ctx.r11.s64 + -840;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829CFEC8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1f88
	ctx.lr = 0x829CFED4;
	sub_823F1F88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829CFEDC;
	sub_82214F08(ctx, base);
loc_829CFEDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829CFEE4;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829CFEFC"))) PPC_WEAK_FUNC(sub_829CFEFC);
PPC_FUNC_IMPL(__imp__sub_829CFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829CFF00"))) PPC_WEAK_FUNC(sub_829CFF00);
PPC_FUNC_IMPL(__imp__sub_829CFF00) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829cff3c
	if (ctx.cr6.eq) goto loc_829CFF3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cff38
	if (ctx.cr6.eq) goto loc_829CFF38;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829cff40
	goto loc_829CFF40;
loc_829CFF38:
	// bl 0x821940c8
	ctx.lr = 0x829CFF3C;
	sub_821940C8(ctx, base);
loc_829CFF3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829CFF40:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d0038
	if (ctx.cr6.eq) goto loc_829D0038;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829cff78
	if (ctx.cr6.eq) goto loc_829CFF78;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x829d0040
	goto loc_829D0040;
loc_829CFF78:
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
	// ble 0x829cffe8
	if (!ctx.cr0.gt) goto loc_829CFFE8;
loc_829CFF98:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829cffb8
	if (ctx.cr6.lt) goto loc_829CFFB8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829CFFB8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829cffd4
	if (ctx.cr6.eq) goto loc_829CFFD4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829cffdc
	goto loc_829CFFDC;
loc_829CFFD4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829CFFDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829cff98
	if (ctx.cr6.gt) goto loc_829CFF98;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829CFFE8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0028
	if (ctx.cr6.eq) goto loc_829D0028;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0004
	if (ctx.cr6.gt) goto loc_829D0004;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D0004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0028
	if (!ctx.cr6.eq) goto loc_829D0028;
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
	// b 0x829d0040
	goto loc_829D0040;
loc_829D0028:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x829d0040
	goto loc_829D0040;
loc_829D0038:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_829D0040:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0058
	if (ctx.cr6.eq) goto loc_829D0058;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823f27a8
	ctx.lr = 0x829D0058;
	sub_823F27A8(ctx, base);
loc_829D0058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829D0060;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829D0074"))) PPC_WEAK_FUNC(sub_829D0074);
PPC_FUNC_IMPL(__imp__sub_829D0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0078"))) PPC_WEAK_FUNC(sub_829D0078);
PPC_FUNC_IMPL(__imp__sub_829D0078) {
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
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d00b8
	if (ctx.cr6.eq) goto loc_829D00B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d00b4
	if (ctx.cr6.eq) goto loc_829D00B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d00bc
	goto loc_829D00BC;
loc_829D00B4:
	// bl 0x821940c8
	ctx.lr = 0x829D00B8;
	sub_821940C8(ctx, base);
loc_829D00B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D00BC:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d01c0
	if (ctx.cr6.eq) goto loc_829D01C0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d00f8
	if (ctx.cr6.eq) goto loc_829D00F8;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
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
	// b 0x829d01c8
	goto loc_829D01C8;
loc_829D00F8:
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
	// ble 0x829d0168
	if (!ctx.cr0.gt) goto loc_829D0168;
loc_829D0118:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0138
	if (ctx.cr6.lt) goto loc_829D0138;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829D0138:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0154
	if (ctx.cr6.eq) goto loc_829D0154;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d015c
	goto loc_829D015C;
loc_829D0154:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D015C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0118
	if (ctx.cr6.gt) goto loc_829D0118;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0168:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d01ac
	if (ctx.cr6.eq) goto loc_829D01AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0184
	if (ctx.cr6.gt) goto loc_829D0184;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D0184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d01ac
	if (!ctx.cr6.eq) goto loc_829D01AC;
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
	// b 0x829d01c8
	goto loc_829D01C8;
loc_829D01AC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d01c8
	goto loc_829D01C8;
loc_829D01C0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D01C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d01fc
	if (ctx.cr6.eq) goto loc_829D01FC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829D01E8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1f88
	ctx.lr = 0x829D01F4;
	sub_823F1F88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829D01FC;
	sub_82214F08(ctx, base);
loc_829D01FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829D0204;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829D021C"))) PPC_WEAK_FUNC(sub_829D021C);
PPC_FUNC_IMPL(__imp__sub_829D021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0220"))) PPC_WEAK_FUNC(sub_829D0220);
PPC_FUNC_IMPL(__imp__sub_829D0220) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d025c
	if (ctx.cr6.eq) goto loc_829D025C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0258
	if (ctx.cr6.eq) goto loc_829D0258;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d0260
	goto loc_829D0260;
loc_829D0258:
	// bl 0x821940c8
	ctx.lr = 0x829D025C;
	sub_821940C8(ctx, base);
loc_829D025C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D0260:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d0358
	if (ctx.cr6.eq) goto loc_829D0358;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0298
	if (ctx.cr6.eq) goto loc_829D0298;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x829d0360
	goto loc_829D0360;
loc_829D0298:
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
	// ble 0x829d0308
	if (!ctx.cr0.gt) goto loc_829D0308;
loc_829D02B8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d02d8
	if (ctx.cr6.lt) goto loc_829D02D8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829D02D8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d02f4
	if (ctx.cr6.eq) goto loc_829D02F4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d02fc
	goto loc_829D02FC;
loc_829D02F4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D02FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d02b8
	if (ctx.cr6.gt) goto loc_829D02B8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0308:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0348
	if (ctx.cr6.eq) goto loc_829D0348;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0324
	if (ctx.cr6.gt) goto loc_829D0324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D0324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0348
	if (!ctx.cr6.eq) goto loc_829D0348;
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
	// b 0x829d0360
	goto loc_829D0360;
loc_829D0348:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x829d0360
	goto loc_829D0360;
loc_829D0358:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_829D0360:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0378
	if (ctx.cr6.eq) goto loc_829D0378;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823f27a8
	ctx.lr = 0x829D0378;
	sub_823F27A8(ctx, base);
loc_829D0378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829D0380;
	sub_821E32F8(ctx, base);
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

__attribute__((alias("__imp__sub_829D0394"))) PPC_WEAK_FUNC(sub_829D0394);
PPC_FUNC_IMPL(__imp__sub_829D0394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0398"))) PPC_WEAK_FUNC(sub_829D0398);
PPC_FUNC_IMPL(__imp__sub_829D0398) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821936e8
	ctx.lr = 0x829D03C4;
	sub_821936E8(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// addi r4,r8,-752
	ctx.r4.s64 = ctx.r8.s64 + -752;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3e78
	ctx.lr = 0x829D03F0;
	sub_821E3E78(ctx, base);
	// stb r3,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_829D0410"))) PPC_WEAK_FUNC(sub_829D0410);
PPC_FUNC_IMPL(__imp__sub_829D0410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829D0418;
	sub_82CA2BE8(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821e32f8
	ctx.lr = 0x829D042C;
	sub_821E32F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// lfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// lbz r11,122(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0450
	if (ctx.cr6.eq) goto loc_829D0450;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f30,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f30.f64 = double(temp.f32);
	// b 0x829d0454
	goto loc_829D0454;
loc_829D0450:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_829D0454:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x829D045C;
	sub_8221F388(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x829d04d4
	if (ctx.cr6.eq) goto loc_829D04D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r10,r11,7660
	ctx.r10.s64 = ctx.r11.s64 + 7660;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r28,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r28.u8);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f30,48(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r30,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r30.u8);
	// stfs f31,56(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// stfs f31,60(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r30,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r30.u8);
	// stb r30,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r30.u8);
	// stb r30,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r30.u8);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stb r28,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r28.u8);
	// b 0x829d04d8
	goto loc_829D04D8;
loc_829D04D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D04D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821bbcb0
	ctx.lr = 0x829D04E0;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226be28
	ctx.lr = 0x829D04EC;
	sub_8226BE28(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x829D04F4;
	sub_829FF648(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0520
	if (ctx.cr6.eq) goto loc_829D0520;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d051c
	if (ctx.cr6.eq) goto loc_829D051C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d0524
	goto loc_829D0524;
loc_829D051C:
	// bl 0x821940c8
	ctx.lr = 0x829D0520;
	sub_821940C8(ctx, base);
loc_829D0520:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829D0524:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d0624
	if (ctx.cr6.eq) goto loc_829D0624;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0560
	if (ctx.cr6.eq) goto loc_829D0560;
	// lbz r10,97(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x829d0628
	goto loc_829D0628;
loc_829D0560:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
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
	// ble 0x829d05cc
	if (!ctx.cr0.gt) goto loc_829D05CC;
loc_829D057C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,97
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 97, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x829d059c
	if (ctx.cr6.lt) goto loc_829D059C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_829D059C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d05b8
	if (ctx.cr6.eq) goto loc_829D05B8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d05c0
	goto loc_829D05C0;
loc_829D05B8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D05C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d057c
	if (ctx.cr6.gt) goto loc_829D057C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D05CC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0610
	if (ctx.cr6.eq) goto loc_829D0610;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x829d05e8
	if (ctx.cr6.gt) goto loc_829D05E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829D05E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0610
	if (!ctx.cr6.eq) goto loc_829D0610;
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
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x829d0628
	goto loc_829D0628;
loc_829D0610:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x829d0628
	goto loc_829D0628;
loc_829D0624:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829D0628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0658
	if (ctx.cr6.eq) goto loc_829D0658;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lbz r10,-27892(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27892);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d064c
	if (ctx.cr6.eq) goto loc_829D064C;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// b 0x829d0650
	goto loc_829D0650;
loc_829D064C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_829D0650:
	// stb r11,121(r29)
	PPC_STORE_U8(ctx.r29.u32 + 121, ctx.r11.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
loc_829D0658:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829D0668"))) PPC_WEAK_FUNC(sub_829D0668);
PPC_FUNC_IMPL(__imp__sub_829D0668) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d06ac
	if (ctx.cr6.eq) goto loc_829D06AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d06a8
	if (ctx.cr6.eq) goto loc_829D06A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d06b0
	goto loc_829D06B0;
loc_829D06A8:
	// bl 0x821940c8
	ctx.lr = 0x829D06AC;
	sub_821940C8(ctx, base);
loc_829D06AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D06B0:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d07b0
	if (ctx.cr6.eq) goto loc_829D07B0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d06ec
	if (ctx.cr6.eq) goto loc_829D06EC;
	// lbz r9,97(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d07b4
	goto loc_829D07B4;
loc_829D06EC:
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
	// ble 0x829d0758
	if (!ctx.cr0.gt) goto loc_829D0758;
loc_829D0708:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,97
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 97, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0728
	if (ctx.cr6.lt) goto loc_829D0728;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_829D0728:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0744
	if (ctx.cr6.eq) goto loc_829D0744;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d074c
	goto loc_829D074C;
loc_829D0744:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D074C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0708
	if (ctx.cr6.gt) goto loc_829D0708;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0758:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d079c
	if (ctx.cr6.eq) goto loc_829D079C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0774
	if (ctx.cr6.gt) goto loc_829D0774;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0774:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d079c
	if (!ctx.cr6.eq) goto loc_829D079C;
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
	// b 0x829d07b4
	goto loc_829D07B4;
loc_829D079C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d07b4
	goto loc_829D07B4;
loc_829D07B0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D07B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d07d0
	if (ctx.cr6.eq) goto loc_829D07D0;
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x822bda90
	ctx.lr = 0x829D07D0;
	sub_822BDA90(ctx, base);
loc_829D07D0:
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

__attribute__((alias("__imp__sub_829D07E8"))) PPC_WEAK_FUNC(sub_829D07E8);
PPC_FUNC_IMPL(__imp__sub_829D07E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0838
	if (ctx.cr6.eq) goto loc_829D0838;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0890
	if (ctx.cr6.eq) goto loc_829D0890;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0838
	if (ctx.cr6.eq) goto loc_829D0838;
	// lbz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829d083c
	if (!ctx.cr6.eq) goto loc_829D083C;
loc_829D0838:
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D083C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d08b8
	if (ctx.cr6.eq) goto loc_829D08B8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x829D0850;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d0898
	if (ctx.cr6.eq) goto loc_829D0898;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-19092
	ctx.r7.s64 = ctx.r9.s64 + -19092;
	// lfs f0,-28512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f13,-27468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x829d089c
	goto loc_829D089C;
loc_829D0890:
	// bl 0x821940c8
	ctx.lr = 0x829D0894;
	sub_821940C8(ctx, base);
	// b 0x829d0838
	goto loc_829D0838;
loc_829D0898:
	// li r4,0
	ctx.r4.s64 = 0;
loc_829D089C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bbcb0
	ctx.lr = 0x829D08A4;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226be28
	ctx.lr = 0x829D08B0;
	sub_8226BE28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x829D08B8;
	sub_829FF648(ctx, base);
loc_829D08B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829d0410
	ctx.lr = 0x829D08C0;
	sub_829D0410(ctx, base);
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

__attribute__((alias("__imp__sub_829D08D4"))) PPC_WEAK_FUNC(sub_829D08D4);
PPC_FUNC_IMPL(__imp__sub_829D08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D08D8"))) PPC_WEAK_FUNC(sub_829D08D8);
PPC_FUNC_IMPL(__imp__sub_829D08D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829D08E0;
	sub_82CA2BE8(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0c68
	if (!ctx.cr6.eq) goto loc_829D0C68;
	// bl 0x82455f20
	ctx.lr = 0x829D0900;
	sub_82455F20(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d0920
	if (ctx.cr6.eq) goto loc_829D0920;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829d0924
	if (!ctx.cr6.eq) goto loc_829D0924;
loc_829D0920:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0924:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0d98
	if (ctx.cr6.eq) goto loc_829D0D98;
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// addi r29,r28,124
	ctx.r29.s64 = ctx.r28.s64 + 124;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0d98
	if (ctx.cr6.eq) goto loc_829D0D98;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d0d98
	if (ctx.cr6.eq) goto loc_829D0D98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D0958;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0a58
	if (ctx.cr6.eq) goto loc_829D0A58;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0994
	if (ctx.cr6.eq) goto loc_829D0994;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
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
	// b 0x829d0a5c
	goto loc_829D0A5C;
loc_829D0994:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x829d0a00
	if (!ctx.cr0.gt) goto loc_829D0A00;
loc_829D09B0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d09d0
	if (ctx.cr6.lt) goto loc_829D09D0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_829D09D0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d09ec
	if (ctx.cr6.eq) goto loc_829D09EC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d09f4
	goto loc_829D09F4;
loc_829D09EC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D09F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d09b0
	if (ctx.cr6.gt) goto loc_829D09B0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0A00:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0a44
	if (ctx.cr6.eq) goto loc_829D0A44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0a1c
	if (ctx.cr6.gt) goto loc_829D0A1C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0A1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0a44
	if (!ctx.cr6.eq) goto loc_829D0A44;
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
	// b 0x829d0a5c
	goto loc_829D0A5C;
loc_829D0A44:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d0a5c
	goto loc_829D0A5C;
loc_829D0A58:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0A5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0d98
	if (ctx.cr6.eq) goto loc_829D0D98;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r8,r11,28344
	ctx.r8.s64 = ctx.r11.s64 + 28344;
loc_829D0A74:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829d0a74
	if (!ctx.cr0.eq) goto loc_829D0A74;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r4,-28224
	ctx.r11.s64 = ctx.r4.s64 + -28224;
	// lfs f0,-27456(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,0
	ctx.r5.s64 = 0;
	// vand v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8218b4d0
	ctx.lr = 0x829D0AE4;
	sub_8218B4D0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d0c50
	if (ctx.cr6.eq) goto loc_829D0C50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82455f20
	ctx.lr = 0x829D0AF8;
	sub_82455F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829D0B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,-10292(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -10292);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829d0c50
	if (!ctx.cr6.lt) goto loc_829D0C50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D0B50;
	sub_824C7F08(ctx, base);
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0c30
	if (ctx.cr6.eq) goto loc_829D0C30;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0b84
	if (ctx.cr6.eq) goto loc_829D0B84;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x829d0c30
	goto loc_829D0C30;
loc_829D0B84:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x829d0bf0
	if (!ctx.cr0.gt) goto loc_829D0BF0;
loc_829D0BA0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0bc0
	if (ctx.cr6.lt) goto loc_829D0BC0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_829D0BC0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0bdc
	if (ctx.cr6.eq) goto loc_829D0BDC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d0be4
	goto loc_829D0BE4;
loc_829D0BDC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D0BE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0ba0
	if (ctx.cr6.gt) goto loc_829D0BA0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0BF0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0c28
	if (ctx.cr6.eq) goto loc_829D0C28;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0c0c
	if (ctx.cr6.gt) goto loc_829D0C0C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0C0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0c28
	if (!ctx.cr6.eq) goto loc_829D0C28;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829d0c2c
	goto loc_829D0C2C;
loc_829D0C28:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_829D0C2C:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_829D0C30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82455f20
	ctx.lr = 0x829D0C38;
	sub_82455F20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500da0
	ctx.lr = 0x829D0C48;
	sub_82500DA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r28)
	PPC_STORE_U8(ctx.r28.u32 + 128, ctx.r11.u8);
loc_829D0C50:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82214f08
	ctx.lr = 0x829D0C58;
	sub_82214F08(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_829D0C68:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f31,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829D0C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829D0C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x829d0d98
	if (!ctx.cr6.gt) goto loc_829D0D98;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x829d0d1c
	if (!ctx.cr0.gt) goto loc_829D0D1C;
loc_829D0CC4:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0cec
	if (ctx.cr6.lt) goto loc_829D0CEC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_829D0CEC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0d08
	if (ctx.cr6.eq) goto loc_829D0D08;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d0d10
	goto loc_829D0D10;
loc_829D0D08:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829D0D10:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0cc4
	if (ctx.cr6.gt) goto loc_829D0CC4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_829D0D1C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0d54
	if (ctx.cr6.eq) goto loc_829D0D54;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0d38
	if (ctx.cr6.gt) goto loc_829D0D38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0D38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0d54
	if (!ctx.cr6.eq) goto loc_829D0D54;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829d0d58
	goto loc_829D0D58;
loc_829D0D54:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_829D0D58:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d0d70
	if (ctx.cr6.eq) goto loc_829D0D70;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d0d74
	goto loc_829D0D74;
loc_829D0D70:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0D74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0d98
	if (ctx.cr6.eq) goto loc_829D0D98;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829D0D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_829D0D98:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829D0DA8"))) PPC_WEAK_FUNC(sub_829D0DA8);
PPC_FUNC_IMPL(__imp__sub_829D0DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d0668
	sub_829D0668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0DAC"))) PPC_WEAK_FUNC(sub_829D0DAC);
PPC_FUNC_IMPL(__imp__sub_829D0DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0DB0"))) PPC_WEAK_FUNC(sub_829D0DB0);
PPC_FUNC_IMPL(__imp__sub_829D0DB0) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0f04
	if (ctx.cr6.eq) goto loc_829D0F04;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d0f04
	if (ctx.cr6.eq) goto loc_829D0F04;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x824c7f08
	ctx.lr = 0x829D0DE8;
	sub_824C7F08(ctx, base);
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d0ee8
	if (ctx.cr6.eq) goto loc_829D0EE8;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0e24
	if (ctx.cr6.eq) goto loc_829D0E24;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
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
	// b 0x829d0eec
	goto loc_829D0EEC;
loc_829D0E24:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
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
	// ble 0x829d0e90
	if (!ctx.cr0.gt) goto loc_829D0E90;
loc_829D0E40:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0e60
	if (ctx.cr6.lt) goto loc_829D0E60;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_829D0E60:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0e7c
	if (ctx.cr6.eq) goto loc_829D0E7C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d0e84
	goto loc_829D0E84;
loc_829D0E7C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D0E84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0e40
	if (ctx.cr6.gt) goto loc_829D0E40;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D0E90:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d0ed4
	if (ctx.cr6.eq) goto loc_829D0ED4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0eac
	if (ctx.cr6.gt) goto loc_829D0EAC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0EAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d0ed4
	if (!ctx.cr6.eq) goto loc_829D0ED4;
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
	// b 0x829d0eec
	goto loc_829D0EEC;
loc_829D0ED4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d0eec
	goto loc_829D0EEC;
loc_829D0EE8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829D0EEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d0f04
	if (ctx.cr6.eq) goto loc_829D0F04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825022e8
	ctx.lr = 0x829D0F04;
	sub_825022E8(ctx, base);
loc_829D0F04:
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

__attribute__((alias("__imp__sub_829D0F1C"))) PPC_WEAK_FUNC(sub_829D0F1C);
PPC_FUNC_IMPL(__imp__sub_829D0F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0F20"))) PPC_WEAK_FUNC(sub_829D0F20);
PPC_FUNC_IMPL(__imp__sub_829D0F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x829d0410
	sub_829D0410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829D0F24"))) PPC_WEAK_FUNC(sub_829D0F24);
PPC_FUNC_IMPL(__imp__sub_829D0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D0F28"))) PPC_WEAK_FUNC(sub_829D0F28);
PPC_FUNC_IMPL(__imp__sub_829D0F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829D0F30;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x829d0fd0
	if (!ctx.cr0.gt) goto loc_829D0FD0;
loc_829D0F78:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d0fa0
	if (ctx.cr6.lt) goto loc_829D0FA0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_829D0FA0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d0fbc
	if (ctx.cr6.eq) goto loc_829D0FBC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d0fc4
	goto loc_829D0FC4;
loc_829D0FBC:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829D0FC4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d0f78
	if (ctx.cr6.gt) goto loc_829D0F78;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_829D0FD0:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d1008
	if (ctx.cr6.eq) goto loc_829D1008;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d0fec
	if (ctx.cr6.gt) goto loc_829D0FEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D0FEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d1008
	if (!ctx.cr6.eq) goto loc_829D1008;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829d100c
	goto loc_829D100C;
loc_829D1008:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_829D100C:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d1024
	if (ctx.cr6.eq) goto loc_829D1024;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d102c
	goto loc_829D102C;
loc_829D1024:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_829D102C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1290
	if (ctx.cr6.eq) goto loc_829D1290;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829D1048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d1290
	if (ctx.cr6.eq) goto loc_829D1290;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d3d80
	ctx.lr = 0x829D105C;
	sub_822D3D80(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x824c7f08
	ctx.lr = 0x829D106C;
	sub_824C7F08(ctx, base);
	// bl 0x82207928
	ctx.lr = 0x829D1070;
	sub_82207928(ctx, base);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-8700
	ctx.r30.s64 = ctx.r11.s64 + -8700;
	// lfd f0,-27376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27376);
	// fdiv f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 / ctx.f0.f64;
	// lfs f31,-18756(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18756);
	ctx.f31.f64 = double(temp.f32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f29,f0
	ctx.f30.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x829d10a0
	if (!ctx.cr6.lt) goto loc_829D10A0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_829D10A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D10A8;
	sub_824C7F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e70c8
	ctx.lr = 0x829D10B4;
	sub_821E70C8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r28,144
	ctx.r29.s64 = ctx.r28.s64 + 144;
	// lvx128 v2,r0,r29
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82260808
	ctx.lr = 0x829D10CC;
	sub_82260808(ctx, base);
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v13,v127,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x9C));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v12,v127,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x78));
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lfs f0,-18768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -18768);
	ctx.f0.f64 = double(temp.f32);
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v9,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f13,512(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// vmulfp128 v8,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// fmuls f13,f1,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// vsubfp v7,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x829d1118
	if (!ctx.cr6.gt) goto loc_829D1118;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_829D1118:
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lvlx v1,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v1,v12,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lfs f0,476(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-28492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28492);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// vrlimi128 v1,v13,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// bl 0x822aa498
	ctx.lr = 0x829D1174;
	sub_822AA498(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D117C;
	sub_824C7F08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// vspltw128 v11,v127,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vspltw128 v10,v127,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vspltw128 v9,v127,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lvx128 v8,r0,r5
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v7,v8,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v6,r0,r4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r11
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v4,v10,v6,v7
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v1,v9,v5,v4
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v4.f32)));
	// bl 0x822664d8
	ctx.lr = 0x829D11B4;
	sub_822664D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D11BC;
	sub_824C7F08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x829D11D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D11E0;
	sub_824C7F08(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,68(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x829D11FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x8220ca28
	ctx.lr = 0x829D1218;
	sub_8220CA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d3d80
	ctx.lr = 0x829D1224;
	sub_822D3D80(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f4c68
	ctx.lr = 0x829D1238;
	sub_821F4C68(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821927c8
	ctx.lr = 0x829D1248;
	sub_821927C8(ctx, base);
	// fdivs f12,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f29.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v126,r28,r9
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x824c7f08
	ctx.lr = 0x829D1264;
	sub_824C7F08(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vsubfp128 v3,v126,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v127.f32)));
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r4,0
	ctx.r4.s64 = 0;
	// lvlx v2,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// vspltw v1,v2,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// lwz r6,128(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// vmulfp128 v1,v3,v1
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x829D1290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829D1290:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_829D12B4"))) PPC_WEAK_FUNC(sub_829D12B4);
PPC_FUNC_IMPL(__imp__sub_829D12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D12B8"))) PPC_WEAK_FUNC(sub_829D12B8);
PPC_FUNC_IMPL(__imp__sub_829D12B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x829D12C0;
	sub_82CA2BD4(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x829d0410
	ctx.lr = 0x829D12F0;
	sub_829D0410(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r3,r24,12
	ctx.r3.s64 = ctx.r24.s64 + 12;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d131c
	if (ctx.cr6.eq) goto loc_829D131C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d1318
	if (ctx.cr6.eq) goto loc_829D1318;
	// rotlwi r26,r10,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d1320
	goto loc_829D1320;
loc_829D1318:
	// bl 0x821940c8
	ctx.lr = 0x829D131C;
	sub_821940C8(ctx, base);
loc_829D131C:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_829D1320:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x829d1340
	if (ctx.cr6.eq) goto loc_829D1340;
	// lbz r11,144(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829d1344
	if (!ctx.cr6.eq) goto loc_829D1344;
loc_829D1340:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829D1344:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d1450
	if (ctx.cr6.eq) goto loc_829D1450;
	// lwz r11,140(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d138c
	if (ctx.cr6.eq) goto loc_829D138C;
	// lbz r10,245(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 245);
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d1454
	goto loc_829D1454;
loc_829D138C:
	// lwz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r6,76(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x829d13f8
	if (!ctx.cr0.gt) goto loc_829D13F8;
loc_829D13A8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,245
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 245, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d13c8
	if (ctx.cr6.lt) goto loc_829D13C8;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_829D13C8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d13e4
	if (ctx.cr6.eq) goto loc_829D13E4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d13ec
	goto loc_829D13EC;
loc_829D13E4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D13EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d13a8
	if (ctx.cr6.gt) goto loc_829D13A8;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_829D13F8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d143c
	if (ctx.cr6.eq) goto loc_829D143C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,245
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 245, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d1414
	if (ctx.cr6.gt) goto loc_829D1414;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829D1414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d143c
	if (!ctx.cr6.eq) goto loc_829D143C;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d1454
	goto loc_829D1454;
loc_829D143C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d1454
	goto loc_829D1454;
loc_829D1450:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829D1454:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// lwz r3,124(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829D1474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ab678
	ctx.lr = 0x829D1488;
	sub_822AB678(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,124(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 124);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x829d1860
	if (ctx.cr6.lt) goto loc_829D1860;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829d1860
	if (ctx.cr6.eq) goto loc_829D1860;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-18308
	ctx.r29.s64 = ctx.r11.s64 + -18308;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f30,-9148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -9148);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f31,-9160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -9160);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vor128 v127,v11,v11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// bl 0x824c7f08
	ctx.lr = 0x829D1530;
	sub_824C7F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e70c8
	ctx.lr = 0x829D153C;
	sub_821E70C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// vpermwi128 v10,v127,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x9C));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v9,v127,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x78));
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v8,r0,r6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v7,v8,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vpermwi128 v6,v8,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// lfs f1,-25888(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// vmulfp128 v5,v7,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v4,v6,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x829D1578;
	sub_82260BC8(ctx, base);
	// lwz r3,0(r13)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x829D1590;
	sub_82D4EC28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// bl 0x82d849b8
	ctx.lr = 0x829D15A8;
	sub_82D849B8(ctx, base);
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,1748(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1748);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// addi r4,r8,-3912
	ctx.r4.s64 = ctx.r8.s64 + -3912;
	// lvx128 v2,r0,r9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r7,-15988
	ctx.r3.s64 = ctx.r7.s64 + -15988;
	// addi r10,r6,-15956
	ctx.r10.s64 = ctx.r6.s64 + -15956;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stvx128 v2,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,52(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x829D1614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lvlx v1,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvlx v30,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v29,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,272
	ctx.r5.s64 = 272;
	// lvlx v25,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v31,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v31,v1,4,3
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 57), 4));
	// lvlx v27,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v29,v30,4,3
	_mm_store_ps(ctx.v29.f32, _mm_blend_ps(_mm_load_ps(ctx.v29.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 57), 4));
	// lvlx v28,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vrlimi128 v27,v28,4,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v28.f32), 57), 4));
	// lvlx v26,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v25,v26,4,3
	_mm_store_ps(ctx.v25.f32, _mm_blend_ps(_mm_load_ps(ctx.v25.f32), _mm_permute_ps(_mm_load_ps(ctx.v26.f32), 57), 4));
	// vrlimi128 v25,v27,3,2
	_mm_store_ps(ctx.v25.f32, _mm_blend_ps(_mm_load_ps(ctx.v25.f32), _mm_permute_ps(_mm_load_ps(ctx.v27.f32), 78), 3));
	// lvx128 v126,r28,r5
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v31,v29,3,2
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 3));
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// vsubfp128 v125,v126,v25
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v125.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v25.f32)));
	// vaddfp128 v127,v126,v31
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v31.f32)));
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823d0b30
	ctx.lr = 0x829D16BC;
	sub_823D0B30(ctx, base);
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829D16E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x829d1740
	if (!ctx.cr6.gt) goto loc_829D1740;
loc_829D16F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821b9e30
	ctx.lr = 0x829D1704;
	sub_821B9E30(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x829d1730
	if (!ctx.cr6.eq) goto loc_829D1730;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822b6c20
	ctx.lr = 0x829D1718;
	sub_822B6C20(ctx, base);
	// vsubfp128 v0,v125,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v127.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v126,v13,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddcfp128 v126,v0,v126,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v126.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v126.f32)), _mm_load_ps(ctx.v127.f32)));
loc_829D1730:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829d16f8
	if (ctx.cr6.lt) goto loc_829D16F8;
loc_829D1740:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f31,-9136(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -9136);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f30,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r31,10
	ctx.r31.s64 = 10;
	// stvx128 v126,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r29,r11,-28192
	ctx.r29.s64 = ctx.r11.s64 + -28192;
	// addi r28,r10,-28208
	ctx.r28.s64 = ctx.r10.s64 + -28208;
	// addi r27,r9,-636
	ctx.r27.s64 = ctx.r9.s64 + -636;
	// addi r26,r8,-652
	ctx.r26.s64 = ctx.r8.s64 + -652;
loc_829D177C:
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x821f0890
	ctx.lr = 0x829D1798;
	sub_821F0890(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v127,v126,v13,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821f0890
	ctx.lr = 0x829D17D8;
	sub_821F0890(ctx, base);
	// fsubs f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v127,v127,v12,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// bl 0x8222cf18
	ctx.lr = 0x829D1808;
	sub_8222CF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x829D1818;
	sub_8222CF18(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82391198
	ctx.lr = 0x829D1834;
	sub_82391198(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x829D183C;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x829D1844;
	sub_82214F08(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x829d177c
	if (!ctx.cr0.eq) goto loc_829D177C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823d0c98
	ctx.lr = 0x829D1854;
	sub_823D0C98(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-7728
	ctx.r10.s64 = ctx.r11.s64 + -7728;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_829D1860:
	// lwz r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r6,28(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x829d18d8
	if (!ctx.cr0.gt) goto loc_829D18D8;
loc_829D1880:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x829d18a8
	if (ctx.cr6.lt) goto loc_829D18A8;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_829D18A8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d18c4
	if (ctx.cr6.eq) goto loc_829D18C4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d18cc
	goto loc_829D18CC;
loc_829D18C4:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829D18CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d1880
	if (ctx.cr6.gt) goto loc_829D1880;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_829D18D8:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d1910
	if (ctx.cr6.eq) goto loc_829D1910;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x829d18f4
	if (ctx.cr6.gt) goto loc_829D18F4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829D18F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d1910
	if (!ctx.cr6.eq) goto loc_829D1910;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x829d1914
	goto loc_829D1914;
loc_829D1910:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_829D1914:
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d192c
	if (ctx.cr6.eq) goto loc_829D192C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829d1934
	goto loc_829D1934;
loc_829D192C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_829D1934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1990
	if (ctx.cr6.eq) goto loc_829D1990;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829D1950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d1990
	if (ctx.cr6.eq) goto loc_829D1990;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27380);
	// stw r11,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r11.u32);
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d3d80
	ctx.lr = 0x829D196C;
	sub_822D3D80(ctx, base);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lfd f0,-27376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27376);
	// lwz r11,128(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,132(r24)
	PPC_STORE_U32(ctx.r24.u32 + 132, ctx.r9.u32);
loc_829D1990:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v125,r1,r0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_829D19BC"))) PPC_WEAK_FUNC(sub_829D19BC);
PPC_FUNC_IMPL(__imp__sub_829D19BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D19C0"))) PPC_WEAK_FUNC(sub_829D19C0);
PPC_FUNC_IMPL(__imp__sub_829D19C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x829D19C8;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1a04
	if (ctx.cr6.eq) goto loc_829D1A04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d1a00
	if (ctx.cr6.eq) goto loc_829D1A00;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x829d1a08
	goto loc_829D1A08;
loc_829D1A00:
	// bl 0x821940c8
	ctx.lr = 0x829D1A04;
	sub_821940C8(ctx, base);
loc_829D1A04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1A08:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d1b0c
	if (ctx.cr6.eq) goto loc_829D1B0C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d1a48
	if (ctx.cr6.eq) goto loc_829D1A48;
	// lbz r10,97(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1b10
	goto loc_829D1B10;
loc_829D1A48:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
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
	// ble 0x829d1ab4
	if (!ctx.cr0.gt) goto loc_829D1AB4;
loc_829D1A64:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,97
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 97, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// blt cr6,0x829d1a84
	if (ctx.cr6.lt) goto loc_829D1A84;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_829D1A84:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d1aa0
	if (ctx.cr6.eq) goto loc_829D1AA0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d1aa8
	goto loc_829D1AA8;
loc_829D1AA0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D1AA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d1a64
	if (ctx.cr6.gt) goto loc_829D1A64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D1AB4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d1af8
	if (ctx.cr6.eq) goto loc_829D1AF8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bgt cr6,0x829d1ad0
	if (ctx.cr6.gt) goto loc_829D1AD0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1AD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d1af8
	if (!ctx.cr6.eq) goto loc_829D1AF8;
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
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1b10
	goto loc_829D1B10;
loc_829D1AF8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1b10
	goto loc_829D1B10;
loc_829D1B0C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1B10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1d6c
	if (ctx.cr6.eq) goto loc_829D1D6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a95c8
	ctx.lr = 0x829D1B24;
	sub_822A95C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1d6c
	if (ctx.cr6.eq) goto loc_829D1D6C;
	// lwz r10,128(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lwz r8,132(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,-27380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27380);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// ble 0x829d1e50
	if (!ctx.cr0.gt) goto loc_829D1E50;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x829d1e50
	if (ctx.cr6.gt) goto loc_829D1E50;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f31,-17760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17760);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r8,r11,r9
	ctx.r8.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf. r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x829d1e50
	if (!ctx.cr0.eq) goto loc_829D1E50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82455f20
	ctx.lr = 0x829D1BA4;
	sub_82455F20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d1bc0
	if (ctx.cr6.eq) goto loc_829D1BC0;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829d1bc4
	if (!ctx.cr6.eq) goto loc_829D1BC4;
loc_829D1BC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1BC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1e50
	if (ctx.cr6.eq) goto loc_829D1E50;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829d1cc8
	if (ctx.cr6.eq) goto loc_829D1CC8;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1c0c
	if (ctx.cr6.eq) goto loc_829D1C0C;
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x829d1ccc
	goto loc_829D1CCC;
loc_829D1C0C:
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
	// ble 0x829d1c78
	if (!ctx.cr0.gt) goto loc_829D1C78;
loc_829D1C28:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// blt cr6,0x829d1c48
	if (ctx.cr6.lt) goto loc_829D1C48;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_829D1C48:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d1c64
	if (ctx.cr6.eq) goto loc_829D1C64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d1c6c
	goto loc_829D1C6C;
loc_829D1C64:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_829D1C6C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d1c28
	if (ctx.cr6.gt) goto loc_829D1C28;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_829D1C78:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d1cb8
	if (ctx.cr6.eq) goto loc_829D1CB8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bgt cr6,0x829d1c94
	if (ctx.cr6.gt) goto loc_829D1C94;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1C94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d1cb8
	if (!ctx.cr6.eq) goto loc_829D1CB8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1ccc
	goto loc_829D1CCC;
loc_829D1CB8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1ccc
	goto loc_829D1CCC;
loc_829D1CC8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1CCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1e50
	if (ctx.cr6.eq) goto loc_829D1E50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824831e8
	ctx.lr = 0x829D1CE0;
	sub_824831E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x829D1CE8;
	sub_824C7F08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x829D1D04;
	sub_822149C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82978470
	ctx.lr = 0x829D1D10;
	sub_82978470(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x829D1D24;
	sub_821940C8(ctx, base);
	// lwz r6,188(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r7,-29400
	ctx.r11.s64 = ctx.r7.s64 + -29400;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82485be8
	ctx.lr = 0x829D1D58;
	sub_82485BE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237d608
	ctx.lr = 0x829D1D60;
	sub_8237D608(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_829D1D6C:
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x829d1de8
	if (!ctx.cr0.gt) goto loc_829D1DE8;
loc_829D1D90:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// blt cr6,0x829d1db8
	if (ctx.cr6.lt) goto loc_829D1DB8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_829D1DB8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x829d1dd4
	if (ctx.cr6.eq) goto loc_829D1DD4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x829d1ddc
	goto loc_829D1DDC;
loc_829D1DD4:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829D1DDC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x829d1d90
	if (ctx.cr6.gt) goto loc_829D1D90;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_829D1DE8:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x829d1e20
	if (ctx.cr6.eq) goto loc_829D1E20;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bgt cr6,0x829d1e04
	if (ctx.cr6.gt) goto loc_829D1E04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1E04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829d1e20
	if (!ctx.cr6.eq) goto loc_829D1E20;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829d1e24
	goto loc_829D1E24;
loc_829D1E20:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_829D1E24:
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829d1e3c
	if (ctx.cr6.eq) goto loc_829D1E3C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x829d1e40
	goto loc_829D1E40;
loc_829D1E3C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829D1E40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829d1e50
	if (ctx.cr6.eq) goto loc_829D1E50;
	// stb r27,28(r5)
	PPC_STORE_U8(ctx.r5.u32 + 28, ctx.r27.u8);
loc_829D1E50:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_829D1E5C"))) PPC_WEAK_FUNC(sub_829D1E5C);
PPC_FUNC_IMPL(__imp__sub_829D1E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829D1E60"))) PPC_WEAK_FUNC(sub_829D1E60);
PPC_FUNC_IMPL(__imp__sub_829D1E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x829D1E68;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8221f388
	ctx.lr = 0x829D1E7C;
	sub_8221F388(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829d1e98
	if (ctx.cr6.eq) goto loc_829D1E98;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x821b6be0
	ctx.lr = 0x829D1E90;
	sub_821B6BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x829d1e9c
	goto loc_829D1E9C;
loc_829D1E98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D1E9C:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8238a848
	ctx.lr = 0x829D1EA4;
	sub_8238A848(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r28,r11,-27468
	ctx.r28.s64 = ctx.r11.s64 + -27468;
	// lfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829d1f68
	if (ctx.cr6.eq) goto loc_829D1F68;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x8221f388
	ctx.lr = 0x829D1ECC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829d1f5c
	if (ctx.cr6.eq) goto loc_829D1F5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,18484
	ctx.r9.s64 = ctx.r11.s64 + 18484;
	// addi r8,r10,5732
	ctx.r8.s64 = ctx.r10.s64 + 5732;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// bl 0x822149c8
	ctx.lr = 0x829D1F00;
	sub_822149C8(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// stb r30,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r30.u8);
	// stb r30,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r30.u8);
	// b 0x829d1f60
	goto loc_829D1F60;
loc_829D1F5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_829D1F60:
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x8238a848
	ctx.lr = 0x829D1F68;
	sub_8238A848(ctx, base);
loc_829D1F68:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r8,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r8.u32);
	// lwz r11,-27380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27380);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// stvx128 v0,r29,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-27380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27380);
	// stfs f31,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stvx128 v0,r29,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

