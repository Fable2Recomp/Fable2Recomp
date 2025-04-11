#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_832A2930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2930) {
	__imp__sub_832A2930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32072
	ctx.r3.s64 = ctx.r11.s64 + -32072;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2940) {
	__imp__sub_832A2940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32060
	ctx.r3.s64 = ctx.r11.s64 + -32060;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2950) {
	__imp__sub_832A2950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-32048
	ctx.r3.s64 = ctx.r11.s64 + -32048;
	// b 0x82a1a908
	sub_82A1A908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2960) {
	__imp__sub_832A2960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2970) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-32028
	ctx.r31.s64 = ctx.r11.s64 + -32028;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832a29d0
	if (ctx.cr6.eq) goto loc_832A29D0;
loc_832A29B4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x832A29C0;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a29b4
	if (!ctx.cr6.eq) goto loc_832A29B4;
loc_832A29D0:
	// bl 0x8221be68
	ctx.lr = 0x832A29D4;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832A2970) {
	__imp__sub_832A2970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A29F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r3,r11,14464
	ctx.r3.s64 = ctx.r11.s64 + 14464;
	// b 0x82356698
	sub_82356698(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A29F8) {
	__imp__sub_832A29F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2A08) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-31952
	ctx.r31.s64 = ctx.r11.s64 + -31952;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x832a2a68
	if (ctx.cr6.eq) goto loc_832A2A68;
loc_832A2A4C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x832A2A58;
	sub_8221BE68(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x832a2a4c
	if (!ctx.cr6.eq) goto loc_832A2A4C;
loc_832A2A68:
	// bl 0x8221be68
	ctx.lr = 0x832A2A6C;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832A2A08) {
	__imp__sub_832A2A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31940
	ctx.r3.s64 = ctx.r11.s64 + -31940;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2A90) {
	__imp__sub_832A2A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31936
	ctx.r3.s64 = ctx.r11.s64 + -31936;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AA0) {
	__imp__sub_832A2AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31932
	ctx.r3.s64 = ctx.r11.s64 + -31932;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AB0) {
	__imp__sub_832A2AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31928
	ctx.r3.s64 = ctx.r11.s64 + -31928;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AC0) {
	__imp__sub_832A2AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31924
	ctx.r3.s64 = ctx.r11.s64 + -31924;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AD0) {
	__imp__sub_832A2AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31920
	ctx.r3.s64 = ctx.r11.s64 + -31920;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AE0) {
	__imp__sub_832A2AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31916
	ctx.r3.s64 = ctx.r11.s64 + -31916;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2AF0) {
	__imp__sub_832A2AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31912
	ctx.r3.s64 = ctx.r11.s64 + -31912;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B00) {
	__imp__sub_832A2B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31908
	ctx.r3.s64 = ctx.r11.s64 + -31908;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B10) {
	__imp__sub_832A2B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31904
	ctx.r3.s64 = ctx.r11.s64 + -31904;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B20) {
	__imp__sub_832A2B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B30) {
	__imp__sub_832A2B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31892
	ctx.r3.s64 = ctx.r11.s64 + -31892;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B40) {
	__imp__sub_832A2B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31888
	ctx.r3.s64 = ctx.r11.s64 + -31888;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B50) {
	__imp__sub_832A2B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B60) {
	__imp__sub_832A2B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31876
	ctx.r3.s64 = ctx.r11.s64 + -31876;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B70) {
	__imp__sub_832A2B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31872
	ctx.r3.s64 = ctx.r11.s64 + -31872;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B80) {
	__imp__sub_832A2B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31836
	ctx.r3.s64 = ctx.r11.s64 + -31836;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2B90) {
	__imp__sub_832A2B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31832
	ctx.r3.s64 = ctx.r11.s64 + -31832;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BA0) {
	__imp__sub_832A2BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31828
	ctx.r3.s64 = ctx.r11.s64 + -31828;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BB0) {
	__imp__sub_832A2BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BC0) {
	__imp__sub_832A2BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BD0) {
	__imp__sub_832A2BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31780
	ctx.r3.s64 = ctx.r11.s64 + -31780;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BE0) {
	__imp__sub_832A2BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2BF0) {
	__imp__sub_832A2BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31772
	ctx.r3.s64 = ctx.r11.s64 + -31772;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2C00) {
	__imp__sub_832A2C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31768
	ctx.r3.s64 = ctx.r11.s64 + -31768;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2C10) {
	__imp__sub_832A2C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31764
	ctx.r3.s64 = ctx.r11.s64 + -31764;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2C20) {
	__imp__sub_832A2C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31760
	ctx.r3.s64 = ctx.r11.s64 + -31760;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2C30) {
	__imp__sub_832A2C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31756
	ctx.r3.s64 = ctx.r11.s64 + -31756;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2C40) {
	__imp__sub_832A2C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2C50) {
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
	// addi r31,r11,12896
	ctx.r31.s64 = ctx.r11.s64 + 12896;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824f9118
	ctx.lr = 0x832A2C70;
	sub_824F9118(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8221be68
	ctx.lr = 0x832A2C78;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82214f08
	ctx.lr = 0x832A2C88;
	sub_82214F08(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82214f08
	ctx.lr = 0x832A2C90;
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

PPC_WEAK_FUNC(sub_832A2C50) {
	__imp__sub_832A2C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31752
	ctx.r3.s64 = ctx.r11.s64 + -31752;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2CA8) {
	__imp__sub_832A2CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A2CE0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A2CEC;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A2CF0:
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
	// bne 0x832a2cf0
	if (!ctx.cr0.eq) goto loc_832A2CF0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a2ce0
	if (!ctx.cr0.lt) goto loc_832A2CE0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2CB8) {
	__imp__sub_832A2CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A2D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-31600
	ctx.r11.s64 = ctx.r11.s64 + -31600;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A2D48:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A2D54;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A2D58:
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
	// bne 0x832a2d58
	if (!ctx.cr0.eq) goto loc_832A2D58;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a2d48
	if (!ctx.cr0.lt) goto loc_832A2D48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2D20) {
	__imp__sub_832A2D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2D88) {
	__imp__sub_832A2D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31532
	ctx.r3.s64 = ctx.r11.s64 + -31532;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2D98) {
	__imp__sub_832A2D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2DA8) {
	__imp__sub_832A2DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31524
	ctx.r3.s64 = ctx.r11.s64 + -31524;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2DB8) {
	__imp__sub_832A2DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2DC8) {
	__imp__sub_832A2DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31516
	ctx.r3.s64 = ctx.r11.s64 + -31516;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2DD8) {
	__imp__sub_832A2DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2DE8) {
	__imp__sub_832A2DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2DF8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82874660
	ctx.lr = 0x832A2E18;
	sub_82874660(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x832A2E20;
	sub_8221BE68(ctx, base);
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

PPC_WEAK_FUNC(sub_832A2DF8) {
	__imp__sub_832A2DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2E40) {
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
	// addi r31,r10,-25084
	ctx.r31.s64 = ctx.r10.s64 + -25084;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-25084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25084, ctx.r11.u32);
	// bl 0x821940c8
	ctx.lr = 0x832A2E6C;
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

PPC_WEAK_FUNC(sub_832A2E40) {
	__imp__sub_832A2E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31428
	ctx.r3.s64 = ctx.r11.s64 + -31428;
	// b 0x829ff648
	sub_829FF648(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2E88) {
	__imp__sub_832A2E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2E98) {
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
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// lwz r3,-31420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832a2ef8
	if (ctx.cr6.eq) goto loc_832A2EF8;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_832A2EBC:
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
	// bne 0x832a2ebc
	if (!ctx.cr0.eq) goto loc_832A2EBC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832a2ef0
	if (!ctx.cr6.eq) goto loc_832A2EF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A2EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832A2EF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31420, ctx.r11.u32);
loc_832A2EF8:
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

PPC_WEAK_FUNC(sub_832A2E98) {
	__imp__sub_832A2E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31416
	ctx.r3.s64 = ctx.r11.s64 + -31416;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F10) {
	__imp__sub_832A2F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31412
	ctx.r3.s64 = ctx.r11.s64 + -31412;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F20) {
	__imp__sub_832A2F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F30) {
	__imp__sub_832A2F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31404
	ctx.r3.s64 = ctx.r11.s64 + -31404;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F40) {
	__imp__sub_832A2F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// b 0x8246d1f0
	sub_8246D1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F50) {
	__imp__sub_832A2F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F60) {
	__imp__sub_832A2F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31380
	ctx.r3.s64 = ctx.r11.s64 + -31380;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F70) {
	__imp__sub_832A2F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31376
	ctx.r3.s64 = ctx.r11.s64 + -31376;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F80) {
	__imp__sub_832A2F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31372
	ctx.r3.s64 = ctx.r11.s64 + -31372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2F90) {
	__imp__sub_832A2F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31368
	ctx.r3.s64 = ctx.r11.s64 + -31368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2FA0) {
	__imp__sub_832A2FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A2FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-31364
	ctx.r3.s64 = ctx.r11.s64 + -31364;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A2FB0) {
	__imp__sub_832A2FB0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A2FC0) {
	__imp__sub_832A2FC0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A2FD0) {
	__imp__sub_832A2FD0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A2FE0) {
	__imp__sub_832A2FE0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A2FF0) {
	__imp__sub_832A2FF0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3000) {
	__imp__sub_832A3000(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3048) {
	__imp__sub_832A3048(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3058) {
	__imp__sub_832A3058(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3068) {
	__imp__sub_832A3068(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3078) {
	__imp__sub_832A3078(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3088) {
	__imp__sub_832A3088(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3098) {
	__imp__sub_832A3098(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30A8) {
	__imp__sub_832A30A8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30B8) {
	__imp__sub_832A30B8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30C8) {
	__imp__sub_832A30C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30D8) {
	__imp__sub_832A30D8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30E8) {
	__imp__sub_832A30E8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A30F8) {
	__imp__sub_832A30F8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3108) {
	__imp__sub_832A3108(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3118) {
	__imp__sub_832A3118(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3128) {
	__imp__sub_832A3128(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3138) {
	__imp__sub_832A3138(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3148) {
	__imp__sub_832A3148(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3158) {
	__imp__sub_832A3158(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3168) {
	__imp__sub_832A3168(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3178) {
	__imp__sub_832A3178(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3188) {
	__imp__sub_832A3188(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3198) {
	__imp__sub_832A3198(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31A8) {
	__imp__sub_832A31A8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31B8) {
	__imp__sub_832A31B8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31C8) {
	__imp__sub_832A31C8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31D8) {
	__imp__sub_832A31D8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31E8) {
	__imp__sub_832A31E8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A31F8) {
	__imp__sub_832A31F8(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3208) {
	__imp__sub_832A3208(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3218) {
	__imp__sub_832A3218(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3228) {
	__imp__sub_832A3228(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3238) {
	__imp__sub_832A3238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832A3248) {
	__imp__sub_832A3248(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3250) {
	__imp__sub_832A3250(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3260) {
	__imp__sub_832A3260(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3270) {
	__imp__sub_832A3270(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3280) {
	__imp__sub_832A3280(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3290) {
	__imp__sub_832A3290(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32A0) {
	__imp__sub_832A32A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32B0) {
	__imp__sub_832A32B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32C0) {
	__imp__sub_832A32C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32D0) {
	__imp__sub_832A32D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32E0) {
	__imp__sub_832A32E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A32F0) {
	__imp__sub_832A32F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3300) {
	__imp__sub_832A3300(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3310) {
	__imp__sub_832A3310(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3320) {
	__imp__sub_832A3320(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3330) {
	__imp__sub_832A3330(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3340) {
	__imp__sub_832A3340(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3350) {
	__imp__sub_832A3350(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3360) {
	__imp__sub_832A3360(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3370) {
	__imp__sub_832A3370(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3380) {
	__imp__sub_832A3380(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3390) {
	__imp__sub_832A3390(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33A0) {
	__imp__sub_832A33A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33B0) {
	__imp__sub_832A33B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33C0) {
	__imp__sub_832A33C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33D0) {
	__imp__sub_832A33D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33E0) {
	__imp__sub_832A33E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A33F0) {
	__imp__sub_832A33F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3400) {
	__imp__sub_832A3400(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3410) {
	__imp__sub_832A3410(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3420) {
	__imp__sub_832A3420(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3430) {
	__imp__sub_832A3430(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3440) {
	__imp__sub_832A3440(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3450) {
	__imp__sub_832A3450(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3460) {
	__imp__sub_832A3460(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3470) {
	__imp__sub_832A3470(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3480) {
	__imp__sub_832A3480(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3490) {
	__imp__sub_832A3490(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34A0) {
	__imp__sub_832A34A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34B0) {
	__imp__sub_832A34B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34C0) {
	__imp__sub_832A34C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34D0) {
	__imp__sub_832A34D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34E0) {
	__imp__sub_832A34E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A34F0) {
	__imp__sub_832A34F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3500) {
	__imp__sub_832A3500(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3510) {
	__imp__sub_832A3510(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3520) {
	__imp__sub_832A3520(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3530) {
	__imp__sub_832A3530(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3540) {
	__imp__sub_832A3540(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3550) {
	__imp__sub_832A3550(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3560) {
	__imp__sub_832A3560(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3570) {
	__imp__sub_832A3570(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3580) {
	__imp__sub_832A3580(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3590) {
	__imp__sub_832A3590(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35A0) {
	__imp__sub_832A35A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35B0) {
	__imp__sub_832A35B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35C0) {
	__imp__sub_832A35C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35D0) {
	__imp__sub_832A35D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35E0) {
	__imp__sub_832A35E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A35F0) {
	__imp__sub_832A35F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3600) {
	__imp__sub_832A3600(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3610) {
	__imp__sub_832A3610(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3620) {
	__imp__sub_832A3620(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3630) {
	__imp__sub_832A3630(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3640) {
	__imp__sub_832A3640(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3650) {
	__imp__sub_832A3650(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3660) {
	__imp__sub_832A3660(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3670) {
	__imp__sub_832A3670(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3680) {
	__imp__sub_832A3680(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3690) {
	__imp__sub_832A3690(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36A0) {
	__imp__sub_832A36A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36B0) {
	__imp__sub_832A36B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36C0) {
	__imp__sub_832A36C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36D0) {
	__imp__sub_832A36D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36E0) {
	__imp__sub_832A36E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A36F0) {
	__imp__sub_832A36F0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3700) {
	__imp__sub_832A3700(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3710) {
	__imp__sub_832A3710(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3720) {
	__imp__sub_832A3720(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3730) {
	__imp__sub_832A3730(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3740) {
	__imp__sub_832A3740(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3750) {
	__imp__sub_832A3750(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3760) {
	__imp__sub_832A3760(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3770) {
	__imp__sub_832A3770(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3780) {
	__imp__sub_832A3780(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A3790) {
	__imp__sub_832A3790(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37A0) {
	__imp__sub_832A37A0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37B0) {
	__imp__sub_832A37B0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37C0) {
	__imp__sub_832A37C0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37D0) {
	__imp__sub_832A37D0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37E0) {
	__imp__sub_832A37E0(ctx, base);
}

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

PPC_WEAK_FUNC(sub_832A37F0) {
	__imp__sub_832A37F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30716
	ctx.r3.s64 = ctx.r11.s64 + -30716;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3800) {
	__imp__sub_832A3800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30712
	ctx.r3.s64 = ctx.r11.s64 + -30712;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3810) {
	__imp__sub_832A3810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30708
	ctx.r3.s64 = ctx.r11.s64 + -30708;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3820) {
	__imp__sub_832A3820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30704
	ctx.r3.s64 = ctx.r11.s64 + -30704;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3830) {
	__imp__sub_832A3830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30700
	ctx.r3.s64 = ctx.r11.s64 + -30700;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3840) {
	__imp__sub_832A3840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3850) {
	__imp__sub_832A3850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30692
	ctx.r3.s64 = ctx.r11.s64 + -30692;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3860) {
	__imp__sub_832A3860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30688
	ctx.r3.s64 = ctx.r11.s64 + -30688;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3870) {
	__imp__sub_832A3870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30684
	ctx.r3.s64 = ctx.r11.s64 + -30684;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3880) {
	__imp__sub_832A3880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30680
	ctx.r3.s64 = ctx.r11.s64 + -30680;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3890) {
	__imp__sub_832A3890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30676
	ctx.r3.s64 = ctx.r11.s64 + -30676;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38A0) {
	__imp__sub_832A38A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30672
	ctx.r3.s64 = ctx.r11.s64 + -30672;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38B0) {
	__imp__sub_832A38B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30668
	ctx.r3.s64 = ctx.r11.s64 + -30668;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38C0) {
	__imp__sub_832A38C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30664
	ctx.r3.s64 = ctx.r11.s64 + -30664;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38D0) {
	__imp__sub_832A38D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30660
	ctx.r3.s64 = ctx.r11.s64 + -30660;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38E0) {
	__imp__sub_832A38E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A38F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30656
	ctx.r3.s64 = ctx.r11.s64 + -30656;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A38F0) {
	__imp__sub_832A38F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30652
	ctx.r3.s64 = ctx.r11.s64 + -30652;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3900) {
	__imp__sub_832A3900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30648
	ctx.r3.s64 = ctx.r11.s64 + -30648;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3910) {
	__imp__sub_832A3910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30644
	ctx.r3.s64 = ctx.r11.s64 + -30644;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3920) {
	__imp__sub_832A3920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3930) {
	__imp__sub_832A3930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30636
	ctx.r3.s64 = ctx.r11.s64 + -30636;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3940) {
	__imp__sub_832A3940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30632
	ctx.r3.s64 = ctx.r11.s64 + -30632;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3950) {
	__imp__sub_832A3950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30628
	ctx.r3.s64 = ctx.r11.s64 + -30628;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3960) {
	__imp__sub_832A3960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3970) {
	__imp__sub_832A3970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30620
	ctx.r3.s64 = ctx.r11.s64 + -30620;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3980) {
	__imp__sub_832A3980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30616
	ctx.r3.s64 = ctx.r11.s64 + -30616;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3990) {
	__imp__sub_832A3990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30612
	ctx.r3.s64 = ctx.r11.s64 + -30612;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39A0) {
	__imp__sub_832A39A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30608
	ctx.r3.s64 = ctx.r11.s64 + -30608;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39B0) {
	__imp__sub_832A39B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30604
	ctx.r3.s64 = ctx.r11.s64 + -30604;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39C0) {
	__imp__sub_832A39C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39D0) {
	__imp__sub_832A39D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30596
	ctx.r3.s64 = ctx.r11.s64 + -30596;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39E0) {
	__imp__sub_832A39E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A39F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30592
	ctx.r3.s64 = ctx.r11.s64 + -30592;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A39F0) {
	__imp__sub_832A39F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30588
	ctx.r3.s64 = ctx.r11.s64 + -30588;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A00) {
	__imp__sub_832A3A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30584
	ctx.r3.s64 = ctx.r11.s64 + -30584;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A10) {
	__imp__sub_832A3A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30580
	ctx.r3.s64 = ctx.r11.s64 + -30580;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A20) {
	__imp__sub_832A3A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30492
	ctx.r3.s64 = ctx.r11.s64 + -30492;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A30) {
	__imp__sub_832A3A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30488
	ctx.r3.s64 = ctx.r11.s64 + -30488;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A40) {
	__imp__sub_832A3A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30484
	ctx.r3.s64 = ctx.r11.s64 + -30484;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A50) {
	__imp__sub_832A3A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A60) {
	__imp__sub_832A3A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30476
	ctx.r3.s64 = ctx.r11.s64 + -30476;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A70) {
	__imp__sub_832A3A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30472
	ctx.r3.s64 = ctx.r11.s64 + -30472;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A80) {
	__imp__sub_832A3A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30468
	ctx.r3.s64 = ctx.r11.s64 + -30468;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3A90) {
	__imp__sub_832A3A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30464
	ctx.r3.s64 = ctx.r11.s64 + -30464;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AA0) {
	__imp__sub_832A3AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30460
	ctx.r3.s64 = ctx.r11.s64 + -30460;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AB0) {
	__imp__sub_832A3AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30372
	ctx.r3.s64 = ctx.r11.s64 + -30372;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AC0) {
	__imp__sub_832A3AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30368
	ctx.r3.s64 = ctx.r11.s64 + -30368;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AD0) {
	__imp__sub_832A3AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30364
	ctx.r3.s64 = ctx.r11.s64 + -30364;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AE0) {
	__imp__sub_832A3AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A3AF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-30360
	ctx.r11.s64 = ctx.r11.s64 + -30360;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A3B18:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A3B24;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A3B28:
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
	// bne 0x832a3b28
	if (!ctx.cr0.eq) goto loc_832A3B28;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a3b18
	if (!ctx.cr0.lt) goto loc_832A3B18;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3AF0) {
	__imp__sub_832A3AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832A3B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r11,r11,-30296
	ctx.r11.s64 = ctx.r11.s64 + -30296;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
loc_832A3B80:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c67d8
	ctx.lr = 0x832A3B8C;
	sub_821C67D8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_832A3B90:
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
	// bne 0x832a3b90
	if (!ctx.cr0.eq) goto loc_832A3B90;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bge 0x832a3b80
	if (!ctx.cr0.lt) goto loc_832A3B80;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3B58) {
	__imp__sub_832A3B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30148
	ctx.r3.s64 = ctx.r11.s64 + -30148;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3BC0) {
	__imp__sub_832A3BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30144
	ctx.r3.s64 = ctx.r11.s64 + -30144;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3BD0) {
	__imp__sub_832A3BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30140
	ctx.r3.s64 = ctx.r11.s64 + -30140;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3BE0) {
	__imp__sub_832A3BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3BF0) {
	__imp__sub_832A3BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30132
	ctx.r3.s64 = ctx.r11.s64 + -30132;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C00) {
	__imp__sub_832A3C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30128
	ctx.r3.s64 = ctx.r11.s64 + -30128;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C10) {
	__imp__sub_832A3C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30124
	ctx.r3.s64 = ctx.r11.s64 + -30124;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C20) {
	__imp__sub_832A3C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30120
	ctx.r3.s64 = ctx.r11.s64 + -30120;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C30) {
	__imp__sub_832A3C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30116
	ctx.r3.s64 = ctx.r11.s64 + -30116;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C40) {
	__imp__sub_832A3C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C50) {
	__imp__sub_832A3C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30108
	ctx.r3.s64 = ctx.r11.s64 + -30108;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C60) {
	__imp__sub_832A3C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30020
	ctx.r3.s64 = ctx.r11.s64 + -30020;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C70) {
	__imp__sub_832A3C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30016
	ctx.r3.s64 = ctx.r11.s64 + -30016;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C80) {
	__imp__sub_832A3C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30012
	ctx.r3.s64 = ctx.r11.s64 + -30012;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3C90) {
	__imp__sub_832A3C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3CA0) {
	__imp__sub_832A3CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30004
	ctx.r3.s64 = ctx.r11.s64 + -30004;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3CB0) {
	__imp__sub_832A3CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832A3CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-30000
	ctx.r3.s64 = ctx.r11.s64 + -30000;
	// b 0x82214f08
	sub_82214F08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832A3CC0) {
	__imp__sub_832A3CC0(ctx, base);
}

