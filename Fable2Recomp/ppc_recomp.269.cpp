#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FF1664"))) PPC_WEAK_FUNC(sub_82FF1664);
PPC_FUNC_IMPL(__imp__sub_82FF1664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1668"))) PPC_WEAK_FUNC(sub_82FF1668);
PPC_FUNC_IMPL(__imp__sub_82FF1668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF1670;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82ffa948
	ctx.lr = 0x82FF1684;
	sub_82FFA948(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82ffa948
	ctx.lr = 0x82FF169C;
	sub_82FFA948(ctx, base);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r30,r31,984
	ctx.r30.s64 = ctx.r31.s64 + 984;
	// b 0x82ff16e8
	goto loc_82FF16E8;
loc_82FF16A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16bc
	if (!ctx.cr6.eq) goto loc_82FF16BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff16dc
	goto loc_82FF16DC;
loc_82FF16BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF16DC:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF16E4;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF16E8:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16a8
	if (!ctx.cr6.eq) goto loc_82FF16A8;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// addi r30,r31,992
	ctx.r30.s64 = ctx.r31.s64 + 992;
	// b 0x82ff173c
	goto loc_82FF173C;
loc_82FF16FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1710
	if (!ctx.cr6.eq) goto loc_82FF1710;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff1730
	goto loc_82FF1730;
loc_82FF1710:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1730:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF1738;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF173C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff16fc
	if (!ctx.cr6.eq) goto loc_82FF16FC;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// addi r30,r31,1000
	ctx.r30.s64 = ctx.r31.s64 + 1000;
	// b 0x82ff17ac
	goto loc_82FF17AC;
loc_82FF1750:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1764
	if (!ctx.cr6.eq) goto loc_82FF1764;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff1784
	goto loc_82FF1784;
loc_82FF1764:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1784:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF1794;
	sub_82FF6D50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF179C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF17AC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff1750
	if (!ctx.cr6.eq) goto loc_82FF1750;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x82ff181c
	goto loc_82FF181C;
loc_82FF17C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff17d4
	if (!ctx.cr6.eq) goto loc_82FF17D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff17f4
	goto loc_82FF17F4;
loc_82FF17D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF17F4:
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6dc8
	ctx.lr = 0x82FF1804;
	sub_82FF6DC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF180C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF181C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff17c0
	if (!ctx.cr6.eq) goto loc_82FF17C0;
	// lwz r30,512(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r29,r31,512
	ctx.r29.s64 = ctx.r31.s64 + 512;
	// b 0x82ff1840
	goto loc_82FF1840;
loc_82FF1830:
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ff8008
	ctx.lr = 0x82FF183C;
	sub_82FF8008(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF1840:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1850
	if (ctx.cr6.eq) goto loc_82FF1850;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82ff1830
	if (!ctx.cr0.eq) goto loc_82FF1830;
loc_82FF1850:
	// lwz r30,520(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1890
	if (ctx.cr6.eq) goto loc_82FF1890;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82ff1890
	if (ctx.cr0.eq) goto loc_82FF1890;
loc_82FF1868:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff1880
	if (ctx.cr6.eq) goto loc_82FF1880;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82FF1880:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ff8008
	ctx.lr = 0x82FF1888;
	sub_82FF8008(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ff1868
	if (!ctx.cr6.eq) goto loc_82FF1868;
loc_82FF1890:
	// addi r31,r31,604
	ctx.r31.s64 = ctx.r31.s64 + 604;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ff18a8
	goto loc_82FF18A8;
loc_82FF189C:
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// bl 0x82ff9d10
	ctx.lr = 0x82FF18A4;
	sub_82FF9D10(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF18A8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff18b8
	if (ctx.cr6.eq) goto loc_82FF18B8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x82ff189c
	if (!ctx.cr0.eq) goto loc_82FF189C;
loc_82FF18B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF18C0"))) PPC_WEAK_FUNC(sub_82FF18C0);
PPC_FUNC_IMPL(__imp__sub_82FF18C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq 0x82ff1918
	if (ctx.cr0.eq) goto loc_82FF1918;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82feffc0
	ctx.lr = 0x82FF1918;
	sub_82FEFFC0(ctx, base);
loc_82FF1918:
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

__attribute__((alias("__imp__sub_82FF1930"))) PPC_WEAK_FUNC(sub_82FF1930);
PPC_FUNC_IMPL(__imp__sub_82FF1930) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20028
	ctx.r11.s64 = ctx.r11.s64 + -20028;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ff5768
	ctx.lr = 0x82FF1964;
	sub_82FF5768(ctx, base);
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

__attribute__((alias("__imp__sub_82FF197C"))) PPC_WEAK_FUNC(sub_82FF197C);
PPC_FUNC_IMPL(__imp__sub_82FF197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1980"))) PPC_WEAK_FUNC(sub_82FF1980);
PPC_FUNC_IMPL(__imp__sub_82FF1980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF1988;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-20020
	ctx.r11.s64 = ctx.r11.s64 + -20020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff19b8
	if (ctx.cr6.eq) goto loc_82FF19B8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF19B4;
	sub_82FF57A0(ctx, base);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_82FF19B8:
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82ff6e78
	ctx.lr = 0x82FF19C0;
	sub_82FF6E78(ctx, base);
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff19d8
	if (ctx.cr6.eq) goto loc_82FF19D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF19D4;
	sub_82FF57A0(ctx, base);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
loc_82FF19D8:
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x82ff7268
	ctx.lr = 0x82FF19E0;
	sub_82FF7268(ctx, base);
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF19EC;
	sub_82FF74B8(ctx, base);
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF19F8;
	sub_82FF74B8(ctx, base);
	// addi r28,r31,296
	ctx.r28.s64 = ctx.r31.s64 + 296;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF1A04;
	sub_82FF74B8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fedd88
	ctx.lr = 0x82FF1A0C;
	sub_82FEDD88(ctx, base);
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A18;
	sub_829CE870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// addi r28,r11,-23752
	ctx.r28.s64 = ctx.r11.s64 + -23752;
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// bl 0x829ce870
	ctx.lr = 0x82FF1A2C;
	sub_829CE870(ctx, base);
	// stw r28,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A38;
	sub_829CE870(ctx, base);
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF1A44;
	sub_829CE870(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// addi r11,r11,-20140
	ctx.r11.s64 = ctx.r11.s64 + -20140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF1A5C"))) PPC_WEAK_FUNC(sub_82FF1A5C);
PPC_FUNC_IMPL(__imp__sub_82FF1A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1A60"))) PPC_WEAK_FUNC(sub_82FF1A60);
PPC_FUNC_IMPL(__imp__sub_82FF1A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF1A68;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF1A80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff1cd4
	if (ctx.cr6.eq) goto loc_82FF1CD4;
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff1cd4
	if (!ctx.cr0.eq) goto loc_82FF1CD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff1ad0
	if (ctx.cr6.eq) goto loc_82FF1AD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff1ad0
	if (ctx.cr6.eq) goto loc_82FF1AD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0058
	ctx.lr = 0x82FF1AB8;
	sub_82FF0058(ctx, base);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff1cb0
	if (!ctx.cr6.eq) goto loc_82FF1CB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1668
	ctx.lr = 0x82FF1ACC;
	sub_82FF1668(ctx, base);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1AD0:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r26,r31,512
	ctx.r26.s64 = ctx.r31.s64 + 512;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82ff1b8c
	if (ctx.cr6.eq) goto loc_82FF1B8C;
	// addi r29,r31,520
	ctx.r29.s64 = ctx.r31.s64 + 520;
	// addi r28,r31,1136
	ctx.r28.s64 = ctx.r31.s64 + 1136;
	// addi r27,r31,1060
	ctx.r27.s64 = ctx.r31.s64 + 1060;
loc_82FF1AEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ff1b00
	if (!ctx.cr6.eq) goto loc_82FF1B00;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1B00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF1B20:
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82ff80b8
	ctx.lr = 0x82FF1B50;
	sub_82FF80B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1b80
	if (ctx.cr0.eq) goto loc_82FF1B80;
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82ff1c48
	if (!ctx.cr6.eq) goto loc_82FF1C48;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1c48
	if (ctx.cr6.eq) goto loc_82FF1C48;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF1B80;
	sub_82FF7BB0(ctx, base);
loc_82FF1B80:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82ff1aec
	if (!ctx.cr6.eq) goto loc_82FF1AEC;
loc_82FF1B8C:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1bfc
	if (ctx.cr6.eq) goto loc_82FF1BFC;
	// addi r27,r31,592
	ctx.r27.s64 = ctx.r31.s64 + 592;
	// addi r29,r31,1136
	ctx.r29.s64 = ctx.r31.s64 + 1136;
	// addi r28,r31,1060
	ctx.r28.s64 = ctx.r31.s64 + 1060;
loc_82FF1BA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ff18c0
	ctx.lr = 0x82FF1BAC;
	sub_82FF18C0(ctx, base);
	// addi r30,r3,-32
	ctx.r30.s64 = ctx.r3.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff9998
	ctx.lr = 0x82FF1BC0;
	sub_82FF9998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1bf0
	if (ctx.cr0.eq) goto loc_82FF1BF0;
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff1c70
	if (!ctx.cr6.eq) goto loc_82FF1C70;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1c70
	if (ctx.cr6.eq) goto loc_82FF1C70;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff9c80
	ctx.lr = 0x82FF1BF0;
	sub_82FF9C80(ctx, base);
loc_82FF1BF0:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff1ba4
	if (!ctx.cr6.eq) goto loc_82FF1BA4;
loc_82FF1BFC:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1c18
	if (!ctx.cr0.eq) goto loc_82FF1C18;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1c98
	if (ctx.cr0.eq) goto loc_82FF1C98;
loc_82FF1C18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff1c98
	if (!ctx.cr6.eq) goto loc_82FF1C98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82fefb28
	ctx.lr = 0x82FF1C40;
	sub_82FEFB28(ctx, base);
	// stw r23,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r23.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C48:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF1C4C:
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
	// bne 0x82ff1c4c
	if (!ctx.cr0.eq) goto loc_82FF1C4C;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C70:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82FF1C74:
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
	// bne 0x82ff1c74
	if (!ctx.cr0.eq) goto loc_82FF1C74;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82ff1cb0
	goto loc_82FF1CB0;
loc_82FF1C98:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff1cd4
	if (ctx.cr6.eq) goto loc_82FF1CD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0058
	ctx.lr = 0x82FF1CB0;
	sub_82FF0058(ctx, base);
loc_82FF1CB0:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF1CC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r31,1060
	ctx.r11.s64 = ctx.r31.s64 + 1060;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x82ff1cf8
	goto loc_82FF1CF8;
loc_82FF1CD4:
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF1CF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF1CF8;
	sub_82FEDD88(ctx, base);
loc_82FF1CF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FF1D04"))) PPC_WEAK_FUNC(sub_82FF1D04);
PPC_FUNC_IMPL(__imp__sub_82FF1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1D08"))) PPC_WEAK_FUNC(sub_82FF1D08);
PPC_FUNC_IMPL(__imp__sub_82FF1D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF1D10;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff1d38
	if (!ctx.cr6.eq) goto loc_82FF1D38;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b226c
	ctx.lr = 0x82FF1D34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1D38:
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82ff1dbc
	if (!ctx.cr0.eq) goto loc_82FF1DBC;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r9,512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff1d84
	if (!ctx.cr6.eq) goto loc_82FF1D84;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1d84
	if (!ctx.cr0.eq) goto loc_82FF1D84;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1dbc
	if (ctx.cr0.eq) goto loc_82FF1DBC;
loc_82FF1D84:
	// rlwinm. r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1dbc
	if (!ctx.cr0.eq) goto loc_82FF1DBC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF1D90:
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
	// bne 0x82ff1d90
	if (!ctx.cr0.eq) goto loc_82FF1D90;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r29,1
	ctx.r29.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF1DBC:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e74
	if (!ctx.cr0.eq) goto loc_82FF1E74;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff1e74
	if (ctx.cr6.eq) goto loc_82FF1E74;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e34
	if (!ctx.cr0.eq) goto loc_82FF1E34;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff1e34
	if (!ctx.cr0.eq) goto loc_82FF1E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0298
	ctx.lr = 0x82FF1DF4;
	sub_82FF0298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff1e34
	if (ctx.cr0.eq) goto loc_82FF1E34;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa508
	ctx.lr = 0x82FF1E04;
	sub_82FFA508(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// ble cr6,0x82ff1e28
	if (!ctx.cr6.gt) goto loc_82FF1E28;
	// bl 0x82266070
	ctx.lr = 0x82FF1E14;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF1E24;
	sub_82FF74C0(ctx, base);
	// b 0x82ff1e34
	goto loc_82FF1E34;
loc_82FF1E28:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
loc_82FF1E34:
	// lbz r11,1145(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff1e74
	if (ctx.cr0.eq) goto loc_82FF1E74;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82FF1E48:
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
	// bne 0x82ff1e48
	if (!ctx.cr0.eq) goto loc_82FF1E48;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r28,1
	ctx.r28.s64 = 1;
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF1E74:
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b226c
	ctx.lr = 0x82FF1E7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ff1e90
	if (ctx.cr6.eq) goto loc_82FF1E90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fede10
	ctx.lr = 0x82FF1E90;
	sub_82FEDE10(ctx, base);
loc_82FF1E90:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ff1ea4
	if (ctx.cr6.eq) goto loc_82FF1EA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82fef490
	ctx.lr = 0x82FF1EA4;
	sub_82FEF490(ctx, base);
loc_82FF1EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF1EAC"))) PPC_WEAK_FUNC(sub_82FF1EAC);
PPC_FUNC_IMPL(__imp__sub_82FF1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1EB0"))) PPC_WEAK_FUNC(sub_82FF1EB0);
PPC_FUNC_IMPL(__imp__sub_82FF1EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff1f0c
	if (!ctx.cr6.eq) goto loc_82FF1F0C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff1f00
	if (ctx.cr6.lt) goto loc_82FF1F00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1f00
	if (ctx.cr6.eq) goto loc_82FF1F00;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// ori r11,r9,4103
	ctx.r11.u64 = ctx.r9.u64 | 4103;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82fefef8
	sub_82FEFEF8(ctx, base);
	return;
loc_82FF1F00:
	// lbz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1144);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82ff1f24
	goto loc_82FF1F24;
loc_82FF1F0C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lbz r11,1144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1144);
	// bne cr6,0x82ff1f20
	if (!ctx.cr6.eq) goto loc_82FF1F20;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82ff1f24
	goto loc_82FF1F24;
loc_82FF1F20:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_82FF1F24:
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1F2C"))) PPC_WEAK_FUNC(sub_82FF1F2C);
PPC_FUNC_IMPL(__imp__sub_82FF1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF1F30"))) PPC_WEAK_FUNC(sub_82FF1F30);
PPC_FUNC_IMPL(__imp__sub_82FF1F30) {
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
	// lwz r30,1148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r30,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2010
	if (ctx.cr0.eq) goto loc_82FF2010;
	// lwz r9,452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff1fc4
	if (ctx.cr6.eq) goto loc_82FF1FC4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// blt cr6,0x82ff1f80
	if (ctx.cr6.lt) goto loc_82FF1F80;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x82ff1f84
	goto loc_82FF1F84;
loc_82FF1F80:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82FF1F84:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff1fc4
	if (ctx.cr6.lt) goto loc_82FF1FC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff20b8
	if (ctx.cr6.eq) goto loc_82FF20B8;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF1FC0;
	sub_82FEFEF8(ctx, base);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF1FC4:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82ff1fd4
	if (ctx.cr6.eq) goto loc_82FF1FD4;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF1FD4;
	sub_82FFA3D0(ctx, base);
loc_82FF1FD4:
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lbz r9,1144(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// rlwinm. r8,r11,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// stb r9,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r9.u8);
	// beq 0x82ff20b8
	if (ctx.cr0.eq) goto loc_82FF20B8;
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF2010:
	// rlwinm. r11,r30,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff204c
	if (!ctx.cr0.eq) goto loc_82FF204C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0310
	ctx.lr = 0x82FF2024;
	sub_82FF0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff20b8
	if (ctx.cr0.eq) goto loc_82FF20B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff204c
	if (ctx.cr6.eq) goto loc_82FF204C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF2048;
	sub_82FF74C0(ctx, base);
	// b 0x82ff20b8
	goto loc_82FF20B8;
loc_82FF204C:
	// lhz r8,1032(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,1050(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1050);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// rlwimi r30,r10,23,8,10
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0xE00000) | (ctx.r30.u64 & 0xFFFFFFFFFF1FFFFF);
	// lbz r7,1144(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,1056(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// ori r10,r7,64
	ctx.r10.u64 = ctx.r7.u64 | 64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82ff20b0
	if (ctx.cr6.lt) goto loc_82FF20B0;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff20b0
	if (ctx.cr6.eq) goto loc_82FF20B0;
	// lwz r10,1028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// oris r11,r30,16
	ctx.r11.u64 = ctx.r30.u64 | 1048576;
	// bge cr6,0x82ff20b4
	if (!ctx.cr6.lt) goto loc_82FF20B4;
loc_82FF20B0:
	// rlwinm r11,r30,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
loc_82FF20B4:
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF20B8:
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

__attribute__((alias("__imp__sub_82FF20D0"))) PPC_WEAK_FUNC(sub_82FF20D0);
PPC_FUNC_IMPL(__imp__sub_82FF20D0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82ff2160
	if (ctx.cr6.eq) goto loc_82FF2160;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff210c
	if (!ctx.cr6.eq) goto loc_82FF210C;
	// bl 0x82ff1eb0
	ctx.lr = 0x82FF2108;
	sub_82FF1EB0(ctx, base);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF210C:
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2124
	if (!ctx.cr6.eq) goto loc_82FF2124;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82ff2138
	goto loc_82FF2138;
loc_82FF2124:
	// addi r10,r31,296
	ctx.r10.s64 = ctx.r31.s64 + 296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2140
	if (!ctx.cr6.eq) goto loc_82FF2140;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82FF2138:
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF2140:
	// addi r10,r31,356
	ctx.r10.s64 = ctx.r31.s64 + 356;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2158
	if (!ctx.cr6.eq) goto loc_82FF2158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1f30
	ctx.lr = 0x82FF2154;
	sub_82FF1F30(ctx, base);
	// b 0x82ff2160
	goto loc_82FF2160;
loc_82FF2158:
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// bl 0x82ff8640
	ctx.lr = 0x82FF2160;
	sub_82FF8640(ctx, base);
loc_82FF2160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF2168;
	sub_82FF1D08(ctx, base);
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

__attribute__((alias("__imp__sub_82FF217C"))) PPC_WEAK_FUNC(sub_82FF217C);
PPC_FUNC_IMPL(__imp__sub_82FF217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2180"))) PPC_WEAK_FUNC(sub_82FF2180);
PPC_FUNC_IMPL(__imp__sub_82FF2180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF2188;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,640
	ctx.r29.s64 = ctx.r30.s64 + 640;
	// lwz r31,640(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 640);
	// b 0x82ff21fc
	goto loc_82FF21FC;
loc_82FF21A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ffae28
	ctx.lr = 0x82FF21B0;
	sub_82FFAE28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// lwz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2204
	if (!ctx.cr6.eq) goto loc_82FF2204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffa668
	ctx.lr = 0x82FF21CC;
	sub_82FFA668(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82ff07b0
	ctx.lr = 0x82FF21F0;
	sub_82FF07B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82ff2204
	if (ctx.cr0.lt) goto loc_82FF2204;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FF21FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ff21a0
	if (!ctx.cr6.eq) goto loc_82FF21A0;
loc_82FF2204:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF2210"))) PPC_WEAK_FUNC(sub_82FF2210);
PPC_FUNC_IMPL(__imp__sub_82FF2210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82FF2218;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82ff2250
	if (ctx.cr6.eq) goto loc_82FF2250;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82FF223C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bne 0x82ff223c
	if (!ctx.cr0.eq) goto loc_82FF223C;
loc_82FF2250:
	// addi r22,r25,40
	ctx.r22.s64 = ctx.r25.s64 + 40;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF225C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// ori r26,r11,65534
	ctx.r26.u64 = ctx.r11.u64 | 65534;
loc_82FF226C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff22b0
	if (ctx.cr0.eq) goto loc_82FF22B0;
	// subfic r11,r30,127
	ctx.xer.ca = ctx.r30.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r30.s64;
	// rlwinm r27,r11,24,0,7
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
loc_82FF2284:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x82ff1100
	ctx.lr = 0x82FF2298;
	sub_82FF1100(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff234c
	if (ctx.cr0.lt) goto loc_82FF234C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2284
	if (ctx.cr6.lt) goto loc_82FF2284;
loc_82FF22B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82ff226c
	if (ctx.cr6.lt) goto loc_82FF226C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82ff2348
	if (ctx.cr6.eq) goto loc_82FF2348;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r25,572
	ctx.r3.s64 = ctx.r25.s64 + 572;
	// bl 0x82ff7340
	ctx.lr = 0x82FF22D4;
	sub_82FF7340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff22e8
	if (!ctx.cr0.eq) goto loc_82FF22E8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ff234c
	goto loc_82FF234C;
loc_82FF22E8:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82FF22F0:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2338
	if (ctx.cr0.eq) goto loc_82FF2338;
	// subfic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r30.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 2147483648;
loc_82FF230C:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// or r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 | ctx.r28.u64;
	// bl 0x82ff08c8
	ctx.lr = 0x82FF2320;
	sub_82FF08C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff234c
	if (ctx.cr0.lt) goto loc_82FF234C;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff230c
	if (ctx.cr6.lt) goto loc_82FF230C;
loc_82FF2338:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82ff22f0
	if (ctx.cr6.lt) goto loc_82FF22F0;
loc_82FF2348:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF234C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF2354;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82FF2360"))) PPC_WEAK_FUNC(sub_82FF2360);
PPC_FUNC_IMPL(__imp__sub_82FF2360) {
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
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82ff247c
	if (ctx.cr6.eq) goto loc_82FF247C;
	// lhz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff2420
	if (!ctx.cr0.eq) goto loc_82FF2420;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF23A4;
	sub_82FF6D50(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF23D0;
	sub_82FEDD88(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF23FC;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1042);
	// lwz r10,1164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	// addi r3,r30,664
	ctx.r3.s64 = ctx.r30.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,1042(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1042, ctx.r11.u16);
	// stw r10,1164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1164, ctx.r10.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF241C;
	sub_82FFA3D0(ctx, base);
	// b 0x82ff247c
	goto loc_82FF247C;
loc_82FF2420:
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff247c
	if (ctx.cr0.lt) goto loc_82FF247C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ff247c
	if (!ctx.cr6.lt) goto loc_82FF247C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x82ff11d0
	ctx.lr = 0x82FF247C;
	sub_82FF11D0(ctx, base);
loc_82FF247C:
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

__attribute__((alias("__imp__sub_82FF2494"))) PPC_WEAK_FUNC(sub_82FF2494);
PPC_FUNC_IMPL(__imp__sub_82FF2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2498"))) PPC_WEAK_FUNC(sub_82FF2498);
PPC_FUNC_IMPL(__imp__sub_82FF2498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FF24A0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,44(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r4,40(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// bl 0x82ff5b30
	ctx.lr = 0x82FF24E0;
	sub_82FF5B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82ff26fc
	if (ctx.cr6.lt) goto loc_82FF26FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1607
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1607, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lhz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lhz r11,7(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82ff26fc
	if (ctx.cr6.lt) goto loc_82FF26FC;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,60000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60000, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lwz r11,29(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lwz r11,9(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// lwz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ff5b70
	ctx.lr = 0x82FF257C;
	sub_82FF5B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff26fc
	if (ctx.cr0.eq) goto loc_82FF26FC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,29(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82ff26fc
	if (ctx.cr6.gt) goto loc_82FF26FC;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// bne cr6,0x82ff26fc
	if (!ctx.cr6.eq) goto loc_82FF26FC;
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r10.u16);
	// lwz r10,29(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x82ff0b30
	ctx.lr = 0x82FF25E4;
	sub_82FF0B30(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ff2624
	if (ctx.cr6.eq) goto loc_82FF2624;
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// bl 0x82ff7340
	ctx.lr = 0x82FF25F8;
	sub_82FF7340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff2624
	if (!ctx.cr0.eq) goto loc_82FF2624;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82ff26ec
	goto loc_82FF26EC;
loc_82FF2624:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
loc_82FF262C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff267c
	if (ctx.cr0.eq) goto loc_82FF267C;
	// subfic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r29.s64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 2147483648;
loc_82FF2648:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x82ff08c8
	ctx.lr = 0x82FF2664;
	sub_82FF08C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff26d4
	if (ctx.cr0.lt) goto loc_82FF26D4;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2648
	if (ctx.cr6.lt) goto loc_82FF2648;
loc_82FF267C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82ff262c
	if (ctx.cr6.lt) goto loc_82FF262C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,17(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// bl 0x82266070
	ctx.lr = 0x82FF2698;
	sub_82266070(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff26b0
	if (!ctx.cr6.gt) goto loc_82FF26B0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82FF26B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0ba0
	ctx.lr = 0x82FF26BC;
	sub_82FF0BA0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// stw r25,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff2700
	goto loc_82FF2700;
loc_82FF26D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff26fc
	if (ctx.cr6.eq) goto loc_82FF26FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82FF26EC:
	// stb r26,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r26.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF26FC;
	sub_82FEFEF8(ctx, base);
loc_82FF26FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82FF2700:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FF2708"))) PPC_WEAK_FUNC(sub_82FF2708);
PPC_FUNC_IMPL(__imp__sub_82FF2708) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff2770
	if (ctx.cr6.eq) goto loc_82FF2770;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2770
	if (!ctx.cr6.eq) goto loc_82FF2770;
	// lwz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7);
	// bl 0x82ff0ba0
	ctx.lr = 0x82FF2770;
	sub_82FF0BA0(ctx, base);
loc_82FF2770:
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

__attribute__((alias("__imp__sub_82FF2784"))) PPC_WEAK_FUNC(sub_82FF2784);
PPC_FUNC_IMPL(__imp__sub_82FF2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2788"))) PPC_WEAK_FUNC(sub_82FF2788);
PPC_FUNC_IMPL(__imp__sub_82FF2788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF2790;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2820
	if (ctx.cr0.eq) goto loc_82FF2820;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82ff2820
	if (ctx.cr6.lt) goto loc_82FF2820;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// addi r30,r11,-7
	ctx.r30.s64 = ctx.r11.s64 + -7;
	// lwz r11,3(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff2820
	if (!ctx.cr6.eq) goto loc_82FF2820;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r10,r10,4104
	ctx.r10.u64 = ctx.r10.u64 | 4104;
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF280C;
	sub_82FEFEF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff2820
	if (ctx.cr6.eq) goto loc_82FF2820;
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff2824
	goto loc_82FF2824;
loc_82FF2820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF2824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF282C"))) PPC_WEAK_FUNC(sub_82FF282C);
PPC_FUNC_IMPL(__imp__sub_82FF282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2830"))) PPC_WEAK_FUNC(sub_82FF2830);
PPC_FUNC_IMPL(__imp__sub_82FF2830) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff288c
	if (ctx.cr6.eq) goto loc_82FF288C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff2878
	if (!ctx.cr6.eq) goto loc_82FF2878;
	// lwz r11,1148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1148);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff288c
	if (ctx.cr0.eq) goto loc_82FF288C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1145(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1145, ctx.r11.u8);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,1144(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1144, ctx.r11.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF2874;
	sub_82FEFEF8(ctx, base);
	// b 0x82ff288c
	goto loc_82FF288C;
loc_82FF2878:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,4113
	ctx.r11.u64 = ctx.r11.u64 | 4113;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x82ff15f8
	ctx.lr = 0x82FF288C;
	sub_82FF15F8(ctx, base);
loc_82FF288C:
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

__attribute__((alias("__imp__sub_82FF28A0"))) PPC_WEAK_FUNC(sub_82FF28A0);
PPC_FUNC_IMPL(__imp__sub_82FF28A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF28A8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r31,984
	ctx.r8.s64 = ctx.r31.s64 + 984;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff28cc
	if (!ctx.cr6.eq) goto loc_82FF28CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF28CC:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82ff28e0
	if (!ctx.cr6.eq) goto loc_82FF28E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF28E0:
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff290c
	if (ctx.cr6.lt) goto loc_82FF290C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82fefac8
	ctx.lr = 0x82FF2908;
	sub_82FEFAC8(ctx, base);
	// b 0x82ff2980
	goto loc_82FF2980;
loc_82FF290C:
	// lwz r10,1164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r10.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// beq cr6,0x82ff2988
	if (ctx.cr6.eq) goto loc_82FF2988;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// blt cr6,0x82ff2944
	if (ctx.cr6.lt) goto loc_82FF2944;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// b 0x82ff2948
	goto loc_82FF2948;
loc_82FF2944:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
loc_82FF2948:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2988
	if (ctx.cr6.lt) goto loc_82FF2988;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff2980
	if (ctx.cr6.eq) goto loc_82FF2980;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r29,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r29.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r29,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r29.u8);
	// ori r11,r11,4103
	ctx.r11.u64 = ctx.r11.u64 | 4103;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82fefef8
	ctx.lr = 0x82FF2980;
	sub_82FEFEF8(ctx, base);
loc_82FF2980:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF2988:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82ff29b4
	if (ctx.cr6.eq) goto loc_82FF29B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF29B4:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF29BC;
	sub_82FFA3D0(ctx, base);
	// lhz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff2a20
	if (!ctx.cr0.eq) goto loc_82FF2A20;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82ff6d50
	ctx.lr = 0x82FF29D8;
	sub_82FF6D50(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF2A04;
	sub_82FEDD88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF2A0C;
	sub_82FEDD88(ctx, base);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// b 0x82ff2ab0
	goto loc_82FF2AB0;
loc_82FF2A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF2A28;
	sub_82FEFC98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF2A38;
	sub_82FEFD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r31,872
	ctx.r6.s64 = ctx.r31.s64 + 872;
	// lhz r5,1032(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff6a18
	ctx.lr = 0x82FF2A50;
	sub_82FF6A18(ctx, base);
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2a6c
	if (ctx.cr6.lt) goto loc_82FF2A6C;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF2A6C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ff2a88
	if (ctx.cr6.eq) goto loc_82FF2A88;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF2A88;
	sub_82FF7560(ctx, base);
loc_82FF2A88:
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// ld r10,1176(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r11.u64);
loc_82FF2AB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF2ABC"))) PPC_WEAK_FUNC(sub_82FF2ABC);
PPC_FUNC_IMPL(__imp__sub_82FF2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2AC0"))) PPC_WEAK_FUNC(sub_82FF2AC0);
PPC_FUNC_IMPL(__imp__sub_82FF2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82FF2AC8;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2f04
	if (ctx.cr0.eq) goto loc_82FF2F04;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r9,1050(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1050);
	// lhz r7,1046(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lhz r6,1056(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82ff2f04
	if (ctx.cr6.gt) goto loc_82FF2F04;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff6630
	ctx.lr = 0x82FF2B20;
	sub_82FF6630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff2f00
	if (ctx.cr0.lt) goto loc_82FF2F00;
	// addi r21,r31,942
	ctx.r21.s64 = ctx.r31.s64 + 942;
	// lhz r3,1032(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// addi r19,r31,872
	ctx.r19.s64 = ctx.r31.s64 + 872;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82ff0e08
	ctx.lr = 0x82FF2B40;
	sub_82FF0E08(ctx, base);
	// subfic r25,r3,1264
	ctx.xer.ca = ctx.r3.u32 <= 1264;
	ctx.r25.s64 = 1264 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc98
	ctx.lr = 0x82FF2B4C;
	sub_82FEFC98(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82fefd20
	ctx.lr = 0x82FF2B5C;
	sub_82FEFD20(ctx, base);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r30,254
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 254, ctx.xer);
	// bge cr6,0x82ff2ba8
	if (!ctx.cr6.lt) goto loc_82FF2BA8;
	// lhz r10,1042(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ff2ba8
	if (ctx.cr0.eq) goto loc_82FF2BA8;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2ba8
	if (!ctx.cr6.lt) goto loc_82FF2BA8;
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff2bb0
	if (ctx.cr0.eq) goto loc_82FF2BB0;
	// lhz r10,1040(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r9,r17,16
	ctx.r9.u64 = ctx.r17.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2bb0
	if (!ctx.cr6.lt) goto loc_82FF2BB0;
loc_82FF2BA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82FF2BB0:
	// lhz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// subfic r10,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r10.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82ff2bec
	if (!ctx.cr6.lt) goto loc_82FF2BEC;
	// lhz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r9,1042(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff2bec
	if (!ctx.cr6.gt) goto loc_82FF2BEC;
	// lhz r10,1056(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1056);
	// lhz r9,126(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82ff2bec
	if (!ctx.cr6.gt) goto loc_82FF2BEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2bf4
	if (ctx.cr6.eq) goto loc_82FF2BF4;
loc_82FF2BEC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82FF2BF4:
	// lhz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 980);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff2c08
	if (ctx.cr0.eq) goto loc_82FF2C08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82FF2C08:
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82266070
	ctx.lr = 0x82FF2C14;
	sub_82266070(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// li r23,32
	ctx.r23.s64 = 32;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff2ce8
	if (ctx.cr6.eq) goto loc_82FF2CE8;
	// li r24,248
	ctx.r24.s64 = 248;
loc_82FF2C34:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ff2ce0
	if (ctx.cr6.eq) goto loc_82FF2CE0;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bge cr6,0x82ff2ce0
	if (!ctx.cr6.lt) goto loc_82FF2CE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ff2ce0
	if (ctx.cr6.eq) goto loc_82FF2CE0;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,-32
	ctx.r26.s64 = ctx.r11.s64 + -32;
	// lwz r11,-20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2c70
	if (ctx.cr6.eq) goto loc_82FF2C70;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r7,r23,-32
	ctx.r7.s64 = ctx.r23.s64 + -32;
	// b 0x82ff2c78
	goto loc_82FF2C78;
loc_82FF2C70:
	// rlwinm r27,r28,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82FF2C78:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff7ca0
	ctx.lr = 0x82FF2C98;
	sub_82FF7CA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff2cd4
	if (ctx.cr6.eq) goto loc_82FF2CD4;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// subf r25,r11,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r11.s64;
	// beq cr6,0x82ff2cd0
	if (ctx.cr6.eq) goto loc_82FF2CD0;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r24,r24,-8
	ctx.r24.s64 = ctx.r24.s64 + -8;
	// b 0x82ff2cd4
	goto loc_82FF2CD4;
loc_82FF2CD0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82FF2CD4:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff2c34
	if (!ctx.cr6.eq) goto loc_82FF2C34;
loc_82FF2CE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff2cf8
	if (!ctx.cr6.eq) goto loc_82FF2CF8;
loc_82FF2CE8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fedd88
	ctx.lr = 0x82FF2CF0;
	sub_82FEDD88(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x82ff2f04
	goto loc_82FF2F04;
loc_82FF2CF8:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ff2d50
	if (ctx.cr6.eq) goto loc_82FF2D50;
	// addi r30,r1,116
	ctx.r30.s64 = ctx.r1.s64 + 116;
loc_82FF2D08:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82ffb570
	ctx.lr = 0x82FF2D34;
	sub_82FFB570(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82ff2d08
	if (!ctx.cr0.eq) goto loc_82FF2D08;
loc_82FF2D50:
	// cmplwi cr6,r23,32
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 32, ctx.xer);
	// bge cr6,0x82ff2d98
	if (!ctx.cr6.lt) goto loc_82FF2D98;
	// addi r30,r1,364
	ctx.r30.s64 = ctx.r1.s64 + 364;
	// subfic r28,r23,32
	ctx.xer.ca = ctx.r23.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r23.s64;
loc_82FF2D60:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82ffb570
	ctx.lr = 0x82FF2D8C;
	sub_82FFB570(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x82ff2d60
	if (!ctx.cr0.eq) goto loc_82FF2D60;
loc_82FF2D98:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lhz r9,1032(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x82ff6980
	ctx.lr = 0x82FF2DC4;
	sub_82FF6980(ctx, base);
	// lhz r10,38(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 38);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff2df4
	if (!ctx.cr0.eq) goto loc_82FF2DF4;
	// lhz r10,36(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 36);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// ble cr6,0x82ff2df4
	if (!ctx.cr6.gt) goto loc_82FF2DF4;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// sth r11,36(r21)
	PPC_STORE_U16(ctx.r21.u32 + 36, ctx.r11.u16);
loc_82FF2DF4:
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,1032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1032, ctx.r11.u16);
	// bne cr6,0x82ff2e1c
	if (!ctx.cr6.eq) goto loc_82FF2E1C;
	// lhz r11,330(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff2e80
	if (ctx.cr0.eq) goto loc_82FF2E80;
loc_82FF2E1C:
	// addi r9,r31,1000
	ctx.r9.s64 = ctx.r31.s64 + 1000;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,1004(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,1004(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
loc_82FF2E44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff2e44
	if (!ctx.cr0.eq) goto loc_82FF2E44;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 336);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
loc_82FF2E80:
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// clrlwi r10,r17,16
	ctx.r10.u64 = ctx.r17.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// blt cr6,0x82ff2e9c
	if (ctx.cr6.lt) goto loc_82FF2E9C;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x82ff2ea0
	goto loc_82FF2EA0;
loc_82FF2E9C:
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_82FF2EA0:
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82ff7560
	ctx.lr = 0x82FF2EB8;
	sub_82FF7560(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2ed0
	if (ctx.cr6.eq) goto loc_82FF2ED0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0490
	ctx.lr = 0x82FF2ED0;
	sub_82FF0490(ctx, base);
loc_82FF2ED0:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,1168(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1168);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1168, ctx.r11.u64);
	// b 0x82ff2f04
	goto loc_82FF2F04;
loc_82FF2F00:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82FF2F04:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82FF2F0C"))) PPC_WEAK_FUNC(sub_82FF2F0C);
PPC_FUNC_IMPL(__imp__sub_82FF2F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF2F10"))) PPC_WEAK_FUNC(sub_82FF2F10);
PPC_FUNC_IMPL(__imp__sub_82FF2F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FF2F18;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r21,r31,40
	ctx.r21.s64 = ctx.r31.s64 + 40;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF2F48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ff2f68
	if (ctx.cr6.eq) goto loc_82FF2F68;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ff2f68
	if (ctx.cr6.eq) goto loc_82FF2F68;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2F68:
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff2f84
	if (ctx.cr6.lt) goto loc_82FF2F84;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4101
	ctx.r30.u64 = ctx.r30.u64 | 4101;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2F84:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff2fe0
	if (!ctx.cr6.lt) goto loc_82FF2FE0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82ff2fa4
	if (!ctx.cr6.lt) goto loc_82FF2FA4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82ff2fac
	goto loc_82FF2FAC;
loc_82FF2FA4:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FF2FAC:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ff2fc8
	if (!ctx.cr6.gt) goto loc_82FF2FC8;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82feff50
	ctx.lr = 0x82FF2FC4;
	sub_82FEFF50(ctx, base);
	// b 0x82ff2fcc
	goto loc_82FF2FCC;
loc_82FF2FC8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF2FCC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ff2fe0
	if (!ctx.cr6.eq) goto loc_82FF2FE0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff3040
	goto loc_82FF3040;
loc_82FF2FE0:
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6f98
	ctx.lr = 0x82FF2FF4;
	sub_82FF6F98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff3040
	if (ctx.cr0.lt) goto loc_82FF3040;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8898
	ctx.lr = 0x82FF302C;
	sub_82FF8898(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff304c
	if (!ctx.cr0.lt) goto loc_82FF304C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ff70b0
	ctx.lr = 0x82FF3040;
	sub_82FF70B0(ctx, base);
loc_82FF3040:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3048;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff30a4
	goto loc_82FF30A4;
loc_82FF304C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r31,520
	ctx.r9.s64 = ctx.r31.s64 + 520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,3,5,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF30A0;
	sub_82FF1D08(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF30A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82FF30B0"))) PPC_WEAK_FUNC(sub_82FF30B0);
PPC_FUNC_IMPL(__imp__sub_82FF30B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF30B8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r23,r31,40
	ctx.r23.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF30E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF3100;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3128
	if (!ctx.cr0.eq) goto loc_82FF3128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF3114;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3128
	if (!ctx.cr0.eq) goto loc_82FF3128;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x82ff3148
	goto loc_82FF3148;
loc_82FF3128:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ff7ae0
	ctx.lr = 0x82FF3140;
	sub_82FF7AE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff3154
	if (!ctx.cr0.lt) goto loc_82FF3154;
loc_82FF3148:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3150;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff315c
	goto loc_82FF315C;
loc_82FF3154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF315C;
	sub_82FF1D08(ctx, base);
loc_82FF315C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FF3168"))) PPC_WEAK_FUNC(sub_82FF3168);
PPC_FUNC_IMPL(__imp__sub_82FF3168) {
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
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ff31fc
	if (ctx.cr6.eq) goto loc_82FF31FC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r30,592
	ctx.r3.s64 = ctx.r30.s64 + 592;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 596, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ff31fc
	if (!ctx.cr6.lt) goto loc_82FF31FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x82feffc0
	ctx.lr = 0x82FF31FC;
	sub_82FEFFC0(ctx, base);
loc_82FF31FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r10,2,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82ff9478
	ctx.lr = 0x82FF3220;
	sub_82FF9478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3228;
	sub_82FEDD88(ctx, base);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 656, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FF324C"))) PPC_WEAK_FUNC(sub_82FF324C);
PPC_FUNC_IMPL(__imp__sub_82FF324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3250"))) PPC_WEAK_FUNC(sub_82FF3250);
PPC_FUNC_IMPL(__imp__sub_82FF3250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF3258;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3270;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff3320
	if (ctx.cr6.eq) goto loc_82FF3320;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff3320
	if (ctx.cr6.eq) goto loc_82FF3320;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff32d8
	if (ctx.cr6.eq) goto loc_82FF32D8;
	// addi r29,r31,472
	ctx.r29.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF32A8;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff32d0
	if (!ctx.cr0.eq) goto loc_82FF32D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF32BC;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff32d0
	if (!ctx.cr0.eq) goto loc_82FF32D0;
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4111
	ctx.r31.u64 = ctx.r31.u64 | 4111;
	// b 0x82ff3324
	goto loc_82FF3324;
loc_82FF32D0:
	// bl 0x82ff7f10
	ctx.lr = 0x82FF32D4;
	sub_82FF7F10(ctx, base);
	// b 0x82ff3310
	goto loc_82FF3310;
loc_82FF32D8:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff3310
	if (ctx.cr6.eq) goto loc_82FF3310;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF32EC:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82ff7f10
	ctx.lr = 0x82FF32FC;
	sub_82FF7F10(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff32ec
	if (ctx.cr6.lt) goto loc_82FF32EC;
loc_82FF3310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3318;
	sub_82FF1D08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ff332c
	goto loc_82FF332C;
loc_82FF3320:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF3324:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF332C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FF332C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF3338"))) PPC_WEAK_FUNC(sub_82FF3338);
PPC_FUNC_IMPL(__imp__sub_82FF3338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF3340;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,4096
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4096, ctx.xer);
	// bgt cr6,0x82ff35d0
	if (ctx.cr6.gt) goto loc_82FF35D0;
	// beq cr6,0x82ff35bc
	if (ctx.cr6.eq) goto loc_82FF35BC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82ff35f8
	if (ctx.cr6.gt) goto loc_82FF35F8;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-20056
	ctx.r12.s64 = ctx.r12.s64 + -20056;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,13196
	ctx.r12.s64 = ctx.r12.s64 + 13196;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FF338C;
	case 1:
		goto loc_82FF33A0;
	case 2:
		goto loc_82FF35F8;
	case 3:
		goto loc_82FF33B4;
	case 4:
		goto loc_82FF3418;
	case 5:
		goto loc_82FF342C;
	case 6:
		goto loc_82FF35F8;
	case 7:
		goto loc_82FF35F8;
	case 8:
		goto loc_82FF3440;
	case 9:
		goto loc_82FF35F8;
	case 10:
		goto loc_82FF35F8;
	case 11:
		goto loc_82FF35F8;
	case 12:
		goto loc_82FF35F8;
	case 13:
		goto loc_82FF344C;
	case 14:
		goto loc_82FF35F8;
	case 15:
		goto loc_82FF35F8;
	case 16:
		goto loc_82FF35F8;
	case 17:
		goto loc_82FF3458;
	case 18:
		goto loc_82FF34B0;
	case 19:
		goto loc_82FF3508;
	case 20:
		goto loc_82FF35F8;
	case 21:
		goto loc_82FF3514;
	case 22:
		goto loc_82FF3520;
	case 23:
		goto loc_82FF352C;
	case 24:
		goto loc_82FF3538;
	case 25:
		goto loc_82FF3544;
	case 26:
		goto loc_82FF35A4;
	case 27:
		goto loc_82FF35B0;
	default:
		__builtin_unreachable();
	}
loc_82FF338C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9e90
	ctx.lr = 0x82FF339C;
	sub_82FF9E90(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33A0:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9ea8
	ctx.lr = 0x82FF33B0;
	sub_82FF9EA8(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33B4:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff33cc
	if (!ctx.cr6.eq) goto loc_82FF33CC;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF33CC:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF33E8;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3410
	if (!ctx.cr0.eq) goto loc_82FF3410;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF33FC;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3410
	if (!ctx.cr0.eq) goto loc_82FF3410;
loc_82FF3404:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4111
	ctx.r30.u64 = ctx.r30.u64 | 4111;
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3410:
	// stw r27,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3418:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ffa028
	ctx.lr = 0x82FF3428;
	sub_82FFA028(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF342C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ffa078
	ctx.lr = 0x82FF343C;
	sub_82FFA078(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3440:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF344C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3458:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff3470
	if (!ctx.cr6.eq) goto loc_82FF3470;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3470:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF348C;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff34a8
	if (!ctx.cr0.eq) goto loc_82FF34A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF34A0;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff3404
	if (ctx.cr0.eq) goto loc_82FF3404;
loc_82FF34A8:
	// stw r27,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF34B0:
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff34c8
	if (!ctx.cr6.eq) goto loc_82FF34C8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF34C8:
	// addi r28,r31,472
	ctx.r28.s64 = ctx.r31.s64 + 472;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,532
	ctx.r5.s64 = ctx.r31.s64 + 532;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7188
	ctx.lr = 0x82FF34E4;
	sub_82FF7188(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff3500
	if (!ctx.cr0.eq) goto loc_82FF3500;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF34F8;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff3404
	if (ctx.cr0.eq) goto loc_82FF3404;
loc_82FF3500:
	// stw r27,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r27.u32);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3508:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3514:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3520:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF352C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3538:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3544:
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3558;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82ff3584
	if (ctx.cr6.eq) goto loc_82FF3584;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ff3590
	if (ctx.cr6.eq) goto loc_82FF3590;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
loc_82FF3584:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF358C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3590:
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF35A0;
	sub_82FF1D08(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF35A4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF35B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF35BC:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82ff9ec0
	ctx.lr = 0x82FF35CC;
	sub_82FF9EC0(ctx, base);
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF35D0:
	// cmpwi cr6,r5,4099
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4099, ctx.xer);
	// beq cr6,0x82ff3634
	if (ctx.cr6.eq) goto loc_82FF3634;
	// cmpwi cr6,r5,4100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4100, ctx.xer);
	// beq cr6,0x82ff3628
	if (ctx.cr6.eq) goto loc_82FF3628;
	// cmpwi cr6,r5,4101
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4101, ctx.xer);
	// beq cr6,0x82ff361c
	if (ctx.cr6.eq) goto loc_82FF361C;
	// cmpwi cr6,r5,4102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4102, ctx.xer);
	// beq cr6,0x82ff3610
	if (ctx.cr6.eq) goto loc_82FF3610;
	// cmpwi cr6,r5,4103
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4103, ctx.xer);
	// beq cr6,0x82ff3604
	if (ctx.cr6.eq) goto loc_82FF3604;
loc_82FF35F8:
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4105
	ctx.r30.u64 = ctx.r30.u64 | 4105;
	// b 0x82ff3640
	goto loc_82FF3640;
loc_82FF3604:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3610:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF361C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3628:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// b 0x82ff363c
	goto loc_82FF363C;
loc_82FF3634:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82FF363C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF3640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF364C"))) PPC_WEAK_FUNC(sub_82FF364C);
PPC_FUNC_IMPL(__imp__sub_82FF364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3650"))) PPC_WEAK_FUNC(sub_82FF3650);
PPC_FUNC_IMPL(__imp__sub_82FF3650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FF3658;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-20020
	ctx.r11.s64 = ctx.r11.s64 + -20020;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r27,r31,176
	ctx.r27.s64 = ctx.r31.s64 + 176;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36A0;
	sub_82FF1930(ctx, base);
	// addi r26,r31,236
	ctx.r26.s64 = ctx.r31.s64 + 236;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36AC;
	sub_82FF1930(ctx, base);
	// addi r25,r31,296
	ctx.r25.s64 = ctx.r31.s64 + 296;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36B8;
	sub_82FF1930(ctx, base);
	// addi r24,r31,356
	ctx.r24.s64 = ctx.r31.s64 + 356;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ff1930
	ctx.lr = 0x82FF36C4;
	sub_82FF1930(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b258c
	ctx.lr = 0x82FF36D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
loc_82FF36DC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff36dc
	if (!ctx.cr0.eq) goto loc_82FF36DC;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF3708;
	sub_82CA2C60(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF3718;
	sub_82CA2C60(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 + 168;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// bl 0x82ff7450
	ctx.lr = 0x82FF3750;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF375C;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF3768;
	sub_82FF7450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ff7450
	ctx.lr = 0x82FF3774;
	sub_82FF7450(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// sth r30,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r30.u16);
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// addi r27,r31,424
	ctx.r27.s64 = ctx.r31.s64 + 424;
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// bl 0x82cf9a88
	ctx.lr = 0x82FF37A0;
	sub_82CF9A88(ctx, base);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82ff6e40
	ctx.lr = 0x82FF37BC;
	sub_82FF6E40(ctx, base);
	// addi r11,r31,512
	ctx.r11.s64 = ctx.r31.s64 + 512;
	// addi r10,r31,520
	ctx.r10.s64 = ctx.r31.s64 + 520;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// stb r11,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r11.u8);
	// lbz r11,1(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 1);
	// stb r11,533(r31)
	PPC_STORE_U8(ctx.r31.u32 + 533, ctx.r11.u8);
	// lbz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 2);
	// stb r11,534(r31)
	PPC_STORE_U8(ctx.r31.u32 + 534, ctx.r11.u8);
	// lbz r11,3(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 3);
	// stb r11,535(r31)
	PPC_STORE_U8(ctx.r31.u32 + 535, ctx.r11.u8);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// bl 0x82ff9f50
	ctx.lr = 0x82FF3814;
	sub_82FF9F50(ctx, base);
	// std r30,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r30.u64);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// bl 0x82ff7238
	ctx.lr = 0x82FF3830;
	sub_82FF7238(ctx, base);
	// addi r11,r31,604
	ctx.r11.s64 = ctx.r31.s64 + 604;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// std r10,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r10.u64);
	// bl 0x82b4f378
	ctx.lr = 0x82FF3858;
	sub_82B4F378(ctx, base);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82b4f378
	ctx.lr = 0x82FF3864;
	sub_82B4F378(ctx, base);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// bl 0x82ff8d70
	ctx.lr = 0x82FF3878;
	sub_82FF8D70(ctx, base);
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// bl 0x82ff9210
	ctx.lr = 0x82FF3880;
	sub_82FF9210(ctx, base);
	// addi r11,r31,984
	ctx.r11.s64 = ctx.r31.s64 + 984;
	// addi r10,r31,992
	ctx.r10.s64 = ctx.r31.s64 + 992;
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// addi r9,r31,1000
	ctx.r9.s64 = ctx.r31.s64 + 1000;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// addi r11,r31,1008
	ctx.r11.s64 = ctx.r31.s64 + 1008;
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// addi r8,r31,1016
	ctx.r8.s64 = ctx.r31.s64 + 1016;
	// stw r10,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// stw r9,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r9.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stw r11,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r11.u32);
	// stw r8,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r8.u32);
	// stw r8,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r8.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// sth r30,1032(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1032, ctx.r30.u16);
	// lhz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 148);
	// sth r11,1034(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1034, ctx.r11.u16);
	// lhz r11,150(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 150);
	// sth r11,1036(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1036, ctx.r11.u16);
	// lhz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 152);
	// sth r11,1038(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1038, ctx.r11.u16);
	// lhz r10,154(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 154);
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// sth r30,1046(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1046, ctx.r30.u16);
	// sth r30,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r30.u16);
	// sth r30,1050(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1050, ctx.r30.u16);
	// sth r10,1040(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1040, ctx.r10.u16);
	// sth r10,1044(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1044, ctx.r10.u16);
	// sth r30,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r30.u16);
	// sth r30,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r30.u16);
	// sth r30,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r30.u16);
	// stb r30,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r30.u8);
	// stb r23,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r23.u8);
	// stw r30,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r30.u32);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// std r30,1168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1168, ctx.r30.u64);
	// std r30,1176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1176, ctx.r30.u64);
	// std r30,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r30.u64);
	// bl 0x82266070
	ctx.lr = 0x82FF3930;
	sub_82266070(ctx, base);
	// stw r3,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cf9a88
	ctx.lr = 0x82FF3940;
	sub_82CF9A88(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ff3958
	if (!ctx.cr6.eq) goto loc_82FF3958;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// b 0x82ff39a8
	goto loc_82FF39A8;
loc_82FF3958:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x82ff59a0
	ctx.lr = 0x82FF3970;
	sub_82FF59A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
	// lhz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3);
	// sth r10,1056(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1056, ctx.r10.u16);
	// lhz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 5);
	// sth r10,1052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1052, ctx.r10.u16);
	// lhz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7);
	// sth r10,1054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1054, ctx.r10.u16);
	// lwz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// bl 0x82ff0b30
	ctx.lr = 0x82FF39A8;
	sub_82FF0B30(ctx, base);
loc_82FF39A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82FF39B4"))) PPC_WEAK_FUNC(sub_82FF39B4);
PPC_FUNC_IMPL(__imp__sub_82FF39B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF39B8"))) PPC_WEAK_FUNC(sub_82FF39B8);
PPC_FUNC_IMPL(__imp__sub_82FF39B8) {
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
	// bl 0x82ff1980
	ctx.lr = 0x82FF39D8;
	sub_82FF1980(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff39e8
	if (ctx.cr0.eq) goto loc_82FF39E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FF39E8;
	sub_824FE010(ctx, base);
loc_82FF39E8:
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

__attribute__((alias("__imp__sub_82FF3A04"))) PPC_WEAK_FUNC(sub_82FF3A04);
PPC_FUNC_IMPL(__imp__sub_82FF3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3A08"))) PPC_WEAK_FUNC(sub_82FF3A08);
PPC_FUNC_IMPL(__imp__sub_82FF3A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF3A10;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,1200
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1200, ctx.xer);
	// ble cr6,0x82ff3a34
	if (!ctx.cr6.gt) goto loc_82FF3A34;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4102
	ctx.r3.u64 = ctx.r3.u64 | 4102;
	// b 0x82ff3b10
	goto loc_82FF3B10;
loc_82FF3A34:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3A40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,416
	ctx.r29.s64 = ctx.r31.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6588
	ctx.lr = 0x82FF3A4C;
	sub_82FF6588(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82ff3a64
	if (!ctx.cr0.lt) goto loc_82FF3A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3A5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82ff3b10
	goto loc_82FF3B10;
loc_82FF3A64:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lhz r7,1036(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1036);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lhz r6,1034(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1034);
	// lhz r5,1040(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq 0x82ff3ac8
	if (ctx.cr0.eq) goto loc_82FF3AC8;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r28,r31,532
	ctx.r28.s64 = ctx.r31.s64 + 532;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x82ff66e8
	ctx.lr = 0x82FF3AA8;
	sub_82FF66E8(ctx, base);
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff3ae8
	if (ctx.cr6.eq) goto loc_82FF3AE8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82cf9b08
	ctx.lr = 0x82FF3AC4;
	sub_82CF9B08(ctx, base);
	// b 0x82ff3ae8
	goto loc_82FF3AE8;
loc_82FF3AC8:
	// lwz r28,424(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r30,r31,532
	ctx.r30.s64 = ctx.r31.s64 + 532;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82ff6768
	ctx.lr = 0x82FF3AE8;
	sub_82FF6768(ctx, base);
loc_82FF3AE8:
	// lhz r11,1042(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// sth r11,1042(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1042, ctx.r11.u16);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3B0C;
	sub_82FF1D08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF3B10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FF3B18"))) PPC_WEAK_FUNC(sub_82FF3B18);
PPC_FUNC_IMPL(__imp__sub_82FF3B18) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3B3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff3be4
	if (ctx.cr6.eq) goto loc_82FF3BE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff3be4
	if (ctx.cr6.eq) goto loc_82FF3BE4;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,4114
	ctx.r10.u64 = ctx.r10.u64 | 4114;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff3b84
	if (!ctx.cr6.eq) goto loc_82FF3B84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff15f8
	ctx.lr = 0x82FF3B80;
	sub_82FF15F8(ctx, base);
	// b 0x82ff3bcc
	goto loc_82FF3BCC;
loc_82FF3B84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff3bcc
	if (!ctx.cr6.eq) goto loc_82FF3BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefef8
	ctx.lr = 0x82FF3B94;
	sub_82FEFEF8(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r30.u8);
	// stb r30,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82ff3bb8
	if (ctx.cr6.eq) goto loc_82FF3BB8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3BB4;
	sub_82FEDD88(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_82FF3BB8:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff3bcc
	if (ctx.cr6.eq) goto loc_82FF3BCC;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3BC8;
	sub_82FEDD88(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_82FF3BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1668
	ctx.lr = 0x82FF3BD4;
	sub_82FF1668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3BDC;
	sub_82FF1D08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ff3bf4
	goto loc_82FF3BF4;
loc_82FF3BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3BEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_82FF3BF4:
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

__attribute__((alias("__imp__sub_82FF3C0C"))) PPC_WEAK_FUNC(sub_82FF3C0C);
PPC_FUNC_IMPL(__imp__sub_82FF3C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3C10"))) PPC_WEAK_FUNC(sub_82FF3C10);
PPC_FUNC_IMPL(__imp__sub_82FF3C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF3C18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF3C2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82266070
	ctx.lr = 0x82FF3C30;
	sub_82266070(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ff3c98
	if (!ctx.cr6.eq) goto loc_82FF3C98;
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3c98
	if (ctx.cr0.eq) goto loc_82FF3C98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefb98
	ctx.lr = 0x82FF3C58;
	sub_82FEFB98(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r3.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82cf9b18
	ctx.lr = 0x82FF3C78;
	sub_82CF9B18(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82ff3d8c
	if (!ctx.cr6.eq) goto loc_82FF3D8C;
	// lwz r10,1024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// b 0x82ff3d8c
	goto loc_82FF3D8C;
loc_82FF3C98:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff3d60
	if (!ctx.cr6.eq) goto loc_82FF3D60;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3cc0
	if (ctx.cr0.eq) goto loc_82FF3CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0c38
	ctx.lr = 0x82FF3CB4;
	sub_82FF0C38(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3CC0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3ce4
	if (ctx.cr0.eq) goto loc_82FF3CE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0d10
	ctx.lr = 0x82FF3CD8;
	sub_82FF0D10(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3CE4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d04
	if (ctx.cr0.eq) goto loc_82FF3D04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff28a0
	ctx.lr = 0x82FF3CF8;
	sub_82FF28A0(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D04:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d20
	if (ctx.cr0.eq) goto loc_82FF3D20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2ac0
	ctx.lr = 0x82FF3D14;
	sub_82FF2AC0(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D20:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff3d44
	if (ctx.cr0.eq) goto loc_82FF3D44;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0d10
	ctx.lr = 0x82FF3D38;
	sub_82FF0D10(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D44:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0e80
	ctx.lr = 0x82FF3D54;
	sub_82FF0E80(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82ff3d84
	goto loc_82FF3D84;
loc_82FF3D60:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82ff3d8c
	if (!ctx.cr6.eq) goto loc_82FF3D8C;
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff3d8c
	if (ctx.cr0.eq) goto loc_82FF3D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0ca8
	ctx.lr = 0x82FF3D7C;
	sub_82FF0CA8(ctx, base);
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82FF3D84:
	// stw r3,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r3.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
loc_82FF3D8C:
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff3dbc
	if (!ctx.cr6.eq) goto loc_82FF3DBC;
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3DAC;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3DB4;
	sub_82FEDD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff3e14
	goto loc_82FF3E14;
loc_82FF3DBC:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82ff3dd4
	if (!ctx.cr6.eq) goto loc_82FF3DD4;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82FF3DD4:
	// stw r30,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,1024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ffa0c8
	ctx.lr = 0x82FF3DF4;
	sub_82FFA0C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff3e08
	if (ctx.cr0.eq) goto loc_82FF3E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3E04;
	sub_82FF1D08(ctx, base);
	// b 0x82ff3e10
	goto loc_82FF3E10;
loc_82FF3E08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF3E10;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82FF3E10:
	// lwz r3,1024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
loc_82FF3E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF3E1C"))) PPC_WEAK_FUNC(sub_82FF3E1C);
PPC_FUNC_IMPL(__imp__sub_82FF3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3E20"))) PPC_WEAK_FUNC(sub_82FF3E20);
PPC_FUNC_IMPL(__imp__sub_82FF3E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF3E28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b227c
	ctx.lr = 0x82FF3E3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// lwz r30,1024(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82ff3e9c
	if (!ctx.cr6.lt) goto loc_82FF3E9C;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ff3e9c
	if (ctx.cr6.eq) goto loc_82FF3E9C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r11,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r11.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF3E90;
	sub_82FEFEF8(ctx, base);
loc_82FF3E90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3E98;
	sub_82FEDD88(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3E9C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82ff57b8
	ctx.lr = 0x82FF3EA8;
	sub_82FF57B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82ff3ef8
	if (!ctx.cr6.gt) goto loc_82FF3EF8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82ff3ee8
	if (ctx.cr6.eq) goto loc_82FF3EE8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82ff3e90
	if (ctx.cr6.eq) goto loc_82FF3E90;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82ff3ee0
	if (ctx.cr6.eq) goto loc_82FF3EE0;
	// bl 0x82ff0f70
	ctx.lr = 0x82FF3EDC;
	sub_82FF0F70(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EE0:
	// bl 0x82ff1068
	ctx.lr = 0x82FF3EE4;
	sub_82FF1068(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefc30
	ctx.lr = 0x82FF3EF4;
	sub_82FEFC30(ctx, base);
	// b 0x82ff3f04
	goto loc_82FF3F04;
loc_82FF3EF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0f10
	ctx.lr = 0x82FF3F04;
	sub_82FF0F10(ctx, base);
loc_82FF3F04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF3F0C;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF3F14;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF3F1C"))) PPC_WEAK_FUNC(sub_82FF3F1C);
PPC_FUNC_IMPL(__imp__sub_82FF3F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF3F20"))) PPC_WEAK_FUNC(sub_82FF3F20);
PPC_FUNC_IMPL(__imp__sub_82FF3F20) {
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
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832b227c
	ctx.lr = 0x82FF3F40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// rlwinm r10,r10,0,4,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// ble cr6,0x82ff3fd8
	if (!ctx.cr6.gt) goto loc_82FF3FD8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82ff3fa8
	if (!ctx.cr6.gt) goto loc_82FF3FA8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82ff3f8c
	if (ctx.cr6.eq) goto loc_82FF3F8C;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4014
	if (ctx.cr0.eq) goto loc_82FF4014;
	// addi r5,r31,1136
	ctx.r5.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF3F84;
	sub_82FF7BB0(ctx, base);
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// b 0x82ff3f98
	goto loc_82FF3F98;
loc_82FF3F8C:
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff4014
	if (ctx.cr6.eq) goto loc_82FF4014;
loc_82FF3F98:
	// bl 0x82fedd88
	ctx.lr = 0x82FF3F9C;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// b 0x82ff4014
	goto loc_82FF4014;
loc_82FF3FA8:
	// addi r30,r31,1136
	ctx.r30.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ff7bb0
	ctx.lr = 0x82FF3FBC;
	sub_82FF7BB0(ctx, base);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82ff4004
	if (!ctx.cr6.eq) goto loc_82FF4004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ff1578
	ctx.lr = 0x82FF3FD4;
	sub_82FF1578(ctx, base);
	// b 0x82ff4004
	goto loc_82FF4004;
loc_82FF3FD8:
	// addi r30,r31,1136
	ctx.r30.s64 = ctx.r31.s64 + 1136;
	// lwz r3,1136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// addi r4,r31,1060
	ctx.r4.s64 = ctx.r31.s64 + 1060;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ff9c80
	ctx.lr = 0x82FF3FEC;
	sub_82FF9C80(ctx, base);
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82ff4004
	if (!ctx.cr6.eq) goto loc_82FF4004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ff3168
	ctx.lr = 0x82FF4004;
	sub_82FF3168(ctx, base);
loc_82FF4004:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82fedd88
	ctx.lr = 0x82FF400C;
	sub_82FEDD88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF4014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF401C;
	sub_82FF1D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4024;
	sub_82FEDD88(ctx, base);
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

__attribute__((alias("__imp__sub_82FF403C"))) PPC_WEAK_FUNC(sub_82FF403C);
PPC_FUNC_IMPL(__imp__sub_82FF403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF4040"))) PPC_WEAK_FUNC(sub_82FF4040);
PPC_FUNC_IMPL(__imp__sub_82FF4040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF4048;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82ff40a0
	if (ctx.cr6.eq) goto loc_82FF40A0;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4090
	if (ctx.cr0.eq) goto loc_82FF4090;
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82ff40d8
	if (!ctx.cr6.lt) goto loc_82FF40D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// b 0x82ff40e8
	goto loc_82FF40E8;
loc_82FF4090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6338
	ctx.lr = 0x82FF409C;
	sub_82FF6338(ctx, base);
	// b 0x82ff40f4
	goto loc_82FF40F4;
loc_82FF40A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ffae28
	ctx.lr = 0x82FF40B0;
	sub_82FFAE28(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff40fc
	if (ctx.cr6.eq) goto loc_82FF40FC;
	// lhz r9,1040(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff40e4
	if (ctx.cr6.lt) goto loc_82FF40E4;
loc_82FF40D8:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x82ff4124
	goto loc_82FF4124;
loc_82FF40E4:
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
loc_82FF40E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ffa6d0
	ctx.lr = 0x82FF40F4;
	sub_82FFA6D0(ctx, base);
loc_82FF40F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff4124
	goto loc_82FF4124;
loc_82FF40FC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff07b0
	ctx.lr = 0x82FF4114;
	sub_82FF07B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff4124
	if (ctx.cr0.lt) goto loc_82FF4124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2180
	ctx.lr = 0x82FF4124;
	sub_82FF2180(ctx, base);
loc_82FF4124:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF412C"))) PPC_WEAK_FUNC(sub_82FF412C);
PPC_FUNC_IMPL(__imp__sub_82FF412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF4130"))) PPC_WEAK_FUNC(sub_82FF4130);
PPC_FUNC_IMPL(__imp__sub_82FF4130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF4138;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r31,1000
	ctx.r29.s64 = ctx.r31.s64 + 1000;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,1000(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff41b8
	if (ctx.cr6.eq) goto loc_82FF41B8;
	// extsh r30,r23
	ctx.r30.s64 = ctx.r23.s16;
loc_82FF4170:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff4180
	if (!ctx.cr6.eq) goto loc_82FF4180;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF4180:
	// lhz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 324);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82ff41b8
	if (!ctx.cr0.lt) goto loc_82FF41B8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0998
	ctx.lr = 0x82FF41A8;
	sub_82FF0998(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff4170
	if (!ctx.cr6.eq) goto loc_82FF4170;
loc_82FF41B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ff4390
	if (ctx.cr6.eq) goto loc_82FF4390;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,1048(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1048);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x82ff41ec
	if (!ctx.cr6.lt) goto loc_82FF41EC;
	// sth r11,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r11.u16);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82ff41f0
	goto loc_82FF41F0;
loc_82FF41EC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82FF41F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82ff42a0
	if (!ctx.cr6.eq) goto loc_82FF42A0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FF4200:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4234
	if (ctx.cr6.eq) goto loc_82FF4234;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// bl 0x82ff8f28
	ctx.lr = 0x82FF4214;
	sub_82FF8F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4234
	if (ctx.cr0.eq) goto loc_82FF4234;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF4230;
	sub_82FFA3D0(ctx, base);
loc_82FF4230:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF4234:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// bne cr6,0x82ff4244
	if (!ctx.cr6.eq) goto loc_82FF4244;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF4244:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff4324
	if (ctx.cr6.eq) goto loc_82FF4324;
	// lhz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4324
	if (!ctx.cr6.eq) goto loc_82FF4324;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff4270
	if (ctx.cr6.eq) goto loc_82FF4270;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82FF4270:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff42f0
	if (ctx.cr0.eq) goto loc_82FF42F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff0998
	ctx.lr = 0x82FF429C;
	sub_82FF0998(ctx, base);
	// b 0x82ff430c
	goto loc_82FF430C;
loc_82FF42A0:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff4200
	if (ctx.cr0.eq) goto loc_82FF4200;
	// lhz r11,324(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 324);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4200
	if (!ctx.cr6.eq) goto loc_82FF4200;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82ff42d4
	if (ctx.cr6.eq) goto loc_82FF42D4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82FF42D4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4234
	if (ctx.cr6.eq) goto loc_82FF4234;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2360
	ctx.lr = 0x82FF42EC;
	sub_82FF2360(ctx, base);
	// b 0x82ff4230
	goto loc_82FF4230;
loc_82FF42F0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff4310
	if (ctx.cr6.eq) goto loc_82FF4310;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lhz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2360
	ctx.lr = 0x82FF430C;
	sub_82FF2360(ctx, base);
loc_82FF430C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF4310:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82ff437c
	if (ctx.cr6.eq) goto loc_82FF437C;
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
	// b 0x82ff437c
	goto loc_82FF437C;
loc_82FF4324:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4348
	if (ctx.cr0.eq) goto loc_82FF4348;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82ff8fe0
	ctx.lr = 0x82FF4344;
	sub_82FF8FE0(ctx, base);
	// b 0x82ff437c
	goto loc_82FF437C;
loc_82FF4348:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82ff437c
	if (ctx.cr6.eq) goto loc_82FF437C;
	// addi r3,r31,942
	ctx.r3.s64 = ctx.r31.s64 + 942;
	// lhz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// bl 0x82ff8f28
	ctx.lr = 0x82FF435C;
	sub_82FF8F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff437c
	if (ctx.cr0.eq) goto loc_82FF437C;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r11.u32);
	// bl 0x82ffa3d0
	ctx.lr = 0x82FF4378;
	sub_82FFA3D0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82FF437C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fefa08
	ctx.lr = 0x82FF4384;
	sub_82FEFA08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4244
	if (!ctx.cr0.eq) goto loc_82FF4244;
	// b 0x82ff43ac
	goto loc_82FF43AC;
loc_82FF4390:
	// lhz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1048);
	// clrlwi r10,r23,16
	ctx.r10.u64 = ctx.r23.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82ff43ac
	if (!ctx.cr6.lt) goto loc_82FF43AC;
	// sth r23,1048(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1048, ctx.r23.u16);
loc_82FF43AC:
	// lbz r11,1144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff43c4
	if (!ctx.cr0.eq) goto loc_82FF43C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff03e8
	ctx.lr = 0x82FF43C4;
	sub_82FF03E8(ctx, base);
loc_82FF43C4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82ff43f4
	if (ctx.cr6.eq) goto loc_82FF43F4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa170
	ctx.lr = 0x82FF43F0;
	sub_82FFA170(ctx, base);
	// stw r25,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r25.u32);
loc_82FF43F4:
	// sth r23,1046(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1046, ctx.r23.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FF4404"))) PPC_WEAK_FUNC(sub_82FF4404);
PPC_FUNC_IMPL(__imp__sub_82FF4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF4408"))) PPC_WEAK_FUNC(sub_82FF4408);
PPC_FUNC_IMPL(__imp__sub_82FF4408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF4410;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff4528
	if (!ctx.cr6.eq) goto loc_82FF4528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82ff57e8
	ctx.lr = 0x82FF4434;
	sub_82FF57E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4528
	if (ctx.cr0.eq) goto loc_82FF4528;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4460;
	sub_82FEF9B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r28,-256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -256, ctx.xer);
	// blt cr6,0x82ff4528
	if (ctx.cr6.lt) goto loc_82FF4528;
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// bgt cr6,0x82ff4528
	if (ctx.cr6.gt) goto loc_82FF4528;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff4528
	if (ctx.cr0.lt) goto loc_82FF4528;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff44c8
	if (ctx.cr6.eq) goto loc_82FF44C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF44AC;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff4528
	if (!ctx.cr0.gt) goto loc_82FF4528;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x82ff44cc
	goto loc_82FF44CC;
loc_82FF44C8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FF44CC:
	// bl 0x82266070
	ctx.lr = 0x82FF44D0;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x82ff4520
	if (ctx.cr6.lt) goto loc_82FF4520;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF44F4;
	sub_82FF4130(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF4514;
	sub_82FF0610(ctx, base);
	// or. r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff4528
	if (!ctx.cr0.eq) goto loc_82FF4528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82FF4520:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF4528;
	sub_82FFA470(ctx, base);
loc_82FF4528:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF4534"))) PPC_WEAK_FUNC(sub_82FF4534);
PPC_FUNC_IMPL(__imp__sub_82FF4534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF4538"))) PPC_WEAK_FUNC(sub_82FF4538);
PPC_FUNC_IMPL(__imp__sub_82FF4538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF4540;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff4764
	if (!ctx.cr6.eq) goto loc_82FF4764;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82ff5870
	ctx.lr = 0x82FF4564;
	sub_82FF5870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4764
	if (ctx.cr0.eq) goto loc_82FF4764;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4590;
	sub_82FEF9B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// cmpwi cr6,r28,-256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -256, ctx.xer);
	// blt cr6,0x82ff4764
	if (ctx.cr6.lt) goto loc_82FF4764;
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// bgt cr6,0x82ff4764
	if (ctx.cr6.gt) goto loc_82FF4764;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff4764
	if (ctx.cr0.lt) goto loc_82FF4764;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff45f8
	if (ctx.cr6.eq) goto loc_82FF45F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF45DC;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff4764
	if (!ctx.cr0.gt) goto loc_82FF4764;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// b 0x82ff45fc
	goto loc_82FF45FC;
loc_82FF45F8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82FF45FC:
	// bl 0x82266070
	ctx.lr = 0x82FF4600;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x82ff4644
	if (ctx.cr6.lt) goto loc_82FF4644;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF4624;
	sub_82FF4130(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF4640;
	sub_82FF0610(ctx, base);
	// b 0x82ff464c
	goto loc_82FF464C;
loc_82FF4644:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF464C;
	sub_82FFA470(ctx, base);
loc_82FF464C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4674
	if (ctx.cr0.eq) goto loc_82FF4674;
	// lwz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6);
	// lbz r10,1144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1144);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stb r10,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r10.u8);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF4674:
	// lwz r10,1148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4764
	if (ctx.cr0.eq) goto loc_82FF4764;
	// lwz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6);
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff46b4
	if (ctx.cr6.eq) goto loc_82FF46B4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x82ff4764
	if (ctx.cr6.gt) goto loc_82FF4764;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82ff4764
	if (!ctx.cr6.gt) goto loc_82FF4764;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF46B4:
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ff46cc
	if (ctx.cr6.lt) goto loc_82FF46CC;
	// lwz r4,676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
loc_82FF46CC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82ffa170
	ctx.lr = 0x82FF46EC;
	sub_82FFA170(ctx, base);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff4738
	if (ctx.cr0.eq) goto loc_82FF4738;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// rlwimi r11,r10,22,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4728
	if (ctx.cr0.eq) goto loc_82FF4728;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82ff4764
	if (ctx.cr6.lt) goto loc_82FF4764;
loc_82FF4728:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF4734;
	sub_82FF74C0(ctx, base);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF4738:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82ff475c
	if (ctx.cr0.eq) goto loc_82FF475C;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82ff15f8
	ctx.lr = 0x82FF4758;
	sub_82FF15F8(ctx, base);
	// b 0x82ff4764
	goto loc_82FF4764;
loc_82FF475C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff0490
	ctx.lr = 0x82FF4764;
	sub_82FF0490(ctx, base);
loc_82FF4764:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF4770"))) PPC_WEAK_FUNC(sub_82FF4770);
PPC_FUNC_IMPL(__imp__sub_82FF4770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF4778;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF478C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r29,1145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1145, ctx.r29.u8);
	// stb r29,1144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1144, ctx.r29.u8);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff47c8
	if (ctx.cr0.eq) goto loc_82FF47C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF47B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3f20
	ctx.lr = 0x82FF47C0;
	sub_82FF3F20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF47C8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82FF47C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefef8
	ctx.lr = 0x82FF47D0;
	sub_82FEFEF8(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff47e4
	if (ctx.cr6.eq) goto loc_82FF47E4;
	// bl 0x82fedd88
	ctx.lr = 0x82FF47E0;
	sub_82FEDD88(ctx, base);
	// stw r29,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r29.u32);
loc_82FF47E4:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff47f8
	if (ctx.cr6.eq) goto loc_82FF47F8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF47F4;
	sub_82FEDD88(ctx, base);
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
loc_82FF47F8:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r30,r31,984
	ctx.r30.s64 = ctx.r31.s64 + 984;
	// b 0x82ff4844
	goto loc_82FF4844;
loc_82FF4804:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4818
	if (!ctx.cr6.eq) goto loc_82FF4818;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff4838
	goto loc_82FF4838;
loc_82FF4818:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4838:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4840;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4844:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4804
	if (!ctx.cr6.eq) goto loc_82FF4804;
	// lwz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	// addi r30,r31,992
	ctx.r30.s64 = ctx.r31.s64 + 992;
	// b 0x82ff4898
	goto loc_82FF4898;
loc_82FF4858:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff486c
	if (!ctx.cr6.eq) goto loc_82FF486C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff488c
	goto loc_82FF488C;
loc_82FF486C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF488C:
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4894;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4898:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4858
	if (!ctx.cr6.eq) goto loc_82FF4858;
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// addi r30,r31,1000
	ctx.r30.s64 = ctx.r31.s64 + 1000;
	// b 0x82ff48ec
	goto loc_82FF48EC;
loc_82FF48AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff48c0
	if (!ctx.cr6.eq) goto loc_82FF48C0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff48e0
	goto loc_82FF48E0;
loc_82FF48C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF48E0:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF48E8;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF48EC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff48ac
	if (!ctx.cr6.eq) goto loc_82FF48AC;
	// lwz r11,1008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// addi r30,r31,1008
	ctx.r30.s64 = ctx.r31.s64 + 1008;
	// b 0x82ff4940
	goto loc_82FF4940;
loc_82FF4900:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4914
	if (!ctx.cr6.eq) goto loc_82FF4914;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82ff4934
	goto loc_82FF4934;
loc_82FF4914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4934:
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82fedd88
	ctx.lr = 0x82FF493C;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4940:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4900
	if (!ctx.cr6.eq) goto loc_82FF4900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82ffa948
	ctx.lr = 0x82FF4954;
	sub_82FFA948(ctx, base);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// bl 0x82ffa948
	ctx.lr = 0x82FF496C;
	sub_82FFA948(ctx, base);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r30,r31,512
	ctx.r30.s64 = ctx.r31.s64 + 512;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF4978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4988
	if (!ctx.cr6.eq) goto loc_82FF4988;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF4988:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1578
	ctx.lr = 0x82FF4994;
	sub_82FF1578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4998:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4978
	if (!ctx.cr6.eq) goto loc_82FF4978;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// addi r30,r31,520
	ctx.r30.s64 = ctx.r31.s64 + 520;
	// b 0x82ff49cc
	goto loc_82FF49CC;
loc_82FF49AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49bc
	if (!ctx.cr6.eq) goto loc_82FF49BC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF49BC:
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1578
	ctx.lr = 0x82FF49C8;
	sub_82FF1578(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF49CC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49ac
	if (!ctx.cr6.eq) goto loc_82FF49AC;
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r30,r31,604
	ctx.r30.s64 = ctx.r31.s64 + 604;
	// b 0x82ff4a00
	goto loc_82FF4A00;
loc_82FF49E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49f0
	if (!ctx.cr6.eq) goto loc_82FF49F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FF49F0:
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3168
	ctx.lr = 0x82FF49FC;
	sub_82FF3168(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4A00:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff49e0
	if (!ctx.cr6.eq) goto loc_82FF49E0;
	// lwz r11,1016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	// addi r30,r31,1016
	ctx.r30.s64 = ctx.r31.s64 + 1016;
	// b 0x82ff4a64
	goto loc_82FF4A64;
loc_82FF4A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4a28
	if (!ctx.cr6.eq) goto loc_82FF4A28;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82ff4a4c
	goto loc_82FF4A4C;
loc_82FF4A28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF4A4C:
	// lhz r11,1044(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1044);
	// addi r3,r10,-8
	ctx.r3.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1044(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1044, ctx.r11.u16);
	// bl 0x82fedd88
	ctx.lr = 0x82FF4A60;
	sub_82FEDD88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF4A64:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff4a14
	if (!ctx.cr6.eq) goto loc_82FF4A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FF4A74;
	sub_82FF64E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF4A7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF4A84;
	sub_82FEDD88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF4A8C"))) PPC_WEAK_FUNC(sub_82FF4A8C);
PPC_FUNC_IMPL(__imp__sub_82FF4A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF4A90"))) PPC_WEAK_FUNC(sub_82FF4A90);
PPC_FUNC_IMPL(__imp__sub_82FF4A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FF4A98;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1192
	ctx.r4.s64 = 1192;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82ff5788
	ctx.lr = 0x82FF4AC8;
	sub_82FF5788(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82ff4adc
	if (!ctx.cr0.eq) goto loc_82FF4ADC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff4be8
	goto loc_82FF4BE8;
loc_82FF4ADC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3650
	ctx.lr = 0x82FF4AF8;
	sub_82FF3650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,532
	ctx.r9.s64 = ctx.r31.s64 + 532;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82FF4B04:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bne 0x82ff4b04
	if (!ctx.cr0.eq) goto loc_82FF4B04;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff4b30
	if (!ctx.cr6.gt) goto loc_82FF4B30;
	// lis r30,-32646
	ctx.r30.s64 = -2139488256;
	// ori r30,r30,4101
	ctx.r30.u64 = ctx.r30.u64 | 4101;
	// b 0x82ff4bc8
	goto loc_82FF4BC8;
loc_82FF4B30:
	// lwz r9,144(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff4b44
	if (!ctx.cr6.gt) goto loc_82FF4B44;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82FF4B44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff4b98
	if (ctx.cr6.eq) goto loc_82FF4B98;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ff4b6c
	if (!ctx.cr6.gt) goto loc_82FF4B6C;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82feff50
	ctx.lr = 0x82FF4B68;
	sub_82FEFF50(ctx, base);
	// b 0x82ff4b70
	goto loc_82FF4B70;
loc_82FF4B6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF4B70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ff4b8c
	if (ctx.cr6.eq) goto loc_82FF4B8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x82ff6f70
	ctx.lr = 0x82FF4B84;
	sub_82FF6F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4b98
	if (!ctx.cr0.eq) goto loc_82FF4B98;
loc_82FF4B8C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82ff4bc8
	goto loc_82FF4BC8;
loc_82FF4B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64d8
	ctx.lr = 0x82FF4BA0;
	sub_82FF64D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ff4bc8
	if (ctx.cr0.lt) goto loc_82FF4BC8;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff3a08
	ctx.lr = 0x82FF4BB8;
	sub_82FF3A08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ff4be4
	if (!ctx.cr0.lt) goto loc_82FF4BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff64e8
	ctx.lr = 0x82FF4BC8;
	sub_82FF64E8(ctx, base);
loc_82FF4BC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF4BDC;
	sub_82FEDD88(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ff4be8
	goto loc_82FF4BE8;
loc_82FF4BE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FF4BE8:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FF4BF8"))) PPC_WEAK_FUNC(sub_82FF4BF8);
PPC_FUNC_IMPL(__imp__sub_82FF4BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82FF4C00;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r23,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u32);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r23.u8);
	// lhz r10,834(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r10,836(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 836);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,834(r31)
	PPC_STORE_U16(ctx.r31.u32 + 834, ctx.r11.u16);
	// sth r10,836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 836, ctx.r10.u16);
	// lwz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x82ffac50
	ctx.lr = 0x82FF4C88;
	sub_82FFAC50(ctx, base);
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// addi r22,r1,96
	ctx.r22.s64 = ctx.r1.s64 + 96;
loc_82FF4C9C:
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82ff4cd4
	if (ctx.cr6.gt) goto loc_82FF4CD4;
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x82ff4d84
	if (ctx.cr6.eq) goto loc_82FF4D84;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq 0x82ff4ce0
	if (ctx.cr0.eq) goto loc_82FF4CE0;
	// bne cr6,0x82ff4ce4
	if (!ctx.cr6.eq) goto loc_82FF4CE4;
loc_82FF4CD4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FF4CD8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
loc_82FF4CE0:
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
loc_82FF4CE4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// beq cr6,0x82ff4d60
	if (ctx.cr6.eq) goto loc_82FF4D60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ff4d24
	if (ctx.cr6.eq) goto loc_82FF4D24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ffae78
	ctx.lr = 0x82FF4D04;
	sub_82FFAE78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ff4cd4
	if (ctx.cr6.gt) goto loc_82FF4CD4;
	// b 0x82ff4d84
	goto loc_82FF4D84;
loc_82FF4D24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffae48
	ctx.lr = 0x82FF4D2C;
	sub_82FFAE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r24,-6
	ctx.r10.s64 = ctx.r24.s64 + -6;
	// lwz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
	// addi r3,r25,572
	ctx.r3.s64 = ctx.r25.s64 + 572;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ff73f8
	ctx.lr = 0x82FF4D54;
	sub_82FF73F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff4cd4
	if (!ctx.cr0.eq) goto loc_82FF4CD4;
	// b 0x82ff4d84
	goto loc_82FF4D84;
loc_82FF4D60:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ffae28
	ctx.lr = 0x82FF4D68;
	sub_82FFAE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff4cd4
	if (ctx.cr0.eq) goto loc_82FF4CD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r24,-9
	ctx.r10.s64 = ctx.r24.s64 + -9;
	// lwz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff4cd4
	if (!ctx.cr6.eq) goto loc_82FF4CD4;
loc_82FF4D84:
	// subf r10,r24,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r24.s64;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// subf. r29,r26,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// beq 0x82ff4e2c
	if (ctx.cr0.eq) goto loc_82FF4E2C;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x82ff4cd4
	if (!ctx.cr6.lt) goto loc_82FF4CD4;
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// stwx r23,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u32);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r23.u8);
	// lhz r10,834(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// lhz r11,834(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 834);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,834(r31)
	PPC_STORE_U16(ctx.r31.u32 + 834, ctx.r11.u16);
	// lhz r11,836(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 836, ctx.r11.u16);
	// lwz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x82ffac50
	ctx.lr = 0x82FF4E18;
	sub_82FFAC50(ctx, base);
	// lbz r11,13(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff4c9c
	if (!ctx.cr0.eq) goto loc_82FF4C9C;
	// b 0x82ff4cd4
	goto loc_82FF4CD4;
loc_82FF4E2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fefe58
	ctx.lr = 0x82FF4E38;
	sub_82FEFE58(ctx, base);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82ff4ee8
	if (ctx.cr6.eq) goto loc_82FF4EE8;
	// addi r29,r25,572
	ctx.r29.s64 = ctx.r25.s64 + 572;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
loc_82FF4E4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff4e78
	if (!ctx.cr6.lt) goto loc_82FF4E78;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x82ff4e78
	if (!ctx.cr6.gt) goto loc_82FF4E78;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82ff4e7c
	goto loc_82FF4E7C;
loc_82FF4E78:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FF4E7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82ff4e9c
	if (!ctx.cr6.eq) goto loc_82FF4E9C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ff4040
	ctx.lr = 0x82FF4E98;
	sub_82FF4040(ctx, base);
	// b 0x82ff4ea0
	goto loc_82FF4EA0;
loc_82FF4E9C:
	// bl 0x82ff9d20
	ctx.lr = 0x82FF4EA0;
	sub_82FF9D20(ctx, base);
loc_82FF4EA0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82ff4eac
	if (!ctx.cr0.lt) goto loc_82FF4EAC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82FF4EAC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82ff4e4c
	if (!ctx.cr0.eq) goto loc_82FF4E4C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82ff4ee8
	if (!ctx.cr6.lt) goto loc_82FF4EE8;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff4ee8
	if (ctx.cr6.eq) goto loc_82FF4EE8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r28.u32);
	// stb r23,1145(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1145, ctx.r23.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// stb r23,1144(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1144, ctx.r23.u8);
	// bl 0x82fefef8
	ctx.lr = 0x82FF4EE8;
	sub_82FEFEF8(ctx, base);
loc_82FF4EE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff4cd8
	goto loc_82FF4CD8;
}

__attribute__((alias("__imp__sub_82FF4EF0"))) PPC_WEAK_FUNC(sub_82FF4EF0);
PPC_FUNC_IMPL(__imp__sub_82FF4EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FF4EF8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff510c
	if (!ctx.cr6.eq) goto loc_82FF510C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,40(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// lwz r5,44(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x82ff5d38
	ctx.lr = 0x82FF4F20;
	sub_82FF5D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff510c
	if (ctx.cr0.eq) goto loc_82FF510C;
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r27,r31,872
	ctx.r27.s64 = ctx.r31.s64 + 872;
	// lhz r4,872(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 872);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r11,r11,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x300;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4F4C;
	sub_82FEF9B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fefd80
	ctx.lr = 0x82FF4F58;
	sub_82FEFD80(ctx, base);
	// subf r10,r3,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r3.s64;
	// lhz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1040);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82ff510c
	if (!ctx.cr6.lt) goto loc_82FF510C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82ff510c
	if (!ctx.cr6.gt) goto loc_82FF510C;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,8,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x300;
	// lhz r30,1046(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1046);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fef9b0
	ctx.lr = 0x82FF4F98;
	sub_82FEF9B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// cmpwi cr6,r29,-256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -256, ctx.xer);
	// blt cr6,0x82ff510c
	if (ctx.cr6.lt) goto loc_82FF510C;
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// bgt cr6,0x82ff510c
	if (ctx.cr6.gt) goto loc_82FF510C;
	// lhz r10,1032(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff510c
	if (ctx.cr0.lt) goto loc_82FF510C;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff5000
	if (ctx.cr6.eq) goto loc_82FF5000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff8d10
	ctx.lr = 0x82FF4FE4;
	sub_82FF8D10(ctx, base);
	// lhz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1032);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82ff510c
	if (!ctx.cr0.gt) goto loc_82FF510C;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// b 0x82ff5004
	goto loc_82FF5004;
loc_82FF5000:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82FF5004:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ff8ae0
	ctx.lr = 0x82FF5010;
	sub_82FF8AE0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82ff510c
	if (ctx.cr0.eq) goto loc_82FF510C;
	// bl 0x82266070
	ctx.lr = 0x82FF501C;
	sub_82266070(ctx, base);
	// lwz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r10,1184(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1184, ctx.r11.u64);
	// blt cr6,0x82ff507c
	if (ctx.cr6.lt) goto loc_82FF507C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4130
	ctx.lr = 0x82FF505C;
	sub_82FF4130(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82ff0610
	ctx.lr = 0x82FF5078;
	sub_82FF0610(ctx, base);
	// b 0x82ff5084
	goto loc_82FF5084;
loc_82FF507C:
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x82ffa470
	ctx.lr = 0x82FF5084;
	sub_82FFA470(ctx, base);
loc_82FF5084:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x82ff0508
	ctx.lr = 0x82FF509C;
	sub_82FF0508(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82ff510c
	if (ctx.cr6.eq) goto loc_82FF510C;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ff50c0
	if (ctx.cr6.eq) goto loc_82FF50C0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff05c0
	ctx.lr = 0x82FF50C0;
	sub_82FF05C0(ctx, base);
loc_82FF50C0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff510c
	if (ctx.cr6.eq) goto loc_82FF510C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r6,616(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 616);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// bl 0x82ff6400
	ctx.lr = 0x82FF50F0;
	sub_82FF6400(ctx, base);
	// std r3,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r3.u64);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ff4bf8
	ctx.lr = 0x82FF5108;
	sub_82FF4BF8(ctx, base);
	// b 0x82ff5110
	goto loc_82FF5110;
loc_82FF510C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF5110:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FF5118"))) PPC_WEAK_FUNC(sub_82FF5118);
PPC_FUNC_IMPL(__imp__sub_82FF5118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5120;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x832b227c
	ctx.lr = 0x82FF5138;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82ff51f8
	if (ctx.cr6.eq) goto loc_82FF51F8;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82ff57b8
	ctx.lr = 0x82FF5150;
	sub_82FF57B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82ff51e8
	if (ctx.cr6.eq) goto loc_82FF51E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82ff51d8
	if (ctx.cr6.eq) goto loc_82FF51D8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82ff51c8
	if (ctx.cr6.eq) goto loc_82FF51C8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82ff51b8
	if (ctx.cr6.eq) goto loc_82FF51B8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82ff51a8
	if (ctx.cr6.eq) goto loc_82FF51A8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82ff5198
	if (ctx.cr6.eq) goto loc_82FF5198;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bne cr6,0x82ff51f8
	if (!ctx.cr6.eq) goto loc_82FF51F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4ef0
	ctx.lr = 0x82FF5194;
	sub_82FF4EF0(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF5198:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4538
	ctx.lr = 0x82FF51A4;
	sub_82FF4538(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff4408
	ctx.lr = 0x82FF51B4;
	sub_82FF4408(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2830
	ctx.lr = 0x82FF51C4;
	sub_82FF2830(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2788
	ctx.lr = 0x82FF51D4;
	sub_82FF2788(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2708
	ctx.lr = 0x82FF51E4;
	sub_82FF2708(ctx, base);
	// b 0x82ff51f4
	goto loc_82FF51F4;
loc_82FF51E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff2498
	ctx.lr = 0x82FF51F4;
	sub_82FF2498(ctx, base);
loc_82FF51F4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82FF51F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff1d08
	ctx.lr = 0x82FF5200;
	sub_82FF1D08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF520C"))) PPC_WEAK_FUNC(sub_82FF520C);
PPC_FUNC_IMPL(__imp__sub_82FF520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5210"))) PPC_WEAK_FUNC(sub_82FF5210);
PPC_FUNC_IMPL(__imp__sub_82FF5210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5218;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31952
	ctx.r29.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r29,-2492
	ctx.r31.s64 = ctx.r29.s64 + -2492;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5230;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,-2492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2492);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r10,-2492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -2492);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,-2492(r29)
	PPC_STORE_U32(ctx.r29.u32 + -2492, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF5254;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF525C"))) PPC_WEAK_FUNC(sub_82FF525C);
PPC_FUNC_IMPL(__imp__sub_82FF525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5260"))) PPC_WEAK_FUNC(sub_82FF5260);
PPC_FUNC_IMPL(__imp__sub_82FF5260) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2492
	ctx.r30.s64 = ctx.r11.s64 + -2492;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5288;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF52B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FF52CC"))) PPC_WEAK_FUNC(sub_82FF52CC);
PPC_FUNC_IMPL(__imp__sub_82FF52CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF52D0"))) PPC_WEAK_FUNC(sub_82FF52D0);
PPC_FUNC_IMPL(__imp__sub_82FF52D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF52D8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82266070
	ctx.lr = 0x82FF52F4;
	sub_82266070(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// add r26,r3,r31
	ctx.r26.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r30,r11,-2492
	ctx.r30.s64 = ctx.r11.s64 + -2492;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF5308;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ff5370
	if (ctx.cr6.eq) goto loc_82FF5370;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff5370
	if (ctx.cr0.eq) goto loc_82FF5370;
loc_82FF5320:
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82ff5370
	if (!ctx.cr6.eq) goto loc_82FF5370;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff5358
	if (!ctx.cr6.eq) goto loc_82FF5358;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FF5358:
	// bl 0x82266070
	ctx.lr = 0x82FF535C;
	sub_82266070(ctx, base);
	// subf. r31,r3,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ff5368
	if (!ctx.cr0.lt) goto loc_82FF5368;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF5368:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ff5320
	if (!ctx.cr6.eq) goto loc_82FF5320;
loc_82FF5370:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF5378;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FF5384"))) PPC_WEAK_FUNC(sub_82FF5384);
PPC_FUNC_IMPL(__imp__sub_82FF5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5388"))) PPC_WEAK_FUNC(sub_82FF5388);
PPC_FUNC_IMPL(__imp__sub_82FF5388) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-2492
	ctx.r31.s64 = ctx.r11.s64 + -2492;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF53B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r11,-2616
	ctx.r4.s64 = ctx.r11.s64 + -2616;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF53C4;
	sub_82CA2C60(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF53CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FF53E4"))) PPC_WEAK_FUNC(sub_82FF53E4);
PPC_FUNC_IMPL(__imp__sub_82FF53E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF53E8"))) PPC_WEAK_FUNC(sub_82FF53E8);
PPC_FUNC_IMPL(__imp__sub_82FF53E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF53F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-2492
	ctx.r29.s64 = ctx.r11.s64 + -2492;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x832b227c
	ctx.lr = 0x82FF540C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// bgt cr6,0x82ff569c
	if (ctx.cr6.gt) goto loc_82FF569C;
	// beq cr6,0x82ff5688
	if (ctx.cr6.eq) goto loc_82FF5688;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82ff56cc
	if (ctx.cr6.gt) goto loc_82FF56CC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-20000
	ctx.r12.s64 = ctx.r12.s64 + -20000;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32001
	ctx.r12.s64 = -2097217536;
	// addi r12,r12,21580
	ctx.r12.s64 = ctx.r12.s64 + 21580;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FF544C;
	case 1:
		goto loc_82FF5474;
	case 2:
		goto loc_82FF5498;
	case 3:
		goto loc_82FF54AC;
	case 4:
		goto loc_82FF54BC;
	case 5:
		goto loc_82FF54D0;
	case 6:
		goto loc_82FF54E4;
	case 7:
		goto loc_82FF54F8;
	case 8:
		goto loc_82FF550C;
	case 9:
		goto loc_82FF5520;
	case 10:
		goto loc_82FF5534;
	case 11:
		goto loc_82FF5548;
	case 12:
		goto loc_82FF555C;
	case 13:
		goto loc_82FF5570;
	case 14:
		goto loc_82FF5584;
	case 15:
		goto loc_82FF5598;
	case 16:
		goto loc_82FF55AC;
	case 17:
		goto loc_82FF55C0;
	case 18:
		goto loc_82FF55D4;
	case 19:
		goto loc_82FF55E8;
	case 20:
		goto loc_82FF55FC;
	case 21:
		goto loc_82FF5610;
	case 22:
		goto loc_82FF5624;
	case 23:
		goto loc_82FF5638;
	case 24:
		goto loc_82FF564C;
	case 25:
		goto loc_82FF56CC;
	case 26:
		goto loc_82FF5660;
	case 27:
		goto loc_82FF5674;
	default:
		__builtin_unreachable();
	}
loc_82FF544C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff5750
	if (!ctx.cr6.lt) goto loc_82FF5750;
loc_82FF546C:
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x82ff5750
	goto loc_82FF5750;
loc_82FF5474:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff5750
	if (!ctx.cr6.gt) goto loc_82FF5750;
	// b 0x82ff546c
	goto loc_82FF546C;
loc_82FF5498:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,-2616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2616, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54BC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54D0:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54E4:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF54F8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF550C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5520:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,108(r9)
	PPC_STORE_U16(ctx.r9.u32 + 108, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5534:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,110(r9)
	PPC_STORE_U16(ctx.r9.u32 + 110, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5548:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,112(r9)
	PPC_STORE_U16(ctx.r9.u32 + 112, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF555C:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,114(r9)
	PPC_STORE_U16(ctx.r9.u32 + 114, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5570:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5584:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5598:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55AC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55C0:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55D4:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55E8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF55FC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5610:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5624:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5638:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF564C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5660:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5674:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5688:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF569C:
	// cmpwi cr6,r30,4099
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4099, ctx.xer);
	// beq cr6,0x82ff573c
	if (ctx.cr6.eq) goto loc_82FF573C;
	// cmpwi cr6,r30,4100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4100, ctx.xer);
	// beq cr6,0x82ff5728
	if (ctx.cr6.eq) goto loc_82FF5728;
	// cmpwi cr6,r30,4101
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4101, ctx.xer);
	// beq cr6,0x82ff5714
	if (ctx.cr6.eq) goto loc_82FF5714;
	// cmpwi cr6,r30,4102
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4102, ctx.xer);
	// beq cr6,0x82ff5700
	if (ctx.cr6.eq) goto loc_82FF5700;
	// cmpwi cr6,r30,4103
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4103, ctx.xer);
	// beq cr6,0x82ff56ec
	if (ctx.cr6.eq) goto loc_82FF56EC;
	// cmpwi cr6,r30,4104
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4104, ctx.xer);
	// beq cr6,0x82ff56d8
	if (ctx.cr6.eq) goto loc_82FF56D8;
loc_82FF56CC:
	// lis r31,-32646
	ctx.r31.s64 = -2139488256;
	// ori r31,r31,4105
	ctx.r31.u64 = ctx.r31.u64 | 4105;
	// b 0x82ff5750
	goto loc_82FF5750;
loc_82FF56D8:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF56EC:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5700:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,60(r9)
	PPC_STORE_U16(ctx.r9.u32 + 60, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5714:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,58(r9)
	PPC_STORE_U16(ctx.r9.u32 + 58, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF5728:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-2616
	ctx.r9.s64 = ctx.r11.s64 + -2616;
	// sth r10,56(r9)
	PPC_STORE_U16(ctx.r9.u32 + 56, ctx.r10.u16);
	// b 0x82ff574c
	goto loc_82FF574C;
loc_82FF573C:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-2616
	ctx.r10.s64 = ctx.r10.s64 + -2616;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_82FF574C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FF5750:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x832b226c
	ctx.lr = 0x82FF5758;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF5764"))) PPC_WEAK_FUNC(sub_82FF5764);
PPC_FUNC_IMPL(__imp__sub_82FF5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5768"))) PPC_WEAK_FUNC(sub_82FF5768);
PPC_FUNC_IMPL(__imp__sub_82FF5768) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5784"))) PPC_WEAK_FUNC(sub_82FF5784);
PPC_FUNC_IMPL(__imp__sub_82FF5784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5788"))) PPC_WEAK_FUNC(sub_82FF5788);
PPC_FUNC_IMPL(__imp__sub_82FF5788) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x821f4d88
	sub_821F4D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF579C"))) PPC_WEAK_FUNC(sub_82FF579C);
PPC_FUNC_IMPL(__imp__sub_82FF579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF57A0"))) PPC_WEAK_FUNC(sub_82FF57A0);
PPC_FUNC_IMPL(__imp__sub_82FF57A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x821f5f18
	sub_821F5F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF57B4"))) PPC_WEAK_FUNC(sub_82FF57B4);
PPC_FUNC_IMPL(__imp__sub_82FF57B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF57B8"))) PPC_WEAK_FUNC(sub_82FF57B8);
PPC_FUNC_IMPL(__imp__sub_82FF57B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// beq 0x82ff57cc
	if (ctx.cr0.eq) goto loc_82FF57CC;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_82FF57CC:
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF57E4"))) PPC_WEAK_FUNC(sub_82FF57E4);
PPC_FUNC_IMPL(__imp__sub_82FF57E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF57E8"))) PPC_WEAK_FUNC(sub_82FF57E8);
PPC_FUNC_IMPL(__imp__sub_82FF57E8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bge cr6,0x82ff5814
	if (!ctx.cr6.lt) goto loc_82FF5814;
loc_82FF580C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff5858
	goto loc_82FF5858;
loc_82FF5814:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5854
	if (ctx.cr0.eq) goto loc_82FF5854;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF5848;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff580c
	if (ctx.cr0.eq) goto loc_82FF580C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82FF5854:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF5858:
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

__attribute__((alias("__imp__sub_82FF5870"))) PPC_WEAK_FUNC(sub_82FF5870);
PPC_FUNC_IMPL(__imp__sub_82FF5870) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bge cr6,0x82ff589c
	if (!ctx.cr6.lt) goto loc_82FF589C;
loc_82FF5894:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff58e0
	goto loc_82FF58E0;
loc_82FF589C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 10;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff58dc
	if (ctx.cr0.eq) goto loc_82FF58DC;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF58D0;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5894
	if (ctx.cr0.eq) goto loc_82FF5894;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82FF58DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF58E0:
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

__attribute__((alias("__imp__sub_82FF58F8"))) PPC_WEAK_FUNC(sub_82FF58F8);
PPC_FUNC_IMPL(__imp__sub_82FF58F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5900;
	sub_82CA2BEC(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r3,26
	ctx.r3.s64 = 26;
	// sth r6,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r6.u16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// sth r7,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r7.u16);
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// stw r8,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r8.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stb r31,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r31.u8);
	// sth r5,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r5.u16);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stw r4,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r4.u32);
	// stw r29,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r29.u32);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
loc_82FF5948:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82ff5974
	if (ctx.cr0.eq) goto loc_82FF5974;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// slw r4,r30,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82FF5974:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x82ff5948
	if (ctx.cr6.lt) goto loc_82FF5948;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF5998"))) PPC_WEAK_FUNC(sub_82FF5998);
PPC_FUNC_IMPL(__imp__sub_82FF5998) {
	PPC_FUNC_PROLOGUE();
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF59A0"))) PPC_WEAK_FUNC(sub_82FF59A0);
PPC_FUNC_IMPL(__imp__sub_82FF59A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 26, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82ff59b8
	if (!ctx.cr6.lt) goto loc_82FF59B8;
loc_82FF59B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF59B8:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff59b0
	if (!ctx.cr6.eq) goto loc_82FF59B0;
	// addi r10,r4,26
	ctx.r10.s64 = ctx.r4.s64 + 26;
	// addi r9,r5,-26
	ctx.r9.s64 = ctx.r5.s64 + -26;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF59E0"))) PPC_WEAK_FUNC(sub_82FF59E0);
PPC_FUNC_IMPL(__imp__sub_82FF59E0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF59E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,25(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5a3c
	if (ctx.cr0.eq) goto loc_82FF5A3C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82ff5a60
	if (ctx.cr6.lt) goto loc_82FF5A60;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x82ff5a60
	if (ctx.cr0.eq) goto loc_82FF5A60;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82ff5a60
	if (ctx.cr6.gt) goto loc_82FF5A60;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ff5a40
	goto loc_82FF5A40;
loc_82FF5A3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF5A40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff59e8
	if (ctx.cr6.lt) goto loc_82FF59E8;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF5A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5A68"))) PPC_WEAK_FUNC(sub_82FF5A68);
PPC_FUNC_IMPL(__imp__sub_82FF5A68) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r3,34
	ctx.r3.s64 = 34;
	// sth r7,5(r11)
	PPC_STORE_U16(ctx.r11.u32 + 5, ctx.r7.u16);
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r8,7(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7, ctx.r8.u16);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,29(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29, ctx.r9.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// sth r6,3(r11)
	PPC_STORE_U16(ctx.r11.u32 + 3, ctx.r6.u16);
	// stw r4,9(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9, ctx.r4.u32);
	// stw r5,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r5.u32);
	// stw r31,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r31.u32);
	// stw r31,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r31.u32);
	// stw r30,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r30.u32);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_82FF5AC0:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82ff5af0
	if (ctx.cr0.eq) goto loc_82FF5AF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82FF5AF0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff5ac0
	if (ctx.cr6.lt) goto loc_82FF5AC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5B20"))) PPC_WEAK_FUNC(sub_82FF5B20);
PPC_FUNC_IMPL(__imp__sub_82FF5B20) {
	PPC_FUNC_PROLOGUE();
	// stw r5,21(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21, ctx.r5.u32);
	// stw r4,17(r3)
	PPC_STORE_U32(ctx.r3.u32 + 17, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5B2C"))) PPC_WEAK_FUNC(sub_82FF5B2C);
PPC_FUNC_IMPL(__imp__sub_82FF5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5B30"))) PPC_WEAK_FUNC(sub_82FF5B30);
PPC_FUNC_IMPL(__imp__sub_82FF5B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bge cr6,0x82ff5b48
	if (!ctx.cr6.lt) goto loc_82FF5B48;
loc_82FF5B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF5B48:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff5b40
	if (!ctx.cr6.eq) goto loc_82FF5B40;
	// addi r10,r4,34
	ctx.r10.s64 = ctx.r4.s64 + 34;
	// addi r9,r5,-34
	ctx.r9.s64 = ctx.r5.s64 + -34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5B70"))) PPC_WEAK_FUNC(sub_82FF5B70);
PPC_FUNC_IMPL(__imp__sub_82FF5B70) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF5B78:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5bcc
	if (ctx.cr0.eq) goto loc_82FF5BCC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82ff5bf0
	if (ctx.cr6.lt) goto loc_82FF5BF0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// beq 0x82ff5bf0
	if (ctx.cr0.eq) goto loc_82FF5BF0;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82ff5bf0
	if (ctx.cr6.gt) goto loc_82FF5BF0;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82ff5bd0
	goto loc_82FF5BD0;
loc_82FF5BCC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF5BD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82ff5b78
	if (ctx.cr6.lt) goto loc_82FF5B78;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF5BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5BF8"))) PPC_WEAK_FUNC(sub_82FF5BF8);
PPC_FUNC_IMPL(__imp__sub_82FF5BF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r4,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// stw r5,7(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7, ctx.r5.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5C1C"))) PPC_WEAK_FUNC(sub_82FF5C1C);
PPC_FUNC_IMPL(__imp__sub_82FF5C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5C20"))) PPC_WEAK_FUNC(sub_82FF5C20);
PPC_FUNC_IMPL(__imp__sub_82FF5C20) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r4,3(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5C3C"))) PPC_WEAK_FUNC(sub_82FF5C3C);
PPC_FUNC_IMPL(__imp__sub_82FF5C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5C40"))) PPC_WEAK_FUNC(sub_82FF5C40);
PPC_FUNC_IMPL(__imp__sub_82FF5C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF5C48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r11,r5,252
	ctx.r11.u64 = ctx.r5.u64 | 252;
	// rlwinm r6,r8,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r6,r11,5,24,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xE0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// andi. r11,r6,227
	ctx.r11.u64 = ctx.r6.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r10,r8,22
	ctx.r10.u64 = ctx.r8.u32 & 0x3FF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82ff5c80
	if (ctx.cr6.eq) goto loc_82FF5C80;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5C80:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5c9c
	if (ctx.cr6.eq) goto loc_82FF5C9C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5C9C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lhz r11,38(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5cb8
	if (ctx.cr0.eq) goto loc_82FF5CB8;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82FF5CB8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r10,r9,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// beq 0x82ff5cf8
	if (ctx.cr0.eq) goto loc_82FF5CF8;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff9130
	ctx.lr = 0x82FF5CF4;
	sub_82FF9130(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5CF8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5d18
	if (ctx.cr0.eq) goto loc_82FF5D18;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5D14;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5D18:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF5D38"))) PPC_WEAK_FUNC(sub_82FF5D38);
PPC_FUNC_IMPL(__imp__sub_82FF5D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FF5D40;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// bge cr6,0x82ff5d64
	if (!ctx.cr6.lt) goto loc_82FF5D64;
loc_82FF5D5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff5e20
	goto loc_82FF5E20;
loc_82FF5D64:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r30,r28,6
	ctx.r30.s64 = ctx.r28.s64 + 6;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r26,r28,r25
	ctx.r26.u64 = ctx.r28.u64 + ctx.r25.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5dbc
	if (ctx.cr0.eq) goto loc_82FF5DBC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8d90
	ctx.lr = 0x82FF5DA8;
	sub_82FF8D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5d5c
	if (ctx.cr0.eq) goto loc_82FF5D5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82FF5DBC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5df0
	if (ctx.cr0.eq) goto loc_82FF5DF0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff8a90
	ctx.lr = 0x82FF5DDC;
	sub_82FF8A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff5d5c
	if (ctx.cr0.eq) goto loc_82FF5D5C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82FF5DF0:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq 0x82ff5e08
	if (ctx.cr0.eq) goto loc_82FF5E08;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x82ff5e1c
	goto loc_82FF5E1C;
loc_82FF5E08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff5e20
	if (!ctx.cr0.eq) goto loc_82FF5E20;
loc_82FF5E1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF5E20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FF5E28"))) PPC_WEAK_FUNC(sub_82FF5E28);
PPC_FUNC_IMPL(__imp__sub_82FF5E28) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// rlwimi r9,r11,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5e9c
	if (ctx.cr6.eq) goto loc_82FF5E9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5E98;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5E9C:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82FF5EC4"))) PPC_WEAK_FUNC(sub_82FF5EC4);
PPC_FUNC_IMPL(__imp__sub_82FF5EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5EC8"))) PPC_WEAK_FUNC(sub_82FF5EC8);
PPC_FUNC_IMPL(__imp__sub_82FF5EC8) {
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
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// beq cr6,0x82ff5f00
	if (ctx.cr6.eq) goto loc_82FF5F00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_82FF5F00:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r6,6(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6, ctx.r6.u32);
	// addi r30,r31,10
	ctx.r30.s64 = ctx.r31.s64 + 10;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwimi r9,r10,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff5f54
	if (ctx.cr6.eq) goto loc_82FF5F54;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x82ff8c40
	ctx.lr = 0x82FF5F50;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF5F54:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82FF5F7C"))) PPC_WEAK_FUNC(sub_82FF5F7C);
PPC_FUNC_IMPL(__imp__sub_82FF5F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF5F80"))) PPC_WEAK_FUNC(sub_82FF5F80);
PPC_FUNC_IMPL(__imp__sub_82FF5F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF5F88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r5,r11,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r5,r10,2,24,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF03);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
	// beq 0x82ff5fcc
	if (ctx.cr0.eq) goto loc_82FF5FCC;
loc_82FF5FBC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff5fbc
	if (ctx.cr0.eq) goto loc_82FF5FBC;
loc_82FF5FCC:
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82ff5ff4
	if (!ctx.cr6.eq) goto loc_82FF5FF4;
	// andi. r11,r9,247
	ctx.r11.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82ff6038
	goto loc_82FF6038;
loc_82FF5FF4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r9,7
	ctx.r9.s64 = 7;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82ff6038
	if (ctx.cr6.eq) goto loc_82FF6038;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r5,r30,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r30.s64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82ff8c40
	ctx.lr = 0x82FF6034;
	sub_82FF8C40(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82FF6038:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF6054"))) PPC_WEAK_FUNC(sub_82FF6054);
PPC_FUNC_IMPL(__imp__sub_82FF6054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6058"))) PPC_WEAK_FUNC(sub_82FF6058);
PPC_FUNC_IMPL(__imp__sub_82FF6058) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,10048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10048, ctx.xer);
	// beq cr6,0x82ff60c0
	if (ctx.cr6.eq) goto loc_82FF60C0;
	// cmpwi cr6,r3,10050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10050, ctx.xer);
	// beq cr6,0x82ff60b4
	if (ctx.cr6.eq) goto loc_82FF60B4;
	// cmpwi cr6,r3,10054
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10054, ctx.xer);
	// beq cr6,0x82ff60a8
	if (ctx.cr6.eq) goto loc_82FF60A8;
	// cmpwi cr6,r3,10055
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10055, ctx.xer);
	// beq cr6,0x82ff609c
	if (ctx.cr6.eq) goto loc_82FF609C;
	// cmpwi cr6,r3,10065
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10065, ctx.xer);
	// beq cr6,0x82ff60a8
	if (ctx.cr6.eq) goto loc_82FF60A8;
	// cmpwi cr6,r3,10091
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10091, ctx.xer);
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// beq cr6,0x82ff6094
	if (ctx.cr6.eq) goto loc_82FF6094;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// blr 
	return;
loc_82FF6094:
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// blr 
	return;
loc_82FF609C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
loc_82FF60A8:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4116
	ctx.r3.u64 = ctx.r3.u64 | 4116;
	// blr 
	return;
loc_82FF60B4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4099
	ctx.r3.u64 = ctx.r3.u64 | 4099;
	// blr 
	return;
loc_82FF60C0:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4100
	ctx.r3.u64 = ctx.r3.u64 | 4100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF60CC"))) PPC_WEAK_FUNC(sub_82FF60CC);
PPC_FUNC_IMPL(__imp__sub_82FF60CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF60D0"))) PPC_WEAK_FUNC(sub_82FF60D0);
PPC_FUNC_IMPL(__imp__sub_82FF60D0) {
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
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-27224
	ctx.r31.s64 = ctx.r11.s64 + -27224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF60F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x82ff6110
	if (!ctx.cr0.eq) goto loc_82FF6110;
	// bl 0x82cfaa28
	ctx.lr = 0x82FF6104;
	sub_82CFAA28(ctx, base);
	// bl 0x82cf9a80
	ctx.lr = 0x82FF6108;
	sub_82CF9A80(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82ffc148
	ctx.lr = 0x82FF6110;
	sub_82FFC148(ctx, base);
loc_82FF6110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF6118;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FF612C"))) PPC_WEAK_FUNC(sub_82FF612C);
PPC_FUNC_IMPL(__imp__sub_82FF612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6130"))) PPC_WEAK_FUNC(sub_82FF6130);
PPC_FUNC_IMPL(__imp__sub_82FF6130) {
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
	// bl 0x82266070
	ctx.lr = 0x82FF6150;
	sub_82266070(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff6170
	if (ctx.cr0.eq) goto loc_82FF6170;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82FF6170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82ffc1e0
	ctx.lr = 0x82FF617C;
	sub_82FFC1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82266070
	ctx.lr = 0x82FF6184;
	sub_82266070(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82FF61A4"))) PPC_WEAK_FUNC(sub_82FF61A4);
PPC_FUNC_IMPL(__imp__sub_82FF61A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF61A8"))) PPC_WEAK_FUNC(sub_82FF61A8);
PPC_FUNC_IMPL(__imp__sub_82FF61A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF61B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffbfe0
	ctx.lr = 0x82FF61CC;
	sub_82FFBFE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82ff6244
	if (ctx.cr0.lt) goto loc_82FF6244;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82cf9a70
	ctx.lr = 0x82FF61FC;
	sub_82CF9A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff6210
	if (ctx.cr0.eq) goto loc_82FF6210;
	// bl 0x82ff6058
	ctx.lr = 0x82FF6208;
	sub_82FF6058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ff6230
	goto loc_82FF6230;
loc_82FF6210:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82cfaa18
	ctx.lr = 0x82FF621C;
	sub_82CFAA18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff623c
	if (ctx.cr0.eq) goto loc_82FF623C;
	// bl 0x82ff6058
	ctx.lr = 0x82FF6228;
	sub_82FF6058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cf9a80
	ctx.lr = 0x82FF6230;
	sub_82CF9A80(ctx, base);
loc_82FF6230:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ffc148
	ctx.lr = 0x82FF6238;
	sub_82FFC148(ctx, base);
	// b 0x82ff6244
	goto loc_82FF6244;
loc_82FF623C:
	// bl 0x82266070
	ctx.lr = 0x82FF6240;
	sub_82266070(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
loc_82FF6244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF6250"))) PPC_WEAK_FUNC(sub_82FF6250);
PPC_FUNC_IMPL(__imp__sub_82FF6250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6258;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27224
	ctx.r31.s64 = ctx.r11.s64 + -27224;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF6274;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ff62a4
	if (!ctx.cr6.eq) goto loc_82FF62A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff61a8
	ctx.lr = 0x82FF6290;
	sub_82FF61A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82ff62a4
	if (!ctx.cr0.lt) goto loc_82FF62A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82ff62a8
	goto loc_82FF62A8;
loc_82FF62A4:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82FF62A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b226c
	ctx.lr = 0x82FF62B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF62BC"))) PPC_WEAK_FUNC(sub_82FF62BC);
PPC_FUNC_IMPL(__imp__sub_82FF62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF62C0"))) PPC_WEAK_FUNC(sub_82FF62C0);
PPC_FUNC_IMPL(__imp__sub_82FF62C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF62C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x82ff62ec
	if (!ctx.cr6.eq) goto loc_82FF62EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ffbfa0
	ctx.lr = 0x82FF62E8;
	sub_82FFBFA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82FF62EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82FF6304;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF632C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF6334"))) PPC_WEAK_FUNC(sub_82FF6334);
PPC_FUNC_IMPL(__imp__sub_82FF6334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6338"))) PPC_WEAK_FUNC(sub_82FF6338);
PPC_FUNC_IMPL(__imp__sub_82FF6338) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r10,836(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 836);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,836(r11)
	PPC_STORE_U16(ctx.r11.u32 + 836, ctx.r10.u16);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82ff1260
	sub_82FF1260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF6360"))) PPC_WEAK_FUNC(sub_82FF6360);
PPC_FUNC_IMPL(__imp__sub_82FF6360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6364"))) PPC_WEAK_FUNC(sub_82FF6364);
PPC_FUNC_IMPL(__imp__sub_82FF6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6368"))) PPC_WEAK_FUNC(sub_82FF6368);
PPC_FUNC_IMPL(__imp__sub_82FF6368) {
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
	// addi r4,r31,850
	ctx.r4.s64 = ctx.r31.s64 + 850;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6390;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff63a4
	if (!ctx.cr0.eq) goto loc_82FF63A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff63e8
	goto loc_82FF63E8;
loc_82FF63A4:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19940
	ctx.r8.s64 = ctx.r10.s64 + -19940;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r11,840
	ctx.r9.s64 = ctx.r11.s64 + 840;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF63E8:
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

__attribute__((alias("__imp__sub_82FF6400"))) PPC_WEAK_FUNC(sub_82FF6400);
PPC_FUNC_IMPL(__imp__sub_82FF6400) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r3,r9,10,16,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x8000;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r5,838(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 838);
	// xori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 ^ 32768;
	// stw r8,828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 828, ctx.r8.u32);
	// stw r7,824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 824, ctx.r7.u32);
	// clrlwi r8,r5,17
	ctx.r8.u64 = ctx.r5.u32 & 0x7FFF;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// sth r4,832(r11)
	PPC_STORE_U16(ctx.r11.u32 + 832, ctx.r4.u16);
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r3,r6,0,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 0) & 0xFFFFFFFFFFFF0000;
	// sth r8,838(r11)
	PPC_STORE_U16(ctx.r11.u32 + 838, ctx.r8.u16);
	// clrldi r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFF;
	// sth r5,834(r11)
	PPC_STORE_U16(ctx.r11.u32 + 834, ctx.r5.u16);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r5,836(r11)
	PPC_STORE_U16(ctx.r11.u32 + 836, ctx.r5.u16);
	// or r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplwi cr6,r7,32768
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32768, ctx.xer);
	// bge cr6,0x82ff6470
	if (!ctx.cr6.lt) goto loc_82FF6470;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff6468
	if (!ctx.cr6.lt) goto loc_82FF6468;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
loc_82FF6468:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82ff6480
	goto loc_82FF6480;
loc_82FF6470:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff6480
	if (!ctx.cr6.gt) goto loc_82FF6480;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82FF6480:
	// rldicr r10,r8,5,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r10,816(r11)
	PPC_STORE_U64(ctx.r11.u32 + 816, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6490"))) PPC_WEAK_FUNC(sub_82FF6490);
PPC_FUNC_IMPL(__imp__sub_82FF6490) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20140
	ctx.r11.s64 = ctx.r11.s64 + -20140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ff64bc
	if (ctx.cr0.eq) goto loc_82FF64BC;
	// bl 0x824fe010
	ctx.lr = 0x82FF64BC;
	sub_824FE010(ctx, base);
loc_82FF64BC:
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

__attribute__((alias("__imp__sub_82FF64D4"))) PPC_WEAK_FUNC(sub_82FF64D4);
PPC_FUNC_IMPL(__imp__sub_82FF64D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF64D8"))) PPC_WEAK_FUNC(sub_82FF64D8);
PPC_FUNC_IMPL(__imp__sub_82FF64D8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF64E4"))) PPC_WEAK_FUNC(sub_82FF64E4);
PPC_FUNC_IMPL(__imp__sub_82FF64E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF64E8"))) PPC_WEAK_FUNC(sub_82FF64E8);
PPC_FUNC_IMPL(__imp__sub_82FF64E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF64F4"))) PPC_WEAK_FUNC(sub_82FF64F4);
PPC_FUNC_IMPL(__imp__sub_82FF64F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF64F8"))) PPC_WEAK_FUNC(sub_82FF64F8);
PPC_FUNC_IMPL(__imp__sub_82FF64F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,76(r10)
	PPC_STORE_U16(ctx.r10.u32 + 76, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r4,15,0,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0xFFFF8000) | (ctx.r9.u64 & 0xFFFFFFFF00007FFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r5,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,78
	ctx.r9.s64 = ctx.r10.s64 + 78;
	// lhz r9,78(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r9,r6,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// sth r9,78(r10)
	PPC_STORE_U16(ctx.r10.u32 + 78, ctx.r9.u16);
	// lhz r3,328(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6588"))) PPC_WEAK_FUNC(sub_82FF6588);
PPC_FUNC_IMPL(__imp__sub_82FF6588) {
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
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ff5788
	ctx.lr = 0x82FF65A8;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff65bc
	if (!ctx.cr0.eq) goto loc_82FF65BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff661c
	goto loc_82FF661C;
loc_82FF65BC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-19932
	ctx.r10.s64 = ctx.r10.s64 + -19932;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FF661C:
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

__attribute__((alias("__imp__sub_82FF6630"))) PPC_WEAK_FUNC(sub_82FF6630);
PPC_FUNC_IMPL(__imp__sub_82FF6630) {
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
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6650;
	sub_82FF5788(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff66c4
	if (ctx.cr0.eq) goto loc_82FF66C4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-19932
	ctx.r10.s64 = ctx.r10.s64 + -19932;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// sth r10,328(r11)
	PPC_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// sth r10,330(r11)
	PPC_STORE_U16(ctx.r11.u32 + 330, ctx.r10.u16);
	// sth r10,336(r11)
	PPC_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// b 0x82ff66cc
	goto loc_82FF66CC;
loc_82FF66C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82FF66CC:
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

__attribute__((alias("__imp__sub_82FF66E4"))) PPC_WEAK_FUNC(sub_82FF66E4);
PPC_FUNC_IMPL(__imp__sub_82FF66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF66E8"))) PPC_WEAK_FUNC(sub_82FF66E8);
PPC_FUNC_IMPL(__imp__sub_82FF66E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF66F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff58f8
	ctx.lr = 0x82FF6734;
	sub_82FF58F8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff6758
	if (ctx.cr6.eq) goto loc_82FF6758;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ca2c60
	ctx.lr = 0x82FF6754;
	sub_82CA2C60(ctx, base);
	// b 0x82ff6760
	goto loc_82FF6760;
loc_82FF6758:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82FF6760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF6768"))) PPC_WEAK_FUNC(sub_82FF6768);
PPC_FUNC_IMPL(__imp__sub_82FF6768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF6770;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff5a68
	ctx.lr = 0x82FF67C4;
	sub_82FF5A68(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ff67e8
	if (ctx.cr6.eq) goto loc_82FF67E8;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ca2c60
	ctx.lr = 0x82FF67E4;
	sub_82CA2C60(ctx, base);
	// b 0x82ff67f0
	goto loc_82FF67F0;
loc_82FF67E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82FF67F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF67F8"))) PPC_WEAK_FUNC(sub_82FF67F8);
PPC_FUNC_IMPL(__imp__sub_82FF67F8) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5bf8
	ctx.lr = 0x82FF6834;
	sub_82FF5BF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FF6854"))) PPC_WEAK_FUNC(sub_82FF6854);
PPC_FUNC_IMPL(__imp__sub_82FF6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6858"))) PPC_WEAK_FUNC(sub_82FF6858);
PPC_FUNC_IMPL(__imp__sub_82FF6858) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5c20
	ctx.lr = 0x82FF6894;
	sub_82FF5C20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FF68B4"))) PPC_WEAK_FUNC(sub_82FF68B4);
PPC_FUNC_IMPL(__imp__sub_82FF68B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF68B8"))) PPC_WEAK_FUNC(sub_82FF68B8);
PPC_FUNC_IMPL(__imp__sub_82FF68B8) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5e28
	ctx.lr = 0x82FF68F8;
	sub_82FF5E28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FF6918"))) PPC_WEAK_FUNC(sub_82FF6918);
PPC_FUNC_IMPL(__imp__sub_82FF6918) {
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
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r9.u16);
	// bl 0x82ff5ec8
	ctx.lr = 0x82FF6960;
	sub_82FF5EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FF6980"))) PPC_WEAK_FUNC(sub_82FF6980);
PPC_FUNC_IMPL(__imp__sub_82FF6980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF6988;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r27.u16);
	// bl 0x82ff5c40
	ctx.lr = 0x82FF69E0;
	sub_82FF5C40(ctx, base);
	// lhz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 336);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// rlwimi r10,r30,15,0,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 15) & 0xFFFF8000) | (ctx.r10.u64 & 0xFFFFFFFF00007FFF);
	// sth r29,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r29.u16);
	// sth r11,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r11.u16);
	// sth r10,336(r31)
	PPC_STORE_U16(ctx.r31.u32 + 336, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FF6A04"))) PPC_WEAK_FUNC(sub_82FF6A04);
PPC_FUNC_IMPL(__imp__sub_82FF6A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6A08"))) PPC_WEAK_FUNC(sub_82FF6A08);
PPC_FUNC_IMPL(__imp__sub_82FF6A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82ff5998
	sub_82FF5998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF6A10"))) PPC_WEAK_FUNC(sub_82FF6A10);
PPC_FUNC_IMPL(__imp__sub_82FF6A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82ff5b20
	sub_82FF5B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF6A18"))) PPC_WEAK_FUNC(sub_82FF6A18);
PPC_FUNC_IMPL(__imp__sub_82FF6A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82FF6A20;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ff6a58
	if (!ctx.cr6.gt) goto loc_82FF6A58;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 2;
	// b 0x82ff6c18
	goto loc_82FF6C18;
loc_82FF6A58:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6c10
	if (ctx.cr0.eq) goto loc_82FF6C10;
	// addi r30,r1,244
	ctx.r30.s64 = ctx.r1.s64 + 244;
	// addi r21,r1,112
	ctx.r21.s64 = ctx.r1.s64 + 112;
	// addi r26,r31,72
	ctx.r26.s64 = ctx.r31.s64 + 72;
loc_82FF6A80:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r22,r27,1
	ctx.r22.s64 = ctx.r27.s64 + 1;
	// lhz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82ff6aa4
	if (!ctx.cr6.lt) goto loc_82FF6AA4;
	// lhz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// b 0x82ff6aa8
	goto loc_82FF6AA8;
loc_82FF6AA4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82FF6AA8:
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ffac50
	ctx.lr = 0x82FF6AD4;
	sub_82FFAC50(ctx, base);
	// lhz r11,6(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff6b24
	if (!ctx.cr0.eq) goto loc_82FF6B24;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6bf4
	if (ctx.cr6.eq) goto loc_82FF6BF4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,4108
	ctx.r5.u64 = ctx.r5.u64 | 4108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// b 0x82ff6bf4
	goto loc_82FF6BF4;
loc_82FF6B24:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff6b30
	if (!ctx.cr0.eq) goto loc_82FF6B30;
	// add r19,r29,r19
	ctx.r19.u64 = ctx.r29.u64 + ctx.r19.u64;
loc_82FF6B30:
	// clrlwi r23,r23,16
	ctx.r23.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82ff6be8
	if (ctx.cr6.eq) goto loc_82FF6BE8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r27,r10,r20
	ctx.r27.u64 = ctx.r10.u64 + ctx.r20.u64;
	// beq 0x82ff6b9c
	if (ctx.cr0.eq) goto loc_82FF6B9C;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// sth r3,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ffaac8
	ctx.lr = 0x82FF6B84;
	sub_82FFAAC8(ctx, base);
	// subf r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82ff6ba8
	goto loc_82FF6BA8;
loc_82FF6B9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82FF6BA8:
	// bl 0x82caa2e0
	ctx.lr = 0x82FF6BAC;
	sub_82CAA2E0(ctx, base);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r23,9
	ctx.r9.s64 = ctx.r23.s64 + 9;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,78(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// ori r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 32768;
	// sth r20,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r20.u16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
	// lhz r10,6(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// rlwimi r9,r10,0,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// andi. r10,r9,57343
	ctx.r10.u64 = ctx.r9.u64 & 57343;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
loc_82FF6BE8:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// add r20,r29,r20
	ctx.r20.u64 = ctx.r29.u64 + ctx.r20.u64;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF6BF4:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6a80
	if (ctx.cr6.lt) goto loc_82FF6A80;
loc_82FF6C10:
	// sth r23,328(r31)
	PPC_STORE_U16(ctx.r31.u32 + 328, ctx.r23.u16);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
loc_82FF6C18:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r7,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r7.s64 = 1264 - ctx.r11.s64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82ff5f80
	ctx.lr = 0x82FF6C38;
	sub_82FF5F80(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r11,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r11.u16);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82FF6C5C"))) PPC_WEAK_FUNC(sub_82FF6C5C);
PPC_FUNC_IMPL(__imp__sub_82FF6C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6C60"))) PPC_WEAK_FUNC(sub_82FF6C60);
PPC_FUNC_IMPL(__imp__sub_82FF6C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6C68;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6cd8
	if (ctx.cr0.eq) goto loc_82FF6CD8;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6C84:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff6cc4
	if (ctx.cr6.eq) goto loc_82FF6CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff6cc4
	if (!ctx.cr0.eq) goto loc_82FF6CC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r11,330(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 330);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
loc_82FF6CC4:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6c84
	if (ctx.cr6.lt) goto loc_82FF6C84;
loc_82FF6CD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF6CE0"))) PPC_WEAK_FUNC(sub_82FF6CE0);
PPC_FUNC_IMPL(__imp__sub_82FF6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF6CE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6d3c
	if (ctx.cr0.eq) goto loc_82FF6D3C;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6D04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6d28
	if (ctx.cr6.eq) goto loc_82FF6D28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6D28:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6d04
	if (ctx.cr6.lt) goto loc_82FF6D04;
loc_82FF6D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF6D4C"))) PPC_WEAK_FUNC(sub_82FF6D4C);
PPC_FUNC_IMPL(__imp__sub_82FF6D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6D50"))) PPC_WEAK_FUNC(sub_82FF6D50);
PPC_FUNC_IMPL(__imp__sub_82FF6D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6D58;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6db4
	if (ctx.cr0.eq) goto loc_82FF6DB4;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6D78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6da0
	if (ctx.cr6.eq) goto loc_82FF6DA0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6DA0:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6d78
	if (ctx.cr6.lt) goto loc_82FF6D78;
loc_82FF6DB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF6DC4"))) PPC_WEAK_FUNC(sub_82FF6DC4);
PPC_FUNC_IMPL(__imp__sub_82FF6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6DC8"))) PPC_WEAK_FUNC(sub_82FF6DC8);
PPC_FUNC_IMPL(__imp__sub_82FF6DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6DD0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ff6e2c
	if (ctx.cr0.eq) goto loc_82FF6E2C;
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
loc_82FF6DF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff6e18
	if (ctx.cr6.eq) goto loc_82FF6E18;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FF6E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FF6E18:
	// lhz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 328);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff6df0
	if (ctx.cr6.lt) goto loc_82FF6DF0;
loc_82FF6E2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	PPC_STORE_U16(ctx.r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF6E3C"))) PPC_WEAK_FUNC(sub_82FF6E3C);
PPC_FUNC_IMPL(__imp__sub_82FF6E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6E40"))) PPC_WEAK_FUNC(sub_82FF6E40);
PPC_FUNC_IMPL(__imp__sub_82FF6E40) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82ff6e70
	if (!ctx.cr6.eq) goto loc_82FF6E70;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_82FF6E70:
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6E78"))) PPC_WEAK_FUNC(sub_82FF6E78);
PPC_FUNC_IMPL(__imp__sub_82FF6E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x82ff57a0
	sub_82FF57A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF6E90"))) PPC_WEAK_FUNC(sub_82FF6E90);
PPC_FUNC_IMPL(__imp__sub_82FF6E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6E94"))) PPC_WEAK_FUNC(sub_82FF6E94);
PPC_FUNC_IMPL(__imp__sub_82FF6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6E98"))) PPC_WEAK_FUNC(sub_82FF6E98);
PPC_FUNC_IMPL(__imp__sub_82FF6E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF6EA0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x82ff5788
	ctx.lr = 0x82FF6EC8;
	sub_82FF5788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ff6ed8
	if (!ctx.cr0.eq) goto loc_82FF6ED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff6f64
	goto loc_82FF6F64;
loc_82FF6ED8:
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF6EE8;
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff6f00
	if (ctx.cr6.eq) goto loc_82FF6F00;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF6F00;
	sub_82FF57A0(ctx, base);
loc_82FF6F00:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x82ff6f54
	if (ctx.cr6.eq) goto loc_82FF6F54;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82FF6F54:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FF6F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF6F6C"))) PPC_WEAK_FUNC(sub_82FF6F6C);
PPC_FUNC_IMPL(__imp__sub_82FF6F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF6F70"))) PPC_WEAK_FUNC(sub_82FF6F70);
PPC_FUNC_IMPL(__imp__sub_82FF6F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff6f94
	if (ctx.cr6.gt) goto loc_82FF6F94;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF6F94:
	// b 0x82ff6e98
	sub_82FF6E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF6F98"))) PPC_WEAK_FUNC(sub_82FF6F98);
PPC_FUNC_IMPL(__imp__sub_82FF6F98) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ff6fe8
	if (ctx.cr6.eq) goto loc_82FF6FE8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7070
	if (!ctx.cr6.eq) goto loc_82FF7070;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82ff7070
	goto loc_82FF7070;
loc_82FF6FE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7058
	if (!ctx.cr6.eq) goto loc_82FF7058;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82ff7014
	if (!ctx.cr6.lt) goto loc_82FF7014;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82ff701c
	goto loc_82FF701C;
loc_82FF7014:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82FF701C:
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff7030
	if (ctx.cr6.lt) goto loc_82FF7030;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ff7034
	if (!ctx.cr6.gt) goto loc_82FF7034;
loc_82FF7030:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82FF7034:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff6e98
	ctx.lr = 0x82FF7040;
	sub_82FF6E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff7054
	if (!ctx.cr0.eq) goto loc_82FF7054;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff7098
	goto loc_82FF7098;
loc_82FF7054:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82FF7058:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82FF7070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r10,r9,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82FF7098:
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

__attribute__((alias("__imp__sub_82FF70B0"))) PPC_WEAK_FUNC(sub_82FF70B0);
PPC_FUNC_IMPL(__imp__sub_82FF70B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,5,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFFFF8;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82ff7128
	if (!ctx.cr6.lt) goto loc_82FF7128;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r9,r4,8,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7128
	if (!ctx.cr6.eq) goto loc_82FF7128;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r4,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7128
	if (!ctx.cr6.eq) goto loc_82FF7128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ff7108
	if (!ctx.cr6.eq) goto loc_82FF7108;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82ff7114
	goto loc_82FF7114;
loc_82FF7108:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82FF7114:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82FF7128:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4111
	ctx.r3.u64 = ctx.r3.u64 | 4111;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7134"))) PPC_WEAK_FUNC(sub_82FF7134);
PPC_FUNC_IMPL(__imp__sub_82FF7134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7138"))) PPC_WEAK_FUNC(sub_82FF7138);
PPC_FUNC_IMPL(__imp__sub_82FF7138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7180
	if (!ctx.cr6.eq) goto loc_82FF7180;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,5,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff7180
	if (ctx.cr6.lt) goto loc_82FF7180;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff7180
	if (!ctx.cr6.lt) goto loc_82FF7180;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r9,r4,8,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff7180
	if (!ctx.cr6.eq) goto loc_82FF7180;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82FF7180:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7188"))) PPC_WEAK_FUNC(sub_82FF7188);
PPC_FUNC_IMPL(__imp__sub_82FF7188) {
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
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff7220
	if (ctx.cr6.eq) goto loc_82FF7220;
	// rlwinm r11,r4,8,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F;
	// subfic r11,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.s64 = 127 - ctx.r11.s64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82ff7220
	if (ctx.cr6.gt) goto loc_82FF7220;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// clrlwi r10,r4,8
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFFF;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82ff7220
	if (!ctx.cr6.lt) goto loc_82FF7220;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff71fc
	if (ctx.cr6.eq) goto loc_82FF71FC;
loc_82FF71E8:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bne 0x82ff71e8
	if (!ctx.cr0.eq) goto loc_82FF71E8;
loc_82FF71FC:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bl 0x82ff7138
	ctx.lr = 0x82FF720C;
	sub_82FF7138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ff7220
	if (ctx.cr0.eq) goto loc_82FF7220;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff7224
	if (!ctx.cr6.eq) goto loc_82FF7224;
loc_82FF7220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7234"))) PPC_WEAK_FUNC(sub_82FF7234);
PPC_FUNC_IMPL(__imp__sub_82FF7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7238"))) PPC_WEAK_FUNC(sub_82FF7238);
PPC_FUNC_IMPL(__imp__sub_82FF7238) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82ff7260
	if (ctx.cr6.eq) goto loc_82FF7260;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_82FF7260:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7268"))) PPC_WEAK_FUNC(sub_82FF7268);
PPC_FUNC_IMPL(__imp__sub_82FF7268) {
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
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff729c
	if (ctx.cr6.eq) goto loc_82FF729C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF7294;
	sub_82FF57A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FF729C:
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

__attribute__((alias("__imp__sub_82FF72B0"))) PPC_WEAK_FUNC(sub_82FF72B0);
PPC_FUNC_IMPL(__imp__sub_82FF72B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF72B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff5788
	ctx.lr = 0x82FF72D0;
	sub_82FF5788(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82ff72e0
	if (!ctx.cr0.eq) goto loc_82FF72E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff7334
	goto loc_82FF7334;
loc_82FF72E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF72F4;
	sub_82CA2C60(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff730c
	if (ctx.cr6.eq) goto loc_82FF730C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82ff57a0
	ctx.lr = 0x82FF730C;
	sub_82FF57A0(ctx, base);
loc_82FF730C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca3190
	ctx.lr = 0x82FF7328;
	sub_82CA3190(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF7334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF733C"))) PPC_WEAK_FUNC(sub_82FF733C);
PPC_FUNC_IMPL(__imp__sub_82FF733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7340"))) PPC_WEAK_FUNC(sub_82FF7340);
PPC_FUNC_IMPL(__imp__sub_82FF7340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82ff7358
	if (ctx.cr6.gt) goto loc_82FF7358;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF7358:
	// b 0x82ff72b0
	sub_82FF72B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF735C"))) PPC_WEAK_FUNC(sub_82FF735C);
PPC_FUNC_IMPL(__imp__sub_82FF735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7360"))) PPC_WEAK_FUNC(sub_82FF7360);
PPC_FUNC_IMPL(__imp__sub_82FF7360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF7368;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ff73cc
	if (ctx.cr6.lt) goto loc_82FF73CC;
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// bge cr6,0x82ff739c
	if (!ctx.cr6.lt) goto loc_82FF739C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82FF739C:
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82ff73ac
	if (ctx.cr6.lt) goto loc_82FF73AC;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82ff73b0
	if (!ctx.cr6.gt) goto loc_82FF73B0;
loc_82FF73AC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82FF73B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff72b0
	ctx.lr = 0x82FF73B8;
	sub_82FF72B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff73cc
	if (!ctx.cr0.eq) goto loc_82FF73CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82ff73f0
	goto loc_82FF73F0;
loc_82FF73CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82FF73F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF73F8"))) PPC_WEAK_FUNC(sub_82FF73F8);
PPC_FUNC_IMPL(__imp__sub_82FF73F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ff7420
	if (!ctx.cr6.lt) goto loc_82FF7420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x82ff7420
	if (!ctx.cr6.gt) goto loc_82FF7420;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82ff7424
	goto loc_82FF7424;
loc_82FF7420:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF7424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff743c
	if (ctx.cr6.eq) goto loc_82FF743C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82FF743C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7444"))) PPC_WEAK_FUNC(sub_82FF7444);
PPC_FUNC_IMPL(__imp__sub_82FF7444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7448"))) PPC_WEAK_FUNC(sub_82FF7448);
PPC_FUNC_IMPL(__imp__sub_82FF7448) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7450"))) PPC_WEAK_FUNC(sub_82FF7450);
PPC_FUNC_IMPL(__imp__sub_82FF7450) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82ff5768
	ctx.lr = 0x82FF7488;
	sub_82FF5768(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FF74B4"))) PPC_WEAK_FUNC(sub_82FF74B4);
PPC_FUNC_IMPL(__imp__sub_82FF74B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF74B8"))) PPC_WEAK_FUNC(sub_82FF74B8);
PPC_FUNC_IMPL(__imp__sub_82FF74B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x829ce870
	sub_829CE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF74C0"))) PPC_WEAK_FUNC(sub_82FF74C0);
PPC_FUNC_IMPL(__imp__sub_82FF74C0) {
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
	// add r11,r30,r5
	ctx.r11.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// oris r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 1073741824;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq 0x82ff750c
	if (ctx.cr0.eq) goto loc_82FF750C;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ffc368
	ctx.lr = 0x82FF7500;
	sub_82FFC368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff7548
	if (ctx.cr0.lt) goto loc_82FF7548;
	// b 0x82ff7538
	goto loc_82FF7538;
loc_82FF750C:
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_82FF751C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ff751c
	if (!ctx.cr0.eq) goto loc_82FF751C;
loc_82FF7538:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ffc288
	ctx.lr = 0x82FF7548;
	sub_82FFC288(ctx, base);
loc_82FF7548:
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

__attribute__((alias("__imp__sub_82FF7560"))) PPC_WEAK_FUNC(sub_82FF7560);
PPC_FUNC_IMPL(__imp__sub_82FF7560) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq 0x82ff75ac
	if (ctx.cr0.eq) goto loc_82FF75AC;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ffc368
	ctx.lr = 0x82FF7590;
	sub_82FFC368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff75ac
	if (ctx.cr0.lt) goto loc_82FF75AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82fedd88
	ctx.lr = 0x82FF75AC;
	sub_82FEDD88(ctx, base);
loc_82FF75AC:
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

__attribute__((alias("__imp__sub_82FF75C0"))) PPC_WEAK_FUNC(sub_82FF75C0);
PPC_FUNC_IMPL(__imp__sub_82FF75C0) {
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
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x832b227c
	ctx.lr = 0x82FF75E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne 0x82ff7604
	if (!ctx.cr0.eq) goto loc_82FF7604;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x832b226c
	ctx.lr = 0x82FF7600;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff7668
	goto loc_82FF7668;
loc_82FF7604:
	// bl 0x82266070
	ctx.lr = 0x82FF7608;
	sub_82266070(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82ff7650
	if (ctx.cr6.lt) goto loc_82FF7650;
	// subf r5,r5,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ffc288
	ctx.lr = 0x82FF7634;
	sub_82FFC288(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x832b226c
	ctx.lr = 0x82FF764C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82ff7670
	goto loc_82FF7670;
loc_82FF7650:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82ff20d0
	ctx.lr = 0x82FF7668;
	sub_82FF20D0(ctx, base);
loc_82FF7668:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82fedd88
	ctx.lr = 0x82FF7670;
	sub_82FEDD88(ctx, base);
loc_82FF7670:
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

__attribute__((alias("__imp__sub_82FF7684"))) PPC_WEAK_FUNC(sub_82FF7684);
PPC_FUNC_IMPL(__imp__sub_82FF7684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7688"))) PPC_WEAK_FUNC(sub_82FF7688);
PPC_FUNC_IMPL(__imp__sub_82FF7688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF7690;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// li r29,9
	ctx.r29.s64 = 9;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r11,36(r31)
	PPC_STORE_U64(ctx.r31.u32 + 36, ctx.r11.u64);
	// bl 0x82ca2c60
	ctx.lr = 0x82FF76E4;
	sub_82CA2C60(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// beq cr6,0x82ff7700
	if (ctx.cr6.eq) goto loc_82FF7700;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82FF7700:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF7714"))) PPC_WEAK_FUNC(sub_82FF7714);
PPC_FUNC_IMPL(__imp__sub_82FF7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7718"))) PPC_WEAK_FUNC(sub_82FF7718);
PPC_FUNC_IMPL(__imp__sub_82FF7718) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// beq 0x82ff774c
	if (ctx.cr0.eq) goto loc_82FF774C;
	// blt cr6,0x82ff7768
	if (ctx.cr6.lt) goto loc_82FF7768;
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82FF7744:
	// rlwinm r11,r10,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// b 0x82ff77a0
	goto loc_82FF77A0;
loc_82FF774C:
	// bgt cr6,0x82ff7768
	if (ctx.cr6.gt) goto loc_82FF7768;
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// b 0x82ff7744
	goto loc_82FF7744;
loc_82FF7768:
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff77a8
	if (!ctx.cr0.eq) goto loc_82FF77A8;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff7794
	if (ctx.cr0.eq) goto loc_82FF7794;
loc_82FF7778:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82FF7794:
	// oris r11,r10,28672
	ctx.r11.u64 = ctx.r10.u64 | 1879048192;
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
loc_82FF77A0:
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
loc_82FF77A8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ff7778
	goto loc_82FF7778;
}

__attribute__((alias("__imp__sub_82FF77B8"))) PPC_WEAK_FUNC(sub_82FF77B8);
PPC_FUNC_IMPL(__imp__sub_82FF77B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF77C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF77D8;
	sub_82CA2C60(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff77ec
	if (!ctx.cr6.eq) goto loc_82FF77EC;
	// li r11,5000
	ctx.r11.s64 = 5000;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82FF77EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// bl 0x82266070
	ctx.lr = 0x82FF77FC;
	sub_82266070(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// beq cr6,0x82ff7818
	if (ctx.cr6.eq) goto loc_82FF7818;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82FF7818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF7820"))) PPC_WEAK_FUNC(sub_82FF7820);
PPC_FUNC_IMPL(__imp__sub_82FF7820) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x82ff7718
	ctx.lr = 0x82FF783C;
	sub_82FF7718(ctx, base);
	// std r7,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r7.u64);
	// stw r6,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7854"))) PPC_WEAK_FUNC(sub_82FF7854);
PPC_FUNC_IMPL(__imp__sub_82FF7854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7858"))) PPC_WEAK_FUNC(sub_82FF7858);
PPC_FUNC_IMPL(__imp__sub_82FF7858) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// bl 0x82ff7718
	ctx.lr = 0x82FF7878;
	sub_82FF7718(ctx, base);
	// std r4,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r4.u64);
	// stw r7,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7890"))) PPC_WEAK_FUNC(sub_82FF7890);
PPC_FUNC_IMPL(__imp__sub_82FF7890) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ld r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// subf r6,r4,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82ff7718
	ctx.lr = 0x82FF78B4;
	sub_82FF7718(ctx, base);
	// std r6,40(r8)
	PPC_STORE_U64(ctx.r8.u32 + 40, ctx.r6.u64);
	// stw r7,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF78CC"))) PPC_WEAK_FUNC(sub_82FF78CC);
PPC_FUNC_IMPL(__imp__sub_82FF78CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF78D0"))) PPC_WEAK_FUNC(sub_82FF78D0);
PPC_FUNC_IMPL(__imp__sub_82FF78D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF78D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// subf r29,r10,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r10.s64;
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82ff794c
	if (!ctx.cr6.gt) goto loc_82FF794C;
	// bl 0x82fffb40
	ctx.lr = 0x82FF7908;
	sub_82FFFB40(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fdiv f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 / ctx.f0.f64;
	// lfd f0,-19920(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -19920);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82ff7718
	ctx.lr = 0x82FF7940;
	sub_82FF7718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82FF794C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF7954"))) PPC_WEAK_FUNC(sub_82FF7954);
PPC_FUNC_IMPL(__imp__sub_82FF7954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7958"))) PPC_WEAK_FUNC(sub_82FF7958);
PPC_FUNC_IMPL(__imp__sub_82FF7958) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82FF7960:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r10,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bne cr6,0x82ff7960
	if (!ctx.cr6.eq) goto loc_82FF7960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF79B4"))) PPC_WEAK_FUNC(sub_82FF79B4);
PPC_FUNC_IMPL(__imp__sub_82FF79B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF79B8"))) PPC_WEAK_FUNC(sub_82FF79B8);
PPC_FUNC_IMPL(__imp__sub_82FF79B8) {
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
	// bl 0x82266070
	ctx.lr = 0x82FF79D8;
	sub_82266070(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82ff79f0
	if (!ctx.cr6.lt) goto loc_82FF79F0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82FF79F0:
	// bl 0x82266070
	ctx.lr = 0x82FF79F4;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF7A04;
	sub_82FF74C0(ctx, base);
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

__attribute__((alias("__imp__sub_82FF7A1C"))) PPC_WEAK_FUNC(sub_82FF7A1C);
PPC_FUNC_IMPL(__imp__sub_82FF7A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7A20"))) PPC_WEAK_FUNC(sub_82FF7A20);
PPC_FUNC_IMPL(__imp__sub_82FF7A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF7A28;
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7aa0
	if (!ctx.cr6.eq) goto loc_82FF7AA0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82ff7a5c
	if (!ctx.cr6.gt) goto loc_82FF7A5C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82ff7a60
	goto loc_82FF7A60;
loc_82FF7A5C:
	// li r4,16
	ctx.r4.s64 = 16;
loc_82FF7A60:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82ff7a78
	if (ctx.cr6.gt) goto loc_82FF7A78;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ff7a8c
	if (!ctx.cr6.lt) goto loc_82FF7A8C;
loc_82FF7A78:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82ff7a8c
	if (ctx.cr6.lt) goto loc_82FF7A8C;
loc_82FF7A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff7ad8
	goto loc_82FF7AD8;
loc_82FF7A8C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82feff50
	ctx.lr = 0x82FF7A98;
	sub_82FEFF50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ff7a84
	if (ctx.cr0.eq) goto loc_82FF7A84;
loc_82FF7AA0:
	// std r29,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ff7958
	ctx.lr = 0x82FF7AD4;
	sub_82FF7958(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF7AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF7AE0"))) PPC_WEAK_FUNC(sub_82FF7AE0);
PPC_FUNC_IMPL(__imp__sub_82FF7AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF7AE8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ff7b10
	if (ctx.cr6.eq) goto loc_82FF7B10;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// b 0x82ff7ba8
	goto loc_82FF7BA8;
loc_82FF7B10:
	// ld r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 224);
	// lwz r8,144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x82ff7b30
	if (!ctx.cr6.lt) goto loc_82FF7B30;
	// ld r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 288);
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82ff7b3c
	if (ctx.cr6.lt) goto loc_82FF7B3C;
loc_82FF7B30:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4101
	ctx.r3.u64 = ctx.r3.u64 | 4101;
	// b 0x82ff7ba8
	goto loc_82FF7BA8;
loc_82FF7B3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82ff7b58
	if (!ctx.cr6.eq) goto loc_82FF7B58;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82FF7B58:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,10
	ctx.r7.s64 = ctx.r11.s64 + 10;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// subfic r5,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r7.s64;
	// ld r11,552(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 552);
	// rldicr r5,r5,59,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 59) & 0xF800000000000000;
	// lwz r7,100(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// clrldi r4,r11,5
	ctx.r4.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// std r11,552(r29)
	PPC_STORE_U64(ctx.r29.u32 + 552, ctx.r11.u64);
	// bl 0x82ffb988
	ctx.lr = 0x82FF7B9C;
	sub_82FFB988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82ff7ba8
	if (ctx.cr0.lt) goto loc_82FF7BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FF7BA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF7BB0"))) PPC_WEAK_FUNC(sub_82FF7BB0);
PPC_FUNC_IMPL(__imp__sub_82FF7BB0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// beq cr6,0x82ff7c84
	if (ctx.cr6.eq) goto loc_82FF7C84;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ff7bfc
	if (ctx.cr6.eq) goto loc_82FF7BFC;
	// bl 0x82ffb0b8
	ctx.lr = 0x82FF7BF4;
	sub_82FFB0B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82FF7BFC:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7c3c
	if (!ctx.cr6.eq) goto loc_82FF7C3C;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff7c3c
	if (!ctx.cr0.eq) goto loc_82FF7C3C;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff7c3c
	if (!ctx.cr0.eq) goto loc_82FF7C3C;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff7c84
	if (ctx.cr0.eq) goto loc_82FF7C84;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ff7c84
	if (!ctx.cr6.eq) goto loc_82FF7C84;
loc_82FF7C3C:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82FF7C84:
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

__attribute__((alias("__imp__sub_82FF7C9C"))) PPC_WEAK_FUNC(sub_82FF7C9C);
PPC_FUNC_IMPL(__imp__sub_82FF7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7CA0"))) PPC_WEAK_FUNC(sub_82FF7CA0);
PPC_FUNC_IMPL(__imp__sub_82FF7CA0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff7cdc
	if (!ctx.cr6.eq) goto loc_82FF7CDC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FF7CDC:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff7d38
	if (ctx.cr6.eq) goto loc_82FF7D38;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x82ff7d38
	if (ctx.cr6.gt) goto loc_82FF7D38;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfc r11,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff7d38
	if (ctx.cr0.eq) goto loc_82FF7D38;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4118
	ctx.r4.u64 = ctx.r4.u64 | 4118;
	// bl 0x82ffaee0
	ctx.lr = 0x82FF7D24;
	sub_82FFAEE0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// b 0x82ff7d40
	goto loc_82FF7D40;
loc_82FF7D38:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82ffb2d8
	ctx.lr = 0x82FF7D40;
	sub_82FFB2D8(ctx, base);
loc_82FF7D40:
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

__attribute__((alias("__imp__sub_82FF7D58"))) PPC_WEAK_FUNC(sub_82FF7D58);
PPC_FUNC_IMPL(__imp__sub_82FF7D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff7d8c
	if (ctx.cr6.eq) goto loc_82FF7D8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF7D8C:
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// b 0x82ffb2c8
	sub_82FFB2C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7DB0"))) PPC_WEAK_FUNC(sub_82FF7DB0);
PPC_FUNC_IMPL(__imp__sub_82FF7DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff7de0
	if (ctx.cr6.eq) goto loc_82FF7DE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF7DE0:
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7E00"))) PPC_WEAK_FUNC(sub_82FF7E00);
PPC_FUNC_IMPL(__imp__sub_82FF7E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,516(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7E58"))) PPC_WEAK_FUNC(sub_82FF7E58);
PPC_FUNC_IMPL(__imp__sub_82FF7E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff7eac
	if (ctx.cr0.eq) goto loc_82FF7EAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ff7eb4
	goto loc_82FF7EB4;
loc_82FF7EAC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82FF7EB4:
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7EBC"))) PPC_WEAK_FUNC(sub_82FF7EBC);
PPC_FUNC_IMPL(__imp__sub_82FF7EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7EC0"))) PPC_WEAK_FUNC(sub_82FF7EC0);
PPC_FUNC_IMPL(__imp__sub_82FF7EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// oris r11,r11,10240
	ctx.r11.u64 = ctx.r11.u64 | 671088640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7EE0"))) PPC_WEAK_FUNC(sub_82FF7EE0);
PPC_FUNC_IMPL(__imp__sub_82FF7EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7EE4"))) PPC_WEAK_FUNC(sub_82FF7EE4);
PPC_FUNC_IMPL(__imp__sub_82FF7EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7EE8"))) PPC_WEAK_FUNC(sub_82FF7EE8);
PPC_FUNC_IMPL(__imp__sub_82FF7EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7F08"))) PPC_WEAK_FUNC(sub_82FF7F08);
PPC_FUNC_IMPL(__imp__sub_82FF7F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7F0C"))) PPC_WEAK_FUNC(sub_82FF7F0C);
PPC_FUNC_IMPL(__imp__sub_82FF7F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7F10"))) PPC_WEAK_FUNC(sub_82FF7F10);
PPC_FUNC_IMPL(__imp__sub_82FF7F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff7f30
	if (!ctx.cr6.eq) goto loc_82FF7F30;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF7F30:
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// b 0x82ffb8a0
	sub_82FFB8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7F38"))) PPC_WEAK_FUNC(sub_82FF7F38);
PPC_FUNC_IMPL(__imp__sub_82FF7F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7F3C"))) PPC_WEAK_FUNC(sub_82FF7F3C);
PPC_FUNC_IMPL(__imp__sub_82FF7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF7F40"))) PPC_WEAK_FUNC(sub_82FF7F40);
PPC_FUNC_IMPL(__imp__sub_82FF7F40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x82feffc0
	sub_82FEFFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7F8C"))) PPC_WEAK_FUNC(sub_82FF7F8C);
PPC_FUNC_IMPL(__imp__sub_82FF7F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7F90"))) PPC_WEAK_FUNC(sub_82FF7F90);
PPC_FUNC_IMPL(__imp__sub_82FF7F90) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// addi r10,r10,-19840
	ctx.r10.s64 = ctx.r10.s64 + -19840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff74b8
	ctx.lr = 0x82FF7FCC;
	sub_82FF74B8(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x829ce870
	ctx.lr = 0x82FF7FD4;
	sub_829CE870(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// addi r10,r10,-20140
	ctx.r10.s64 = ctx.r10.s64 + -20140;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FF8004"))) PPC_WEAK_FUNC(sub_82FF8004);
PPC_FUNC_IMPL(__imp__sub_82FF8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8008"))) PPC_WEAK_FUNC(sub_82FF8008);
PPC_FUNC_IMPL(__imp__sub_82FF8008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF8010;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff80ac
	if (!ctx.cr0.eq) goto loc_82FF80AC;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// stw r10,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r10.u32);
	// bl 0x82ff7560
	ctx.lr = 0x82FF8040;
	sub_82FF7560(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// b 0x82ff806c
	goto loc_82FF806C;
loc_82FF804C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff805c
	if (!ctx.cr6.eq) goto loc_82FF805C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF805C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82ffaee0
	ctx.lr = 0x82FF8068;
	sub_82FFAEE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FF806C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff804c
	if (!ctx.cr6.eq) goto loc_82FF804C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82ff808c
	if (ctx.cr6.eq) goto loc_82FF808C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82ff7f40
	ctx.lr = 0x82FF808C;
	sub_82FF7F40(ctx, base);
loc_82FF808C:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bne cr6,0x82ff80ac
	if (!ctx.cr6.eq) goto loc_82FF80AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ff7e00
	ctx.lr = 0x82FF80AC;
	sub_82FF7E00(ctx, base);
loc_82FF80AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF80B4"))) PPC_WEAK_FUNC(sub_82FF80B4);
PPC_FUNC_IMPL(__imp__sub_82FF80B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF80B8"))) PPC_WEAK_FUNC(sub_82FF80B8);
PPC_FUNC_IMPL(__imp__sub_82FF80B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FF80C0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x82ff8114
	goto loc_82FF8114;
loc_82FF80E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff80f8
	if (!ctx.cr6.eq) goto loc_82FF80F8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FF80F8:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// bl 0x82ffbe60
	ctx.lr = 0x82FF8108;
	sub_82FFBE60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff8220
	if (!ctx.cr0.eq) goto loc_82FF8220;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82FF8114:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82ff80e8
	if (!ctx.cr6.eq) goto loc_82FF80E8;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff8184
	if (ctx.cr0.eq) goto loc_82FF8184;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bne cr6,0x82ff8148
	if (!ctx.cr6.eq) goto loc_82FF8148;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_82FF8148:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ff7688
	ctx.lr = 0x82FF817C;
	sub_82FF7688(ctx, base);
loc_82FF817C:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// b 0x82ff8220
	goto loc_82FF8220;
loc_82FF8184:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff81ec
	if (ctx.cr0.eq) goto loc_82FF81EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bne cr6,0x82ff81b0
	if (!ctx.cr6.eq) goto loc_82FF81B0;
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_82FF81B0:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 1;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// xori r4,r3,1
	ctx.r4.u64 = ctx.r3.u64 ^ 1;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ff7688
	ctx.lr = 0x82FF81E8;
	sub_82FF7688(ctx, base);
	// b 0x82ff817c
	goto loc_82FF817C;
loc_82FF81EC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff8224
	if (ctx.cr0.eq) goto loc_82FF8224;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ff8224
	if (!ctx.cr6.eq) goto loc_82FF8224;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff7e58
	ctx.lr = 0x82FF8218;
	sub_82FF7E58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_82FF8220:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82FF8224:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FF8230"))) PPC_WEAK_FUNC(sub_82FF8230);
PPC_FUNC_IMPL(__imp__sub_82FF8230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FF8238;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// beq cr6,0x82ff8270
	if (ctx.cr6.eq) goto loc_82FF8270;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
loc_82FF8270:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x82ff7858
	ctx.lr = 0x82FF8280;
	sub_82FF7858(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x82ff7858
	ctx.lr = 0x82FF8290;
	sub_82FF7858(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bne 0x82ff82c4
	if (!ctx.cr0.eq) goto loc_82FF82C4;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff82cc
	if (ctx.cr0.eq) goto loc_82FF82CC;
loc_82FF82C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff7e00
	ctx.lr = 0x82FF82CC;
	sub_82FF7E00(ctx, base);
loc_82FF82CC:
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff833c
	if (ctx.cr0.eq) goto loc_82FF833C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82ff8320
	if (!ctx.cr6.eq) goto loc_82FF8320;
	// lwz r25,140(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82266070
	ctx.lr = 0x82FF8310;
	sub_82266070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ff74c0
	ctx.lr = 0x82FF8320;
	sub_82FF74C0(ctx, base);
loc_82FF8320:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82FF833C:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82ff8350
	if (ctx.cr6.eq) goto loc_82FF8350;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82ff836c
	if (!ctx.cr0.eq) goto loc_82FF836C;
loc_82FF8350:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// bl 0x82ff7a20
	ctx.lr = 0x82FF8368;
	sub_82FF7A20(ctx, base);
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF836C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82ff83f0
	if (ctx.cr6.eq) goto loc_82FF83F0;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// rldicl r28,r11,5,59
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 5) & 0x1F;
	// b 0x82ff8394
	goto loc_82FF8394;
loc_82FF8380:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82ff83b0
	if (ctx.cr6.eq) goto loc_82FF83B0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82ff83b0
	if (ctx.cr0.eq) goto loc_82FF83B0;
loc_82FF8394:
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ffaea8
	ctx.lr = 0x82FF83A4;
	sub_82FFAEA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ff8380
	if (!ctx.cr0.eq) goto loc_82FF8380;
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF83B0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// ld r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// ld r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// addi r3,r9,536
	ctx.r3.s64 = ctx.r9.s64 + 536;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82ff83d4
	if (ctx.cr6.lt) goto loc_82FF83D4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF83D4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82ff83ec
	if (ctx.cr6.eq) goto loc_82FF83EC;
	// bl 0x82feffc0
	ctx.lr = 0x82FF83E8;
	sub_82FEFFC0(ctx, base);
	// b 0x82ff83f0
	goto loc_82FF83F0;
loc_82FF83EC:
	// bl 0x82ff7958
	ctx.lr = 0x82FF83F0;
	sub_82FF7958(ctx, base);
loc_82FF83F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FF83F8"))) PPC_WEAK_FUNC(sub_82FF83F8);
PPC_FUNC_IMPL(__imp__sub_82FF83F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FF8400;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// beq cr6,0x82ff8434
	if (ctx.cr6.eq) goto loc_82FF8434;
	// lwz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
loc_82FF8434:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r28,r29,48
	ctx.r28.s64 = ctx.r29.s64 + 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82ff844c
	if (ctx.cr6.eq) goto loc_82FF844C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FF844C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ff853c
	if (ctx.cr6.eq) goto loc_82FF853C;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r10,r29,72
	ctx.r10.s64 = ctx.r29.s64 + 72;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff84a0
	if (!ctx.cr6.eq) goto loc_82FF84A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF84A0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff851c
	if (!ctx.cr6.eq) goto loc_82FF851C;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff851c
	if (!ctx.cr0.eq) goto loc_82FF851C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff84c8
	if (ctx.cr6.eq) goto loc_82FF84C8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FF84C8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff84d8
	if (!ctx.cr6.eq) goto loc_82FF84D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF84D8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff84ec
	if (!ctx.cr6.eq) goto loc_82FF84EC;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x82ff7560
	ctx.lr = 0x82FF84E8;
	sub_82FF7560(ctx, base);
	// b 0x82ff851c
	goto loc_82FF851C;
loc_82FF84EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ff84fc
	if (!ctx.cr6.eq) goto loc_82FF84FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF84FC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82ff851c
	if (ctx.cr6.eq) goto loc_82FF851C;
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ff79b8
	ctx.lr = 0x82FF851C;
	sub_82FF79B8(ctx, base);
loc_82FF851C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
loc_82FF853C:
	// bl 0x82266070
	ctx.lr = 0x82FF8540;
	sub_82266070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,184
	ctx.r3.s64 = ctx.r29.s64 + 184;
	// bl 0x82ff7890
	ctx.lr = 0x82FF8554;
	sub_82FF7890(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,248
	ctx.r3.s64 = ctx.r29.s64 + 248;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82ff7890
	ctx.lr = 0x82FF8564;
	sub_82FF7890(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82ff85e4
	if (ctx.cr6.eq) goto loc_82FF85E4;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff85e4
	if (!ctx.cr0.eq) goto loc_82FF85E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82ff8594
	if (!ctx.cr6.eq) goto loc_82FF8594;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82ff7f40
	ctx.lr = 0x82FF8590;
	sub_82FF7F40(ctx, base);
	// b 0x82ff85e4
	goto loc_82FF85E4;
loc_82FF8594:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82ff85a4
	if (!ctx.cr6.eq) goto loc_82FF85A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF85A4:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// ld r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20);
	// ld r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// addi r3,r9,536
	ctx.r3.s64 = ctx.r9.s64 + 536;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82ff85c8
	if (ctx.cr6.lt) goto loc_82FF85C8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF85C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82ff85e0
	if (ctx.cr6.eq) goto loc_82FF85E0;
	// bl 0x82feffc0
	ctx.lr = 0x82FF85DC;
	sub_82FEFFC0(ctx, base);
	// b 0x82ff85e4
	goto loc_82FF85E4;
loc_82FF85E0:
	// bl 0x82ff7958
	ctx.lr = 0x82FF85E4;
	sub_82FF7958(ctx, base);
loc_82FF85E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FF85EC"))) PPC_WEAK_FUNC(sub_82FF85EC);
PPC_FUNC_IMPL(__imp__sub_82FF85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF85F0"))) PPC_WEAK_FUNC(sub_82FF85F0);
PPC_FUNC_IMPL(__imp__sub_82FF85F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff8620
	if (ctx.cr6.eq) goto loc_82FF8620;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF8620:
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82ff7e00
	sub_82FF7E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF8640"))) PPC_WEAK_FUNC(sub_82FF8640);
PPC_FUNC_IMPL(__imp__sub_82FF8640) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r8,72
	ctx.r9.s64 = ctx.r8.s64 + 72;
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82FF8654:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff8664
	if (!ctx.cr6.eq) goto loc_82FF8664;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FF8664:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// lwz r10,140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82ff86f0
	if (!ctx.cr6.lt) goto loc_82FF86F0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82ff86b4
	if (ctx.cr6.eq) goto loc_82FF86B4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
loc_82FF86B4:
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff86e0
	if (!ctx.cr0.eq) goto loc_82FF86E0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,568(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 568);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,568(r7)
	PPC_STORE_U32(ctx.r7.u32 + 568, ctx.r10.u32);
	// lhz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// sth r10,72(r11)
	PPC_STORE_U16(ctx.r11.u32 + 72, ctx.r10.u16);
loc_82FF86E0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82ff8654
	if (!ctx.cr6.eq) goto loc_82FF8654;
loc_82FF86F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r8,80
	ctx.r3.s64 = ctx.r8.s64 + 80;
	// lwz r10,140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ff79b8
	sub_82FF79B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF870C"))) PPC_WEAK_FUNC(sub_82FF870C);
PPC_FUNC_IMPL(__imp__sub_82FF870C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8710"))) PPC_WEAK_FUNC(sub_82FF8710);
PPC_FUNC_IMPL(__imp__sub_82FF8710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FF8718;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r11,-19856
	ctx.r11.s64 = ctx.r11.s64 + -19856;
	// addi r10,r10,-19824
	ctx.r10.s64 = ctx.r10.s64 + -19824;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r9,r9,-19840
	ctx.r9.s64 = ctx.r9.s64 + -19840;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// bl 0x82ff1930
	ctx.lr = 0x82FF8770;
	sub_82FF1930(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// stw r24,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r24.u32);
	// addi r9,r31,56
	ctx.r9.s64 = ctx.r31.s64 + 56;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82ff7450
	ctx.lr = 0x82FF87D4;
	sub_82FF7450(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-19912
	ctx.r30.s64 = ctx.r10.s64 + -19912;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,68(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// lwz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// sth r11,170(r31)
	PPC_STORE_U16(ctx.r31.u32 + 170, ctx.r11.u16);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// bl 0x82ff77b8
	ctx.lr = 0x82FF8824;
	sub_82FF77B8(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82ff77b8
	ctx.lr = 0x82FF8838;
	sub_82FF77B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FF8844"))) PPC_WEAK_FUNC(sub_82FF8844);
PPC_FUNC_IMPL(__imp__sub_82FF8844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8848"))) PPC_WEAK_FUNC(sub_82FF8848);
PPC_FUNC_IMPL(__imp__sub_82FF8848) {
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
	// bl 0x82ff7f90
	ctx.lr = 0x82FF8868;
	sub_82FF7F90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff8878
	if (ctx.cr0.eq) goto loc_82FF8878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FF8878;
	sub_824FE010(ctx, base);
loc_82FF8878:
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

__attribute__((alias("__imp__sub_82FF8894"))) PPC_WEAK_FUNC(sub_82FF8894);
PPC_FUNC_IMPL(__imp__sub_82FF8894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8898"))) PPC_WEAK_FUNC(sub_82FF8898);
PPC_FUNC_IMPL(__imp__sub_82FF8898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FF88A0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,312
	ctx.r4.s64 = 312;
	// li r3,9
	ctx.r3.s64 = 9;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x82ff5788
	ctx.lr = 0x82FF88D0;
	sub_82FF5788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ff88e4
	if (!ctx.cr0.eq) goto loc_82FF88E4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82ff8964
	goto loc_82FF8964;
loc_82FF88E4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ff8710
	ctx.lr = 0x82FF88FC;
	sub_82FF8710(ctx, base);
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bne cr6,0x82ff8958
	if (!ctx.cr6.eq) goto loc_82FF8958;
	// ld r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 552);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// clrldi r4,r11,5
	ctx.r4.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFF;
	// std r6,552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 552, ctx.r6.u64);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82ffbb48
	ctx.lr = 0x82FF8944;
	sub_82FFBB48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ff8958
	if (!ctx.cr0.lt) goto loc_82FF8958;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fedd88
	ctx.lr = 0x82FF8954;
	sub_82FEDD88(ctx, base);
	// b 0x82ff8964
	goto loc_82FF8964;
loc_82FF8958:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82FF8964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FF8970"))) PPC_WEAK_FUNC(sub_82FF8970);
PPC_FUNC_IMPL(__imp__sub_82FF8970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF8978;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// b 0x82ff89c4
	goto loc_82FF89C4;
loc_82FF8990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff89a0
	if (!ctx.cr6.eq) goto loc_82FF89A0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82FF89A0:
	// lhz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r10,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// bl 0x82ff83f8
	ctx.lr = 0x82FF89B8;
	sub_82FF83F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ffb2c8
	ctx.lr = 0x82FF89C0;
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FF89C4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff8990
	if (!ctx.cr6.eq) goto loc_82FF8990;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r31,r29,56
	ctx.r31.s64 = ctx.r29.s64 + 56;
	// b 0x82ff8a18
	goto loc_82FF8A18;
loc_82FF89D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff89ec
	if (!ctx.cr6.eq) goto loc_82FF89EC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ff8a0c
	goto loc_82FF8A0C;
loc_82FF89EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF8A0C:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82ffb2c8
	ctx.lr = 0x82FF8A14;
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FF8A18:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff89d8
	if (!ctx.cr6.eq) goto loc_82FF89D8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// b 0x82ff8a6c
	goto loc_82FF8A6C;
loc_82FF8A2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff8a40
	if (!ctx.cr6.eq) goto loc_82FF8A40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82ff8a60
	goto loc_82FF8A60;
loc_82FF8A40:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_82FF8A60:
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82ffb2c8
	ctx.lr = 0x82FF8A68;
	sub_82FFB2C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82FF8A6C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82ff8a2c
	if (!ctx.cr6.eq) goto loc_82FF8A2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r28.u32);
	// stw r28,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r28.u32);
	// stw r11,164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF8A8C"))) PPC_WEAK_FUNC(sub_82FF8A8C);
PPC_FUNC_IMPL(__imp__sub_82FF8A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8A90"))) PPC_WEAK_FUNC(sub_82FF8A90);
PPC_FUNC_IMPL(__imp__sub_82FF8A90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ff8ab4
	if (ctx.cr6.eq) goto loc_82FF8AB4;
loc_82FF8A9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff8ab4
	if (!ctx.cr0.eq) goto loc_82FF8AB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82ff8a9c
	if (!ctx.cr6.eq) goto loc_82FF8A9C;
loc_82FF8AB4:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82ff8acc
	if (!ctx.cr6.lt) goto loc_82FF8ACC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// ble cr6,0x82ff8ad4
	if (!ctx.cr6.gt) goto loc_82FF8AD4;
loc_82FF8ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF8AD4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8AE0"))) PPC_WEAK_FUNC(sub_82FF8AE0);
PPC_FUNC_IMPL(__imp__sub_82FF8AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF8AE8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x82ff8c30
	if (!ctx.cr6.lt) goto loc_82FF8C30;
	// cmpwi cr6,r11,-256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -256, ctx.xer);
	// blt cr6,0x82ff8c30
	if (ctx.cr6.lt) goto loc_82FF8C30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82ff8b20
	if (!ctx.cr6.lt) goto loc_82FF8B20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8B20:
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r28,1
	ctx.r28.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// beq cr6,0x82ff8b8c
	if (ctx.cr6.eq) goto loc_82FF8B8C;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff8b60
	if (ctx.cr0.eq) goto loc_82FF8B60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8B60:
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82ff8c28
	if (ctx.cr0.lt) goto loc_82FF8C28;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// b 0x82ff8c28
	goto loc_82FF8C28;
loc_82FF8B8C:
	// addi r30,r31,6
	ctx.r30.s64 = ctx.r31.s64 + 6;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff8bb8
	if (!ctx.cr6.eq) goto loc_82FF8BB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
loc_82FF8BB8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne 0x82ff8bfc
	if (!ctx.cr0.eq) goto loc_82FF8BFC;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FF8BE4;
	sub_82CA2C60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82FF8BF4;
	sub_82CA3190(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_82FF8BFC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ff8bb8
	if (!ctx.cr0.eq) goto loc_82FF8BB8;
loc_82FF8C28:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8C30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF8C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF8C3C"))) PPC_WEAK_FUNC(sub_82FF8C3C);
PPC_FUNC_IMPL(__imp__sub_82FF8C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8C40"))) PPC_WEAK_FUNC(sub_82FF8C40);
PPC_FUNC_IMPL(__imp__sub_82FF8C40) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82FF8C68:
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r7,r31,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r31,r31,29
	ctx.r31.u64 = ctx.r31.u32 & 0x7;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// slw r31,r6,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r31.u8 & 0x3F));
	// lbz r7,6(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// and. r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82ff8ca4
	if (ctx.cr0.eq) goto loc_82FF8CA4;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// slw r7,r6,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
loc_82FF8CA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x82ff8cc4
	if (ctx.cr6.eq) goto loc_82FF8CC4;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82ff8cec
	if (!ctx.cr6.eq) goto loc_82FF8CEC;
loc_82FF8CC4:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82ff8cf4
	if (ctx.cr6.eq) goto loc_82FF8CF4;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ff8cf4
	if (ctx.cr6.eq) goto loc_82FF8CF4;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82FF8CEC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82ff8c68
	goto loc_82FF8C68;
loc_82FF8CF4:
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// rlwimi r8,r6,7,0,24
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xFFFFFF80) | (ctx.r8.u64 & 0xFFFFFFFF0000007F);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8D0C"))) PPC_WEAK_FUNC(sub_82FF8D0C);
PPC_FUNC_IMPL(__imp__sub_82FF8D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8D10"))) PPC_WEAK_FUNC(sub_82FF8D10);
PPC_FUNC_IMPL(__imp__sub_82FF8D10) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mulli r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 * 7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r7,64
	ctx.r7.s64 = 64;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// lbz r11,-1(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82FF8D48:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,31,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x82ff8d48
	if (ctx.cr0.eq) goto loc_82FF8D48;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8D6C"))) PPC_WEAK_FUNC(sub_82FF8D6C);
PPC_FUNC_IMPL(__imp__sub_82FF8D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8D70"))) PPC_WEAK_FUNC(sub_82FF8D70);
PPC_FUNC_IMPL(__imp__sub_82FF8D70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// b 0x82ca3190
	sub_82CA3190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF8D90"))) PPC_WEAK_FUNC(sub_82FF8D90);
PPC_FUNC_IMPL(__imp__sub_82FF8D90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82ff8db4
	if (ctx.cr6.eq) goto loc_82FF8DB4;
loc_82FF8D9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff8db4
	if (!ctx.cr0.eq) goto loc_82FF8DB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82ff8d9c
	if (!ctx.cr6.eq) goto loc_82FF8D9C;
loc_82FF8DB4:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82ff8de4
	if (!ctx.cr6.lt) goto loc_82FF8DE4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ff8de4
	if (ctx.cr0.eq) goto loc_82FF8DE4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bgt cr6,0x82ff8de4
	if (ctx.cr6.gt) goto loc_82FF8DE4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FF8DE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8DEC"))) PPC_WEAK_FUNC(sub_82FF8DEC);
PPC_FUNC_IMPL(__imp__sub_82FF8DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8DF0"))) PPC_WEAK_FUNC(sub_82FF8DF0);
PPC_FUNC_IMPL(__imp__sub_82FF8DF0) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r6,7
	ctx.r10.s64 = ctx.r6.s64 * 7;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82FF8E24:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff8e24
	if (ctx.cr0.eq) goto loc_82FF8E24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8E54"))) PPC_WEAK_FUNC(sub_82FF8E54);
PPC_FUNC_IMPL(__imp__sub_82FF8E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8E58"))) PPC_WEAK_FUNC(sub_82FF8E58);
PPC_FUNC_IMPL(__imp__sub_82FF8E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FF8E60;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r31,r29,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ff8ea0
	if (ctx.cr0.eq) goto loc_82FF8EA0;
	// subfic r5,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r31.s64;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82FF8E84;
	sub_82CAA2E0(ctx, base);
	// subfic r10,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82ca3190
	ctx.lr = 0x82FF8EA0;
	sub_82CA3190(ctx, base);
loc_82FF8EA0:
	// clrlwi. r9,r29,29
	ctx.r9.u64 = ctx.r29.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ff8f20
	if (ctx.cr0.eq) goto loc_82FF8F20;
	// addi r6,r30,31
	ctx.r6.s64 = ctx.r30.s64 + 31;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82ff8ef0
	if (!ctx.cr6.lt) goto loc_82FF8EF0;
	// subfic r8,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r9.s64;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
loc_82FF8EC0:
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// slw r3,r3,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// srw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x82ff8ec0
	if (ctx.cr6.lt) goto loc_82FF8EC0;
loc_82FF8EF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// beq cr6,0x82ff8f20
	if (ctx.cr6.eq) goto loc_82FF8F20;
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r9.s64;
	// li r8,255
	ctx.r8.s64 = 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82FF8F20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FF8F28"))) PPC_WEAK_FUNC(sub_82FF8F28);
PPC_FUNC_IMPL(__imp__sub_82FF8F28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82ff8f74
	if (!ctx.cr0.gt) goto loc_82FF8F74;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// rlwinm. r8,r10,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82ff8f64
	if (!ctx.cr0.eq) goto loc_82FF8F64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r4,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r4.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// sth r9,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r9.u16);
	// b 0x82ff8f9c
	goto loc_82FF8F9C;
loc_82FF8F64:
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82ff8f7c
	if (!ctx.cr0.lt) goto loc_82FF8F7C;
loc_82FF8F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF8F7C:
	// lhz r8,34(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// extsh. r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// ble 0x82ff8fa0
	if (!ctx.cr0.gt) goto loc_82FF8FA0;
loc_82FF8F9C:
	// sth r4,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
loc_82FF8FA0:
	// rlwinm r7,r10,29,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// rlwinm r9,r10,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFF;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// slw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// and r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8FDC"))) PPC_WEAK_FUNC(sub_82FF8FDC);
PPC_FUNC_IMPL(__imp__sub_82FF8FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF8FE0"))) PPC_WEAK_FUNC(sub_82FF8FE0);
PPC_FUNC_IMPL(__imp__sub_82FF8FE0) {
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
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff9118
	if (ctx.cr0.eq) goto loc_82FF9118;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh. r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82ff9118
	if (ctx.cr0.lt) goto loc_82FF9118;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82ff9118
	if (ctx.cr0.gt) goto loc_82FF9118;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ff90a4
	if (!ctx.cr0.eq) goto loc_82FF90A4;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff9060
	if (!ctx.cr6.eq) goto loc_82FF9060;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	ctx.lr = 0x82FF9050;
	sub_82CA3190(ctx, base);
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// b 0x82ff9118
	goto loc_82FF9118;
loc_82FF9060:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FF9064:
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ff9064
	if (ctx.cr0.eq) goto loc_82FF9064;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ff8e58
	ctx.lr = 0x82FF90A0;
	sub_82FF8E58(ctx, base);
	// b 0x82ff9118
	goto loc_82FF9118;
loc_82FF90A4:
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// andc r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stbx r7,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u8);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ff9118
	if (!ctx.cr6.eq) goto loc_82FF9118;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_82FF90D4:
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r7,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r7.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// and. r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82ff9118
	if (ctx.cr0.eq) goto loc_82FF9118;
	// lhz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82ff90d4
	if (ctx.cr6.eq) goto loc_82FF90D4;
loc_82FF9118:
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

__attribute__((alias("__imp__sub_82FF912C"))) PPC_WEAK_FUNC(sub_82FF912C);
PPC_FUNC_IMPL(__imp__sub_82FF912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF9130"))) PPC_WEAK_FUNC(sub_82FF9130);
PPC_FUNC_IMPL(__imp__sub_82FF9130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FF9138;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82FF9170:
	// rlwinm r6,r11,29,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// slw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r6,r6,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// and. r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82ff9198
	if (ctx.cr0.eq) goto loc_82FF9198;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
loc_82FF9198:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ff91d0
	if (ctx.cr6.eq) goto loc_82FF91D0;
	// rlwinm. r8,r8,31,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82ff91b8
	if (!ctx.cr0.eq) goto loc_82FF91B8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF91B8:
	// addi r6,r29,37
	ctx.r6.s64 = ctx.r29.s64 + 37;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// blt cr6,0x82ff9170
	if (ctx.cr6.lt) goto loc_82FF9170;
	// b 0x82ff91dc
	goto loc_82FF91DC;
loc_82FF91D0:
	// rlwimi r10,r7,7,0,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 7) & 0xFFFFFF80) | (ctx.r10.u64 & 0xFFFFFFFF0000007F);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82FF91DC:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82FF91EC;
	sub_82CA3190(ctx, base);
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,38(r30)
	PPC_STORE_U16(ctx.r30.u32 + 38, ctx.r11.u16);
	// sth r10,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FF920C"))) PPC_WEAK_FUNC(sub_82FF920C);
PPC_FUNC_IMPL(__imp__sub_82FF920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FF9210"))) PPC_WEAK_FUNC(sub_82FF9210);
PPC_FUNC_IMPL(__imp__sub_82FF9210) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,38(r30)
	PPC_STORE_U16(ctx.r30.u32 + 38, ctx.r31.u16);
	// bl 0x82ca3190
	ctx.lr = 0x82FF923C;
	sub_82CA3190(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r31,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r31.u16);
	// sth r31,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r31.u16);
	// sth r11,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r11.u16);
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

