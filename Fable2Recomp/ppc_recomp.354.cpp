#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832B070C"))) PPC_WEAK_FUNC(sub_832B070C);
PPC_FUNC_IMPL(__imp__sub_832B070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0710"))) PPC_WEAK_FUNC(sub_832B0710);
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

__attribute__((alias("__imp__sub_832B071C"))) PPC_WEAK_FUNC(sub_832B071C);
PPC_FUNC_IMPL(__imp__sub_832B071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0720"))) PPC_WEAK_FUNC(sub_832B0720);
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

__attribute__((alias("__imp__sub_832B076C"))) PPC_WEAK_FUNC(sub_832B076C);
PPC_FUNC_IMPL(__imp__sub_832B076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0770"))) PPC_WEAK_FUNC(sub_832B0770);
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

__attribute__((alias("__imp__sub_832B077C"))) PPC_WEAK_FUNC(sub_832B077C);
PPC_FUNC_IMPL(__imp__sub_832B077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0780"))) PPC_WEAK_FUNC(sub_832B0780);
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

__attribute__((alias("__imp__sub_832B078C"))) PPC_WEAK_FUNC(sub_832B078C);
PPC_FUNC_IMPL(__imp__sub_832B078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0790"))) PPC_WEAK_FUNC(sub_832B0790);
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

__attribute__((alias("__imp__sub_832B079C"))) PPC_WEAK_FUNC(sub_832B079C);
PPC_FUNC_IMPL(__imp__sub_832B079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B07A0"))) PPC_WEAK_FUNC(sub_832B07A0);
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

__attribute__((alias("__imp__sub_832B07B4"))) PPC_WEAK_FUNC(sub_832B07B4);
PPC_FUNC_IMPL(__imp__sub_832B07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B07B8"))) PPC_WEAK_FUNC(sub_832B07B8);
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

__attribute__((alias("__imp__sub_832B07CC"))) PPC_WEAK_FUNC(sub_832B07CC);
PPC_FUNC_IMPL(__imp__sub_832B07CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B07D0"))) PPC_WEAK_FUNC(sub_832B07D0);
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

__attribute__((alias("__imp__sub_832B07E4"))) PPC_WEAK_FUNC(sub_832B07E4);
PPC_FUNC_IMPL(__imp__sub_832B07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B07E8"))) PPC_WEAK_FUNC(sub_832B07E8);
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

__attribute__((alias("__imp__sub_832B07FC"))) PPC_WEAK_FUNC(sub_832B07FC);
PPC_FUNC_IMPL(__imp__sub_832B07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0800"))) PPC_WEAK_FUNC(sub_832B0800);
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

__attribute__((alias("__imp__sub_832B0814"))) PPC_WEAK_FUNC(sub_832B0814);
PPC_FUNC_IMPL(__imp__sub_832B0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0818"))) PPC_WEAK_FUNC(sub_832B0818);
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

__attribute__((alias("__imp__sub_832B082C"))) PPC_WEAK_FUNC(sub_832B082C);
PPC_FUNC_IMPL(__imp__sub_832B082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0830"))) PPC_WEAK_FUNC(sub_832B0830);
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

__attribute__((alias("__imp__sub_832B0844"))) PPC_WEAK_FUNC(sub_832B0844);
PPC_FUNC_IMPL(__imp__sub_832B0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0848"))) PPC_WEAK_FUNC(sub_832B0848);
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

__attribute__((alias("__imp__sub_832B085C"))) PPC_WEAK_FUNC(sub_832B085C);
PPC_FUNC_IMPL(__imp__sub_832B085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0860"))) PPC_WEAK_FUNC(sub_832B0860);
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

__attribute__((alias("__imp__sub_832B0874"))) PPC_WEAK_FUNC(sub_832B0874);
PPC_FUNC_IMPL(__imp__sub_832B0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0878"))) PPC_WEAK_FUNC(sub_832B0878);
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

__attribute__((alias("__imp__sub_832B088C"))) PPC_WEAK_FUNC(sub_832B088C);
PPC_FUNC_IMPL(__imp__sub_832B088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0890"))) PPC_WEAK_FUNC(sub_832B0890);
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

__attribute__((alias("__imp__sub_832B08A4"))) PPC_WEAK_FUNC(sub_832B08A4);
PPC_FUNC_IMPL(__imp__sub_832B08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B08A8"))) PPC_WEAK_FUNC(sub_832B08A8);
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

__attribute__((alias("__imp__sub_832B08BC"))) PPC_WEAK_FUNC(sub_832B08BC);
PPC_FUNC_IMPL(__imp__sub_832B08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B08C0"))) PPC_WEAK_FUNC(sub_832B08C0);
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

__attribute__((alias("__imp__sub_832B08D4"))) PPC_WEAK_FUNC(sub_832B08D4);
PPC_FUNC_IMPL(__imp__sub_832B08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B08D8"))) PPC_WEAK_FUNC(sub_832B08D8);
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

__attribute__((alias("__imp__sub_832B08EC"))) PPC_WEAK_FUNC(sub_832B08EC);
PPC_FUNC_IMPL(__imp__sub_832B08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B08F0"))) PPC_WEAK_FUNC(sub_832B08F0);
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

__attribute__((alias("__imp__sub_832B0904"))) PPC_WEAK_FUNC(sub_832B0904);
PPC_FUNC_IMPL(__imp__sub_832B0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0908"))) PPC_WEAK_FUNC(sub_832B0908);
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

__attribute__((alias("__imp__sub_832B091C"))) PPC_WEAK_FUNC(sub_832B091C);
PPC_FUNC_IMPL(__imp__sub_832B091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0920"))) PPC_WEAK_FUNC(sub_832B0920);
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

__attribute__((alias("__imp__sub_832B0934"))) PPC_WEAK_FUNC(sub_832B0934);
PPC_FUNC_IMPL(__imp__sub_832B0934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0938"))) PPC_WEAK_FUNC(sub_832B0938);
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

__attribute__((alias("__imp__sub_832B094C"))) PPC_WEAK_FUNC(sub_832B094C);
PPC_FUNC_IMPL(__imp__sub_832B094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0950"))) PPC_WEAK_FUNC(sub_832B0950);
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

__attribute__((alias("__imp__sub_832B0964"))) PPC_WEAK_FUNC(sub_832B0964);
PPC_FUNC_IMPL(__imp__sub_832B0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0968"))) PPC_WEAK_FUNC(sub_832B0968);
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

__attribute__((alias("__imp__sub_832B097C"))) PPC_WEAK_FUNC(sub_832B097C);
PPC_FUNC_IMPL(__imp__sub_832B097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0980"))) PPC_WEAK_FUNC(sub_832B0980);
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

__attribute__((alias("__imp__sub_832B0994"))) PPC_WEAK_FUNC(sub_832B0994);
PPC_FUNC_IMPL(__imp__sub_832B0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0998"))) PPC_WEAK_FUNC(sub_832B0998);
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

__attribute__((alias("__imp__sub_832B09AC"))) PPC_WEAK_FUNC(sub_832B09AC);
PPC_FUNC_IMPL(__imp__sub_832B09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B09B0"))) PPC_WEAK_FUNC(sub_832B09B0);
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

__attribute__((alias("__imp__sub_832B09C4"))) PPC_WEAK_FUNC(sub_832B09C4);
PPC_FUNC_IMPL(__imp__sub_832B09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B09C8"))) PPC_WEAK_FUNC(sub_832B09C8);
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

__attribute__((alias("__imp__sub_832B09DC"))) PPC_WEAK_FUNC(sub_832B09DC);
PPC_FUNC_IMPL(__imp__sub_832B09DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B09E0"))) PPC_WEAK_FUNC(sub_832B09E0);
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

__attribute__((alias("__imp__sub_832B09F4"))) PPC_WEAK_FUNC(sub_832B09F4);
PPC_FUNC_IMPL(__imp__sub_832B09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B09F8"))) PPC_WEAK_FUNC(sub_832B09F8);
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

__attribute__((alias("__imp__sub_832B0A0C"))) PPC_WEAK_FUNC(sub_832B0A0C);
PPC_FUNC_IMPL(__imp__sub_832B0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A10"))) PPC_WEAK_FUNC(sub_832B0A10);
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

__attribute__((alias("__imp__sub_832B0A24"))) PPC_WEAK_FUNC(sub_832B0A24);
PPC_FUNC_IMPL(__imp__sub_832B0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A28"))) PPC_WEAK_FUNC(sub_832B0A28);
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

__attribute__((alias("__imp__sub_832B0A3C"))) PPC_WEAK_FUNC(sub_832B0A3C);
PPC_FUNC_IMPL(__imp__sub_832B0A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A40"))) PPC_WEAK_FUNC(sub_832B0A40);
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

__attribute__((alias("__imp__sub_832B0A54"))) PPC_WEAK_FUNC(sub_832B0A54);
PPC_FUNC_IMPL(__imp__sub_832B0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A58"))) PPC_WEAK_FUNC(sub_832B0A58);
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

__attribute__((alias("__imp__sub_832B0A6C"))) PPC_WEAK_FUNC(sub_832B0A6C);
PPC_FUNC_IMPL(__imp__sub_832B0A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A70"))) PPC_WEAK_FUNC(sub_832B0A70);
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

__attribute__((alias("__imp__sub_832B0A84"))) PPC_WEAK_FUNC(sub_832B0A84);
PPC_FUNC_IMPL(__imp__sub_832B0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0A88"))) PPC_WEAK_FUNC(sub_832B0A88);
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

__attribute__((alias("__imp__sub_832B0A9C"))) PPC_WEAK_FUNC(sub_832B0A9C);
PPC_FUNC_IMPL(__imp__sub_832B0A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AA0"))) PPC_WEAK_FUNC(sub_832B0AA0);
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

__attribute__((alias("__imp__sub_832B0AB4"))) PPC_WEAK_FUNC(sub_832B0AB4);
PPC_FUNC_IMPL(__imp__sub_832B0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AB8"))) PPC_WEAK_FUNC(sub_832B0AB8);
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

__attribute__((alias("__imp__sub_832B0ACC"))) PPC_WEAK_FUNC(sub_832B0ACC);
PPC_FUNC_IMPL(__imp__sub_832B0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AD0"))) PPC_WEAK_FUNC(sub_832B0AD0);
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

__attribute__((alias("__imp__sub_832B0AE4"))) PPC_WEAK_FUNC(sub_832B0AE4);
PPC_FUNC_IMPL(__imp__sub_832B0AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0AE8"))) PPC_WEAK_FUNC(sub_832B0AE8);
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

__attribute__((alias("__imp__sub_832B0AFC"))) PPC_WEAK_FUNC(sub_832B0AFC);
PPC_FUNC_IMPL(__imp__sub_832B0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B00"))) PPC_WEAK_FUNC(sub_832B0B00);
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

__attribute__((alias("__imp__sub_832B0B14"))) PPC_WEAK_FUNC(sub_832B0B14);
PPC_FUNC_IMPL(__imp__sub_832B0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B18"))) PPC_WEAK_FUNC(sub_832B0B18);
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

__attribute__((alias("__imp__sub_832B0B2C"))) PPC_WEAK_FUNC(sub_832B0B2C);
PPC_FUNC_IMPL(__imp__sub_832B0B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B30"))) PPC_WEAK_FUNC(sub_832B0B30);
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

__attribute__((alias("__imp__sub_832B0B44"))) PPC_WEAK_FUNC(sub_832B0B44);
PPC_FUNC_IMPL(__imp__sub_832B0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B48"))) PPC_WEAK_FUNC(sub_832B0B48);
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

__attribute__((alias("__imp__sub_832B0B5C"))) PPC_WEAK_FUNC(sub_832B0B5C);
PPC_FUNC_IMPL(__imp__sub_832B0B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B60"))) PPC_WEAK_FUNC(sub_832B0B60);
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

__attribute__((alias("__imp__sub_832B0B74"))) PPC_WEAK_FUNC(sub_832B0B74);
PPC_FUNC_IMPL(__imp__sub_832B0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B78"))) PPC_WEAK_FUNC(sub_832B0B78);
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

__attribute__((alias("__imp__sub_832B0B8C"))) PPC_WEAK_FUNC(sub_832B0B8C);
PPC_FUNC_IMPL(__imp__sub_832B0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B90"))) PPC_WEAK_FUNC(sub_832B0B90);
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

__attribute__((alias("__imp__sub_832B0BA4"))) PPC_WEAK_FUNC(sub_832B0BA4);
PPC_FUNC_IMPL(__imp__sub_832B0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0BA8"))) PPC_WEAK_FUNC(sub_832B0BA8);
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

__attribute__((alias("__imp__sub_832B0BBC"))) PPC_WEAK_FUNC(sub_832B0BBC);
PPC_FUNC_IMPL(__imp__sub_832B0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0BC0"))) PPC_WEAK_FUNC(sub_832B0BC0);
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

__attribute__((alias("__imp__sub_832B0BD4"))) PPC_WEAK_FUNC(sub_832B0BD4);
PPC_FUNC_IMPL(__imp__sub_832B0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0BD8"))) PPC_WEAK_FUNC(sub_832B0BD8);
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

__attribute__((alias("__imp__sub_832B0BEC"))) PPC_WEAK_FUNC(sub_832B0BEC);
PPC_FUNC_IMPL(__imp__sub_832B0BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0BF0"))) PPC_WEAK_FUNC(sub_832B0BF0);
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

__attribute__((alias("__imp__sub_832B0C04"))) PPC_WEAK_FUNC(sub_832B0C04);
PPC_FUNC_IMPL(__imp__sub_832B0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C08"))) PPC_WEAK_FUNC(sub_832B0C08);
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

__attribute__((alias("__imp__sub_832B0C1C"))) PPC_WEAK_FUNC(sub_832B0C1C);
PPC_FUNC_IMPL(__imp__sub_832B0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C20"))) PPC_WEAK_FUNC(sub_832B0C20);
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

__attribute__((alias("__imp__sub_832B0C34"))) PPC_WEAK_FUNC(sub_832B0C34);
PPC_FUNC_IMPL(__imp__sub_832B0C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C38"))) PPC_WEAK_FUNC(sub_832B0C38);
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

__attribute__((alias("__imp__sub_832B0C4C"))) PPC_WEAK_FUNC(sub_832B0C4C);
PPC_FUNC_IMPL(__imp__sub_832B0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C50"))) PPC_WEAK_FUNC(sub_832B0C50);
PPC_FUNC_IMPL(__imp__sub_832B0C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0C54"))) PPC_WEAK_FUNC(sub_832B0C54);
PPC_FUNC_IMPL(__imp__sub_832B0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C58"))) PPC_WEAK_FUNC(sub_832B0C58);
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

__attribute__((alias("__imp__sub_832B0C6C"))) PPC_WEAK_FUNC(sub_832B0C6C);
PPC_FUNC_IMPL(__imp__sub_832B0C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C70"))) PPC_WEAK_FUNC(sub_832B0C70);
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

__attribute__((alias("__imp__sub_832B0C84"))) PPC_WEAK_FUNC(sub_832B0C84);
PPC_FUNC_IMPL(__imp__sub_832B0C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0C88"))) PPC_WEAK_FUNC(sub_832B0C88);
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

__attribute__((alias("__imp__sub_832B0C9C"))) PPC_WEAK_FUNC(sub_832B0C9C);
PPC_FUNC_IMPL(__imp__sub_832B0C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0CA0"))) PPC_WEAK_FUNC(sub_832B0CA0);
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

__attribute__((alias("__imp__sub_832B0CB4"))) PPC_WEAK_FUNC(sub_832B0CB4);
PPC_FUNC_IMPL(__imp__sub_832B0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0CB8"))) PPC_WEAK_FUNC(sub_832B0CB8);
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

__attribute__((alias("__imp__sub_832B0CCC"))) PPC_WEAK_FUNC(sub_832B0CCC);
PPC_FUNC_IMPL(__imp__sub_832B0CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0CD0"))) PPC_WEAK_FUNC(sub_832B0CD0);
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

__attribute__((alias("__imp__sub_832B0CE4"))) PPC_WEAK_FUNC(sub_832B0CE4);
PPC_FUNC_IMPL(__imp__sub_832B0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0CE8"))) PPC_WEAK_FUNC(sub_832B0CE8);
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

__attribute__((alias("__imp__sub_832B0CFC"))) PPC_WEAK_FUNC(sub_832B0CFC);
PPC_FUNC_IMPL(__imp__sub_832B0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D00"))) PPC_WEAK_FUNC(sub_832B0D00);
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

__attribute__((alias("__imp__sub_832B0D14"))) PPC_WEAK_FUNC(sub_832B0D14);
PPC_FUNC_IMPL(__imp__sub_832B0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D18"))) PPC_WEAK_FUNC(sub_832B0D18);
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

__attribute__((alias("__imp__sub_832B0D2C"))) PPC_WEAK_FUNC(sub_832B0D2C);
PPC_FUNC_IMPL(__imp__sub_832B0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D30"))) PPC_WEAK_FUNC(sub_832B0D30);
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

__attribute__((alias("__imp__sub_832B0D44"))) PPC_WEAK_FUNC(sub_832B0D44);
PPC_FUNC_IMPL(__imp__sub_832B0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D48"))) PPC_WEAK_FUNC(sub_832B0D48);
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

__attribute__((alias("__imp__sub_832B0D5C"))) PPC_WEAK_FUNC(sub_832B0D5C);
PPC_FUNC_IMPL(__imp__sub_832B0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D60"))) PPC_WEAK_FUNC(sub_832B0D60);
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

__attribute__((alias("__imp__sub_832B0D74"))) PPC_WEAK_FUNC(sub_832B0D74);
PPC_FUNC_IMPL(__imp__sub_832B0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D78"))) PPC_WEAK_FUNC(sub_832B0D78);
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

__attribute__((alias("__imp__sub_832B0D8C"))) PPC_WEAK_FUNC(sub_832B0D8C);
PPC_FUNC_IMPL(__imp__sub_832B0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0D90"))) PPC_WEAK_FUNC(sub_832B0D90);
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

__attribute__((alias("__imp__sub_832B0DA4"))) PPC_WEAK_FUNC(sub_832B0DA4);
PPC_FUNC_IMPL(__imp__sub_832B0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0DA8"))) PPC_WEAK_FUNC(sub_832B0DA8);
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

__attribute__((alias("__imp__sub_832B0DBC"))) PPC_WEAK_FUNC(sub_832B0DBC);
PPC_FUNC_IMPL(__imp__sub_832B0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0DC0"))) PPC_WEAK_FUNC(sub_832B0DC0);
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

__attribute__((alias("__imp__sub_832B0DD4"))) PPC_WEAK_FUNC(sub_832B0DD4);
PPC_FUNC_IMPL(__imp__sub_832B0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0DD8"))) PPC_WEAK_FUNC(sub_832B0DD8);
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

__attribute__((alias("__imp__sub_832B0DEC"))) PPC_WEAK_FUNC(sub_832B0DEC);
PPC_FUNC_IMPL(__imp__sub_832B0DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0DF0"))) PPC_WEAK_FUNC(sub_832B0DF0);
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

__attribute__((alias("__imp__sub_832B0E04"))) PPC_WEAK_FUNC(sub_832B0E04);
PPC_FUNC_IMPL(__imp__sub_832B0E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E08"))) PPC_WEAK_FUNC(sub_832B0E08);
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

__attribute__((alias("__imp__sub_832B0E1C"))) PPC_WEAK_FUNC(sub_832B0E1C);
PPC_FUNC_IMPL(__imp__sub_832B0E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E20"))) PPC_WEAK_FUNC(sub_832B0E20);
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

__attribute__((alias("__imp__sub_832B0E34"))) PPC_WEAK_FUNC(sub_832B0E34);
PPC_FUNC_IMPL(__imp__sub_832B0E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E38"))) PPC_WEAK_FUNC(sub_832B0E38);
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

__attribute__((alias("__imp__sub_832B0E4C"))) PPC_WEAK_FUNC(sub_832B0E4C);
PPC_FUNC_IMPL(__imp__sub_832B0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E50"))) PPC_WEAK_FUNC(sub_832B0E50);
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

__attribute__((alias("__imp__sub_832B0E64"))) PPC_WEAK_FUNC(sub_832B0E64);
PPC_FUNC_IMPL(__imp__sub_832B0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E68"))) PPC_WEAK_FUNC(sub_832B0E68);
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

__attribute__((alias("__imp__sub_832B0E7C"))) PPC_WEAK_FUNC(sub_832B0E7C);
PPC_FUNC_IMPL(__imp__sub_832B0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E80"))) PPC_WEAK_FUNC(sub_832B0E80);
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

__attribute__((alias("__imp__sub_832B0E94"))) PPC_WEAK_FUNC(sub_832B0E94);
PPC_FUNC_IMPL(__imp__sub_832B0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E98"))) PPC_WEAK_FUNC(sub_832B0E98);
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

__attribute__((alias("__imp__sub_832B0EAC"))) PPC_WEAK_FUNC(sub_832B0EAC);
PPC_FUNC_IMPL(__imp__sub_832B0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0EB0"))) PPC_WEAK_FUNC(sub_832B0EB0);
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

__attribute__((alias("__imp__sub_832B0EC4"))) PPC_WEAK_FUNC(sub_832B0EC4);
PPC_FUNC_IMPL(__imp__sub_832B0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0EC8"))) PPC_WEAK_FUNC(sub_832B0EC8);
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

__attribute__((alias("__imp__sub_832B0EDC"))) PPC_WEAK_FUNC(sub_832B0EDC);
PPC_FUNC_IMPL(__imp__sub_832B0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0EE0"))) PPC_WEAK_FUNC(sub_832B0EE0);
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

__attribute__((alias("__imp__sub_832B0EF4"))) PPC_WEAK_FUNC(sub_832B0EF4);
PPC_FUNC_IMPL(__imp__sub_832B0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0EF8"))) PPC_WEAK_FUNC(sub_832B0EF8);
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

__attribute__((alias("__imp__sub_832B0F0C"))) PPC_WEAK_FUNC(sub_832B0F0C);
PPC_FUNC_IMPL(__imp__sub_832B0F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F10"))) PPC_WEAK_FUNC(sub_832B0F10);
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

__attribute__((alias("__imp__sub_832B0F24"))) PPC_WEAK_FUNC(sub_832B0F24);
PPC_FUNC_IMPL(__imp__sub_832B0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F28"))) PPC_WEAK_FUNC(sub_832B0F28);
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

__attribute__((alias("__imp__sub_832B0F3C"))) PPC_WEAK_FUNC(sub_832B0F3C);
PPC_FUNC_IMPL(__imp__sub_832B0F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F40"))) PPC_WEAK_FUNC(sub_832B0F40);
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

__attribute__((alias("__imp__sub_832B0F54"))) PPC_WEAK_FUNC(sub_832B0F54);
PPC_FUNC_IMPL(__imp__sub_832B0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F58"))) PPC_WEAK_FUNC(sub_832B0F58);
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

__attribute__((alias("__imp__sub_832B0F6C"))) PPC_WEAK_FUNC(sub_832B0F6C);
PPC_FUNC_IMPL(__imp__sub_832B0F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F70"))) PPC_WEAK_FUNC(sub_832B0F70);
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

__attribute__((alias("__imp__sub_832B0F84"))) PPC_WEAK_FUNC(sub_832B0F84);
PPC_FUNC_IMPL(__imp__sub_832B0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0F88"))) PPC_WEAK_FUNC(sub_832B0F88);
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

__attribute__((alias("__imp__sub_832B0F9C"))) PPC_WEAK_FUNC(sub_832B0F9C);
PPC_FUNC_IMPL(__imp__sub_832B0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0FA0"))) PPC_WEAK_FUNC(sub_832B0FA0);
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

__attribute__((alias("__imp__sub_832B0FB4"))) PPC_WEAK_FUNC(sub_832B0FB4);
PPC_FUNC_IMPL(__imp__sub_832B0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0FB8"))) PPC_WEAK_FUNC(sub_832B0FB8);
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

__attribute__((alias("__imp__sub_832B0FCC"))) PPC_WEAK_FUNC(sub_832B0FCC);
PPC_FUNC_IMPL(__imp__sub_832B0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0FD0"))) PPC_WEAK_FUNC(sub_832B0FD0);
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

__attribute__((alias("__imp__sub_832B0FE4"))) PPC_WEAK_FUNC(sub_832B0FE4);
PPC_FUNC_IMPL(__imp__sub_832B0FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0FE8"))) PPC_WEAK_FUNC(sub_832B0FE8);
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

__attribute__((alias("__imp__sub_832B0FFC"))) PPC_WEAK_FUNC(sub_832B0FFC);
PPC_FUNC_IMPL(__imp__sub_832B0FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1000"))) PPC_WEAK_FUNC(sub_832B1000);
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

__attribute__((alias("__imp__sub_832B1014"))) PPC_WEAK_FUNC(sub_832B1014);
PPC_FUNC_IMPL(__imp__sub_832B1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1018"))) PPC_WEAK_FUNC(sub_832B1018);
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

__attribute__((alias("__imp__sub_832B102C"))) PPC_WEAK_FUNC(sub_832B102C);
PPC_FUNC_IMPL(__imp__sub_832B102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1030"))) PPC_WEAK_FUNC(sub_832B1030);
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

__attribute__((alias("__imp__sub_832B1044"))) PPC_WEAK_FUNC(sub_832B1044);
PPC_FUNC_IMPL(__imp__sub_832B1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1048"))) PPC_WEAK_FUNC(sub_832B1048);
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

__attribute__((alias("__imp__sub_832B105C"))) PPC_WEAK_FUNC(sub_832B105C);
PPC_FUNC_IMPL(__imp__sub_832B105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1060"))) PPC_WEAK_FUNC(sub_832B1060);
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

__attribute__((alias("__imp__sub_832B1074"))) PPC_WEAK_FUNC(sub_832B1074);
PPC_FUNC_IMPL(__imp__sub_832B1074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1078"))) PPC_WEAK_FUNC(sub_832B1078);
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

__attribute__((alias("__imp__sub_832B108C"))) PPC_WEAK_FUNC(sub_832B108C);
PPC_FUNC_IMPL(__imp__sub_832B108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1090"))) PPC_WEAK_FUNC(sub_832B1090);
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

__attribute__((alias("__imp__sub_832B10A4"))) PPC_WEAK_FUNC(sub_832B10A4);
PPC_FUNC_IMPL(__imp__sub_832B10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B10A8"))) PPC_WEAK_FUNC(sub_832B10A8);
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

__attribute__((alias("__imp__sub_832B10BC"))) PPC_WEAK_FUNC(sub_832B10BC);
PPC_FUNC_IMPL(__imp__sub_832B10BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B10C0"))) PPC_WEAK_FUNC(sub_832B10C0);
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

__attribute__((alias("__imp__sub_832B10D4"))) PPC_WEAK_FUNC(sub_832B10D4);
PPC_FUNC_IMPL(__imp__sub_832B10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B10D8"))) PPC_WEAK_FUNC(sub_832B10D8);
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

__attribute__((alias("__imp__sub_832B10EC"))) PPC_WEAK_FUNC(sub_832B10EC);
PPC_FUNC_IMPL(__imp__sub_832B10EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B10F0"))) PPC_WEAK_FUNC(sub_832B10F0);
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

__attribute__((alias("__imp__sub_832B1104"))) PPC_WEAK_FUNC(sub_832B1104);
PPC_FUNC_IMPL(__imp__sub_832B1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1108"))) PPC_WEAK_FUNC(sub_832B1108);
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

__attribute__((alias("__imp__sub_832B111C"))) PPC_WEAK_FUNC(sub_832B111C);
PPC_FUNC_IMPL(__imp__sub_832B111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1120"))) PPC_WEAK_FUNC(sub_832B1120);
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

__attribute__((alias("__imp__sub_832B1134"))) PPC_WEAK_FUNC(sub_832B1134);
PPC_FUNC_IMPL(__imp__sub_832B1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1138"))) PPC_WEAK_FUNC(sub_832B1138);
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

__attribute__((alias("__imp__sub_832B114C"))) PPC_WEAK_FUNC(sub_832B114C);
PPC_FUNC_IMPL(__imp__sub_832B114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1150"))) PPC_WEAK_FUNC(sub_832B1150);
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

__attribute__((alias("__imp__sub_832B1164"))) PPC_WEAK_FUNC(sub_832B1164);
PPC_FUNC_IMPL(__imp__sub_832B1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1168"))) PPC_WEAK_FUNC(sub_832B1168);
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

__attribute__((alias("__imp__sub_832B117C"))) PPC_WEAK_FUNC(sub_832B117C);
PPC_FUNC_IMPL(__imp__sub_832B117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1180"))) PPC_WEAK_FUNC(sub_832B1180);
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

__attribute__((alias("__imp__sub_832B1194"))) PPC_WEAK_FUNC(sub_832B1194);
PPC_FUNC_IMPL(__imp__sub_832B1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1198"))) PPC_WEAK_FUNC(sub_832B1198);
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

__attribute__((alias("__imp__sub_832B11A4"))) PPC_WEAK_FUNC(sub_832B11A4);
PPC_FUNC_IMPL(__imp__sub_832B11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11A8"))) PPC_WEAK_FUNC(sub_832B11A8);
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

__attribute__((alias("__imp__sub_832B11BC"))) PPC_WEAK_FUNC(sub_832B11BC);
PPC_FUNC_IMPL(__imp__sub_832B11BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11C0"))) PPC_WEAK_FUNC(sub_832B11C0);
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

__attribute__((alias("__imp__sub_832B11D4"))) PPC_WEAK_FUNC(sub_832B11D4);
PPC_FUNC_IMPL(__imp__sub_832B11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11D8"))) PPC_WEAK_FUNC(sub_832B11D8);
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

__attribute__((alias("__imp__sub_832B11EC"))) PPC_WEAK_FUNC(sub_832B11EC);
PPC_FUNC_IMPL(__imp__sub_832B11EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11F0"))) PPC_WEAK_FUNC(sub_832B11F0);
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

__attribute__((alias("__imp__sub_832B1208"))) PPC_WEAK_FUNC(sub_832B1208);
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

__attribute__((alias("__imp__sub_832B1220"))) PPC_WEAK_FUNC(sub_832B1220);
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

__attribute__((alias("__imp__sub_832B1234"))) PPC_WEAK_FUNC(sub_832B1234);
PPC_FUNC_IMPL(__imp__sub_832B1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1238"))) PPC_WEAK_FUNC(sub_832B1238);
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

__attribute__((alias("__imp__sub_832B124C"))) PPC_WEAK_FUNC(sub_832B124C);
PPC_FUNC_IMPL(__imp__sub_832B124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1250"))) PPC_WEAK_FUNC(sub_832B1250);
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

__attribute__((alias("__imp__sub_832B1264"))) PPC_WEAK_FUNC(sub_832B1264);
PPC_FUNC_IMPL(__imp__sub_832B1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1268"))) PPC_WEAK_FUNC(sub_832B1268);
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

__attribute__((alias("__imp__sub_832B127C"))) PPC_WEAK_FUNC(sub_832B127C);
PPC_FUNC_IMPL(__imp__sub_832B127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1280"))) PPC_WEAK_FUNC(sub_832B1280);
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

__attribute__((alias("__imp__sub_832B1294"))) PPC_WEAK_FUNC(sub_832B1294);
PPC_FUNC_IMPL(__imp__sub_832B1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1298"))) PPC_WEAK_FUNC(sub_832B1298);
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

__attribute__((alias("__imp__sub_832B12AC"))) PPC_WEAK_FUNC(sub_832B12AC);
PPC_FUNC_IMPL(__imp__sub_832B12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B12B0"))) PPC_WEAK_FUNC(sub_832B12B0);
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

__attribute__((alias("__imp__sub_832B12C4"))) PPC_WEAK_FUNC(sub_832B12C4);
PPC_FUNC_IMPL(__imp__sub_832B12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B12C8"))) PPC_WEAK_FUNC(sub_832B12C8);
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

__attribute__((alias("__imp__sub_832B12DC"))) PPC_WEAK_FUNC(sub_832B12DC);
PPC_FUNC_IMPL(__imp__sub_832B12DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B12E0"))) PPC_WEAK_FUNC(sub_832B12E0);
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

__attribute__((alias("__imp__sub_832B12F4"))) PPC_WEAK_FUNC(sub_832B12F4);
PPC_FUNC_IMPL(__imp__sub_832B12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B12F8"))) PPC_WEAK_FUNC(sub_832B12F8);
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

__attribute__((alias("__imp__sub_832B130C"))) PPC_WEAK_FUNC(sub_832B130C);
PPC_FUNC_IMPL(__imp__sub_832B130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1310"))) PPC_WEAK_FUNC(sub_832B1310);
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

