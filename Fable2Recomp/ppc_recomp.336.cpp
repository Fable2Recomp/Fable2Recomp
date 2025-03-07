#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A2FC0"))) PPC_WEAK_FUNC(sub_832A2FC0);
PPC_FUNC_IMPL(__imp__sub_832A2FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14452
	ctx.r3.s64 = ctx.r11.s64 + 14452;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FCC"))) PPC_WEAK_FUNC(sub_832A2FCC);
PPC_FUNC_IMPL(__imp__sub_832A2FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FD0"))) PPC_WEAK_FUNC(sub_832A2FD0);
PPC_FUNC_IMPL(__imp__sub_832A2FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31360
	ctx.r3.s64 = ctx.r11.s64 + -31360;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FDC"))) PPC_WEAK_FUNC(sub_832A2FDC);
PPC_FUNC_IMPL(__imp__sub_832A2FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FE0"))) PPC_WEAK_FUNC(sub_832A2FE0);
PPC_FUNC_IMPL(__imp__sub_832A2FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31356
	ctx.r3.s64 = ctx.r11.s64 + -31356;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FEC"))) PPC_WEAK_FUNC(sub_832A2FEC);
PPC_FUNC_IMPL(__imp__sub_832A2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2FF0"))) PPC_WEAK_FUNC(sub_832A2FF0);
PPC_FUNC_IMPL(__imp__sub_832A2FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2FFC"))) PPC_WEAK_FUNC(sub_832A2FFC);
PPC_FUNC_IMPL(__imp__sub_832A2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3000"))) PPC_WEAK_FUNC(sub_832A3000);
PPC_FUNC_IMPL(__imp__sub_832A3000) {
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
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r10,-25028
	ctx.r31.s64 = ctx.r10.s64 + -25028;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-25028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25028, ctx.r11.u32);
	// bl 0x821940c8
	ctx.lr = 0x832A302C;
	sub_821940C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832A3048"))) PPC_WEAK_FUNC(sub_832A3048);
PPC_FUNC_IMPL(__imp__sub_832A3048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31336
	ctx.r3.s64 = ctx.r11.s64 + -31336;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3054"))) PPC_WEAK_FUNC(sub_832A3054);
PPC_FUNC_IMPL(__imp__sub_832A3054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3058"))) PPC_WEAK_FUNC(sub_832A3058);
PPC_FUNC_IMPL(__imp__sub_832A3058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31332
	ctx.r3.s64 = ctx.r11.s64 + -31332;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3064"))) PPC_WEAK_FUNC(sub_832A3064);
PPC_FUNC_IMPL(__imp__sub_832A3064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3068"))) PPC_WEAK_FUNC(sub_832A3068);
PPC_FUNC_IMPL(__imp__sub_832A3068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31328
	ctx.r3.s64 = ctx.r11.s64 + -31328;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3074"))) PPC_WEAK_FUNC(sub_832A3074);
PPC_FUNC_IMPL(__imp__sub_832A3074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3078"))) PPC_WEAK_FUNC(sub_832A3078);
PPC_FUNC_IMPL(__imp__sub_832A3078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31324
	ctx.r3.s64 = ctx.r11.s64 + -31324;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3084"))) PPC_WEAK_FUNC(sub_832A3084);
PPC_FUNC_IMPL(__imp__sub_832A3084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3088"))) PPC_WEAK_FUNC(sub_832A3088);
PPC_FUNC_IMPL(__imp__sub_832A3088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31320
	ctx.r3.s64 = ctx.r11.s64 + -31320;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3094"))) PPC_WEAK_FUNC(sub_832A3094);
PPC_FUNC_IMPL(__imp__sub_832A3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3098"))) PPC_WEAK_FUNC(sub_832A3098);
PPC_FUNC_IMPL(__imp__sub_832A3098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31316
	ctx.r3.s64 = ctx.r11.s64 + -31316;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30A4"))) PPC_WEAK_FUNC(sub_832A30A4);
PPC_FUNC_IMPL(__imp__sub_832A30A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30A8"))) PPC_WEAK_FUNC(sub_832A30A8);
PPC_FUNC_IMPL(__imp__sub_832A30A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30B4"))) PPC_WEAK_FUNC(sub_832A30B4);
PPC_FUNC_IMPL(__imp__sub_832A30B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30B8"))) PPC_WEAK_FUNC(sub_832A30B8);
PPC_FUNC_IMPL(__imp__sub_832A30B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31308
	ctx.r3.s64 = ctx.r11.s64 + -31308;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30C4"))) PPC_WEAK_FUNC(sub_832A30C4);
PPC_FUNC_IMPL(__imp__sub_832A30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30C8"))) PPC_WEAK_FUNC(sub_832A30C8);
PPC_FUNC_IMPL(__imp__sub_832A30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31304
	ctx.r3.s64 = ctx.r11.s64 + -31304;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30D4"))) PPC_WEAK_FUNC(sub_832A30D4);
PPC_FUNC_IMPL(__imp__sub_832A30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30D8"))) PPC_WEAK_FUNC(sub_832A30D8);
PPC_FUNC_IMPL(__imp__sub_832A30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31300
	ctx.r3.s64 = ctx.r11.s64 + -31300;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30E4"))) PPC_WEAK_FUNC(sub_832A30E4);
PPC_FUNC_IMPL(__imp__sub_832A30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30E8"))) PPC_WEAK_FUNC(sub_832A30E8);
PPC_FUNC_IMPL(__imp__sub_832A30E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A30F4"))) PPC_WEAK_FUNC(sub_832A30F4);
PPC_FUNC_IMPL(__imp__sub_832A30F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A30F8"))) PPC_WEAK_FUNC(sub_832A30F8);
PPC_FUNC_IMPL(__imp__sub_832A30F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31292
	ctx.r3.s64 = ctx.r11.s64 + -31292;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3104"))) PPC_WEAK_FUNC(sub_832A3104);
PPC_FUNC_IMPL(__imp__sub_832A3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3108"))) PPC_WEAK_FUNC(sub_832A3108);
PPC_FUNC_IMPL(__imp__sub_832A3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3114"))) PPC_WEAK_FUNC(sub_832A3114);
PPC_FUNC_IMPL(__imp__sub_832A3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3118"))) PPC_WEAK_FUNC(sub_832A3118);
PPC_FUNC_IMPL(__imp__sub_832A3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31284
	ctx.r3.s64 = ctx.r11.s64 + -31284;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3124"))) PPC_WEAK_FUNC(sub_832A3124);
PPC_FUNC_IMPL(__imp__sub_832A3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3128"))) PPC_WEAK_FUNC(sub_832A3128);
PPC_FUNC_IMPL(__imp__sub_832A3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3134"))) PPC_WEAK_FUNC(sub_832A3134);
PPC_FUNC_IMPL(__imp__sub_832A3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3138"))) PPC_WEAK_FUNC(sub_832A3138);
PPC_FUNC_IMPL(__imp__sub_832A3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31276
	ctx.r3.s64 = ctx.r11.s64 + -31276;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3144"))) PPC_WEAK_FUNC(sub_832A3144);
PPC_FUNC_IMPL(__imp__sub_832A3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3148"))) PPC_WEAK_FUNC(sub_832A3148);
PPC_FUNC_IMPL(__imp__sub_832A3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3154"))) PPC_WEAK_FUNC(sub_832A3154);
PPC_FUNC_IMPL(__imp__sub_832A3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3158"))) PPC_WEAK_FUNC(sub_832A3158);
PPC_FUNC_IMPL(__imp__sub_832A3158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31268
	ctx.r3.s64 = ctx.r11.s64 + -31268;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3164"))) PPC_WEAK_FUNC(sub_832A3164);
PPC_FUNC_IMPL(__imp__sub_832A3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3168"))) PPC_WEAK_FUNC(sub_832A3168);
PPC_FUNC_IMPL(__imp__sub_832A3168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3174"))) PPC_WEAK_FUNC(sub_832A3174);
PPC_FUNC_IMPL(__imp__sub_832A3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3178"))) PPC_WEAK_FUNC(sub_832A3178);
PPC_FUNC_IMPL(__imp__sub_832A3178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31260
	ctx.r3.s64 = ctx.r11.s64 + -31260;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3184"))) PPC_WEAK_FUNC(sub_832A3184);
PPC_FUNC_IMPL(__imp__sub_832A3184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3188"))) PPC_WEAK_FUNC(sub_832A3188);
PPC_FUNC_IMPL(__imp__sub_832A3188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3194"))) PPC_WEAK_FUNC(sub_832A3194);
PPC_FUNC_IMPL(__imp__sub_832A3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3198"))) PPC_WEAK_FUNC(sub_832A3198);
PPC_FUNC_IMPL(__imp__sub_832A3198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31252
	ctx.r3.s64 = ctx.r11.s64 + -31252;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31A4"))) PPC_WEAK_FUNC(sub_832A31A4);
PPC_FUNC_IMPL(__imp__sub_832A31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31A8"))) PPC_WEAK_FUNC(sub_832A31A8);
PPC_FUNC_IMPL(__imp__sub_832A31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31B4"))) PPC_WEAK_FUNC(sub_832A31B4);
PPC_FUNC_IMPL(__imp__sub_832A31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31B8"))) PPC_WEAK_FUNC(sub_832A31B8);
PPC_FUNC_IMPL(__imp__sub_832A31B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31244
	ctx.r3.s64 = ctx.r11.s64 + -31244;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31C4"))) PPC_WEAK_FUNC(sub_832A31C4);
PPC_FUNC_IMPL(__imp__sub_832A31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31C8"))) PPC_WEAK_FUNC(sub_832A31C8);
PPC_FUNC_IMPL(__imp__sub_832A31C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31D4"))) PPC_WEAK_FUNC(sub_832A31D4);
PPC_FUNC_IMPL(__imp__sub_832A31D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31D8"))) PPC_WEAK_FUNC(sub_832A31D8);
PPC_FUNC_IMPL(__imp__sub_832A31D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31236
	ctx.r3.s64 = ctx.r11.s64 + -31236;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31E4"))) PPC_WEAK_FUNC(sub_832A31E4);
PPC_FUNC_IMPL(__imp__sub_832A31E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31E8"))) PPC_WEAK_FUNC(sub_832A31E8);
PPC_FUNC_IMPL(__imp__sub_832A31E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A31F4"))) PPC_WEAK_FUNC(sub_832A31F4);
PPC_FUNC_IMPL(__imp__sub_832A31F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A31F8"))) PPC_WEAK_FUNC(sub_832A31F8);
PPC_FUNC_IMPL(__imp__sub_832A31F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31228
	ctx.r3.s64 = ctx.r11.s64 + -31228;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3204"))) PPC_WEAK_FUNC(sub_832A3204);
PPC_FUNC_IMPL(__imp__sub_832A3204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3208"))) PPC_WEAK_FUNC(sub_832A3208);
PPC_FUNC_IMPL(__imp__sub_832A3208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31224
	ctx.r3.s64 = ctx.r11.s64 + -31224;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3214"))) PPC_WEAK_FUNC(sub_832A3214);
PPC_FUNC_IMPL(__imp__sub_832A3214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3218"))) PPC_WEAK_FUNC(sub_832A3218);
PPC_FUNC_IMPL(__imp__sub_832A3218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31220
	ctx.r3.s64 = ctx.r11.s64 + -31220;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3224"))) PPC_WEAK_FUNC(sub_832A3224);
PPC_FUNC_IMPL(__imp__sub_832A3224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3228"))) PPC_WEAK_FUNC(sub_832A3228);
PPC_FUNC_IMPL(__imp__sub_832A3228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3234"))) PPC_WEAK_FUNC(sub_832A3234);
PPC_FUNC_IMPL(__imp__sub_832A3234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3238"))) PPC_WEAK_FUNC(sub_832A3238);
PPC_FUNC_IMPL(__imp__sub_832A3238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31212
	ctx.r3.s64 = ctx.r11.s64 + -31212;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A3244"))) PPC_WEAK_FUNC(sub_832A3244);
PPC_FUNC_IMPL(__imp__sub_832A3244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3248"))) PPC_WEAK_FUNC(sub_832A3248);
PPC_FUNC_IMPL(__imp__sub_832A3248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A324C"))) PPC_WEAK_FUNC(sub_832A324C);
PPC_FUNC_IMPL(__imp__sub_832A324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3250"))) PPC_WEAK_FUNC(sub_832A3250);
PPC_FUNC_IMPL(__imp__sub_832A3250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31208
	ctx.r3.s64 = ctx.r11.s64 + -31208;
	// b 0x8233dd70
	sub_8233DD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A325C"))) PPC_WEAK_FUNC(sub_832A325C);
PPC_FUNC_IMPL(__imp__sub_832A325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3260"))) PPC_WEAK_FUNC(sub_832A3260);
PPC_FUNC_IMPL(__imp__sub_832A3260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x82356698
	sub_82356698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A326C"))) PPC_WEAK_FUNC(sub_832A326C);
PPC_FUNC_IMPL(__imp__sub_832A326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3270"))) PPC_WEAK_FUNC(sub_832A3270);
PPC_FUNC_IMPL(__imp__sub_832A3270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14636
	ctx.r3.s64 = ctx.r11.s64 + 14636;
	// b 0x82356698
	sub_82356698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A327C"))) PPC_WEAK_FUNC(sub_832A327C);
PPC_FUNC_IMPL(__imp__sub_832A327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3280"))) PPC_WEAK_FUNC(sub_832A3280);
PPC_FUNC_IMPL(__imp__sub_832A3280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31196
	ctx.r3.s64 = ctx.r11.s64 + -31196;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A328C"))) PPC_WEAK_FUNC(sub_832A328C);
PPC_FUNC_IMPL(__imp__sub_832A328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3290"))) PPC_WEAK_FUNC(sub_832A3290);
PPC_FUNC_IMPL(__imp__sub_832A3290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31192
	ctx.r3.s64 = ctx.r11.s64 + -31192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A329C"))) PPC_WEAK_FUNC(sub_832A329C);
PPC_FUNC_IMPL(__imp__sub_832A329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32A0"))) PPC_WEAK_FUNC(sub_832A32A0);
PPC_FUNC_IMPL(__imp__sub_832A32A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31188
	ctx.r3.s64 = ctx.r11.s64 + -31188;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32AC"))) PPC_WEAK_FUNC(sub_832A32AC);
PPC_FUNC_IMPL(__imp__sub_832A32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32B0"))) PPC_WEAK_FUNC(sub_832A32B0);
PPC_FUNC_IMPL(__imp__sub_832A32B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32BC"))) PPC_WEAK_FUNC(sub_832A32BC);
PPC_FUNC_IMPL(__imp__sub_832A32BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32C0"))) PPC_WEAK_FUNC(sub_832A32C0);
PPC_FUNC_IMPL(__imp__sub_832A32C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31156
	ctx.r3.s64 = ctx.r11.s64 + -31156;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32CC"))) PPC_WEAK_FUNC(sub_832A32CC);
PPC_FUNC_IMPL(__imp__sub_832A32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32D0"))) PPC_WEAK_FUNC(sub_832A32D0);
PPC_FUNC_IMPL(__imp__sub_832A32D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32DC"))) PPC_WEAK_FUNC(sub_832A32DC);
PPC_FUNC_IMPL(__imp__sub_832A32DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32E0"))) PPC_WEAK_FUNC(sub_832A32E0);
PPC_FUNC_IMPL(__imp__sub_832A32E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31072
	ctx.r3.s64 = ctx.r11.s64 + -31072;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32EC"))) PPC_WEAK_FUNC(sub_832A32EC);
PPC_FUNC_IMPL(__imp__sub_832A32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A32F0"))) PPC_WEAK_FUNC(sub_832A32F0);
PPC_FUNC_IMPL(__imp__sub_832A32F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31068
	ctx.r3.s64 = ctx.r11.s64 + -31068;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A32FC"))) PPC_WEAK_FUNC(sub_832A32FC);
PPC_FUNC_IMPL(__imp__sub_832A32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3300"))) PPC_WEAK_FUNC(sub_832A3300);
PPC_FUNC_IMPL(__imp__sub_832A3300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A330C"))) PPC_WEAK_FUNC(sub_832A330C);
PPC_FUNC_IMPL(__imp__sub_832A330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3310"))) PPC_WEAK_FUNC(sub_832A3310);
PPC_FUNC_IMPL(__imp__sub_832A3310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r3,r11,27332
	ctx.r3.s64 = ctx.r11.s64 + 27332;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A331C"))) PPC_WEAK_FUNC(sub_832A331C);
PPC_FUNC_IMPL(__imp__sub_832A331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3320"))) PPC_WEAK_FUNC(sub_832A3320);
PPC_FUNC_IMPL(__imp__sub_832A3320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31060
	ctx.r3.s64 = ctx.r11.s64 + -31060;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A332C"))) PPC_WEAK_FUNC(sub_832A332C);
PPC_FUNC_IMPL(__imp__sub_832A332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3330"))) PPC_WEAK_FUNC(sub_832A3330);
PPC_FUNC_IMPL(__imp__sub_832A3330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31056
	ctx.r3.s64 = ctx.r11.s64 + -31056;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A333C"))) PPC_WEAK_FUNC(sub_832A333C);
PPC_FUNC_IMPL(__imp__sub_832A333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3340"))) PPC_WEAK_FUNC(sub_832A3340);
PPC_FUNC_IMPL(__imp__sub_832A3340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31052
	ctx.r3.s64 = ctx.r11.s64 + -31052;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A334C"))) PPC_WEAK_FUNC(sub_832A334C);
PPC_FUNC_IMPL(__imp__sub_832A334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3350"))) PPC_WEAK_FUNC(sub_832A3350);
PPC_FUNC_IMPL(__imp__sub_832A3350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31020
	ctx.r3.s64 = ctx.r11.s64 + -31020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A335C"))) PPC_WEAK_FUNC(sub_832A335C);
PPC_FUNC_IMPL(__imp__sub_832A335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3360"))) PPC_WEAK_FUNC(sub_832A3360);
PPC_FUNC_IMPL(__imp__sub_832A3360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A336C"))) PPC_WEAK_FUNC(sub_832A336C);
PPC_FUNC_IMPL(__imp__sub_832A336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3370"))) PPC_WEAK_FUNC(sub_832A3370);
PPC_FUNC_IMPL(__imp__sub_832A3370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31012
	ctx.r3.s64 = ctx.r11.s64 + -31012;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A337C"))) PPC_WEAK_FUNC(sub_832A337C);
PPC_FUNC_IMPL(__imp__sub_832A337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3380"))) PPC_WEAK_FUNC(sub_832A3380);
PPC_FUNC_IMPL(__imp__sub_832A3380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A338C"))) PPC_WEAK_FUNC(sub_832A338C);
PPC_FUNC_IMPL(__imp__sub_832A338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3390"))) PPC_WEAK_FUNC(sub_832A3390);
PPC_FUNC_IMPL(__imp__sub_832A3390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31004
	ctx.r3.s64 = ctx.r11.s64 + -31004;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A339C"))) PPC_WEAK_FUNC(sub_832A339C);
PPC_FUNC_IMPL(__imp__sub_832A339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33A0"))) PPC_WEAK_FUNC(sub_832A33A0);
PPC_FUNC_IMPL(__imp__sub_832A33A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33AC"))) PPC_WEAK_FUNC(sub_832A33AC);
PPC_FUNC_IMPL(__imp__sub_832A33AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33B0"))) PPC_WEAK_FUNC(sub_832A33B0);
PPC_FUNC_IMPL(__imp__sub_832A33B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30996
	ctx.r3.s64 = ctx.r11.s64 + -30996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33BC"))) PPC_WEAK_FUNC(sub_832A33BC);
PPC_FUNC_IMPL(__imp__sub_832A33BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33C0"))) PPC_WEAK_FUNC(sub_832A33C0);
PPC_FUNC_IMPL(__imp__sub_832A33C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30988
	ctx.r3.s64 = ctx.r11.s64 + -30988;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33CC"))) PPC_WEAK_FUNC(sub_832A33CC);
PPC_FUNC_IMPL(__imp__sub_832A33CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33D0"))) PPC_WEAK_FUNC(sub_832A33D0);
PPC_FUNC_IMPL(__imp__sub_832A33D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33DC"))) PPC_WEAK_FUNC(sub_832A33DC);
PPC_FUNC_IMPL(__imp__sub_832A33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33E0"))) PPC_WEAK_FUNC(sub_832A33E0);
PPC_FUNC_IMPL(__imp__sub_832A33E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30980
	ctx.r3.s64 = ctx.r11.s64 + -30980;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33EC"))) PPC_WEAK_FUNC(sub_832A33EC);
PPC_FUNC_IMPL(__imp__sub_832A33EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A33F0"))) PPC_WEAK_FUNC(sub_832A33F0);
PPC_FUNC_IMPL(__imp__sub_832A33F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A33FC"))) PPC_WEAK_FUNC(sub_832A33FC);
PPC_FUNC_IMPL(__imp__sub_832A33FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3400"))) PPC_WEAK_FUNC(sub_832A3400);
PPC_FUNC_IMPL(__imp__sub_832A3400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30972
	ctx.r3.s64 = ctx.r11.s64 + -30972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A340C"))) PPC_WEAK_FUNC(sub_832A340C);
PPC_FUNC_IMPL(__imp__sub_832A340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3410"))) PPC_WEAK_FUNC(sub_832A3410);
PPC_FUNC_IMPL(__imp__sub_832A3410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A341C"))) PPC_WEAK_FUNC(sub_832A341C);
PPC_FUNC_IMPL(__imp__sub_832A341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3420"))) PPC_WEAK_FUNC(sub_832A3420);
PPC_FUNC_IMPL(__imp__sub_832A3420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30964
	ctx.r3.s64 = ctx.r11.s64 + -30964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A342C"))) PPC_WEAK_FUNC(sub_832A342C);
PPC_FUNC_IMPL(__imp__sub_832A342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3430"))) PPC_WEAK_FUNC(sub_832A3430);
PPC_FUNC_IMPL(__imp__sub_832A3430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A343C"))) PPC_WEAK_FUNC(sub_832A343C);
PPC_FUNC_IMPL(__imp__sub_832A343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3440"))) PPC_WEAK_FUNC(sub_832A3440);
PPC_FUNC_IMPL(__imp__sub_832A3440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30956
	ctx.r3.s64 = ctx.r11.s64 + -30956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A344C"))) PPC_WEAK_FUNC(sub_832A344C);
PPC_FUNC_IMPL(__imp__sub_832A344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3450"))) PPC_WEAK_FUNC(sub_832A3450);
PPC_FUNC_IMPL(__imp__sub_832A3450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A345C"))) PPC_WEAK_FUNC(sub_832A345C);
PPC_FUNC_IMPL(__imp__sub_832A345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3460"))) PPC_WEAK_FUNC(sub_832A3460);
PPC_FUNC_IMPL(__imp__sub_832A3460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30948
	ctx.r3.s64 = ctx.r11.s64 + -30948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A346C"))) PPC_WEAK_FUNC(sub_832A346C);
PPC_FUNC_IMPL(__imp__sub_832A346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3470"))) PPC_WEAK_FUNC(sub_832A3470);
PPC_FUNC_IMPL(__imp__sub_832A3470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A347C"))) PPC_WEAK_FUNC(sub_832A347C);
PPC_FUNC_IMPL(__imp__sub_832A347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3480"))) PPC_WEAK_FUNC(sub_832A3480);
PPC_FUNC_IMPL(__imp__sub_832A3480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30940
	ctx.r3.s64 = ctx.r11.s64 + -30940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A348C"))) PPC_WEAK_FUNC(sub_832A348C);
PPC_FUNC_IMPL(__imp__sub_832A348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3490"))) PPC_WEAK_FUNC(sub_832A3490);
PPC_FUNC_IMPL(__imp__sub_832A3490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30936
	ctx.r3.s64 = ctx.r11.s64 + -30936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A349C"))) PPC_WEAK_FUNC(sub_832A349C);
PPC_FUNC_IMPL(__imp__sub_832A349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34A0"))) PPC_WEAK_FUNC(sub_832A34A0);
PPC_FUNC_IMPL(__imp__sub_832A34A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30932
	ctx.r3.s64 = ctx.r11.s64 + -30932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34AC"))) PPC_WEAK_FUNC(sub_832A34AC);
PPC_FUNC_IMPL(__imp__sub_832A34AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34B0"))) PPC_WEAK_FUNC(sub_832A34B0);
PPC_FUNC_IMPL(__imp__sub_832A34B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34BC"))) PPC_WEAK_FUNC(sub_832A34BC);
PPC_FUNC_IMPL(__imp__sub_832A34BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34C0"))) PPC_WEAK_FUNC(sub_832A34C0);
PPC_FUNC_IMPL(__imp__sub_832A34C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30924
	ctx.r3.s64 = ctx.r11.s64 + -30924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34CC"))) PPC_WEAK_FUNC(sub_832A34CC);
PPC_FUNC_IMPL(__imp__sub_832A34CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34D0"))) PPC_WEAK_FUNC(sub_832A34D0);
PPC_FUNC_IMPL(__imp__sub_832A34D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34DC"))) PPC_WEAK_FUNC(sub_832A34DC);
PPC_FUNC_IMPL(__imp__sub_832A34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34E0"))) PPC_WEAK_FUNC(sub_832A34E0);
PPC_FUNC_IMPL(__imp__sub_832A34E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30916
	ctx.r3.s64 = ctx.r11.s64 + -30916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34EC"))) PPC_WEAK_FUNC(sub_832A34EC);
PPC_FUNC_IMPL(__imp__sub_832A34EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A34F0"))) PPC_WEAK_FUNC(sub_832A34F0);
PPC_FUNC_IMPL(__imp__sub_832A34F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30912
	ctx.r3.s64 = ctx.r11.s64 + -30912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A34FC"))) PPC_WEAK_FUNC(sub_832A34FC);
PPC_FUNC_IMPL(__imp__sub_832A34FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3500"))) PPC_WEAK_FUNC(sub_832A3500);
PPC_FUNC_IMPL(__imp__sub_832A3500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30908
	ctx.r3.s64 = ctx.r11.s64 + -30908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A350C"))) PPC_WEAK_FUNC(sub_832A350C);
PPC_FUNC_IMPL(__imp__sub_832A350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3510"))) PPC_WEAK_FUNC(sub_832A3510);
PPC_FUNC_IMPL(__imp__sub_832A3510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A351C"))) PPC_WEAK_FUNC(sub_832A351C);
PPC_FUNC_IMPL(__imp__sub_832A351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3520"))) PPC_WEAK_FUNC(sub_832A3520);
PPC_FUNC_IMPL(__imp__sub_832A3520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30900
	ctx.r3.s64 = ctx.r11.s64 + -30900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A352C"))) PPC_WEAK_FUNC(sub_832A352C);
PPC_FUNC_IMPL(__imp__sub_832A352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3530"))) PPC_WEAK_FUNC(sub_832A3530);
PPC_FUNC_IMPL(__imp__sub_832A3530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30896
	ctx.r3.s64 = ctx.r11.s64 + -30896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A353C"))) PPC_WEAK_FUNC(sub_832A353C);
PPC_FUNC_IMPL(__imp__sub_832A353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3540"))) PPC_WEAK_FUNC(sub_832A3540);
PPC_FUNC_IMPL(__imp__sub_832A3540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30892
	ctx.r3.s64 = ctx.r11.s64 + -30892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A354C"))) PPC_WEAK_FUNC(sub_832A354C);
PPC_FUNC_IMPL(__imp__sub_832A354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3550"))) PPC_WEAK_FUNC(sub_832A3550);
PPC_FUNC_IMPL(__imp__sub_832A3550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A355C"))) PPC_WEAK_FUNC(sub_832A355C);
PPC_FUNC_IMPL(__imp__sub_832A355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3560"))) PPC_WEAK_FUNC(sub_832A3560);
PPC_FUNC_IMPL(__imp__sub_832A3560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30884
	ctx.r3.s64 = ctx.r11.s64 + -30884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A356C"))) PPC_WEAK_FUNC(sub_832A356C);
PPC_FUNC_IMPL(__imp__sub_832A356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3570"))) PPC_WEAK_FUNC(sub_832A3570);
PPC_FUNC_IMPL(__imp__sub_832A3570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A357C"))) PPC_WEAK_FUNC(sub_832A357C);
PPC_FUNC_IMPL(__imp__sub_832A357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3580"))) PPC_WEAK_FUNC(sub_832A3580);
PPC_FUNC_IMPL(__imp__sub_832A3580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30876
	ctx.r3.s64 = ctx.r11.s64 + -30876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A358C"))) PPC_WEAK_FUNC(sub_832A358C);
PPC_FUNC_IMPL(__imp__sub_832A358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3590"))) PPC_WEAK_FUNC(sub_832A3590);
PPC_FUNC_IMPL(__imp__sub_832A3590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A359C"))) PPC_WEAK_FUNC(sub_832A359C);
PPC_FUNC_IMPL(__imp__sub_832A359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35A0"))) PPC_WEAK_FUNC(sub_832A35A0);
PPC_FUNC_IMPL(__imp__sub_832A35A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30868
	ctx.r3.s64 = ctx.r11.s64 + -30868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35AC"))) PPC_WEAK_FUNC(sub_832A35AC);
PPC_FUNC_IMPL(__imp__sub_832A35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35B0"))) PPC_WEAK_FUNC(sub_832A35B0);
PPC_FUNC_IMPL(__imp__sub_832A35B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35BC"))) PPC_WEAK_FUNC(sub_832A35BC);
PPC_FUNC_IMPL(__imp__sub_832A35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35C0"))) PPC_WEAK_FUNC(sub_832A35C0);
PPC_FUNC_IMPL(__imp__sub_832A35C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30860
	ctx.r3.s64 = ctx.r11.s64 + -30860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35CC"))) PPC_WEAK_FUNC(sub_832A35CC);
PPC_FUNC_IMPL(__imp__sub_832A35CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35D0"))) PPC_WEAK_FUNC(sub_832A35D0);
PPC_FUNC_IMPL(__imp__sub_832A35D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30856
	ctx.r3.s64 = ctx.r11.s64 + -30856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35DC"))) PPC_WEAK_FUNC(sub_832A35DC);
PPC_FUNC_IMPL(__imp__sub_832A35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35E0"))) PPC_WEAK_FUNC(sub_832A35E0);
PPC_FUNC_IMPL(__imp__sub_832A35E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30852
	ctx.r3.s64 = ctx.r11.s64 + -30852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35EC"))) PPC_WEAK_FUNC(sub_832A35EC);
PPC_FUNC_IMPL(__imp__sub_832A35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A35F0"))) PPC_WEAK_FUNC(sub_832A35F0);
PPC_FUNC_IMPL(__imp__sub_832A35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30848
	ctx.r3.s64 = ctx.r11.s64 + -30848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A35FC"))) PPC_WEAK_FUNC(sub_832A35FC);
PPC_FUNC_IMPL(__imp__sub_832A35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3600"))) PPC_WEAK_FUNC(sub_832A3600);
PPC_FUNC_IMPL(__imp__sub_832A3600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30844
	ctx.r3.s64 = ctx.r11.s64 + -30844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A360C"))) PPC_WEAK_FUNC(sub_832A360C);
PPC_FUNC_IMPL(__imp__sub_832A360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3610"))) PPC_WEAK_FUNC(sub_832A3610);
PPC_FUNC_IMPL(__imp__sub_832A3610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A361C"))) PPC_WEAK_FUNC(sub_832A361C);
PPC_FUNC_IMPL(__imp__sub_832A361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3620"))) PPC_WEAK_FUNC(sub_832A3620);
PPC_FUNC_IMPL(__imp__sub_832A3620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30836
	ctx.r3.s64 = ctx.r11.s64 + -30836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A362C"))) PPC_WEAK_FUNC(sub_832A362C);
PPC_FUNC_IMPL(__imp__sub_832A362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3630"))) PPC_WEAK_FUNC(sub_832A3630);
PPC_FUNC_IMPL(__imp__sub_832A3630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30832
	ctx.r3.s64 = ctx.r11.s64 + -30832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A363C"))) PPC_WEAK_FUNC(sub_832A363C);
PPC_FUNC_IMPL(__imp__sub_832A363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3640"))) PPC_WEAK_FUNC(sub_832A3640);
PPC_FUNC_IMPL(__imp__sub_832A3640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30828
	ctx.r3.s64 = ctx.r11.s64 + -30828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A364C"))) PPC_WEAK_FUNC(sub_832A364C);
PPC_FUNC_IMPL(__imp__sub_832A364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3650"))) PPC_WEAK_FUNC(sub_832A3650);
PPC_FUNC_IMPL(__imp__sub_832A3650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A365C"))) PPC_WEAK_FUNC(sub_832A365C);
PPC_FUNC_IMPL(__imp__sub_832A365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3660"))) PPC_WEAK_FUNC(sub_832A3660);
PPC_FUNC_IMPL(__imp__sub_832A3660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30820
	ctx.r3.s64 = ctx.r11.s64 + -30820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A366C"))) PPC_WEAK_FUNC(sub_832A366C);
PPC_FUNC_IMPL(__imp__sub_832A366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3670"))) PPC_WEAK_FUNC(sub_832A3670);
PPC_FUNC_IMPL(__imp__sub_832A3670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A367C"))) PPC_WEAK_FUNC(sub_832A367C);
PPC_FUNC_IMPL(__imp__sub_832A367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3680"))) PPC_WEAK_FUNC(sub_832A3680);
PPC_FUNC_IMPL(__imp__sub_832A3680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30812
	ctx.r3.s64 = ctx.r11.s64 + -30812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A368C"))) PPC_WEAK_FUNC(sub_832A368C);
PPC_FUNC_IMPL(__imp__sub_832A368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3690"))) PPC_WEAK_FUNC(sub_832A3690);
PPC_FUNC_IMPL(__imp__sub_832A3690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A369C"))) PPC_WEAK_FUNC(sub_832A369C);
PPC_FUNC_IMPL(__imp__sub_832A369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36A0"))) PPC_WEAK_FUNC(sub_832A36A0);
PPC_FUNC_IMPL(__imp__sub_832A36A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30804
	ctx.r3.s64 = ctx.r11.s64 + -30804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36AC"))) PPC_WEAK_FUNC(sub_832A36AC);
PPC_FUNC_IMPL(__imp__sub_832A36AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36B0"))) PPC_WEAK_FUNC(sub_832A36B0);
PPC_FUNC_IMPL(__imp__sub_832A36B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36BC"))) PPC_WEAK_FUNC(sub_832A36BC);
PPC_FUNC_IMPL(__imp__sub_832A36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36C0"))) PPC_WEAK_FUNC(sub_832A36C0);
PPC_FUNC_IMPL(__imp__sub_832A36C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30796
	ctx.r3.s64 = ctx.r11.s64 + -30796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36CC"))) PPC_WEAK_FUNC(sub_832A36CC);
PPC_FUNC_IMPL(__imp__sub_832A36CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36D0"))) PPC_WEAK_FUNC(sub_832A36D0);
PPC_FUNC_IMPL(__imp__sub_832A36D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36DC"))) PPC_WEAK_FUNC(sub_832A36DC);
PPC_FUNC_IMPL(__imp__sub_832A36DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36E0"))) PPC_WEAK_FUNC(sub_832A36E0);
PPC_FUNC_IMPL(__imp__sub_832A36E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30788
	ctx.r3.s64 = ctx.r11.s64 + -30788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36EC"))) PPC_WEAK_FUNC(sub_832A36EC);
PPC_FUNC_IMPL(__imp__sub_832A36EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A36F0"))) PPC_WEAK_FUNC(sub_832A36F0);
PPC_FUNC_IMPL(__imp__sub_832A36F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30784
	ctx.r3.s64 = ctx.r11.s64 + -30784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A36FC"))) PPC_WEAK_FUNC(sub_832A36FC);
PPC_FUNC_IMPL(__imp__sub_832A36FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3700"))) PPC_WEAK_FUNC(sub_832A3700);
PPC_FUNC_IMPL(__imp__sub_832A3700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A370C"))) PPC_WEAK_FUNC(sub_832A370C);
PPC_FUNC_IMPL(__imp__sub_832A370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3710"))) PPC_WEAK_FUNC(sub_832A3710);
PPC_FUNC_IMPL(__imp__sub_832A3710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30776
	ctx.r3.s64 = ctx.r11.s64 + -30776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A371C"))) PPC_WEAK_FUNC(sub_832A371C);
PPC_FUNC_IMPL(__imp__sub_832A371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3720"))) PPC_WEAK_FUNC(sub_832A3720);
PPC_FUNC_IMPL(__imp__sub_832A3720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30772
	ctx.r3.s64 = ctx.r11.s64 + -30772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A372C"))) PPC_WEAK_FUNC(sub_832A372C);
PPC_FUNC_IMPL(__imp__sub_832A372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3730"))) PPC_WEAK_FUNC(sub_832A3730);
PPC_FUNC_IMPL(__imp__sub_832A3730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30768
	ctx.r3.s64 = ctx.r11.s64 + -30768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A373C"))) PPC_WEAK_FUNC(sub_832A373C);
PPC_FUNC_IMPL(__imp__sub_832A373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3740"))) PPC_WEAK_FUNC(sub_832A3740);
PPC_FUNC_IMPL(__imp__sub_832A3740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A374C"))) PPC_WEAK_FUNC(sub_832A374C);
PPC_FUNC_IMPL(__imp__sub_832A374C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3750"))) PPC_WEAK_FUNC(sub_832A3750);
PPC_FUNC_IMPL(__imp__sub_832A3750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30760
	ctx.r3.s64 = ctx.r11.s64 + -30760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A375C"))) PPC_WEAK_FUNC(sub_832A375C);
PPC_FUNC_IMPL(__imp__sub_832A375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3760"))) PPC_WEAK_FUNC(sub_832A3760);
PPC_FUNC_IMPL(__imp__sub_832A3760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30756
	ctx.r3.s64 = ctx.r11.s64 + -30756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A376C"))) PPC_WEAK_FUNC(sub_832A376C);
PPC_FUNC_IMPL(__imp__sub_832A376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3770"))) PPC_WEAK_FUNC(sub_832A3770);
PPC_FUNC_IMPL(__imp__sub_832A3770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30752
	ctx.r3.s64 = ctx.r11.s64 + -30752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A377C"))) PPC_WEAK_FUNC(sub_832A377C);
PPC_FUNC_IMPL(__imp__sub_832A377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3780"))) PPC_WEAK_FUNC(sub_832A3780);
PPC_FUNC_IMPL(__imp__sub_832A3780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30748
	ctx.r3.s64 = ctx.r11.s64 + -30748;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A378C"))) PPC_WEAK_FUNC(sub_832A378C);
PPC_FUNC_IMPL(__imp__sub_832A378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A3790"))) PPC_WEAK_FUNC(sub_832A3790);
PPC_FUNC_IMPL(__imp__sub_832A3790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A379C"))) PPC_WEAK_FUNC(sub_832A379C);
PPC_FUNC_IMPL(__imp__sub_832A379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37A0"))) PPC_WEAK_FUNC(sub_832A37A0);
PPC_FUNC_IMPL(__imp__sub_832A37A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30740
	ctx.r3.s64 = ctx.r11.s64 + -30740;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A37AC"))) PPC_WEAK_FUNC(sub_832A37AC);
PPC_FUNC_IMPL(__imp__sub_832A37AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37B0"))) PPC_WEAK_FUNC(sub_832A37B0);
PPC_FUNC_IMPL(__imp__sub_832A37B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30736
	ctx.r3.s64 = ctx.r11.s64 + -30736;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A37BC"))) PPC_WEAK_FUNC(sub_832A37BC);
PPC_FUNC_IMPL(__imp__sub_832A37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37C0"))) PPC_WEAK_FUNC(sub_832A37C0);
PPC_FUNC_IMPL(__imp__sub_832A37C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30732
	ctx.r3.s64 = ctx.r11.s64 + -30732;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A37CC"))) PPC_WEAK_FUNC(sub_832A37CC);
PPC_FUNC_IMPL(__imp__sub_832A37CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37D0"))) PPC_WEAK_FUNC(sub_832A37D0);
PPC_FUNC_IMPL(__imp__sub_832A37D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30728
	ctx.r3.s64 = ctx.r11.s64 + -30728;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A37DC"))) PPC_WEAK_FUNC(sub_832A37DC);
PPC_FUNC_IMPL(__imp__sub_832A37DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37E0"))) PPC_WEAK_FUNC(sub_832A37E0);
PPC_FUNC_IMPL(__imp__sub_832A37E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30724
	ctx.r3.s64 = ctx.r11.s64 + -30724;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A37EC"))) PPC_WEAK_FUNC(sub_832A37EC);
PPC_FUNC_IMPL(__imp__sub_832A37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A37F0"))) PPC_WEAK_FUNC(sub_832A37F0);
PPC_FUNC_IMPL(__imp__sub_832A37F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

