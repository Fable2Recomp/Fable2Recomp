#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832AF758"))) PPC_WEAK_FUNC(sub_832AF758);
PPC_FUNC_IMPL(__imp__sub_832AF758) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,-9196
	r31.s64 = r11.s64 + -9196;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832af780
	if (cr6.eq) goto loc_832AF780;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AF780:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AF7B0"))) PPC_WEAK_FUNC(sub_832AF7B0);
PPC_FUNC_IMPL(__imp__sub_832AF7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-9180
	ctx.r3.s64 = r11.s64 + -9180;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF7C0"))) PPC_WEAK_FUNC(sub_832AF7C0);
PPC_FUNC_IMPL(__imp__sub_832AF7C0) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r30,9
	r30.s64 = 9;
	// addi r11,r11,-9176
	r11.s64 = r11.s64 + -9176;
	// addi r31,r11,200
	r31.s64 = r11.s64 + 200;
loc_832AF7E4:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832af7f8
	if (cr6.eq) goto loc_832AF7F8;
	// bl 0x821fc1f0
	sub_821FC1F0(ctx, base);
loc_832AF7F8:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832af7e4
	if (!cr0.lt) goto loc_832AF7E4;
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

__attribute__((alias("__imp__sub_832AF818"))) PPC_WEAK_FUNC(sub_832AF818);
PPC_FUNC_IMPL(__imp__sub_832AF818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-8976
	ctx.r3.s64 = r11.s64 + -8976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF828"))) PPC_WEAK_FUNC(sub_832AF828);
PPC_FUNC_IMPL(__imp__sub_832AF828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// li r30,9
	r30.s64 = 9;
	// addi r11,r11,-8968
	r11.s64 = r11.s64 + -8968;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,1080
	r31.s64 = r11.s64 + 1080;
	// lis r11,-31927
	r11.s64 = -2092367872;
	// addi r29,r11,28344
	r29.s64 = r11.s64 + 28344;
loc_832AF850:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_832AF860:
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
	// bne 0x832af860
	if (!cr0.eq) goto loc_832AF860;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832af850
	if (!cr0.lt) goto loc_832AF850;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832AF890"))) PPC_WEAK_FUNC(sub_832AF890);
PPC_FUNC_IMPL(__imp__sub_832AF890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31950
	r11.s64 = -2093875200;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r11,-20388
	r11.s64 = r11.s64 + -20388;
	// addi r9,r10,-28868
	ctx.r9.s64 = ctx.r10.s64 + -28868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x832af8c0
	if (cr6.eq) goto loc_832AF8C0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// b 0x82b55128
	sub_82B55128(ctx, base);
	return;
loc_832AF8C0:
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// b 0x82b52500
	sub_82B52500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8C8"))) PPC_WEAK_FUNC(sub_832AF8C8);
PPC_FUNC_IMPL(__imp__sub_832AF8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF8D0"))) PPC_WEAK_FUNC(sub_832AF8D0);
PPC_FUNC_IMPL(__imp__sub_832AF8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7888
	ctx.r3.s64 = r11.s64 + -7888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8E0"))) PPC_WEAK_FUNC(sub_832AF8E0);
PPC_FUNC_IMPL(__imp__sub_832AF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7884
	ctx.r3.s64 = r11.s64 + -7884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF8F0"))) PPC_WEAK_FUNC(sub_832AF8F0);
PPC_FUNC_IMPL(__imp__sub_832AF8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7880
	ctx.r3.s64 = r11.s64 + -7880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF900"))) PPC_WEAK_FUNC(sub_832AF900);
PPC_FUNC_IMPL(__imp__sub_832AF900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7876
	ctx.r3.s64 = r11.s64 + -7876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF910"))) PPC_WEAK_FUNC(sub_832AF910);
PPC_FUNC_IMPL(__imp__sub_832AF910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7872
	ctx.r3.s64 = r11.s64 + -7872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF920"))) PPC_WEAK_FUNC(sub_832AF920);
PPC_FUNC_IMPL(__imp__sub_832AF920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7868
	ctx.r3.s64 = r11.s64 + -7868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF930"))) PPC_WEAK_FUNC(sub_832AF930);
PPC_FUNC_IMPL(__imp__sub_832AF930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7864
	ctx.r3.s64 = r11.s64 + -7864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF940"))) PPC_WEAK_FUNC(sub_832AF940);
PPC_FUNC_IMPL(__imp__sub_832AF940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7860
	ctx.r3.s64 = r11.s64 + -7860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF950"))) PPC_WEAK_FUNC(sub_832AF950);
PPC_FUNC_IMPL(__imp__sub_832AF950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7856
	ctx.r3.s64 = r11.s64 + -7856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF960"))) PPC_WEAK_FUNC(sub_832AF960);
PPC_FUNC_IMPL(__imp__sub_832AF960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7852
	ctx.r3.s64 = r11.s64 + -7852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF970"))) PPC_WEAK_FUNC(sub_832AF970);
PPC_FUNC_IMPL(__imp__sub_832AF970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7848
	ctx.r3.s64 = r11.s64 + -7848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF980"))) PPC_WEAK_FUNC(sub_832AF980);
PPC_FUNC_IMPL(__imp__sub_832AF980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7844
	ctx.r3.s64 = r11.s64 + -7844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF990"))) PPC_WEAK_FUNC(sub_832AF990);
PPC_FUNC_IMPL(__imp__sub_832AF990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7840
	ctx.r3.s64 = r11.s64 + -7840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9A0"))) PPC_WEAK_FUNC(sub_832AF9A0);
PPC_FUNC_IMPL(__imp__sub_832AF9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7836
	ctx.r3.s64 = r11.s64 + -7836;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9B0"))) PPC_WEAK_FUNC(sub_832AF9B0);
PPC_FUNC_IMPL(__imp__sub_832AF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7800
	ctx.r3.s64 = r11.s64 + -7800;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9C0"))) PPC_WEAK_FUNC(sub_832AF9C0);
PPC_FUNC_IMPL(__imp__sub_832AF9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7764
	ctx.r3.s64 = r11.s64 + -7764;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9D0"))) PPC_WEAK_FUNC(sub_832AF9D0);
PPC_FUNC_IMPL(__imp__sub_832AF9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-7728
	ctx.r3.s64 = r11.s64 + -7728;
	// b 0x82b8c170
	sub_82B8C170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9E0"))) PPC_WEAK_FUNC(sub_832AF9E0);
PPC_FUNC_IMPL(__imp__sub_832AF9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-5536
	ctx.r3.s64 = r11.s64 + -5536;
	// b 0x82ba8d90
	sub_82BA8D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF9F0"))) PPC_WEAK_FUNC(sub_832AF9F0);
PPC_FUNC_IMPL(__imp__sub_832AF9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,28560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
	// stw r11,28560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28560, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFA08"))) PPC_WEAK_FUNC(sub_832AFA08);
PPC_FUNC_IMPL(__imp__sub_832AFA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFA10"))) PPC_WEAK_FUNC(sub_832AFA10);
PPC_FUNC_IMPL(__imp__sub_832AFA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-6744
	ctx.r3.s64 = r11.s64 + -6744;
	// b 0x82be4090
	sub_82BE4090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA20"))) PPC_WEAK_FUNC(sub_832AFA20);
PPC_FUNC_IMPL(__imp__sub_832AFA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-6736
	ctx.r3.s64 = r11.s64 + -6736;
	// b 0x82be41a8
	sub_82BE41A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA30"))) PPC_WEAK_FUNC(sub_832AFA30);
PPC_FUNC_IMPL(__imp__sub_832AFA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r3,r11,-6728
	ctx.r3.s64 = r11.s64 + -6728;
	// b 0x82be42c0
	sub_82BE42C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA40"))) PPC_WEAK_FUNC(sub_832AFA40);
PPC_FUNC_IMPL(__imp__sub_832AFA40) {
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
	// lis r11,-31924
	r11.s64 = -2092171264;
	// addi r31,r11,-6720
	r31.s64 = r11.s64 + -6720;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832afa68
	if (cr6.eq) goto loc_832AFA68;
	// bl 0x8221be68
	sub_8221BE68(ctx, base);
loc_832AFA68:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AFA98"))) PPC_WEAK_FUNC(sub_832AFA98);
PPC_FUNC_IMPL(__imp__sub_832AFA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24148
	ctx.r3.s64 = r11.s64 + 24148;
	// b 0x82bed368
	sub_82BED368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAA8"))) PPC_WEAK_FUNC(sub_832AFAA8);
PPC_FUNC_IMPL(__imp__sub_832AFAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24188
	ctx.r3.s64 = r11.s64 + 24188;
	// b 0x82bee7b8
	sub_82BEE7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAB8"))) PPC_WEAK_FUNC(sub_832AFAB8);
PPC_FUNC_IMPL(__imp__sub_832AFAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24168
	ctx.r3.s64 = r11.s64 + 24168;
	// b 0x82bef8e8
	sub_82BEF8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAC8"))) PPC_WEAK_FUNC(sub_832AFAC8);
PPC_FUNC_IMPL(__imp__sub_832AFAC8) {
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
	// addi r31,r11,18468
	r31.s64 = r11.s64 + 18468;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832afaf0
	if (cr6.eq) goto loc_832AFAF0;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_832AFAF0:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AFB20"))) PPC_WEAK_FUNC(sub_832AFB20);
PPC_FUNC_IMPL(__imp__sub_832AFB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24416
	ctx.r3.s64 = r11.s64 + 24416;
	// b 0x82befe78
	sub_82BEFE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFB30"))) PPC_WEAK_FUNC(sub_832AFB30);
PPC_FUNC_IMPL(__imp__sub_832AFB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// addi r3,r11,24444
	ctx.r3.s64 = r11.s64 + 24444;
	// b 0x82bf1bc8
	sub_82BF1BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFB40"))) PPC_WEAK_FUNC(sub_832AFB40);
PPC_FUNC_IMPL(__imp__sub_832AFB40) {
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
	// addi r31,r11,18508
	r31.s64 = r11.s64 + 18508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832afb68
	if (cr6.eq) goto loc_832AFB68;
	// bl 0x82bf2158
	sub_82BF2158(ctx, base);
loc_832AFB68:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832AFB98"))) PPC_WEAK_FUNC(sub_832AFB98);
PPC_FUNC_IMPL(__imp__sub_832AFB98) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18900
	r31.s64 = r11.s64 + 18900;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82bfc6a8
	sub_82BFC6A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFC08"))) PPC_WEAK_FUNC(sub_832AFC08);
PPC_FUNC_IMPL(__imp__sub_832AFC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18924
	ctx.r3.s64 = r11.s64 + 18924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC18"))) PPC_WEAK_FUNC(sub_832AFC18);
PPC_FUNC_IMPL(__imp__sub_832AFC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18940
	ctx.r3.s64 = r11.s64 + 18940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC28"))) PPC_WEAK_FUNC(sub_832AFC28);
PPC_FUNC_IMPL(__imp__sub_832AFC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18944
	ctx.r3.s64 = r11.s64 + 18944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC38"))) PPC_WEAK_FUNC(sub_832AFC38);
PPC_FUNC_IMPL(__imp__sub_832AFC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lwz r3,24548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24548);
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

__attribute__((alias("__imp__sub_832AFC58"))) PPC_WEAK_FUNC(sub_832AFC58);
PPC_FUNC_IMPL(__imp__sub_832AFC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFC60"))) PPC_WEAK_FUNC(sub_832AFC60);
PPC_FUNC_IMPL(__imp__sub_832AFC60) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18928
	r31.s64 = r11.s64 + 18928;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82309298
	sub_82309298(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFCD0"))) PPC_WEAK_FUNC(sub_832AFCD0);
PPC_FUNC_IMPL(__imp__sub_832AFCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = r11.s64 + 18968;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFCE0"))) PPC_WEAK_FUNC(sub_832AFCE0);
PPC_FUNC_IMPL(__imp__sub_832AFCE0) {
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
	// lwz r3,19052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19052);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832afd0c
	if (cr6.eq) goto loc_832AFD0C;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,19052(r31)
	PPC_STORE_U32(r31.u32 + 19052, r11.u32);
loc_832AFD0C:
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

__attribute__((alias("__imp__sub_832AFD20"))) PPC_WEAK_FUNC(sub_832AFD20);
PPC_FUNC_IMPL(__imp__sub_832AFD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19104
	ctx.r3.s64 = r11.s64 + 19104;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFD30"))) PPC_WEAK_FUNC(sub_832AFD30);
PPC_FUNC_IMPL(__imp__sub_832AFD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19192
	ctx.r3.s64 = r11.s64 + 19192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFD40"))) PPC_WEAK_FUNC(sub_832AFD40);
PPC_FUNC_IMPL(__imp__sub_832AFD40) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19196
	r31.s64 = r11.s64 + 19196;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82376898
	sub_82376898(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFDB0"))) PPC_WEAK_FUNC(sub_832AFDB0);
PPC_FUNC_IMPL(__imp__sub_832AFDB0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19208
	r31.s64 = r11.s64 + 19208;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c067c0
	sub_82C067C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFE20"))) PPC_WEAK_FUNC(sub_832AFE20);
PPC_FUNC_IMPL(__imp__sub_832AFE20) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19220
	r31.s64 = r11.s64 + 19220;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c068a8
	sub_82C068A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFE90"))) PPC_WEAK_FUNC(sub_832AFE90);
PPC_FUNC_IMPL(__imp__sub_832AFE90) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19232
	r31.s64 = r11.s64 + 19232;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c06990
	sub_82C06990(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832AFF00"))) PPC_WEAK_FUNC(sub_832AFF00);
PPC_FUNC_IMPL(__imp__sub_832AFF00) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,19312
	r11.s64 = r11.s64 + 19312;
	// addi r31,r11,140
	r31.s64 = r11.s64 + 140;
loc_832AFF24:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832aff24
	if (!cr0.lt) goto loc_832AFF24;
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

__attribute__((alias("__imp__sub_832AFF50"))) PPC_WEAK_FUNC(sub_832AFF50);
PPC_FUNC_IMPL(__imp__sub_832AFF50) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r30,4
	r30.s64 = 4;
	// addi r11,r11,19452
	r11.s64 = r11.s64 + 19452;
	// addi r31,r11,180
	r31.s64 = r11.s64 + 180;
loc_832AFF74:
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b38688
	sub_82B38688(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x832aff74
	if (!cr0.lt) goto loc_832AFF74;
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

__attribute__((alias("__imp__sub_832AFFA0"))) PPC_WEAK_FUNC(sub_832AFFA0);
PPC_FUNC_IMPL(__imp__sub_832AFFA0) {
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
	// li r29,4
	r29.s64 = 4;
	// addi r11,r11,19252
	r11.s64 = r11.s64 + 19252;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,64
	r31.s64 = r11.s64 + 64;
loc_832AFFC0:
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// beq cr6,0x832b0000
	if (cr6.eq) goto loc_832B0000;
loc_832AFFE8:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x832affe8
	if (!cr6.eq) goto loc_832AFFE8;
loc_832B0000:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bge 0x832affc0
	if (!cr0.lt) goto loc_832AFFC0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_832B0020"))) PPC_WEAK_FUNC(sub_832B0020);
PPC_FUNC_IMPL(__imp__sub_832B0020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19636
	ctx.r3.s64 = r11.s64 + 19636;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0030"))) PPC_WEAK_FUNC(sub_832B0030);
PPC_FUNC_IMPL(__imp__sub_832B0030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19696
	ctx.r3.s64 = r11.s64 + 19696;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0040"))) PPC_WEAK_FUNC(sub_832B0040);
PPC_FUNC_IMPL(__imp__sub_832B0040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19768
	ctx.r3.s64 = r11.s64 + 19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0050"))) PPC_WEAK_FUNC(sub_832B0050);
PPC_FUNC_IMPL(__imp__sub_832B0050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19772
	ctx.r3.s64 = r11.s64 + 19772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0060"))) PPC_WEAK_FUNC(sub_832B0060);
PPC_FUNC_IMPL(__imp__sub_832B0060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19776
	ctx.r3.s64 = r11.s64 + 19776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0070"))) PPC_WEAK_FUNC(sub_832B0070);
PPC_FUNC_IMPL(__imp__sub_832B0070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19780
	ctx.r3.s64 = r11.s64 + 19780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0080"))) PPC_WEAK_FUNC(sub_832B0080);
PPC_FUNC_IMPL(__imp__sub_832B0080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19784
	ctx.r3.s64 = r11.s64 + 19784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0090"))) PPC_WEAK_FUNC(sub_832B0090);
PPC_FUNC_IMPL(__imp__sub_832B0090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19788
	ctx.r3.s64 = r11.s64 + 19788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00A0"))) PPC_WEAK_FUNC(sub_832B00A0);
PPC_FUNC_IMPL(__imp__sub_832B00A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19792
	ctx.r3.s64 = r11.s64 + 19792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00B0"))) PPC_WEAK_FUNC(sub_832B00B0);
PPC_FUNC_IMPL(__imp__sub_832B00B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19796
	ctx.r3.s64 = r11.s64 + 19796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00C0"))) PPC_WEAK_FUNC(sub_832B00C0);
PPC_FUNC_IMPL(__imp__sub_832B00C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19800
	ctx.r3.s64 = r11.s64 + 19800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00D0"))) PPC_WEAK_FUNC(sub_832B00D0);
PPC_FUNC_IMPL(__imp__sub_832B00D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19804
	ctx.r3.s64 = r11.s64 + 19804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00E0"))) PPC_WEAK_FUNC(sub_832B00E0);
PPC_FUNC_IMPL(__imp__sub_832B00E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19808
	ctx.r3.s64 = r11.s64 + 19808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B00F0"))) PPC_WEAK_FUNC(sub_832B00F0);
PPC_FUNC_IMPL(__imp__sub_832B00F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19812
	ctx.r3.s64 = r11.s64 + 19812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0100"))) PPC_WEAK_FUNC(sub_832B0100);
PPC_FUNC_IMPL(__imp__sub_832B0100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19816
	ctx.r3.s64 = r11.s64 + 19816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0110"))) PPC_WEAK_FUNC(sub_832B0110);
PPC_FUNC_IMPL(__imp__sub_832B0110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19820
	ctx.r3.s64 = r11.s64 + 19820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0120"))) PPC_WEAK_FUNC(sub_832B0120);
PPC_FUNC_IMPL(__imp__sub_832B0120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19824
	ctx.r3.s64 = r11.s64 + 19824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0130"))) PPC_WEAK_FUNC(sub_832B0130);
PPC_FUNC_IMPL(__imp__sub_832B0130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19828
	ctx.r3.s64 = r11.s64 + 19828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0140"))) PPC_WEAK_FUNC(sub_832B0140);
PPC_FUNC_IMPL(__imp__sub_832B0140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19832
	ctx.r3.s64 = r11.s64 + 19832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0150"))) PPC_WEAK_FUNC(sub_832B0150);
PPC_FUNC_IMPL(__imp__sub_832B0150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19836
	ctx.r3.s64 = r11.s64 + 19836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0160"))) PPC_WEAK_FUNC(sub_832B0160);
PPC_FUNC_IMPL(__imp__sub_832B0160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19840
	ctx.r3.s64 = r11.s64 + 19840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0170"))) PPC_WEAK_FUNC(sub_832B0170);
PPC_FUNC_IMPL(__imp__sub_832B0170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19844
	ctx.r3.s64 = r11.s64 + 19844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0180"))) PPC_WEAK_FUNC(sub_832B0180);
PPC_FUNC_IMPL(__imp__sub_832B0180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19848
	ctx.r3.s64 = r11.s64 + 19848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0190"))) PPC_WEAK_FUNC(sub_832B0190);
PPC_FUNC_IMPL(__imp__sub_832B0190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19852
	ctx.r3.s64 = r11.s64 + 19852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01A0"))) PPC_WEAK_FUNC(sub_832B01A0);
PPC_FUNC_IMPL(__imp__sub_832B01A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19856
	ctx.r3.s64 = r11.s64 + 19856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01B0"))) PPC_WEAK_FUNC(sub_832B01B0);
PPC_FUNC_IMPL(__imp__sub_832B01B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19860
	ctx.r3.s64 = r11.s64 + 19860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01C0"))) PPC_WEAK_FUNC(sub_832B01C0);
PPC_FUNC_IMPL(__imp__sub_832B01C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19864
	ctx.r3.s64 = r11.s64 + 19864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01D0"))) PPC_WEAK_FUNC(sub_832B01D0);
PPC_FUNC_IMPL(__imp__sub_832B01D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19868
	ctx.r3.s64 = r11.s64 + 19868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01E0"))) PPC_WEAK_FUNC(sub_832B01E0);
PPC_FUNC_IMPL(__imp__sub_832B01E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19872
	ctx.r3.s64 = r11.s64 + 19872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B01F0"))) PPC_WEAK_FUNC(sub_832B01F0);
PPC_FUNC_IMPL(__imp__sub_832B01F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19876
	ctx.r3.s64 = r11.s64 + 19876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0200"))) PPC_WEAK_FUNC(sub_832B0200);
PPC_FUNC_IMPL(__imp__sub_832B0200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19880
	ctx.r3.s64 = r11.s64 + 19880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0210"))) PPC_WEAK_FUNC(sub_832B0210);
PPC_FUNC_IMPL(__imp__sub_832B0210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19884
	ctx.r3.s64 = r11.s64 + 19884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0220"))) PPC_WEAK_FUNC(sub_832B0220);
PPC_FUNC_IMPL(__imp__sub_832B0220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19888
	ctx.r3.s64 = r11.s64 + 19888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0230"))) PPC_WEAK_FUNC(sub_832B0230);
PPC_FUNC_IMPL(__imp__sub_832B0230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19892
	ctx.r3.s64 = r11.s64 + 19892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0240"))) PPC_WEAK_FUNC(sub_832B0240);
PPC_FUNC_IMPL(__imp__sub_832B0240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19896
	ctx.r3.s64 = r11.s64 + 19896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0250"))) PPC_WEAK_FUNC(sub_832B0250);
PPC_FUNC_IMPL(__imp__sub_832B0250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19900
	ctx.r3.s64 = r11.s64 + 19900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0260"))) PPC_WEAK_FUNC(sub_832B0260);
PPC_FUNC_IMPL(__imp__sub_832B0260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19904
	ctx.r3.s64 = r11.s64 + 19904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0270"))) PPC_WEAK_FUNC(sub_832B0270);
PPC_FUNC_IMPL(__imp__sub_832B0270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19908
	ctx.r3.s64 = r11.s64 + 19908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0280"))) PPC_WEAK_FUNC(sub_832B0280);
PPC_FUNC_IMPL(__imp__sub_832B0280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19924
	ctx.r3.s64 = r11.s64 + 19924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0290"))) PPC_WEAK_FUNC(sub_832B0290);
PPC_FUNC_IMPL(__imp__sub_832B0290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19928
	ctx.r3.s64 = r11.s64 + 19928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02A0"))) PPC_WEAK_FUNC(sub_832B02A0);
PPC_FUNC_IMPL(__imp__sub_832B02A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19932
	ctx.r3.s64 = r11.s64 + 19932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02B0"))) PPC_WEAK_FUNC(sub_832B02B0);
PPC_FUNC_IMPL(__imp__sub_832B02B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = r11.s64 + 19936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02C0"))) PPC_WEAK_FUNC(sub_832B02C0);
PPC_FUNC_IMPL(__imp__sub_832B02C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19940
	ctx.r3.s64 = r11.s64 + 19940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02D0"))) PPC_WEAK_FUNC(sub_832B02D0);
PPC_FUNC_IMPL(__imp__sub_832B02D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19944
	ctx.r3.s64 = r11.s64 + 19944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02E0"))) PPC_WEAK_FUNC(sub_832B02E0);
PPC_FUNC_IMPL(__imp__sub_832B02E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19948
	ctx.r3.s64 = r11.s64 + 19948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02F0"))) PPC_WEAK_FUNC(sub_832B02F0);
PPC_FUNC_IMPL(__imp__sub_832B02F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19952
	ctx.r3.s64 = r11.s64 + 19952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0300"))) PPC_WEAK_FUNC(sub_832B0300);
PPC_FUNC_IMPL(__imp__sub_832B0300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19956
	ctx.r3.s64 = r11.s64 + 19956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0310"))) PPC_WEAK_FUNC(sub_832B0310);
PPC_FUNC_IMPL(__imp__sub_832B0310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19960
	ctx.r3.s64 = r11.s64 + 19960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0320"))) PPC_WEAK_FUNC(sub_832B0320);
PPC_FUNC_IMPL(__imp__sub_832B0320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19964
	ctx.r3.s64 = r11.s64 + 19964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0330"))) PPC_WEAK_FUNC(sub_832B0330);
PPC_FUNC_IMPL(__imp__sub_832B0330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19968
	ctx.r3.s64 = r11.s64 + 19968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0340"))) PPC_WEAK_FUNC(sub_832B0340);
PPC_FUNC_IMPL(__imp__sub_832B0340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19972
	ctx.r3.s64 = r11.s64 + 19972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0350"))) PPC_WEAK_FUNC(sub_832B0350);
PPC_FUNC_IMPL(__imp__sub_832B0350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19976
	ctx.r3.s64 = r11.s64 + 19976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0360"))) PPC_WEAK_FUNC(sub_832B0360);
PPC_FUNC_IMPL(__imp__sub_832B0360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19992
	ctx.r3.s64 = r11.s64 + 19992;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0370"))) PPC_WEAK_FUNC(sub_832B0370);
PPC_FUNC_IMPL(__imp__sub_832B0370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,19996
	ctx.r3.s64 = r11.s64 + 19996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0380"))) PPC_WEAK_FUNC(sub_832B0380);
PPC_FUNC_IMPL(__imp__sub_832B0380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20000
	ctx.r3.s64 = r11.s64 + 20000;
	// b 0x82b45680
	sub_82B45680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0390"))) PPC_WEAK_FUNC(sub_832B0390);
PPC_FUNC_IMPL(__imp__sub_832B0390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20040
	ctx.r3.s64 = r11.s64 + 20040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B03A0"))) PPC_WEAK_FUNC(sub_832B03A0);
PPC_FUNC_IMPL(__imp__sub_832B03A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20044
	ctx.r3.s64 = r11.s64 + 20044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B03B0"))) PPC_WEAK_FUNC(sub_832B03B0);
PPC_FUNC_IMPL(__imp__sub_832B03B0) {
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
	// addi r31,r11,20048
	r31.s64 = r11.s64 + 20048;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82b45680
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82b45680
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c045b8
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_832B0408"))) PPC_WEAK_FUNC(sub_832B0408);
PPC_FUNC_IMPL(__imp__sub_832B0408) {
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
	// addi r31,r11,20168
	r31.s64 = r11.s64 + 20168;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82b45680
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82b45680
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c045b8
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
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

__attribute__((alias("__imp__sub_832B0460"))) PPC_WEAK_FUNC(sub_832B0460);
PPC_FUNC_IMPL(__imp__sub_832B0460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,20296
	ctx.r3.s64 = r11.s64 + 20296;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0470"))) PPC_WEAK_FUNC(sub_832B0470);
PPC_FUNC_IMPL(__imp__sub_832B0470) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,20420
	r31.s64 = r11.s64 + 20420;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82c82dc0
	sub_82C82DC0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_832B04E0"))) PPC_WEAK_FUNC(sub_832B04E0);
PPC_FUNC_IMPL(__imp__sub_832B04E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22472
	ctx.r3.s64 = r11.s64 + 22472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B04F0"))) PPC_WEAK_FUNC(sub_832B04F0);
PPC_FUNC_IMPL(__imp__sub_832B04F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22468
	ctx.r3.s64 = r11.s64 + 22468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0500"))) PPC_WEAK_FUNC(sub_832B0500);
PPC_FUNC_IMPL(__imp__sub_832B0500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22448);
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

__attribute__((alias("__imp__sub_832B0520"))) PPC_WEAK_FUNC(sub_832B0520);
PPC_FUNC_IMPL(__imp__sub_832B0520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0528"))) PPC_WEAK_FUNC(sub_832B0528);
PPC_FUNC_IMPL(__imp__sub_832B0528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22456);
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

__attribute__((alias("__imp__sub_832B0548"))) PPC_WEAK_FUNC(sub_832B0548);
PPC_FUNC_IMPL(__imp__sub_832B0548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0550"))) PPC_WEAK_FUNC(sub_832B0550);
PPC_FUNC_IMPL(__imp__sub_832B0550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22464);
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

__attribute__((alias("__imp__sub_832B0570"))) PPC_WEAK_FUNC(sub_832B0570);
PPC_FUNC_IMPL(__imp__sub_832B0570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0578"))) PPC_WEAK_FUNC(sub_832B0578);
PPC_FUNC_IMPL(__imp__sub_832B0578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22480);
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

__attribute__((alias("__imp__sub_832B0598"))) PPC_WEAK_FUNC(sub_832B0598);
PPC_FUNC_IMPL(__imp__sub_832B0598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B05A0"))) PPC_WEAK_FUNC(sub_832B05A0);
PPC_FUNC_IMPL(__imp__sub_832B05A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22488);
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

__attribute__((alias("__imp__sub_832B05C0"))) PPC_WEAK_FUNC(sub_832B05C0);
PPC_FUNC_IMPL(__imp__sub_832B05C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B05C8"))) PPC_WEAK_FUNC(sub_832B05C8);
PPC_FUNC_IMPL(__imp__sub_832B05C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22492);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05D8"))) PPC_WEAK_FUNC(sub_832B05D8);
PPC_FUNC_IMPL(__imp__sub_832B05D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-6252
	ctx.r3.s64 = r11.s64 + -6252;
	// b 0x82c725a8
	sub_82C725A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05E8"))) PPC_WEAK_FUNC(sub_832B05E8);
PPC_FUNC_IMPL(__imp__sub_832B05E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,22508
	ctx.r3.s64 = r11.s64 + 22508;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B05F8"))) PPC_WEAK_FUNC(sub_832B05F8);
PPC_FUNC_IMPL(__imp__sub_832B05F8) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// addi r30,r31,22632
	r30.s64 = r31.s64 + 22632;
	// lwz r3,22632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22632);
	// bl 0x82c87a68
	sub_82C87A68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22632(r31)
	PPC_STORE_U32(r31.u32 + 22632, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B0650"))) PPC_WEAK_FUNC(sub_832B0650);
PPC_FUNC_IMPL(__imp__sub_832B0650) {
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
	// lis r31,-31949
	r31.s64 = -2093809664;
	// addi r30,r31,22620
	r30.s64 = r31.s64 + 22620;
	// lwz r3,22620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22620);
	// bl 0x82c87a68
	sub_82C87A68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22620(r31)
	PPC_STORE_U32(r31.u32 + 22620, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B06A8"))) PPC_WEAK_FUNC(sub_832B06A8);
PPC_FUNC_IMPL(__imp__sub_832B06A8) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r31,r11,-6040
	r31.s64 = r11.s64 + -6040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c82038
	sub_82C82038(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82c87a68
	sub_82C87A68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_832B0700"))) PPC_WEAK_FUNC(sub_832B0700);
PPC_FUNC_IMPL(__imp__sub_832B0700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22696);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0710"))) PPC_WEAK_FUNC(sub_832B0710);
PPC_FUNC_IMPL(__imp__sub_832B0710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,22708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22708);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0720"))) PPC_WEAK_FUNC(sub_832B0720);
PPC_FUNC_IMPL(__imp__sub_832B0720) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,28492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28492);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b075c
	if (cr6.eq) goto loc_832B075C;
	// bl 0x826c4b38
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832b075c
	if (cr0.eq) goto loc_832B075C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832B075C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0770"))) PPC_WEAK_FUNC(sub_832B0770);
PPC_FUNC_IMPL(__imp__sub_832B0770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,28680
	ctx.r3.s64 = r11.s64 + 28680;
	// b 0x82cd1f60
	sub_82CD1F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0780"))) PPC_WEAK_FUNC(sub_832B0780);
PPC_FUNC_IMPL(__imp__sub_832B0780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,28756
	ctx.r3.s64 = r11.s64 + 28756;
	// b 0x82cd1f60
	sub_82CD1F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0790"))) PPC_WEAK_FUNC(sub_832B0790);
PPC_FUNC_IMPL(__imp__sub_832B0790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r11,28757
	ctx.r3.s64 = r11.s64 + 28757;
	// b 0x82cd25c8
	sub_82CD25C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B07A0"))) PPC_WEAK_FUNC(sub_832B07A0);
PPC_FUNC_IMPL(__imp__sub_832B07A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,15788
	r11.s64 = r11.s64 + 15788;
	// stw r11,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B07B8"))) PPC_WEAK_FUNC(sub_832B07B8);
PPC_FUNC_IMPL(__imp__sub_832B07B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,15788
	r11.s64 = r11.s64 + 15788;
	// stw r11,800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 800, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B07D0"))) PPC_WEAK_FUNC(sub_832B07D0);
PPC_FUNC_IMPL(__imp__sub_832B07D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,26848
	r11.s64 = r11.s64 + 26848;
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B07E8"))) PPC_WEAK_FUNC(sub_832B07E8);
PPC_FUNC_IMPL(__imp__sub_832B07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,-24208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24208, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0800"))) PPC_WEAK_FUNC(sub_832B0800);
PPC_FUNC_IMPL(__imp__sub_832B0800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,-19716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0818"))) PPC_WEAK_FUNC(sub_832B0818);
PPC_FUNC_IMPL(__imp__sub_832B0818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-19236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19236, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0830"))) PPC_WEAK_FUNC(sub_832B0830);
PPC_FUNC_IMPL(__imp__sub_832B0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-18960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18960, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0848"))) PPC_WEAK_FUNC(sub_832B0848);
PPC_FUNC_IMPL(__imp__sub_832B0848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-18684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18684, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0860"))) PPC_WEAK_FUNC(sub_832B0860);
PPC_FUNC_IMPL(__imp__sub_832B0860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-18408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18408, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0878"))) PPC_WEAK_FUNC(sub_832B0878);
PPC_FUNC_IMPL(__imp__sub_832B0878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-18132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18132, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0890"))) PPC_WEAK_FUNC(sub_832B0890);
PPC_FUNC_IMPL(__imp__sub_832B0890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-17856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17856, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B08A8"))) PPC_WEAK_FUNC(sub_832B08A8);
PPC_FUNC_IMPL(__imp__sub_832B08A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-17576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17576, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B08C0"))) PPC_WEAK_FUNC(sub_832B08C0);
PPC_FUNC_IMPL(__imp__sub_832B08C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-17300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17300, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B08D8"))) PPC_WEAK_FUNC(sub_832B08D8);
PPC_FUNC_IMPL(__imp__sub_832B08D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-17024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17024, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B08F0"))) PPC_WEAK_FUNC(sub_832B08F0);
PPC_FUNC_IMPL(__imp__sub_832B08F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-16748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16748, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0908"))) PPC_WEAK_FUNC(sub_832B0908);
PPC_FUNC_IMPL(__imp__sub_832B0908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-16472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16472, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0920"))) PPC_WEAK_FUNC(sub_832B0920);
PPC_FUNC_IMPL(__imp__sub_832B0920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-16196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16196, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0938"))) PPC_WEAK_FUNC(sub_832B0938);
PPC_FUNC_IMPL(__imp__sub_832B0938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-15920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15920, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0950"))) PPC_WEAK_FUNC(sub_832B0950);
PPC_FUNC_IMPL(__imp__sub_832B0950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-15644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15644, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0968"))) PPC_WEAK_FUNC(sub_832B0968);
PPC_FUNC_IMPL(__imp__sub_832B0968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-15368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15368, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0980"))) PPC_WEAK_FUNC(sub_832B0980);
PPC_FUNC_IMPL(__imp__sub_832B0980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-15092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15092, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0998"))) PPC_WEAK_FUNC(sub_832B0998);
PPC_FUNC_IMPL(__imp__sub_832B0998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-14816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14816, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B09B0"))) PPC_WEAK_FUNC(sub_832B09B0);
PPC_FUNC_IMPL(__imp__sub_832B09B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-14540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14540, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B09C8"))) PPC_WEAK_FUNC(sub_832B09C8);
PPC_FUNC_IMPL(__imp__sub_832B09C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-14264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14264, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B09E0"))) PPC_WEAK_FUNC(sub_832B09E0);
PPC_FUNC_IMPL(__imp__sub_832B09E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-13988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13988, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B09F8"))) PPC_WEAK_FUNC(sub_832B09F8);
PPC_FUNC_IMPL(__imp__sub_832B09F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-13712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13712, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A10"))) PPC_WEAK_FUNC(sub_832B0A10);
PPC_FUNC_IMPL(__imp__sub_832B0A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-13436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13436, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A28"))) PPC_WEAK_FUNC(sub_832B0A28);
PPC_FUNC_IMPL(__imp__sub_832B0A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-13160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13160, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A40"))) PPC_WEAK_FUNC(sub_832B0A40);
PPC_FUNC_IMPL(__imp__sub_832B0A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-12884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12884, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A58"))) PPC_WEAK_FUNC(sub_832B0A58);
PPC_FUNC_IMPL(__imp__sub_832B0A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-12600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12600, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A70"))) PPC_WEAK_FUNC(sub_832B0A70);
PPC_FUNC_IMPL(__imp__sub_832B0A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-12324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12324, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0A88"))) PPC_WEAK_FUNC(sub_832B0A88);
PPC_FUNC_IMPL(__imp__sub_832B0A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-12048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12048, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AA0"))) PPC_WEAK_FUNC(sub_832B0AA0);
PPC_FUNC_IMPL(__imp__sub_832B0AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-11772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11772, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AB8"))) PPC_WEAK_FUNC(sub_832B0AB8);
PPC_FUNC_IMPL(__imp__sub_832B0AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-11496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11496, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AD0"))) PPC_WEAK_FUNC(sub_832B0AD0);
PPC_FUNC_IMPL(__imp__sub_832B0AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-11220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11220, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0AE8"))) PPC_WEAK_FUNC(sub_832B0AE8);
PPC_FUNC_IMPL(__imp__sub_832B0AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-10944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10944, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B00"))) PPC_WEAK_FUNC(sub_832B0B00);
PPC_FUNC_IMPL(__imp__sub_832B0B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-10668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10668, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B18"))) PPC_WEAK_FUNC(sub_832B0B18);
PPC_FUNC_IMPL(__imp__sub_832B0B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-10392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10392, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B30"))) PPC_WEAK_FUNC(sub_832B0B30);
PPC_FUNC_IMPL(__imp__sub_832B0B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-10116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10116, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B48"))) PPC_WEAK_FUNC(sub_832B0B48);
PPC_FUNC_IMPL(__imp__sub_832B0B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-8808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8808, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B60"))) PPC_WEAK_FUNC(sub_832B0B60);
PPC_FUNC_IMPL(__imp__sub_832B0B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9840
	r11.s64 = r11.s64 + -9840;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B78"))) PPC_WEAK_FUNC(sub_832B0B78);
PPC_FUNC_IMPL(__imp__sub_832B0B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-8532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8532, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B90"))) PPC_WEAK_FUNC(sub_832B0B90);
PPC_FUNC_IMPL(__imp__sub_832B0B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-8256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8256, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0BA8"))) PPC_WEAK_FUNC(sub_832B0BA8);
PPC_FUNC_IMPL(__imp__sub_832B0BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7976
	r11.s64 = r11.s64 + -7976;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0BC0"))) PPC_WEAK_FUNC(sub_832B0BC0);
PPC_FUNC_IMPL(__imp__sub_832B0BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6944
	r11.s64 = r11.s64 + -6944;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0BD8"))) PPC_WEAK_FUNC(sub_832B0BD8);
PPC_FUNC_IMPL(__imp__sub_832B0BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4880
	r11.s64 = r11.s64 + -4880;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0BF0"))) PPC_WEAK_FUNC(sub_832B0BF0);
PPC_FUNC_IMPL(__imp__sub_832B0BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5912
	r11.s64 = r11.s64 + -5912;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C08"))) PPC_WEAK_FUNC(sub_832B0C08);
PPC_FUNC_IMPL(__imp__sub_832B0C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3848
	r11.s64 = r11.s64 + -3848;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C20"))) PPC_WEAK_FUNC(sub_832B0C20);
PPC_FUNC_IMPL(__imp__sub_832B0C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-2816
	r11.s64 = r11.s64 + -2816;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C38"))) PPC_WEAK_FUNC(sub_832B0C38);
PPC_FUNC_IMPL(__imp__sub_832B0C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1784
	r11.s64 = r11.s64 + -1784;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C50"))) PPC_WEAK_FUNC(sub_832B0C50);
PPC_FUNC_IMPL(__imp__sub_832B0C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C58"))) PPC_WEAK_FUNC(sub_832B0C58);
PPC_FUNC_IMPL(__imp__sub_832B0C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C70"))) PPC_WEAK_FUNC(sub_832B0C70);
PPC_FUNC_IMPL(__imp__sub_832B0C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-440
	r11.s64 = r11.s64 + -440;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C88"))) PPC_WEAK_FUNC(sub_832B0C88);
PPC_FUNC_IMPL(__imp__sub_832B0C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,592
	r11.s64 = r11.s64 + 592;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0CA0"))) PPC_WEAK_FUNC(sub_832B0CA0);
PPC_FUNC_IMPL(__imp__sub_832B0CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1624
	r11.s64 = r11.s64 + 1624;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0CB8"))) PPC_WEAK_FUNC(sub_832B0CB8);
PPC_FUNC_IMPL(__imp__sub_832B0CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,3696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3696, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0CD0"))) PPC_WEAK_FUNC(sub_832B0CD0);
PPC_FUNC_IMPL(__imp__sub_832B0CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2664
	r11.s64 = r11.s64 + 2664;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0CE8"))) PPC_WEAK_FUNC(sub_832B0CE8);
PPC_FUNC_IMPL(__imp__sub_832B0CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3984
	r11.s64 = r11.s64 + 3984;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D00"))) PPC_WEAK_FUNC(sub_832B0D00);
PPC_FUNC_IMPL(__imp__sub_832B0D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,6048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6048, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D18"))) PPC_WEAK_FUNC(sub_832B0D18);
PPC_FUNC_IMPL(__imp__sub_832B0D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5016
	r11.s64 = r11.s64 + 5016;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D30"))) PPC_WEAK_FUNC(sub_832B0D30);
PPC_FUNC_IMPL(__imp__sub_832B0D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,6324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6324, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D48"))) PPC_WEAK_FUNC(sub_832B0D48);
PPC_FUNC_IMPL(__imp__sub_832B0D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,6600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6600, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D60"))) PPC_WEAK_FUNC(sub_832B0D60);
PPC_FUNC_IMPL(__imp__sub_832B0D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,7912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7912, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D78"))) PPC_WEAK_FUNC(sub_832B0D78);
PPC_FUNC_IMPL(__imp__sub_832B0D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6880
	r11.s64 = r11.s64 + 6880;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0D90"))) PPC_WEAK_FUNC(sub_832B0D90);
PPC_FUNC_IMPL(__imp__sub_832B0D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-26984
	r11.s64 = r11.s64 + -26984;
	// stw r11,8192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8192, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0DA8"))) PPC_WEAK_FUNC(sub_832B0DA8);
PPC_FUNC_IMPL(__imp__sub_832B0DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,8468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8468, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0DC0"))) PPC_WEAK_FUNC(sub_832B0DC0);
PPC_FUNC_IMPL(__imp__sub_832B0DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0DD8"))) PPC_WEAK_FUNC(sub_832B0DD8);
PPC_FUNC_IMPL(__imp__sub_832B0DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,9020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9020, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0DF0"))) PPC_WEAK_FUNC(sub_832B0DF0);
PPC_FUNC_IMPL(__imp__sub_832B0DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9296
	r11.s64 = r11.s64 + 9296;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E08"))) PPC_WEAK_FUNC(sub_832B0E08);
PPC_FUNC_IMPL(__imp__sub_832B0E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,11360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11360, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E20"))) PPC_WEAK_FUNC(sub_832B0E20);
PPC_FUNC_IMPL(__imp__sub_832B0E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10328
	r11.s64 = r11.s64 + 10328;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E38"))) PPC_WEAK_FUNC(sub_832B0E38);
PPC_FUNC_IMPL(__imp__sub_832B0E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,19640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19640, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E50"))) PPC_WEAK_FUNC(sub_832B0E50);
PPC_FUNC_IMPL(__imp__sub_832B0E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,20704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20704, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E68"))) PPC_WEAK_FUNC(sub_832B0E68);
PPC_FUNC_IMPL(__imp__sub_832B0E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,21808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21808, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E80"))) PPC_WEAK_FUNC(sub_832B0E80);
PPC_FUNC_IMPL(__imp__sub_832B0E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,20980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20980, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E98"))) PPC_WEAK_FUNC(sub_832B0E98);
PPC_FUNC_IMPL(__imp__sub_832B0E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,22912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22912, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0EB0"))) PPC_WEAK_FUNC(sub_832B0EB0);
PPC_FUNC_IMPL(__imp__sub_832B0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,22360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22360, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0EC8"))) PPC_WEAK_FUNC(sub_832B0EC8);
PPC_FUNC_IMPL(__imp__sub_832B0EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,21532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21532, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0EE0"))) PPC_WEAK_FUNC(sub_832B0EE0);
PPC_FUNC_IMPL(__imp__sub_832B0EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,22636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22636, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0EF8"))) PPC_WEAK_FUNC(sub_832B0EF8);
PPC_FUNC_IMPL(__imp__sub_832B0EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,21256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21256, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F10"))) PPC_WEAK_FUNC(sub_832B0F10);
PPC_FUNC_IMPL(__imp__sub_832B0F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,22084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22084, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F28"))) PPC_WEAK_FUNC(sub_832B0F28);
PPC_FUNC_IMPL(__imp__sub_832B0F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19672
	r11.s64 = r11.s64 + 19672;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F40"))) PPC_WEAK_FUNC(sub_832B0F40);
PPC_FUNC_IMPL(__imp__sub_832B0F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,23188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23188, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F58"))) PPC_WEAK_FUNC(sub_832B0F58);
PPC_FUNC_IMPL(__imp__sub_832B0F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,23468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23468, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F70"))) PPC_WEAK_FUNC(sub_832B0F70);
PPC_FUNC_IMPL(__imp__sub_832B0F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,23744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23744, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0F88"))) PPC_WEAK_FUNC(sub_832B0F88);
PPC_FUNC_IMPL(__imp__sub_832B0F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,24296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24296, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0FA0"))) PPC_WEAK_FUNC(sub_832B0FA0);
PPC_FUNC_IMPL(__imp__sub_832B0FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,24020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24020, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0FB8"))) PPC_WEAK_FUNC(sub_832B0FB8);
PPC_FUNC_IMPL(__imp__sub_832B0FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,24572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24572, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0FD0"))) PPC_WEAK_FUNC(sub_832B0FD0);
PPC_FUNC_IMPL(__imp__sub_832B0FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,24852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24852, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0FE8"))) PPC_WEAK_FUNC(sub_832B0FE8);
PPC_FUNC_IMPL(__imp__sub_832B0FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,25132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25132, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1000"))) PPC_WEAK_FUNC(sub_832B1000);
PPC_FUNC_IMPL(__imp__sub_832B1000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,26440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26440, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1018"))) PPC_WEAK_FUNC(sub_832B1018);
PPC_FUNC_IMPL(__imp__sub_832B1018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25408
	r11.s64 = r11.s64 + 25408;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1030"))) PPC_WEAK_FUNC(sub_832B1030);
PPC_FUNC_IMPL(__imp__sub_832B1030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,26716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1048"))) PPC_WEAK_FUNC(sub_832B1048);
PPC_FUNC_IMPL(__imp__sub_832B1048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,26992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26992, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1060"))) PPC_WEAK_FUNC(sub_832B1060);
PPC_FUNC_IMPL(__imp__sub_832B1060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,27268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27268, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1078"))) PPC_WEAK_FUNC(sub_832B1078);
PPC_FUNC_IMPL(__imp__sub_832B1078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,27544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27544, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1090"))) PPC_WEAK_FUNC(sub_832B1090);
PPC_FUNC_IMPL(__imp__sub_832B1090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,27820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27820, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B10A8"))) PPC_WEAK_FUNC(sub_832B10A8);
PPC_FUNC_IMPL(__imp__sub_832B10A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,28096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28096, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B10C0"))) PPC_WEAK_FUNC(sub_832B10C0);
PPC_FUNC_IMPL(__imp__sub_832B10C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,28372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28372, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B10D8"))) PPC_WEAK_FUNC(sub_832B10D8);
PPC_FUNC_IMPL(__imp__sub_832B10D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28648
	r11.s64 = r11.s64 + 28648;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B10F0"))) PPC_WEAK_FUNC(sub_832B10F0);
PPC_FUNC_IMPL(__imp__sub_832B10F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,29680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29680, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1108"))) PPC_WEAK_FUNC(sub_832B1108);
PPC_FUNC_IMPL(__imp__sub_832B1108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,29956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29956, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1120"))) PPC_WEAK_FUNC(sub_832B1120);
PPC_FUNC_IMPL(__imp__sub_832B1120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,30304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30304, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1138"))) PPC_WEAK_FUNC(sub_832B1138);
PPC_FUNC_IMPL(__imp__sub_832B1138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30584
	r11.s64 = r11.s64 + 30584;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1150"))) PPC_WEAK_FUNC(sub_832B1150);
PPC_FUNC_IMPL(__imp__sub_832B1150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-27084
	r11.s64 = r11.s64 + -27084;
	// stw r11,-31848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31848, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1168"))) PPC_WEAK_FUNC(sub_832B1168);
PPC_FUNC_IMPL(__imp__sub_832B1168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32656
	r11.s64 = r11.s64 + 32656;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1180"))) PPC_WEAK_FUNC(sub_832B1180);
PPC_FUNC_IMPL(__imp__sub_832B1180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31624
	r11.s64 = r11.s64 + 31624;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1198"))) PPC_WEAK_FUNC(sub_832B1198);
PPC_FUNC_IMPL(__imp__sub_832B1198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,-31552
	ctx.r3.s64 = r11.s64 + -31552;
	// b 0x82e7e4f8
	sub_82E7E4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B11A8"))) PPC_WEAK_FUNC(sub_832B11A8);
PPC_FUNC_IMPL(__imp__sub_832B11A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,-8904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8904, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B11C0"))) PPC_WEAK_FUNC(sub_832B11C0);
PPC_FUNC_IMPL(__imp__sub_832B11C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,-30336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30336, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B11D8"))) PPC_WEAK_FUNC(sub_832B11D8);
PPC_FUNC_IMPL(__imp__sub_832B11D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-1124
	r11.s64 = r11.s64 + -1124;
	// stw r11,-30068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30068, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B11F0"))) PPC_WEAK_FUNC(sub_832B11F0);
PPC_FUNC_IMPL(__imp__sub_832B11F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31448
	r11.s64 = r11.s64 + -31448;
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1208"))) PPC_WEAK_FUNC(sub_832B1208);
PPC_FUNC_IMPL(__imp__sub_832B1208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31528
	r11.s64 = r11.s64 + -31528;
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1220"))) PPC_WEAK_FUNC(sub_832B1220);
PPC_FUNC_IMPL(__imp__sub_832B1220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31368
	r11.s64 = r11.s64 + -31368;
	// stw r10,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1238"))) PPC_WEAK_FUNC(sub_832B1238);
PPC_FUNC_IMPL(__imp__sub_832B1238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,-29524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29524, r11.u32);
	// blr 
	return;
}

