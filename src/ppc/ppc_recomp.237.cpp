#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_832AFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x82be41a8
	sub_82BE41A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFA20) {
	__imp__sub_832AFA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// b 0x82be42c0
	sub_82BE42C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFA30) {
	__imp__sub_832AFA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFA40) {
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
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r31,r11,-6720
	ctx.r31.s64 = ctx.r11.s64 + -6720;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afa68
	if (ctx.cr6.eq) goto loc_832AFA68;
	// bl 0x8221be68
	ctx.lr = 0x832AFA68;
	sub_8221BE68(ctx, base);
loc_832AFA68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AFA40) {
	__imp__sub_832AFA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24148
	ctx.r3.s64 = ctx.r11.s64 + 24148;
	// b 0x82bed368
	sub_82BED368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFA98) {
	__imp__sub_832AFA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24188
	ctx.r3.s64 = ctx.r11.s64 + 24188;
	// b 0x82bee7b8
	sub_82BEE7B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFAA8) {
	__imp__sub_832AFAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x82bef8e8
	sub_82BEF8E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFAB8) {
	__imp__sub_832AFAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFAC8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18468
	ctx.r31.s64 = ctx.r11.s64 + 18468;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afaf0
	if (ctx.cr6.eq) goto loc_832AFAF0;
	// bl 0x82bf2158
	ctx.lr = 0x832AFAF0;
	sub_82BF2158(ctx, base);
loc_832AFAF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AFAC8) {
	__imp__sub_832AFAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x82befe78
	sub_82BEFE78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFB20) {
	__imp__sub_832AFB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r3,r11,24444
	ctx.r3.s64 = ctx.r11.s64 + 24444;
	// b 0x82bf1bc8
	sub_82BF1BC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFB30) {
	__imp__sub_832AFB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFB40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,18508
	ctx.r31.s64 = ctx.r11.s64 + 18508;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afb68
	if (ctx.cr6.eq) goto loc_832AFB68;
	// bl 0x82bf2158
	ctx.lr = 0x832AFB68;
	sub_82BF2158(ctx, base);
loc_832AFB68:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832AFB40) {
	__imp__sub_832AFB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFB98) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18900
	ctx.r31.s64 = ctx.r11.s64 + 18900;
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
	// bl 0x82bfc6a8
	ctx.lr = 0x832AFBDC;
	sub_82BFC6A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFBE4;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFB98) {
	__imp__sub_832AFB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18924
	ctx.r3.s64 = ctx.r11.s64 + 18924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFC08) {
	__imp__sub_832AFC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18940
	ctx.r3.s64 = ctx.r11.s64 + 18940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFC18) {
	__imp__sub_832AFC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFC28) {
	__imp__sub_832AFC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,24548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832AFC38) {
	__imp__sub_832AFC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832AFC58) {
	__imp__sub_832AFC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFC60) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,18928
	ctx.r31.s64 = ctx.r11.s64 + 18928;
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
	// bl 0x82309298
	ctx.lr = 0x832AFCA4;
	sub_82309298(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFCAC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFC60) {
	__imp__sub_832AFC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFCD0) {
	__imp__sub_832AFCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFCE0) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,19052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19052);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832afd0c
	if (ctx.cr6.eq) goto loc_832AFD0C;
	// bl 0x824fe010
	ctx.lr = 0x832AFD04;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19052, ctx.r11.u32);
loc_832AFD0C:
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

PPC_WEAK_FUNC(sub_832AFCE0) {
	__imp__sub_832AFCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19104
	ctx.r3.s64 = ctx.r11.s64 + 19104;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFD20) {
	__imp__sub_832AFD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19192
	ctx.r3.s64 = ctx.r11.s64 + 19192;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFD30) {
	__imp__sub_832AFD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFD40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19196
	ctx.r31.s64 = ctx.r11.s64 + 19196;
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
	// bl 0x82376898
	ctx.lr = 0x832AFD84;
	sub_82376898(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFD8C;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFD40) {
	__imp__sub_832AFD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFDB0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19208
	ctx.r31.s64 = ctx.r11.s64 + 19208;
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
	// bl 0x82c067c0
	ctx.lr = 0x832AFDF4;
	sub_82C067C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFDFC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFDB0) {
	__imp__sub_832AFDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFE20) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19220
	ctx.r31.s64 = ctx.r11.s64 + 19220;
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
	// bl 0x82c068a8
	ctx.lr = 0x832AFE64;
	sub_82C068A8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFE6C;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFE20) {
	__imp__sub_832AFE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFE90) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,19232
	ctx.r31.s64 = ctx.r11.s64 + 19232;
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
	// bl 0x82c06990
	ctx.lr = 0x832AFED4;
	sub_82C06990(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832AFEDC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832AFE90) {
	__imp__sub_832AFE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFF00) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
	// addi r31,r11,140
	ctx.r31.s64 = ctx.r11.s64 + 140;
loc_832AFF24:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ce870
	ctx.lr = 0x832AFF30;
	sub_829CE870(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832aff24
	if (!ctx.cr0.lt) goto loc_832AFF24;
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

PPC_WEAK_FUNC(sub_832AFF00) {
	__imp__sub_832AFF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFF50) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// addi r31,r11,180
	ctx.r31.s64 = ctx.r11.s64 + 180;
loc_832AFF74:
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b38688
	ctx.lr = 0x832AFF80;
	sub_82B38688(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x832aff74
	if (!ctx.cr0.lt) goto loc_832AFF74;
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

PPC_WEAK_FUNC(sub_832AFF50) {
	__imp__sub_832AFF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832AFFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832AFFA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r11,r11,19252
	ctx.r11.s64 = ctx.r11.s64 + 19252;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_832AFFC0:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// beq cr6,0x832b0000
	if (ctx.cr6.eq) goto loc_832B0000;
loc_832AFFE8:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x832AFFF0;
	sub_824FE010(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x832affe8
	if (!ctx.cr6.eq) goto loc_832AFFE8;
loc_832B0000:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824fe010
	ctx.lr = 0x832B0008;
	sub_824FE010(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832affc0
	if (!ctx.cr0.lt) goto loc_832AFFC0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832AFFA0) {
	__imp__sub_832AFFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19636
	ctx.r3.s64 = ctx.r11.s64 + 19636;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0020) {
	__imp__sub_832B0020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x82c08b20
	sub_82C08B20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0030) {
	__imp__sub_832B0030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0040) {
	__imp__sub_832B0040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19772
	ctx.r3.s64 = ctx.r11.s64 + 19772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0050) {
	__imp__sub_832B0050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19776
	ctx.r3.s64 = ctx.r11.s64 + 19776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0060) {
	__imp__sub_832B0060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19780
	ctx.r3.s64 = ctx.r11.s64 + 19780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0070) {
	__imp__sub_832B0070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0080) {
	__imp__sub_832B0080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19788
	ctx.r3.s64 = ctx.r11.s64 + 19788;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0090) {
	__imp__sub_832B0090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00A0) {
	__imp__sub_832B00A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19796
	ctx.r3.s64 = ctx.r11.s64 + 19796;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00B0) {
	__imp__sub_832B00B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00C0) {
	__imp__sub_832B00C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19804
	ctx.r3.s64 = ctx.r11.s64 + 19804;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00D0) {
	__imp__sub_832B00D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00E0) {
	__imp__sub_832B00E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19812
	ctx.r3.s64 = ctx.r11.s64 + 19812;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B00F0) {
	__imp__sub_832B00F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0100) {
	__imp__sub_832B0100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19820
	ctx.r3.s64 = ctx.r11.s64 + 19820;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0110) {
	__imp__sub_832B0110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0120) {
	__imp__sub_832B0120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19828
	ctx.r3.s64 = ctx.r11.s64 + 19828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0130) {
	__imp__sub_832B0130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19832
	ctx.r3.s64 = ctx.r11.s64 + 19832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0140) {
	__imp__sub_832B0140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19836
	ctx.r3.s64 = ctx.r11.s64 + 19836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0150) {
	__imp__sub_832B0150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0160) {
	__imp__sub_832B0160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0170) {
	__imp__sub_832B0170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0180) {
	__imp__sub_832B0180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19852
	ctx.r3.s64 = ctx.r11.s64 + 19852;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0190) {
	__imp__sub_832B0190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01A0) {
	__imp__sub_832B01A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19860
	ctx.r3.s64 = ctx.r11.s64 + 19860;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01B0) {
	__imp__sub_832B01B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01C0) {
	__imp__sub_832B01C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19868
	ctx.r3.s64 = ctx.r11.s64 + 19868;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01D0) {
	__imp__sub_832B01D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01E0) {
	__imp__sub_832B01E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B01F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19876
	ctx.r3.s64 = ctx.r11.s64 + 19876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B01F0) {
	__imp__sub_832B01F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19880
	ctx.r3.s64 = ctx.r11.s64 + 19880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0200) {
	__imp__sub_832B0200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19884
	ctx.r3.s64 = ctx.r11.s64 + 19884;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0210) {
	__imp__sub_832B0210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0220) {
	__imp__sub_832B0220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19892
	ctx.r3.s64 = ctx.r11.s64 + 19892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0230) {
	__imp__sub_832B0230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0240) {
	__imp__sub_832B0240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19900
	ctx.r3.s64 = ctx.r11.s64 + 19900;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0250) {
	__imp__sub_832B0250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0260) {
	__imp__sub_832B0260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19908
	ctx.r3.s64 = ctx.r11.s64 + 19908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0270) {
	__imp__sub_832B0270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19924
	ctx.r3.s64 = ctx.r11.s64 + 19924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0280) {
	__imp__sub_832B0280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0290) {
	__imp__sub_832B0290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19932
	ctx.r3.s64 = ctx.r11.s64 + 19932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02A0) {
	__imp__sub_832B02A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02B0) {
	__imp__sub_832B02B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19940
	ctx.r3.s64 = ctx.r11.s64 + 19940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02C0) {
	__imp__sub_832B02C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02D0) {
	__imp__sub_832B02D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19948
	ctx.r3.s64 = ctx.r11.s64 + 19948;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02E0) {
	__imp__sub_832B02E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B02F0) {
	__imp__sub_832B02F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19956
	ctx.r3.s64 = ctx.r11.s64 + 19956;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0300) {
	__imp__sub_832B0300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0310) {
	__imp__sub_832B0310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19964
	ctx.r3.s64 = ctx.r11.s64 + 19964;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0320) {
	__imp__sub_832B0320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19968
	ctx.r3.s64 = ctx.r11.s64 + 19968;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0330) {
	__imp__sub_832B0330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19972
	ctx.r3.s64 = ctx.r11.s64 + 19972;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0340) {
	__imp__sub_832B0340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0350) {
	__imp__sub_832B0350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0360) {
	__imp__sub_832B0360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,19996
	ctx.r3.s64 = ctx.r11.s64 + 19996;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0370) {
	__imp__sub_832B0370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x82b45680
	sub_82B45680(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0380) {
	__imp__sub_832B0380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0390) {
	__imp__sub_832B0390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B03A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20044
	ctx.r3.s64 = ctx.r11.s64 + 20044;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B03A0) {
	__imp__sub_832B03A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B03B0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,20048
	ctx.r31.s64 = ctx.r11.s64 + 20048;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82b45680
	ctx.lr = 0x832B03D0;
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82b45680
	ctx.lr = 0x832B03D8;
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c045b8
	ctx.lr = 0x832B03E0;
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B03E8;
	sub_824FE010(ctx, base);
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

PPC_WEAK_FUNC(sub_832B03B0) {
	__imp__sub_832B03B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0408) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r31,r11,20168
	ctx.r31.s64 = ctx.r11.s64 + 20168;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82b45680
	ctx.lr = 0x832B0428;
	sub_82B45680(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82b45680
	ctx.lr = 0x832B0430;
	sub_82B45680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c045b8
	ctx.lr = 0x832B0438;
	sub_82C045B8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B0440;
	sub_824FE010(ctx, base);
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

PPC_WEAK_FUNC(sub_832B0408) {
	__imp__sub_832B0408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x82c03bf0
	sub_82C03BF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0460) {
	__imp__sub_832B0460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0470) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,20420
	ctx.r31.s64 = ctx.r11.s64 + 20420;
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
	// bl 0x82c82dc0
	ctx.lr = 0x832B04B4;
	sub_82C82DC0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x824fe010
	ctx.lr = 0x832B04BC;
	sub_824FE010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_832B0470) {
	__imp__sub_832B0470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B04E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B04E0) {
	__imp__sub_832B04E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B04F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22468
	ctx.r3.s64 = ctx.r11.s64 + 22468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B04F0) {
	__imp__sub_832B04F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832B0500) {
	__imp__sub_832B0500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0520) {
	__imp__sub_832B0520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832B0528) {
	__imp__sub_832B0528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0548) {
	__imp__sub_832B0548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832B0550) {
	__imp__sub_832B0550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0570) {
	__imp__sub_832B0570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832B0578) {
	__imp__sub_832B0578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0598) {
	__imp__sub_832B0598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_832B05A0) {
	__imp__sub_832B05A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B05C0) {
	__imp__sub_832B05C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22492);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B05C8) {
	__imp__sub_832B05C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r3,r11,-6252
	ctx.r3.s64 = ctx.r11.s64 + -6252;
	// b 0x82c725a8
	sub_82C725A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B05D8) {
	__imp__sub_832B05D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,22508
	ctx.r3.s64 = ctx.r11.s64 + 22508;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B05E8) {
	__imp__sub_832B05E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B05F8) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r30,r31,22632
	ctx.r30.s64 = ctx.r31.s64 + 22632;
	// lwz r3,22632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22632);
	// bl 0x82c87a68
	ctx.lr = 0x832B061C;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22632, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832B05F8) {
	__imp__sub_832B05F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0650) {
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
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r30,r31,22620
	ctx.r30.s64 = ctx.r31.s64 + 22620;
	// lwz r3,22620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22620);
	// bl 0x82c87a68
	ctx.lr = 0x832B0674;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,22620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22620, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832B0650) {
	__imp__sub_832B0650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B06A8) {
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
	// lis r11,-31953
	ctx.r11.s64 = -2094071808;
	// addi r31,r11,-6040
	ctx.r31.s64 = ctx.r11.s64 + -6040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c82038
	ctx.lr = 0x832B06C8;
	sub_82C82038(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c87a68
	ctx.lr = 0x832B06D0;
	sub_82C87A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_832B06A8) {
	__imp__sub_832B06A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22696(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22696);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0700) {
	__imp__sub_832B0700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,22708(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22708);
	// b 0x824fe010
	sub_824FE010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0710) {
	__imp__sub_832B0710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0720) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,28492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832b075c
	if (ctx.cr6.eq) goto loc_832B075C;
	// bl 0x826c4b38
	ctx.lr = 0x832B0740;
	sub_826C4B38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x832b075c
	if (ctx.cr0.eq) goto loc_832B075C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B075C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832B075C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0720) {
	__imp__sub_832B0720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28680
	ctx.r3.s64 = ctx.r11.s64 + 28680;
	// b 0x82cd1f60
	sub_82CD1F60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0770) {
	__imp__sub_832B0770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28756
	ctx.r3.s64 = ctx.r11.s64 + 28756;
	// b 0x82cd1f60
	sub_82CD1F60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0780) {
	__imp__sub_832B0780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r11,28757
	ctx.r3.s64 = ctx.r11.s64 + 28757;
	// b 0x82cd25c8
	sub_82CD25C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B0790) {
	__imp__sub_832B0790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B07A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,15788
	ctx.r11.s64 = ctx.r11.s64 + 15788;
	// stw r11,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B07A0) {
	__imp__sub_832B07A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,15788
	ctx.r11.s64 = ctx.r11.s64 + 15788;
	// stw r11,800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 800, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B07B8) {
	__imp__sub_832B07B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B07D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,26848
	ctx.r11.s64 = ctx.r11.s64 + 26848;
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B07D0) {
	__imp__sub_832B07D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,-24208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24208, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B07E8) {
	__imp__sub_832B07E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,-19716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19716, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0800) {
	__imp__sub_832B0800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-19236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19236, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0818) {
	__imp__sub_832B0818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-18960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18960, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0830) {
	__imp__sub_832B0830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-18684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18684, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0848) {
	__imp__sub_832B0848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-18408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18408, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0860) {
	__imp__sub_832B0860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-18132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18132, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0878) {
	__imp__sub_832B0878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-17856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17856, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0890) {
	__imp__sub_832B0890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B08A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-17576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17576, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B08A8) {
	__imp__sub_832B08A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B08C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-17300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17300, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B08C0) {
	__imp__sub_832B08C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B08D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-17024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17024, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B08D8) {
	__imp__sub_832B08D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B08F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-16748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16748, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B08F0) {
	__imp__sub_832B08F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-16472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16472, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0908) {
	__imp__sub_832B0908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-16196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16196, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0920) {
	__imp__sub_832B0920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-15920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15920, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0938) {
	__imp__sub_832B0938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-15644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15644, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0950) {
	__imp__sub_832B0950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-15368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15368, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0968) {
	__imp__sub_832B0968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-15092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15092, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0980) {
	__imp__sub_832B0980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-14816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14816, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0998) {
	__imp__sub_832B0998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B09B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-14540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14540, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B09B0) {
	__imp__sub_832B09B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-14264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14264, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B09C8) {
	__imp__sub_832B09C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B09E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-13988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13988, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B09E0) {
	__imp__sub_832B09E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-13712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13712, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B09F8) {
	__imp__sub_832B09F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-13436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13436, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A10) {
	__imp__sub_832B0A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-13160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13160, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A28) {
	__imp__sub_832B0A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-12884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12884, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A40) {
	__imp__sub_832B0A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-12600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12600, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A58) {
	__imp__sub_832B0A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-12324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12324, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A70) {
	__imp__sub_832B0A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-12048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12048, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0A88) {
	__imp__sub_832B0A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-11772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11772, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0AA0) {
	__imp__sub_832B0AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-11496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11496, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0AB8) {
	__imp__sub_832B0AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-11220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11220, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0AD0) {
	__imp__sub_832B0AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-10944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10944, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0AE8) {
	__imp__sub_832B0AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-10668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10668, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B00) {
	__imp__sub_832B0B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-10392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10392, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B18) {
	__imp__sub_832B0B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-10116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10116, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B30) {
	__imp__sub_832B0B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-8808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8808, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B48) {
	__imp__sub_832B0B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9840
	ctx.r11.s64 = ctx.r11.s64 + -9840;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B60) {
	__imp__sub_832B0B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-8532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8532, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B78) {
	__imp__sub_832B0B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-8256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8256, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0B90) {
	__imp__sub_832B0B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7976
	ctx.r11.s64 = ctx.r11.s64 + -7976;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0BA8) {
	__imp__sub_832B0BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-6944
	ctx.r11.s64 = ctx.r11.s64 + -6944;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0BC0) {
	__imp__sub_832B0BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4880
	ctx.r11.s64 = ctx.r11.s64 + -4880;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0BD8) {
	__imp__sub_832B0BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5912
	ctx.r11.s64 = ctx.r11.s64 + -5912;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0BF0) {
	__imp__sub_832B0BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-3848
	ctx.r11.s64 = ctx.r11.s64 + -3848;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C08) {
	__imp__sub_832B0C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-2816
	ctx.r11.s64 = ctx.r11.s64 + -2816;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C20) {
	__imp__sub_832B0C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1784
	ctx.r11.s64 = ctx.r11.s64 + -1784;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C38) {
	__imp__sub_832B0C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C50) {
	__imp__sub_832B0C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -716, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C58) {
	__imp__sub_832B0C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C70) {
	__imp__sub_832B0C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0C88) {
	__imp__sub_832B0C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0CA0) {
	__imp__sub_832B0CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,3696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3696, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0CB8) {
	__imp__sub_832B0CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0CD0) {
	__imp__sub_832B0CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3984
	ctx.r11.s64 = ctx.r11.s64 + 3984;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0CE8) {
	__imp__sub_832B0CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,6048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6048, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D00) {
	__imp__sub_832B0D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5016
	ctx.r11.s64 = ctx.r11.s64 + 5016;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D18) {
	__imp__sub_832B0D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,6324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6324, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D30) {
	__imp__sub_832B0D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,6600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6600, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D48) {
	__imp__sub_832B0D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,7912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7912, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D60) {
	__imp__sub_832B0D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6880
	ctx.r11.s64 = ctx.r11.s64 + 6880;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D78) {
	__imp__sub_832B0D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// stw r11,8192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8192, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0D90) {
	__imp__sub_832B0D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,8468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8468, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0DA8) {
	__imp__sub_832B0DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0DC0) {
	__imp__sub_832B0DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,9020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9020, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0DD8) {
	__imp__sub_832B0DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,9296
	ctx.r11.s64 = ctx.r11.s64 + 9296;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0DF0) {
	__imp__sub_832B0DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,11360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11360, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E08) {
	__imp__sub_832B0E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10328
	ctx.r11.s64 = ctx.r11.s64 + 10328;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E20) {
	__imp__sub_832B0E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,19640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19640, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E38) {
	__imp__sub_832B0E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,20704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20704, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E50) {
	__imp__sub_832B0E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,21808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21808, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E68) {
	__imp__sub_832B0E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,20980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20980, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E80) {
	__imp__sub_832B0E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,22912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22912, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0E98) {
	__imp__sub_832B0E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,22360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22360, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0EB0) {
	__imp__sub_832B0EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,21532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21532, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0EC8) {
	__imp__sub_832B0EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,22636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22636, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0EE0) {
	__imp__sub_832B0EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,21256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21256, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0EF8) {
	__imp__sub_832B0EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,22084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22084, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F10) {
	__imp__sub_832B0F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19672
	ctx.r11.s64 = ctx.r11.s64 + 19672;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F28) {
	__imp__sub_832B0F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,23188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23188, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F40) {
	__imp__sub_832B0F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,23468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23468, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F58) {
	__imp__sub_832B0F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,23744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23744, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F70) {
	__imp__sub_832B0F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,24296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24296, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0F88) {
	__imp__sub_832B0F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,24020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24020, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0FA0) {
	__imp__sub_832B0FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,24572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24572, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0FB8) {
	__imp__sub_832B0FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,24852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24852, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0FD0) {
	__imp__sub_832B0FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B0FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,25132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25132, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B0FE8) {
	__imp__sub_832B0FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,26440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26440, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1000) {
	__imp__sub_832B1000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25408
	ctx.r11.s64 = ctx.r11.s64 + 25408;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1018) {
	__imp__sub_832B1018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,26716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26716, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1030) {
	__imp__sub_832B1030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,26992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26992, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1048) {
	__imp__sub_832B1048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,27268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27268, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1060) {
	__imp__sub_832B1060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,27544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27544, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1078) {
	__imp__sub_832B1078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,27820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27820, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1090) {
	__imp__sub_832B1090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,28096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28096, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B10A8) {
	__imp__sub_832B10A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B10C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,28372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28372, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B10C0) {
	__imp__sub_832B10C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28648
	ctx.r11.s64 = ctx.r11.s64 + 28648;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B10D8) {
	__imp__sub_832B10D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B10F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,29680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29680, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B10F0) {
	__imp__sub_832B10F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,29956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29956, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1108) {
	__imp__sub_832B1108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,30304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30304, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1120) {
	__imp__sub_832B1120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30584
	ctx.r11.s64 = ctx.r11.s64 + 30584;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1138) {
	__imp__sub_832B1138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-31848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31848, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1150) {
	__imp__sub_832B1150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32656
	ctx.r11.s64 = ctx.r11.s64 + 32656;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1168) {
	__imp__sub_832B1168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31624
	ctx.r11.s64 = ctx.r11.s64 + 31624;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1180) {
	__imp__sub_832B1180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r3,r11,-31552
	ctx.r3.s64 = ctx.r11.s64 + -31552;
	// b 0x82e7e4f8
	sub_82E7E4F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832B1198) {
	__imp__sub_832B1198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B11A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-8904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8904, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B11A8) {
	__imp__sub_832B11A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B11C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-30336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30336, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B11C0) {
	__imp__sub_832B11C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B11D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-30068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30068, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B11D8) {
	__imp__sub_832B11D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B11F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31448
	ctx.r11.s64 = ctx.r11.s64 + -31448;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B11F0) {
	__imp__sub_832B11F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31528
	ctx.r11.s64 = ctx.r11.s64 + -31528;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1208) {
	__imp__sub_832B1208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31368
	ctx.r11.s64 = ctx.r11.s64 + -31368;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1220) {
	__imp__sub_832B1220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-29524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29524, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1238) {
	__imp__sub_832B1238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-29792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29792, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1250) {
	__imp__sub_832B1250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-28720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28720, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1268) {
	__imp__sub_832B1268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-27112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27112, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1280) {
	__imp__sub_832B1280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-26844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26844, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1298) {
	__imp__sub_832B1298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B12B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-29256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29256, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B12B0) {
	__imp__sub_832B12B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B12C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-27916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27916, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B12C8) {
	__imp__sub_832B12C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B12E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-28452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28452, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B12E0) {
	__imp__sub_832B12E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B12F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-26308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26308, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B12F8) {
	__imp__sub_832B12F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-26576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26576, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1310) {
	__imp__sub_832B1310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-28184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28184, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1328) {
	__imp__sub_832B1328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-25772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25772, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1340) {
	__imp__sub_832B1340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-27648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27648, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1358) {
	__imp__sub_832B1358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-28988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28988, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1370) {
	__imp__sub_832B1370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-27380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27380, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1388) {
	__imp__sub_832B1388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B13A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-30984
	ctx.r11.s64 = ctx.r11.s64 + -30984;
	// stw r11,-26040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26040, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B13A0) {
	__imp__sub_832B13A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B13B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-1124
	ctx.r11.s64 = ctx.r11.s64 + -1124;
	// stw r11,-25468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25468, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B13B8) {
	__imp__sub_832B13B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B13D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14872
	ctx.r11.s64 = ctx.r11.s64 + -14872;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B13D0) {
	__imp__sub_832B13D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B13E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15904
	ctx.r11.s64 = ctx.r11.s64 + -15904;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B13E8) {
	__imp__sub_832B13E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16936
	ctx.r11.s64 = ctx.r11.s64 + -16936;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1400) {
	__imp__sub_832B1400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17968
	ctx.r11.s64 = ctx.r11.s64 + -17968;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1418) {
	__imp__sub_832B1418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19000
	ctx.r11.s64 = ctx.r11.s64 + -19000;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1430) {
	__imp__sub_832B1430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20032
	ctx.r11.s64 = ctx.r11.s64 + -20032;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1448) {
	__imp__sub_832B1448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21064
	ctx.r11.s64 = ctx.r11.s64 + -21064;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1460) {
	__imp__sub_832B1460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22096
	ctx.r11.s64 = ctx.r11.s64 + -22096;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1478) {
	__imp__sub_832B1478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B1490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-23128
	ctx.r11.s64 = ctx.r11.s64 + -23128;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B1490) {
	__imp__sub_832B1490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B14A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24160
	ctx.r11.s64 = ctx.r11.s64 + -24160;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B14A8) {
	__imp__sub_832B14A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B14C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25192
	ctx.r11.s64 = ctx.r11.s64 + -25192;
	// stw r10,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B14C0) {
	__imp__sub_832B14C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832B14D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// stw r11,-13840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13840, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832B14D8) {
	__imp__sub_832B14D8(ctx, base);
}

