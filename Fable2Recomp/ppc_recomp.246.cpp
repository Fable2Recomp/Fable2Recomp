#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EFC5B0"))) PPC_WEAK_FUNC(sub_82EFC5B0);
PPC_FUNC_IMPL(__imp__sub_82EFC5B0) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFC5E0"))) PPC_WEAK_FUNC(sub_82EFC5E0);
PPC_FUNC_IMPL(__imp__sub_82EFC5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFC5E8;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82efc614
	if (ctx.cr6.eq) goto loc_82EFC614;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82efc614
	if (ctx.cr6.eq) goto loc_82EFC614;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ca5160
	ctx.lr = 0x82EFC614;
	sub_82CA5160(ctx, base);
loc_82EFC614:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca4d60
	ctx.lr = 0x82EFC630;
	sub_82CA4D60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82efc644
	if (!ctx.cr6.lt) goto loc_82EFC644;
	// bl 0x82efc3a0
	ctx.lr = 0x82EFC640;
	sub_82EFC3A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82EFC644:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFC650"))) PPC_WEAK_FUNC(sub_82EFC650);
PPC_FUNC_IMPL(__imp__sub_82EFC650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFC658;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82efc684
	if (ctx.cr6.eq) goto loc_82EFC684;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efc684
	if (ctx.cr6.eq) goto loc_82EFC684;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82ca5160
	ctx.lr = 0x82EFC684;
	sub_82CA5160(ctx, base);
loc_82EFC684:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cab340
	ctx.lr = 0x82EFC6A0;
	sub_82CAB340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82efc6b4
	if (!ctx.cr6.lt) goto loc_82EFC6B4;
	// bl 0x82efc3a0
	ctx.lr = 0x82EFC6B0;
	sub_82EFC3A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82EFC6B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFC6C0"))) PPC_WEAK_FUNC(sub_82EFC6C0);
PPC_FUNC_IMPL(__imp__sub_82EFC6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFC6C8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r29
	ctx.r4.s64 = ctx.r29.s32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r31,-1
	ctx.cr6.compare<int64_t>(ctx.r31.s64, -1, ctx.xer);
	// beq cr6,0x82efc724
	if (ctx.cr6.eq) goto loc_82EFC724;
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82efc724
	if (ctx.cr6.eq) goto loc_82EFC724;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82efc728
	goto loc_82EFC728;
loc_82EFC724:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EFC728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFC730"))) PPC_WEAK_FUNC(sub_82EFC730);
PPC_FUNC_IMPL(__imp__sub_82EFC730) {
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r30,-1
	ctx.cr6.compare<int64_t>(ctx.r30.s64, -1, ctx.xer);
	// beq cr6,0x82efc798
	if (ctx.cr6.eq) goto loc_82EFC798;
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82efc798
	if (ctx.cr6.eq) goto loc_82EFC798;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x82efc7a4
	goto loc_82EFC7A4;
loc_82EFC798:
	// bl 0x82efc3a0
	ctx.lr = 0x82EFC79C;
	sub_82EFC3A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFC7A4:
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

__attribute__((alias("__imp__sub_82EFC7BC"))) PPC_WEAK_FUNC(sub_82EFC7BC);
PPC_FUNC_IMPL(__imp__sub_82EFC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFC7C0"))) PPC_WEAK_FUNC(sub_82EFC7C0);
PPC_FUNC_IMPL(__imp__sub_82EFC7C0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82ca5160
	ctx.lr = 0x82EFC7D4;
	sub_82CA5160(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EFC7EC"))) PPC_WEAK_FUNC(sub_82EFC7EC);
PPC_FUNC_IMPL(__imp__sub_82EFC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFC7F0"))) PPC_WEAK_FUNC(sub_82EFC7F0);
PPC_FUNC_IMPL(__imp__sub_82EFC7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFC7F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82efc82c
	if (ctx.cr6.lt) goto loc_82EFC82C;
	// beq cr6,0x82efc824
	if (ctx.cr6.eq) goto loc_82EFC824;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x82efc830
	if (!ctx.cr6.lt) goto loc_82EFC830;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82efc84c
	goto loc_82EFC84C;
loc_82EFC824:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82efc84c
	goto loc_82EFC84C;
loc_82EFC82C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EFC830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82efc86c
	if (ctx.cr6.eq) goto loc_82EFC86C;
loc_82EFC84C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca5338
	ctx.lr = 0x82EFC85C;
	sub_82CA5338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82efc86c
	if (ctx.cr0.eq) goto loc_82EFC86C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82efc880
	goto loc_82EFC880;
loc_82EFC86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFC880:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFC888"))) PPC_WEAK_FUNC(sub_82EFC888);
PPC_FUNC_IMPL(__imp__sub_82EFC888) {
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
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFC8BC"))) PPC_WEAK_FUNC(sub_82EFC8BC);
PPC_FUNC_IMPL(__imp__sub_82EFC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFC8C0"))) PPC_WEAK_FUNC(sub_82EFC8C0);
PPC_FUNC_IMPL(__imp__sub_82EFC8C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4099
	ctx.r10.s64 = 4099;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFC8D4"))) PPC_WEAK_FUNC(sub_82EFC8D4);
PPC_FUNC_IMPL(__imp__sub_82EFC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFC8D8"))) PPC_WEAK_FUNC(sub_82EFC8D8);
PPC_FUNC_IMPL(__imp__sub_82EFC8D8) {
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
	// bl 0x82ca49d8
	ctx.lr = 0x82EFC8F4;
	sub_82CA49D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82efc90c
	if (ctx.cr0.eq) goto loc_82EFC90C;
	// bl 0x82efc3a0
	ctx.lr = 0x82EFC900;
	sub_82EFC3A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82efc920
	goto loc_82EFC920;
loc_82EFC90C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82EFC920:
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

__attribute__((alias("__imp__sub_82EFC934"))) PPC_WEAK_FUNC(sub_82EFC934);
PPC_FUNC_IMPL(__imp__sub_82EFC934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFC938"))) PPC_WEAK_FUNC(sub_82EFC938);
PPC_FUNC_IMPL(__imp__sub_82EFC938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EFC940;
	sub_82CA2BE4(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16512(r1)
	ea = -16512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82efc9cc
	goto loc_82EFC9CC;
loc_82EFC968:
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bgt cr6,0x82efc978
	if (ctx.cr6.gt) goto loc_82EFC978;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82EFC978:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x82efc9bc
	if (!ctx.cr0.gt) goto loc_82EFC9BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFC9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EFC9BC:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82efc9d4
	if (ctx.cr6.lt) goto loc_82EFC9D4;
loc_82EFC9CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82efc968
	if (!ctx.cr6.eq) goto loc_82EFC968;
loc_82EFC9D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,16512
	ctx.r1.s64 = ctx.r1.s64 + 16512;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EFC9E0"))) PPC_WEAK_FUNC(sub_82EFC9E0);
PPC_FUNC_IMPL(__imp__sub_82EFC9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83002b80
	ctx.lr = 0x82EFCA00;
	sub_83002B80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82efca10
	if (ctx.cr0.eq) goto loc_82EFCA10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82efca2c
	goto loc_82EFCA2C;
loc_82EFCA10:
	// lwa r11,100(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
loc_82EFCA2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFCA40"))) PPC_WEAK_FUNC(sub_82EFCA40);
PPC_FUNC_IMPL(__imp__sub_82EFCA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFCA54"))) PPC_WEAK_FUNC(sub_82EFCA54);
PPC_FUNC_IMPL(__imp__sub_82EFCA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCA58"))) PPC_WEAK_FUNC(sub_82EFCA58);
PPC_FUNC_IMPL(__imp__sub_82EFCA58) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efca8c
	if (ctx.cr6.eq) goto loc_82EFCA8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFCA8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EFCA94;
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

__attribute__((alias("__imp__sub_82EFCAA8"))) PPC_WEAK_FUNC(sub_82EFCAA8);
PPC_FUNC_IMPL(__imp__sub_82EFCAA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4097
	ctx.r3.s64 = 4097;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFCAB0"))) PPC_WEAK_FUNC(sub_82EFCAB0);
PPC_FUNC_IMPL(__imp__sub_82EFCAB0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82EFCADC;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efcaec
	if (ctx.cr0.eq) goto loc_82EFCAEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFCAEC;
	sub_82EF6F38(ctx, base);
loc_82EFCAEC:
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

__attribute__((alias("__imp__sub_82EFCB08"))) PPC_WEAK_FUNC(sub_82EFCB08);
PPC_FUNC_IMPL(__imp__sub_82EFCB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFCB10;
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
	ctx.lr = 0x82EFCB24;
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-9832
	ctx.r10.s64 = ctx.r10.s64 + -9832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82EFCB34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82efcb34
	if (!ctx.cr6.eq) goto loc_82EFCB34;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFCB5C;
	sub_82EF6EF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EFCB6C;
	sub_82CA2C60(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm. r10,r28,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// beq 0x82efcba0
	if (ctx.cr0.eq) goto loc_82EFCBA0;
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efcb94
	if (ctx.cr0.eq) goto loc_82EFCB94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-9836
	ctx.r5.s64 = ctx.r11.s64 + -9836;
	// b 0x82efcbd8
	goto loc_82EFCBD8;
loc_82EFCB94:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11956
	ctx.r5.s64 = ctx.r11.s64 + 11956;
	// b 0x82efcbd8
	goto loc_82EFCBD8;
loc_82EFCBA0:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efcbc8
	if (ctx.cr0.eq) goto loc_82EFCBC8;
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efcbbc
	if (ctx.cr0.eq) goto loc_82EFCBBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-9840
	ctx.r5.s64 = ctx.r11.s64 + -9840;
	// b 0x82efcbd8
	goto loc_82EFCBD8;
loc_82EFCBBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-9844
	ctx.r5.s64 = ctx.r11.s64 + -9844;
	// b 0x82efcbd8
	goto loc_82EFCBD8;
loc_82EFCBC8:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efcbd8
	if (ctx.cr0.eq) goto loc_82EFCBD8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-9848
	ctx.r5.s64 = ctx.r11.s64 + -9848;
loc_82EFCBD8:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4898
	ctx.lr = 0x82EFCBE8;
	sub_82CA4898(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efcbf8
	if (ctx.cr6.eq) goto loc_82EFCBF8;
	// bl 0x83002e18
	ctx.lr = 0x82EFCBF8;
	sub_83002E18(ctx, base);
loc_82EFCBF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// bne 0x82efcc24
	if (!ctx.cr0.eq) goto loc_82EFCC24;
	// bl 0x82efc3a0
	ctx.lr = 0x82EFCC1C;
	sub_82EFC3A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82efcc28
	goto loc_82EFCC28;
loc_82EFCC24:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82EFCC28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFCC38"))) PPC_WEAK_FUNC(sub_82EFCC38);
PPC_FUNC_IMPL(__imp__sub_82EFCC38) {
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
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82efcc68
	if (ctx.cr0.eq) goto loc_82EFCC68;
	// bl 0x82efc8d8
	ctx.lr = 0x82EFCC68;
	sub_82EFC8D8(ctx, base);
loc_82EFCC68:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efcc78
	if (ctx.cr6.eq) goto loc_82EFCC78;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFCC78;
	sub_82EF6F38(ctx, base);
loc_82EFCC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EFCC80;
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

__attribute__((alias("__imp__sub_82EFCC94"))) PPC_WEAK_FUNC(sub_82EFCC94);
PPC_FUNC_IMPL(__imp__sub_82EFCC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCC98"))) PPC_WEAK_FUNC(sub_82EFCC98);
PPC_FUNC_IMPL(__imp__sub_82EFCC98) {
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
	// bl 0x82efcc38
	ctx.lr = 0x82EFCCB8;
	sub_82EFCC38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efccc8
	if (ctx.cr0.eq) goto loc_82EFCCC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFCCC8;
	sub_82EF6F38(ctx, base);
loc_82EFCCC8:
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

__attribute__((alias("__imp__sub_82EFCCE4"))) PPC_WEAK_FUNC(sub_82EFCCE4);
PPC_FUNC_IMPL(__imp__sub_82EFCCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCCE8"))) PPC_WEAK_FUNC(sub_82EFCCE8);
PPC_FUNC_IMPL(__imp__sub_82EFCCE8) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efcd48
	if (ctx.cr6.eq) goto loc_82EFCD48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efcd88
	if (!ctx.cr6.eq) goto loc_82EFCD88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCD2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x82efcd88
	goto loc_82EFCD88;
loc_82EFCD48:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82efcd7c
	if (!ctx.cr0.gt) goto loc_82EFCD7C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
loc_82EFCD7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EFCD88:
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

__attribute__((alias("__imp__sub_82EFCD9C"))) PPC_WEAK_FUNC(sub_82EFCD9C);
PPC_FUNC_IMPL(__imp__sub_82EFCD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCDA0"))) PPC_WEAK_FUNC(sub_82EFCDA0);
PPC_FUNC_IMPL(__imp__sub_82EFCDA0) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82efce04
	if (!ctx.cr6.eq) goto loc_82EFCE04;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,8184
	ctx.r5.s64 = 8184;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82efcde8
	if (!ctx.cr0.lt) goto loc_82EFCDE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EFCDE8:
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82EFCE04:
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

__attribute__((alias("__imp__sub_82EFCE18"))) PPC_WEAK_FUNC(sub_82EFCE18);
PPC_FUNC_IMPL(__imp__sub_82EFCE18) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82efce50
	if (!ctx.cr6.eq) goto loc_82EFCE50;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82efce98
	goto loc_82EFCE98;
loc_82EFCE50:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCE64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82efce98
	if (ctx.cr6.eq) goto loc_82EFCE98;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efce88
	if (ctx.cr6.eq) goto loc_82EFCE88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efce98
	if (!ctx.cr6.eq) goto loc_82EFCE98;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82efce94
	goto loc_82EFCE94;
loc_82EFCE88:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82EFCE94:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82EFCE98:
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

__attribute__((alias("__imp__sub_82EFCEAC"))) PPC_WEAK_FUNC(sub_82EFCEAC);
PPC_FUNC_IMPL(__imp__sub_82EFCEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCEB0"))) PPC_WEAK_FUNC(sub_82EFCEB0);
PPC_FUNC_IMPL(__imp__sub_82EFCEB0) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82efcee8
	if (!ctx.cr6.eq) goto loc_82EFCEE8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82efcf38
	goto loc_82EFCF38;
loc_82EFCEE8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82efcf38
	if (ctx.cr6.eq) goto loc_82EFCF38;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efcf24
	if (ctx.cr6.eq) goto loc_82EFCF24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efcf38
	if (!ctx.cr6.eq) goto loc_82EFCF38;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82efcf38
	goto loc_82EFCF38;
loc_82EFCF24:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82EFCF38:
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

__attribute__((alias("__imp__sub_82EFCF4C"))) PPC_WEAK_FUNC(sub_82EFCF4C);
PPC_FUNC_IMPL(__imp__sub_82EFCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFCF50"))) PPC_WEAK_FUNC(sub_82EFCF50);
PPC_FUNC_IMPL(__imp__sub_82EFCF50) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82efcfbc
	if (ctx.cr6.eq) goto loc_82EFCFBC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efcfbc
	if (!ctx.cr6.eq) goto loc_82EFCFBC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFCFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82efcfbc
	if (!ctx.cr6.gt) goto loc_82EFCFBC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EFCFBC:
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

__attribute__((alias("__imp__sub_82EFCFD8"))) PPC_WEAK_FUNC(sub_82EFCFD8);
PPC_FUNC_IMPL(__imp__sub_82EFCFD8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpdi cr6,r30,-1
	ctx.cr6.compare<int64_t>(ctx.r30.s64, -1, ctx.xer);
	// beq cr6,0x82efd044
	if (ctx.cr6.eq) goto loc_82EFD044;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efd044
	if (!ctx.cr6.eq) goto loc_82EFD044;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r30.s64, ctx.xer);
	// ble cr6,0x82efd044
	if (!ctx.cr6.gt) goto loc_82EFD044;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EFD044:
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

__attribute__((alias("__imp__sub_82EFD060"))) PPC_WEAK_FUNC(sub_82EFD060);
PPC_FUNC_IMPL(__imp__sub_82EFD060) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82efd0ac
	if (!ctx.cr6.eq) goto loc_82EFD0AC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82efd0a0
	if (ctx.cr6.lt) goto loc_82EFD0A0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_82EFD0A0:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r30,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r30.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EFD0AC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82efd0f4
	if (ctx.cr6.eq) goto loc_82EFD0F4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82efd0e8
	if (ctx.cr6.eq) goto loc_82EFD0E8;
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x82efd0f4
	goto loc_82EFD0F4;
loc_82EFD0E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82efd0f4
	if (ctx.cr6.gt) goto loc_82EFD0F4;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82EFD0F4:
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

__attribute__((alias("__imp__sub_82EFD110"))) PPC_WEAK_FUNC(sub_82EFD110);
PPC_FUNC_IMPL(__imp__sub_82EFD110) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efd160
	if (ctx.cr6.eq) goto loc_82EFD160;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efd170
	if (!ctx.cr6.eq) goto loc_82EFD170;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf. r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82efd170
	if (!ctx.cr0.lt) goto loc_82EFD170;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82efd170
	goto loc_82EFD170;
loc_82EFD160:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82EFD170:
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

__attribute__((alias("__imp__sub_82EFD184"))) PPC_WEAK_FUNC(sub_82EFD184);
PPC_FUNC_IMPL(__imp__sub_82EFD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD188"))) PPC_WEAK_FUNC(sub_82EFD188);
PPC_FUNC_IMPL(__imp__sub_82EFD188) {
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
	// bl 0x82efcce8
	ctx.lr = 0x82EFD1A0;
	sub_82EFCCE8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EFD1C8"))) PPC_WEAK_FUNC(sub_82EFD1C8);
PPC_FUNC_IMPL(__imp__sub_82EFD1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFD1D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82efd210
	if (!ctx.cr6.eq) goto loc_82EFD210;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efd254
	if (!ctx.cr6.lt) goto loc_82EFD254;
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82efd284
	goto loc_82EFD284;
loc_82EFD210:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82efd254
	if (!ctx.cr6.eq) goto loc_82EFD254;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82efd254
	if (ctx.cr6.lt) goto loc_82EFD254;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82efd254
	if (!ctx.cr6.lt) goto loc_82EFD254;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82efd284
	goto loc_82EFD284;
loc_82EFD254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efcce8
	ctx.lr = 0x82EFD25C;
	sub_82EFCCE8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EFD284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFD28C"))) PPC_WEAK_FUNC(sub_82EFD28C);
PPC_FUNC_IMPL(__imp__sub_82EFD28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD290"))) PPC_WEAK_FUNC(sub_82EFD290);
PPC_FUNC_IMPL(__imp__sub_82EFD290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFD298;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82efd2e4
	if (!ctx.cr6.eq) goto loc_82EFD2E4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x82efd330
	if (!ctx.cr6.lt) goto loc_82EFD330;
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82efd358
	goto loc_82EFD358;
loc_82EFD2E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82efd330
	if (!ctx.cr6.eq) goto loc_82EFD330;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpd cr6,r30,r8
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r8.s64, ctx.xer);
	// blt cr6,0x82efd330
	if (ctx.cr6.lt) goto loc_82EFD330;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(ctx.r30.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x82efd330
	if (!ctx.cr6.lt) goto loc_82EFD330;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r7,r30,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82efd358
	goto loc_82EFD358;
loc_82EFD330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efcce8
	ctx.lr = 0x82EFD338;
	sub_82EFCCE8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
loc_82EFD358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFD360"))) PPC_WEAK_FUNC(sub_82EFD360);
PPC_FUNC_IMPL(__imp__sub_82EFD360) {
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
	// bl 0x82efcce8
	ctx.lr = 0x82EFD380;
	sub_82EFCCE8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EFD3B0"))) PPC_WEAK_FUNC(sub_82EFD3B0);
PPC_FUNC_IMPL(__imp__sub_82EFD3B0) {
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efd3e0
	if (ctx.cr6.eq) goto loc_82EFD3E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82efd3e8
	if (!ctx.cr6.eq) goto loc_82EFD3E8;
	// bl 0x82efcce8
	ctx.lr = 0x82EFD3DC;
	sub_82EFCCE8(ctx, base);
	// b 0x82efd3e8
	goto loc_82EFD3E8;
loc_82EFD3E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82EFD3E8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD3FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82EFD410"))) PPC_WEAK_FUNC(sub_82EFD410);
PPC_FUNC_IMPL(__imp__sub_82EFD410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EFD418;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFD434;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r27,r11,7817
	ctx.r27.u64 = ctx.r11.u64 | 7817;
	// ori r28,r10,9034
	ctx.r28.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efd46c
	if (ctx.cr0.eq) goto loc_82EFD46C;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82efcb08
	ctx.lr = 0x82EFD464;
	sub_82EFCB08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82efd470
	goto loc_82EFD470;
loc_82EFD46C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EFD470:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efd490
	if (ctx.cr6.eq) goto loc_82EFD490;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFD490:
	// rotlwi r3,r31,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82efd4c0
	if (ctx.cr6.eq) goto loc_82EFD4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efd4c0
	if (ctx.cr0.eq) goto loc_82EFD4C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82efd51c
	goto loc_82EFD51C;
loc_82EFD4C0:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFD4C8;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82efd4f0
	if (ctx.cr0.eq) goto loc_82EFD4F0;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFD4E0;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82efd4f4
	goto loc_82EFD4F4;
loc_82EFD4F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EFD4F4:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efd514
	if (ctx.cr6.eq) goto loc_82EFD514;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFD514:
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFD51C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EFD524"))) PPC_WEAK_FUNC(sub_82EFD524);
PPC_FUNC_IMPL(__imp__sub_82EFD524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD528"))) PPC_WEAK_FUNC(sub_82EFD528);
PPC_FUNC_IMPL(__imp__sub_82EFD528) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82efd544
	if (ctx.cr6.eq) goto loc_82EFD544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82EFD544:
	// li r3,4097
	ctx.r3.s64 = 4097;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFD54C"))) PPC_WEAK_FUNC(sub_82EFD54C);
PPC_FUNC_IMPL(__imp__sub_82EFD54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD550"))) PPC_WEAK_FUNC(sub_82EFD550);
PPC_FUNC_IMPL(__imp__sub_82EFD550) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82efd584
	if (ctx.cr6.eq) goto loc_82EFD584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82efd588
	if (!ctx.cr0.eq) goto loc_82EFD588;
loc_82EFD584:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EFD588:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFD59C"))) PPC_WEAK_FUNC(sub_82EFD59C);
PPC_FUNC_IMPL(__imp__sub_82EFD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD5A0"))) PPC_WEAK_FUNC(sub_82EFD5A0);
PPC_FUNC_IMPL(__imp__sub_82EFD5A0) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efd654
	if (ctx.cr0.eq) goto loc_82EFD654;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFD5EC;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82efd624
	if (ctx.cr0.eq) goto loc_82EFD624;
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
	ctx.lr = 0x82EFD614;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82efd628
	goto loc_82EFD628;
loc_82EFD624:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EFD628:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efd648
	if (ctx.cr6.eq) goto loc_82EFD648;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFD648:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82efd658
	goto loc_82EFD658;
loc_82EFD654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFD658:
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

__attribute__((alias("__imp__sub_82EFD670"))) PPC_WEAK_FUNC(sub_82EFD670);
PPC_FUNC_IMPL(__imp__sub_82EFD670) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFD690;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-9752
	ctx.r11.s64 = ctx.r11.s64 + -9752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82efd6b8
	if (ctx.cr6.eq) goto loc_82EFD6B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFD6B8:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82EFD6D8"))) PPC_WEAK_FUNC(sub_82EFD6D8);
PPC_FUNC_IMPL(__imp__sub_82EFD6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD6EC"))) PPC_WEAK_FUNC(sub_82EFD6EC);
PPC_FUNC_IMPL(__imp__sub_82EFD6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD6F0"))) PPC_WEAK_FUNC(sub_82EFD6F0);
PPC_FUNC_IMPL(__imp__sub_82EFD6F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD704"))) PPC_WEAK_FUNC(sub_82EFD704);
PPC_FUNC_IMPL(__imp__sub_82EFD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD708"))) PPC_WEAK_FUNC(sub_82EFD708);
PPC_FUNC_IMPL(__imp__sub_82EFD708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD71C"))) PPC_WEAK_FUNC(sub_82EFD71C);
PPC_FUNC_IMPL(__imp__sub_82EFD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD720"))) PPC_WEAK_FUNC(sub_82EFD720);
PPC_FUNC_IMPL(__imp__sub_82EFD720) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_82EFD734"))) PPC_WEAK_FUNC(sub_82EFD734);
PPC_FUNC_IMPL(__imp__sub_82EFD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD738"))) PPC_WEAK_FUNC(sub_82EFD738);
PPC_FUNC_IMPL(__imp__sub_82EFD738) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD74C"))) PPC_WEAK_FUNC(sub_82EFD74C);
PPC_FUNC_IMPL(__imp__sub_82EFD74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD750"))) PPC_WEAK_FUNC(sub_82EFD750);
PPC_FUNC_IMPL(__imp__sub_82EFD750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD764"))) PPC_WEAK_FUNC(sub_82EFD764);
PPC_FUNC_IMPL(__imp__sub_82EFD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD768"))) PPC_WEAK_FUNC(sub_82EFD768);
PPC_FUNC_IMPL(__imp__sub_82EFD768) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD77C"))) PPC_WEAK_FUNC(sub_82EFD77C);
PPC_FUNC_IMPL(__imp__sub_82EFD77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD780"))) PPC_WEAK_FUNC(sub_82EFD780);
PPC_FUNC_IMPL(__imp__sub_82EFD780) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD794"))) PPC_WEAK_FUNC(sub_82EFD794);
PPC_FUNC_IMPL(__imp__sub_82EFD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD798"))) PPC_WEAK_FUNC(sub_82EFD798);
PPC_FUNC_IMPL(__imp__sub_82EFD798) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD7AC"))) PPC_WEAK_FUNC(sub_82EFD7AC);
PPC_FUNC_IMPL(__imp__sub_82EFD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD7B0"))) PPC_WEAK_FUNC(sub_82EFD7B0);
PPC_FUNC_IMPL(__imp__sub_82EFD7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD7C4"))) PPC_WEAK_FUNC(sub_82EFD7C4);
PPC_FUNC_IMPL(__imp__sub_82EFD7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD7C8"))) PPC_WEAK_FUNC(sub_82EFD7C8);
PPC_FUNC_IMPL(__imp__sub_82EFD7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD7DC"))) PPC_WEAK_FUNC(sub_82EFD7DC);
PPC_FUNC_IMPL(__imp__sub_82EFD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD7E0"))) PPC_WEAK_FUNC(sub_82EFD7E0);
PPC_FUNC_IMPL(__imp__sub_82EFD7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD7F4"))) PPC_WEAK_FUNC(sub_82EFD7F4);
PPC_FUNC_IMPL(__imp__sub_82EFD7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD7F8"))) PPC_WEAK_FUNC(sub_82EFD7F8);
PPC_FUNC_IMPL(__imp__sub_82EFD7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD80C"))) PPC_WEAK_FUNC(sub_82EFD80C);
PPC_FUNC_IMPL(__imp__sub_82EFD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD810"))) PPC_WEAK_FUNC(sub_82EFD810);
PPC_FUNC_IMPL(__imp__sub_82EFD810) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD824"))) PPC_WEAK_FUNC(sub_82EFD824);
PPC_FUNC_IMPL(__imp__sub_82EFD824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD828"))) PPC_WEAK_FUNC(sub_82EFD828);
PPC_FUNC_IMPL(__imp__sub_82EFD828) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EFD83C"))) PPC_WEAK_FUNC(sub_82EFD83C);
PPC_FUNC_IMPL(__imp__sub_82EFD83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD840"))) PPC_WEAK_FUNC(sub_82EFD840);
PPC_FUNC_IMPL(__imp__sub_82EFD840) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFD85C;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-9672
	ctx.r11.s64 = ctx.r11.s64 + -9672;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,8184
	ctx.r3.s64 = 8184;
	// bl 0x82ef6f58
	ctx.lr = 0x82EFD880;
	sub_82EF6F58(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r31,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r31.u64);
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

__attribute__((alias("__imp__sub_82EFD8A8"))) PPC_WEAK_FUNC(sub_82EFD8A8);
PPC_FUNC_IMPL(__imp__sub_82EFD8A8) {
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
	// bl 0x82efd670
	ctx.lr = 0x82EFD8C8;
	sub_82EFD670(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-9672
	ctx.r11.s64 = ctx.r11.s64 + -9672;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,8184
	ctx.r3.s64 = 8184;
	// bl 0x82ef6f58
	ctx.lr = 0x82EFD8E4;
	sub_82EF6F58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82EFD924"))) PPC_WEAK_FUNC(sub_82EFD924);
PPC_FUNC_IMPL(__imp__sub_82EFD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD928"))) PPC_WEAK_FUNC(sub_82EFD928);
PPC_FUNC_IMPL(__imp__sub_82EFD928) {
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
	// addi r11,r11,-9672
	ctx.r11.s64 = ctx.r11.s64 + -9672;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82efd958
	if (ctx.cr6.eq) goto loc_82EFD958;
	// bl 0x82efcce8
	ctx.lr = 0x82EFD958;
	sub_82EFCCE8(ctx, base);
loc_82EFD958:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efd968
	if (ctx.cr6.eq) goto loc_82EFD968;
	// bl 0x82ef6f80
	ctx.lr = 0x82EFD968;
	sub_82EF6F80(ctx, base);
loc_82EFD968:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efca58
	ctx.lr = 0x82EFD970;
	sub_82EFCA58(ctx, base);
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

__attribute__((alias("__imp__sub_82EFD984"))) PPC_WEAK_FUNC(sub_82EFD984);
PPC_FUNC_IMPL(__imp__sub_82EFD984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFD988"))) PPC_WEAK_FUNC(sub_82EFD988);
PPC_FUNC_IMPL(__imp__sub_82EFD988) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82efd9b8
	if (!ctx.cr6.eq) goto loc_82EFD9B8;
loc_82EFD9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82efda0c
	goto loc_82EFDA0C;
loc_82EFD9B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82efd9cc
	if (ctx.cr6.eq) goto loc_82EFD9CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efcce8
	ctx.lr = 0x82EFD9CC;
	sub_82EFCCE8(ctx, base);
loc_82EFD9CC:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82efd9f8
	if (!ctx.cr6.eq) goto loc_82EFD9F8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82efd9b0
	if (ctx.cr6.eq) goto loc_82EFD9B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFD9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efd9b0
	if (ctx.cr0.eq) goto loc_82EFD9B0;
loc_82EFD9F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82EFDA0C:
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

__attribute__((alias("__imp__sub_82EFDA24"))) PPC_WEAK_FUNC(sub_82EFDA24);
PPC_FUNC_IMPL(__imp__sub_82EFDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFDA28"))) PPC_WEAK_FUNC(sub_82EFDA28);
PPC_FUNC_IMPL(__imp__sub_82EFDA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFDA30;
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82efda90
	if (ctx.cr6.eq) goto loc_82EFDA90;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82efd988
	ctx.lr = 0x82EFDA54;
	sub_82EFD988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82efda90
	if (!ctx.cr0.eq) goto loc_82EFDA90;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82efdb10
	if (!ctx.cr0.gt) goto loc_82EFDB10;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82efdae0
	goto loc_82EFDAE0;
loc_82EFDA90:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r11,r11,8184
	ctx.xer.ca = ctx.r11.u32 <= 8184;
	ctx.r11.s64 = 8184 - ctx.r11.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82efdae8
	if (!ctx.cr6.lt) goto loc_82EFDAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efcce8
	ctx.lr = 0x82EFDAA8;
	sub_82EFCCE8(ctx, base);
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// ble cr6,0x82efdae8
	if (!ctx.cr6.gt) goto loc_82EFDAE8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82efdb10
	if (!ctx.cr0.gt) goto loc_82EFDB10;
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EFDAE0:
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x82efdb10
	goto loc_82EFDB10;
loc_82EFDAE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EFDB00;
	sub_82CA2C60(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EFDB10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFDB18"))) PPC_WEAK_FUNC(sub_82EFDB18);
PPC_FUNC_IMPL(__imp__sub_82EFDB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EFDB20;
	sub_82CA2BE4(ctx, base);
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efdb84
	if (ctx.cr6.eq) goto loc_82EFDB84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82efd988
	ctx.lr = 0x82EFDB44;
	sub_82EFD988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82efdb84
	if (!ctx.cr0.eq) goto loc_82EFDB84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82efdc68
	if (!ctx.cr0.gt) goto loc_82EFDC68;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x82efdc68
	goto loc_82EFDC68;
loc_82EFDB84:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82efdbb4
	if (ctx.cr6.lt) goto loc_82EFDBB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EFDBAC;
	sub_82CA2C60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82efdc5c
	goto loc_82EFDC5C;
loc_82EFDBB4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EFDBC4;
	sub_82CA2C60(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpwi cr6,r30,4096
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4096, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ble cr6,0x82efdc24
	if (!ctx.cr6.gt) goto loc_82EFDC24;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82efdc10
	if (!ctx.cr0.gt) goto loc_82EFDC10;
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82EFDC10:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82efdc1c
	if (!ctx.cr6.eq) goto loc_82EFDC1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFDC1C:
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// b 0x82efdc68
	goto loc_82EFDC68;
loc_82EFDC24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efcda0
	ctx.lr = 0x82EFDC2C;
	sub_82EFCDA0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82efdc44
	if (!ctx.cr6.lt) goto loc_82EFDC44;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EFDC44:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EFDC58;
	sub_82CA2C60(ctx, base);
	// add r3,r27,r30
	ctx.r3.u64 = ctx.r27.u64 + ctx.r30.u64;
loc_82EFDC5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82EFDC68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EFDC70"))) PPC_WEAK_FUNC(sub_82EFDC70);
PPC_FUNC_IMPL(__imp__sub_82EFDC70) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFDC8C;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9592
	ctx.r11.s64 = ctx.r11.s64 + -9592;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFDCA8;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82efdce0
	if (ctx.cr0.eq) goto loc_82EFDCE0;
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
	ctx.lr = 0x82EFDCD0;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82efdce4
	goto loc_82EFDCE4;
loc_82EFDCE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82EFDCE4:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efdd04
	if (ctx.cr6.eq) goto loc_82EFDD04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFDD04:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82EFDD24"))) PPC_WEAK_FUNC(sub_82EFDD24);
PPC_FUNC_IMPL(__imp__sub_82EFDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFDD28"))) PPC_WEAK_FUNC(sub_82EFDD28);
PPC_FUNC_IMPL(__imp__sub_82EFDD28) {
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
	// bl 0x82efca58
	ctx.lr = 0x82EFDD48;
	sub_82EFCA58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efdd58
	if (ctx.cr0.eq) goto loc_82EFDD58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFDD58;
	sub_82EF6F38(ctx, base);
loc_82EFDD58:
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

__attribute__((alias("__imp__sub_82EFDD74"))) PPC_WEAK_FUNC(sub_82EFDD74);
PPC_FUNC_IMPL(__imp__sub_82EFDD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFDD78"))) PPC_WEAK_FUNC(sub_82EFDD78);
PPC_FUNC_IMPL(__imp__sub_82EFDD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EFDD80;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	ctx.lr = 0x82EFDD98;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9592
	ctx.r11.s64 = ctx.r11.s64 + -9592;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFDDB4;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r26,r11,7817
	ctx.r26.u64 = ctx.r11.u64 | 7817;
	// ori r27,r10,9034
	ctx.r27.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efddec
	if (ctx.cr0.eq) goto loc_82EFDDEC;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efcb08
	ctx.lr = 0x82EFDDE4;
	sub_82EFCB08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82efddf0
	goto loc_82EFDDF0;
loc_82EFDDEC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EFDDF0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efde10
	if (ctx.cr6.eq) goto loc_82EFDE10;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFDE10:
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82efde90
	if (ctx.cr6.eq) goto loc_82EFDE90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82efde90
	if (!ctx.cr0.eq) goto loc_82EFDE90;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFDE40;
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82efde68
	if (ctx.cr0.eq) goto loc_82EFDE68;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFDE58;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82efde6c
	goto loc_82EFDE6C;
loc_82EFDE68:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EFDE6C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82efde8c
	if (ctx.cr6.eq) goto loc_82EFDE8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFDE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFDE8C:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82EFDE90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EFDE9C"))) PPC_WEAK_FUNC(sub_82EFDE9C);
PPC_FUNC_IMPL(__imp__sub_82EFDE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFDEA0"))) PPC_WEAK_FUNC(sub_82EFDEA0);
PPC_FUNC_IMPL(__imp__sub_82EFDEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFDEA8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efdf00
	if (ctx.cr0.eq) goto loc_82EFDF00;
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// mulli r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 * 48;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82efdee8
	if (ctx.cr0.lt) goto loc_82EFDEE8;
loc_82EFDED4:
	// addi r30,r30,-48
	ctx.r30.s64 = ctx.r30.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efd928
	ctx.lr = 0x82EFDEE0;
	sub_82EFD928(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82efded4
	if (!ctx.cr0.lt) goto loc_82EFDED4;
loc_82EFDEE8:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efdef8
	if (ctx.cr0.eq) goto loc_82EFDEF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fe010
	ctx.lr = 0x82EFDEF8;
	sub_824FE010(ctx, base);
loc_82EFDEF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82efdf1c
	goto loc_82EFDF1C;
loc_82EFDF00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efd928
	ctx.lr = 0x82EFDF08;
	sub_82EFD928(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efdf18
	if (ctx.cr0.eq) goto loc_82EFDF18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFDF18;
	sub_82EF6F38(ctx, base);
loc_82EFDF18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EFDF1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFDF24"))) PPC_WEAK_FUNC(sub_82EFDF24);
PPC_FUNC_IMPL(__imp__sub_82EFDF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFDF28"))) PPC_WEAK_FUNC(sub_82EFDF28);
PPC_FUNC_IMPL(__imp__sub_82EFDF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bgt cr6,0x82efdf38
	if (ctx.cr6.gt) goto loc_82EFDF38;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EFDF38:
	// cmplwi cr6,r3,2047
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2047, ctx.xer);
	// bgt cr6,0x82efdf48
	if (ctx.cr6.gt) goto loc_82EFDF48;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82EFDF48:
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bgt cr6,0x82efdf58
	if (ctx.cr6.gt) goto loc_82EFDF58;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82EFDF58:
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82efdf70
	if (ctx.cr6.gt) goto loc_82EFDF70;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82EFDF70:
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82efdf88
	if (ctx.cr6.gt) goto loc_82EFDF88;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82EFDF88:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFDFA8"))) PPC_WEAK_FUNC(sub_82EFDFA8);
PPC_FUNC_IMPL(__imp__sub_82EFDFA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82efdfc4
	if (!ctx.cr0.eq) goto loc_82EFDFC4;
loc_82EFDFBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EFDFC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm. r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r8,r9,0,24,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r8,192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 192, ctx.xer);
	// bne cr6,0x82efe024
	if (!ctx.cr6.eq) goto loc_82EFE024;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r7,r3,6,21,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
loc_82EFE00C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82EFE018:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65533
	ctx.r3.u64 = ctx.r3.u64 | 65533;
	// blr 
	return;
loc_82EFE024:
	// rlwinm r8,r9,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r8,224
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 224, ctx.xer);
	// bne cr6,0x82efe0b0
	if (!ctx.cr6.eq) goto loc_82EFE0B0;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r3,12,16,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xF000;
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r7,r7,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,6,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFC0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,2048
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2048, ctx.xer);
	// blt cr6,0x82efe018
	if (ctx.cr6.lt) goto loc_82EFE018;
	// cmplwi cr6,r3,55296
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 55296, ctx.xer);
	// blt cr6,0x82efe09c
	if (ctx.cr6.lt) goto loc_82EFE09C;
	// cmplwi cr6,r3,57343
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57343, ctx.xer);
	// ble cr6,0x82efe018
	if (!ctx.cr6.gt) goto loc_82EFE018;
loc_82EFE09C:
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// beq cr6,0x82efe018
	if (ctx.cr6.eq) goto loc_82EFE018;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82efe018
	goto loc_82EFE018;
loc_82EFE0B0:
	// rlwinm r8,r9,0,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r8,240
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 240, ctx.xer);
	// bne cr6,0x82efe138
	if (!ctx.cr6.eq) goto loc_82EFE138;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r3,18,11,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1C0000;
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r7,r7,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,12,14,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,6,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFC0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// b 0x82efe2bc
	goto loc_82EFE2BC;
loc_82EFE138:
	// rlwinm r8,r9,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC;
	// cmplwi cr6,r8,248
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 248, ctx.xer);
	// bne cr6,0x82efe1e8
	if (!ctx.cr6.eq) goto loc_82EFE1E8;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r3,24,6,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0x3000000;
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r7,r7,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,18,8,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFC0000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,12,14,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,6,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFC0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// b 0x82efe2bc
	goto loc_82EFE2BC;
loc_82EFE1E8:
	// rlwinm r9,r9,0,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// cmplwi cr6,r9,252
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 252, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r8,r3,30,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x40000000;
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r7,r7,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,24,2,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F000000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,18,8,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFC0000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,12,14,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,6,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFC0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82efdfbc
	if (ctx.cr0.eq) goto loc_82EFDFBC;
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82efe018
	if (!ctx.cr6.eq) goto loc_82EFE018;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
loc_82EFE2BC:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// b 0x82efe00c
	goto loc_82EFE00C;
}

__attribute__((alias("__imp__sub_82EFE2C4"))) PPC_WEAK_FUNC(sub_82EFE2C4);
PPC_FUNC_IMPL(__imp__sub_82EFE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE2C8"))) PPC_WEAK_FUNC(sub_82EFE2C8);
PPC_FUNC_IMPL(__imp__sub_82EFE2C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,127
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 127, ctx.xer);
	// bgt cr6,0x82efe2d8
	if (ctx.cr6.gt) goto loc_82EFE2D8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82efe4b0
	goto loc_82EFE4B0;
loc_82EFE2D8:
	// cmplwi cr6,r5,2047
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2047, ctx.xer);
	// bgt cr6,0x82efe300
	if (ctx.cr6.gt) goto loc_82EFE300;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-64
	ctx.r11.s64 = -64;
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// rlwimi r11,r5,26,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwimi r5,r9,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// b 0x82efe4a4
	goto loc_82EFE4A4;
loc_82EFE300:
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// bgt cr6,0x82efe340
	if (ctx.cr6.gt) goto loc_82EFE340;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-32
	ctx.r11.s64 = -32;
	// li r9,-128
	ctx.r9.s64 = -128;
	// rlwimi r11,r5,20,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwimi r9,r5,26,26,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0x3F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbx r11,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u8);
	// lis r10,511
	ctx.r10.s64 = 33488896;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// rlwimi r5,r10,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// b 0x82efe4a4
	goto loc_82EFE4A4;
loc_82EFE340:
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82efe3a8
	if (ctx.cr6.gt) goto loc_82EFE3A8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,-16
	ctx.r10.s64 = -16;
	// li r11,-128
	ctx.r11.s64 = -128;
	// rlwimi r10,r5,14,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r11,r5,26,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// rlwimi r8,r5,20,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwimi r5,r11,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stbx r9,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x82efe4a4
	goto loc_82EFE4A4;
loc_82EFE3A8:
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82efe414
	if (ctx.cr6.gt) goto loc_82EFE414;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-128
	ctx.r11.s64 = -128;
	// li r10,-8
	ctx.r10.s64 = -8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r10,r5,8,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwimi r11,r5,26,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// rlwimi r8,r5,14,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lis r9,511
	ctx.r9.s64 = 33488896;
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// rlwimi r7,r5,20,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// rlwimi r5,r9,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// b 0x82efe494
	goto loc_82EFE494;
loc_82EFE414:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,-128
	ctx.r11.s64 = -128;
	// li r10,-4
	ctx.r10.s64 = -4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwimi r10,r5,2,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r11,r5,26,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 26) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// rlwimi r8,r5,8,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lis r11,511
	ctx.r11.s64 = 33488896;
	// rlwimi r7,r5,14,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwimi r6,r5,20,26,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 20) & 0x3F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwimi r5,r11,7,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r8,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
loc_82EFE494:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_82EFE4A4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82EFE4B0:
	// stbx r5,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE4C4"))) PPC_WEAK_FUNC(sub_82EFE4C4);
PPC_FUNC_IMPL(__imp__sub_82EFE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE4C8"))) PPC_WEAK_FUNC(sub_82EFE4C8);
PPC_FUNC_IMPL(__imp__sub_82EFE4C8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82efe518
	if (ctx.cr6.eq) goto loc_82EFE518;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82efe53c
	if (!ctx.cr6.gt) goto loc_82EFE53C;
loc_82EFE4F0:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efe53c
	if (ctx.cr0.eq) goto loc_82EFE53C;
	// bl 0x82efdf28
	ctx.lr = 0x82EFE500;
	sub_82EFDF28(ctx, base);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82efe4f0
	if (ctx.cr6.lt) goto loc_82EFE4F0;
	// b 0x82efe53c
	goto loc_82EFE53C;
loc_82EFE518:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// b 0x82efe534
	goto loc_82EFE534;
loc_82EFE520:
	// bl 0x82efdf28
	ctx.lr = 0x82EFE524;
	sub_82EFDF28(ctx, base);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
loc_82EFE534:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82efe520
	if (!ctx.cr0.eq) goto loc_82EFE520;
loc_82EFE53C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE550"))) PPC_WEAK_FUNC(sub_82EFE550);
PPC_FUNC_IMPL(__imp__sub_82EFE550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFE558;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82efe5a8
	if (ctx.cr6.eq) goto loc_82EFE5A8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82efe5cc
	if (!ctx.cr6.gt) goto loc_82EFE5CC;
loc_82EFE580:
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x82efe5cc
	if (ctx.cr0.eq) goto loc_82EFE5CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82efe2c8
	ctx.lr = 0x82EFE594;
	sub_82EFE2C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82efe580
	if (ctx.cr6.lt) goto loc_82EFE580;
	// b 0x82efe5cc
	goto loc_82EFE5CC;
loc_82EFE5A8:
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// b 0x82efe5c4
	goto loc_82EFE5C4;
loc_82EFE5B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82efe2c8
	ctx.lr = 0x82EFE5B8;
	sub_82EFE2C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
loc_82EFE5C4:
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82efe5b0
	if (!ctx.cr0.eq) goto loc_82EFE5B0;
loc_82EFE5CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r28,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFE5DC"))) PPC_WEAK_FUNC(sub_82EFE5DC);
PPC_FUNC_IMPL(__imp__sub_82EFE5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE5E0"))) PPC_WEAK_FUNC(sub_82EFE5E0);
PPC_FUNC_IMPL(__imp__sub_82EFE5E0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82efe65c
	if (!ctx.cr6.eq) goto loc_82EFE65C;
	// b 0x82efe61c
	goto loc_82EFE61C;
loc_82EFE600:
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// blt cr6,0x82efe610
	if (ctx.cr6.lt) goto loc_82EFE610;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65533
	ctx.r3.u64 = ctx.r3.u64 | 65533;
loc_82EFE610:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82EFE61C:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE624;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82efe600
	if (!ctx.cr0.eq) goto loc_82EFE600;
	// b 0x82efe664
	goto loc_82EFE664;
loc_82EFE630:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE638;
	sub_82EFDFA8(ctx, base);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efe664
	if (ctx.cr0.eq) goto loc_82EFE664;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// blt cr6,0x82efe654
	if (ctx.cr6.lt) goto loc_82EFE654;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65533
	ctx.r3.u64 = ctx.r3.u64 | 65533;
loc_82EFE654:
	// sth r3,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r3.u16);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82EFE65C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x82efe630
	if (ctx.cr6.gt) goto loc_82EFE630;
loc_82EFE664:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE67C"))) PPC_WEAK_FUNC(sub_82EFE67C);
PPC_FUNC_IMPL(__imp__sub_82EFE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE680"))) PPC_WEAK_FUNC(sub_82EFE680);
PPC_FUNC_IMPL(__imp__sub_82EFE680) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82efe6d4
	if (ctx.cr6.eq) goto loc_82EFE6D4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82efe6e4
	if (!ctx.cr6.gt) goto loc_82EFE6E4;
loc_82EFE6A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE6B0;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efe6e4
	if (ctx.cr0.eq) goto loc_82EFE6E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82efe6a8
	if (ctx.cr6.lt) goto loc_82EFE6A8;
	// b 0x82efe6e4
	goto loc_82EFE6E4;
loc_82EFE6D0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82EFE6D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE6DC;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82efe6d0
	if (!ctx.cr0.eq) goto loc_82EFE6D0;
loc_82EFE6E4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE6F8"))) PPC_WEAK_FUNC(sub_82EFE6F8);
PPC_FUNC_IMPL(__imp__sub_82EFE6F8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82efe750
	if (ctx.cr6.eq) goto loc_82EFE750;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82efe778
	if (!ctx.cr6.gt) goto loc_82EFE778;
loc_82EFE720:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82efe778
	if (!ctx.cr6.gt) goto loc_82EFE778;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE734;
	sub_82EFDFA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efe778
	if (ctx.cr0.eq) goto loc_82EFE778;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82efe720
	if (ctx.cr6.lt) goto loc_82EFE720;
	// b 0x82efe778
	goto loc_82EFE778;
loc_82EFE750:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82efe778
	if (!ctx.cr6.gt) goto loc_82EFE778;
loc_82EFE758:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bl 0x82efdfa8
	ctx.lr = 0x82EFE764;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efe774
	if (ctx.cr0.eq) goto loc_82EFE774;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x82efe758
	if (ctx.cr6.gt) goto loc_82EFE758;
loc_82EFE774:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EFE778:
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE78C"))) PPC_WEAK_FUNC(sub_82EFE78C);
PPC_FUNC_IMPL(__imp__sub_82EFE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE790"))) PPC_WEAK_FUNC(sub_82EFE790);
PPC_FUNC_IMPL(__imp__sub_82EFE790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x82efe818
	if (ctx.cr6.eq) goto loc_82EFE818;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82efe7f8
	if (ctx.cr6.eq) goto loc_82EFE7F8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82efe7f0
	if (ctx.cr6.eq) goto loc_82EFE7F0;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r6,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// blr 
	return;
loc_82EFE7F0:
	// stbx r6,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u8);
	// blr 
	return;
loc_82EFE7F8:
	// mulli r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 * 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r6,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r6,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// blr 
	return;
loc_82EFE818:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rlwimi r10,r6,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r6,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE840"))) PPC_WEAK_FUNC(sub_82EFE840);
PPC_FUNC_IMPL(__imp__sub_82EFE840) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82efe88c
	if (ctx.cr6.eq) goto loc_82EFE88C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82efe87c
	if (ctx.cr6.eq) goto loc_82EFE87C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82efe874
	if (!ctx.cr6.gt) goto loc_82EFE874;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82efe86c
	if (!ctx.cr6.gt) goto loc_82EFE86C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x82efe874
	if (!ctx.cr6.eq) goto loc_82EFE874;
loc_82EFE86C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82EFE874:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EFE87C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// blr 
	return;
loc_82EFE88C:
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFE894"))) PPC_WEAK_FUNC(sub_82EFE894);
PPC_FUNC_IMPL(__imp__sub_82EFE894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFE898"))) PPC_WEAK_FUNC(sub_82EFE898);
PPC_FUNC_IMPL(__imp__sub_82EFE898) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EFE8A0;
	sub_82CA2BE4(ctx, base);
	// rlwinm r29,r4,29,3,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r28,r8,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82efe8f4
	if (!ctx.cr6.eq) goto loc_82EFE8F4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82efeb18
	if (!ctx.cr6.eq) goto loc_82EFEB18;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
loc_82EFE8C8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lbz r8,3(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stbx r8,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// blt cr6,0x82efe8c8
	if (ctx.cr6.lt) goto loc_82EFE8C8;
loc_82EFE8EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82efeb1c
	goto loc_82EFEB1C;
loc_82EFE8F4:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82efe958
	if (!ctx.cr6.eq) goto loc_82EFE958;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82efeb18
	if (!ctx.cr6.eq) goto loc_82EFEB18;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
loc_82EFE914:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// divwu r8,r8,r30
	ctx.r8.u32 = ctx.r8.u32 / ctx.r30.u32;
	// stbx r8,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// blt cr6,0x82efe914
	if (ctx.cr6.lt) goto loc_82EFE914;
	// b 0x82efe8ec
	goto loc_82EFE8EC;
loc_82EFE958:
	// cmpwi cr6,r5,100
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 100, ctx.xer);
	// bne cr6,0x82efea64
	if (!ctx.cr6.eq) goto loc_82EFEA64;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x82efe9e0
	if (!ctx.cr6.eq) goto loc_82EFE9E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EFE97C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq 0x82efe9a8
	if (ctx.cr0.eq) goto loc_82EFE9A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82efe9c4
	goto loc_82EFE9C4;
loc_82EFE9A8:
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r27,3
	ctx.r27.s64 = 3;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
loc_82EFE9C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82efe97c
	if (ctx.cr6.lt) goto loc_82EFE97C;
	// b 0x82efe8ec
	goto loc_82EFE8EC;
loc_82EFE9E0:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82efe9f0
	if (ctx.cr6.eq) goto loc_82EFE9F0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82efeb18
	if (!ctx.cr6.eq) goto loc_82EFEB18;
loc_82EFE9F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
loc_82EFEA00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// lbzx r8,r5,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stbx r31,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u8);
	// lbz r31,1(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r31,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r31.u8);
	// lbz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r4,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r4.u8);
	// bne cr6,0x82efea50
	if (!ctx.cr6.eq) goto loc_82EFEA50;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stb r8,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r8.u8);
loc_82EFEA50:
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82efea00
	if (ctx.cr6.lt) goto loc_82EFEA00;
	// b 0x82efe8ec
	goto loc_82EFE8EC;
loc_82EFEA64:
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bne cr6,0x82efeb18
	if (!ctx.cr6.eq) goto loc_82EFEB18;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82efeac0
	if (!ctx.cr6.eq) goto loc_82EFEAC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
loc_82EFEA84:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stbx r8,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82efea84
	if (ctx.cr6.lt) goto loc_82EFEA84;
	// b 0x82efe8ec
	goto loc_82EFE8EC;
loc_82EFEAC0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82efeb18
	if (!ctx.cr6.eq) goto loc_82EFEB18;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efe8ec
	if (ctx.cr6.eq) goto loc_82EFE8EC;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82EFEADC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82efe8ec
	if (!ctx.cr6.lt) goto loc_82EFE8EC;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stbx r8,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lbzx r5,r9,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82efeadc
	if (ctx.cr6.lt) goto loc_82EFEADC;
	// b 0x82efe8ec
	goto loc_82EFE8EC;
loc_82EFEB18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFEB1C:
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82EFEB20"))) PPC_WEAK_FUNC(sub_82EFEB20);
PPC_FUNC_IMPL(__imp__sub_82EFEB20) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82efeb7c
	if (ctx.cr0.eq) goto loc_82EFEB7C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82EFEB7C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq 0x82efebac
	if (ctx.cr0.eq) goto loc_82EFEBAC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_82EFEBAC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r11,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq 0x82efebdc
	if (ctx.cr0.eq) goto loc_82EFEBDC;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwimi r8,r10,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r8,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r4,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82EFEBDC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq 0x82efec10
	if (ctx.cr0.eq) goto loc_82EFEC10;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r9,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r4,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
loc_82EFEC10:
	// rlwinm. r9,r11,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 + 44;
	// beq 0x82efee60
	if (ctx.cr0.eq) goto loc_82EFEE60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82efec50
	if (ctx.cr6.eq) goto loc_82EFEC50;
loc_82EFEC48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82efee78
	goto loc_82EFEE78;
loc_82EFEC50:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r31,r4,16,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r4,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r31,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r30,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm. r4,r8,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq 0x82efecf0
	if (ctx.cr0.eq) goto loc_82EFECF0;
	// lis r11,13652
	ctx.r11.s64 = 894697472;
	// ori r11,r11,22596
	ctx.r11.u64 = ctx.r11.u64 | 22596;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82efecb8
	if (!ctx.cr6.eq) goto loc_82EFECB8;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82efece4
	goto loc_82EFECE4;
loc_82EFECB8:
	// lis r11,13140
	ctx.r11.s64 = 861143040;
	// ori r11,r11,22596
	ctx.r11.u64 = ctx.r11.u64 | 22596;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82efecd0
	if (!ctx.cr6.eq) goto loc_82EFECD0;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82efece4
	goto loc_82EFECE4;
loc_82EFECD0:
	// lis r11,12628
	ctx.r11.s64 = 827588608;
	// ori r11,r11,22596
	ctx.r11.u64 = ctx.r11.u64 | 22596;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82efece8
	if (!ctx.cr6.eq) goto loc_82EFECE8;
	// li r11,10
	ctx.r11.s64 = 10;
loc_82EFECE4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82EFECE8:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// b 0x82efee50
	goto loc_82EFEE50;
loc_82EFECF0:
	// rlwinm. r11,r8,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82efed00
	if (!ctx.cr0.eq) goto loc_82EFED00;
	// rlwinm. r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82efee50
	if (ctx.cr0.eq) goto loc_82EFEE50;
loc_82EFED00:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r4,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq cr6,0x82efed30
	if (ctx.cr6.eq) goto loc_82EFED30;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82EFED30:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82efed5c
	if (ctx.cr6.eq) goto loc_82EFED5C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82efed54
	if (ctx.cr6.eq) goto loc_82EFED54;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82efed6c
	if (!ctx.cr6.eq) goto loc_82EFED6C;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82efed6c
	goto loc_82EFED6C;
loc_82EFED54:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82efed68
	goto loc_82EFED68;
loc_82EFED5C:
	// rlwinm. r4,r8,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82efed6c
	if (ctx.cr0.eq) goto loc_82EFED6C;
	// li r4,9
	ctx.r4.s64 = 9;
loc_82EFED68:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
loc_82EFED6C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82efed84
	if (!ctx.cr6.eq) goto loc_82EFED84;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82EFED84:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efedb4
	if (ctx.cr6.eq) goto loc_82EFEDB4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r4,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_82EFEDB4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efede4
	if (ctx.cr6.eq) goto loc_82EFEDE4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r4,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82EFEDE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efee14
	if (ctx.cr6.eq) goto loc_82EFEE14;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r4,r11,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r4,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
loc_82EFEE14:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efee50
	if (ctx.cr6.eq) goto loc_82EFEE50;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82efee50
	if (ctx.cr0.eq) goto loc_82EFEE50;
	// stb r9,20(r6)
	PPC_STORE_U8(ctx.r6.u32 + 20, ctx.r9.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
loc_82EFEE50:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82efee64
	if (!ctx.cr6.eq) goto loc_82EFEE64;
	// b 0x82efec48
	goto loc_82EFEC48;
loc_82EFEE60:
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
loc_82EFEE64:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82efee74
	if (ctx.cr6.eq) goto loc_82EFEE74;
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82EFEE74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EFEE78:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEE84"))) PPC_WEAK_FUNC(sub_82EFEE84);
PPC_FUNC_IMPL(__imp__sub_82EFEE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFEE88"))) PPC_WEAK_FUNC(sub_82EFEE88);
PPC_FUNC_IMPL(__imp__sub_82EFEE88) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi. r10,r3,8
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82efeea8
	if (!ctx.cr0.eq) goto loc_82EFEEA8;
	// rlwinm r3,r3,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82efeed8
	goto loc_82EFEED8;
loc_82EFEEA8:
	// clrlwi. r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82efeebc
	if (!ctx.cr0.eq) goto loc_82EFEEBC;
	// rlwinm r3,r3,16,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82efeed8
	goto loc_82EFEED8;
loc_82EFEEBC:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82efeed8
	if (!ctx.cr0.eq) goto loc_82EFEED8;
	// rlwinm r3,r3,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82efeed8
	goto loc_82EFEED8;
loc_82EFEED0:
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82EFEED8:
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82efeed0
	if (ctx.cr0.eq) goto loc_82EFEED0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEEE8"))) PPC_WEAK_FUNC(sub_82EFEEE8);
PPC_FUNC_IMPL(__imp__sub_82EFEEE8) {
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
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x82efef28
	if (!ctx.cr6.eq) goto loc_82EFEF28;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82efef0c
	if (!ctx.cr6.lt) goto loc_82EFEF0C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EFEF0C:
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82efef1c
	if (!ctx.cr6.lt) goto loc_82EFEF1C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EFEF1C:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82efef6c
	goto loc_82EFEF6C;
loc_82EFEF28:
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// blt cr6,0x82efef64
	if (ctx.cr6.lt) goto loc_82EFEF64;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bgt cr6,0x82efef64
	if (ctx.cr6.gt) goto loc_82EFEF64;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82efef48
	if (!ctx.cr6.lt) goto loc_82EFEF48;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EFEF48:
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82efef58
	if (!ctx.cr6.lt) goto loc_82EFEF58;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EFEF58:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82efef6c
	goto loc_82EFEF6C;
loc_82EFEF64:
	// bl 0x82efe840
	ctx.lr = 0x82EFEF68;
	sub_82EFE840(ctx, base);
	// mullw r3,r3,r5
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
loc_82EFEF6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EFEF7C"))) PPC_WEAK_FUNC(sub_82EFEF7C);
PPC_FUNC_IMPL(__imp__sub_82EFEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFEF80"))) PPC_WEAK_FUNC(sub_82EFEF80);
PPC_FUNC_IMPL(__imp__sub_82EFEF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFEF88;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82efefac
	if (!ctx.cr6.gt) goto loc_82EFEFAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eff074
	goto loc_82EFF074;
loc_82EFEFAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82efefec
	if (!ctx.cr6.eq) goto loc_82EFEFEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82efefc4
	if (ctx.cr6.eq) goto loc_82EFEFC4;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EFEFC4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82efefd4
	if (ctx.cr6.eq) goto loc_82EFEFD4;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82EFEFD4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82efefe4
	if (ctx.cr6.eq) goto loc_82EFEFE4;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82EFEFE4:
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82eff074
	goto loc_82EFF074;
loc_82EFEFEC:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,16(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// beq cr6,0x82eff044
	if (ctx.cr6.eq) goto loc_82EFF044;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82EFF008:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82efeee8
	ctx.lr = 0x82EFF010;
	sub_82EFEEE8(ctx, base);
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x82eff028
	if (ctx.cr6.lt) goto loc_82EFF028;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82EFF028:
	// rlwinm r11,r5,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82eff03c
	if (ctx.cr6.lt) goto loc_82EFF03C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82EFF03C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82eff008
	if (!ctx.cr0.eq) goto loc_82EFF008;
loc_82EFF044:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82eff050
	if (ctx.cr6.eq) goto loc_82EFF050;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
loc_82EFF050:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82eff05c
	if (ctx.cr6.eq) goto loc_82EFF05C;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
loc_82EFF05C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82eff070
	if (ctx.cr6.eq) goto loc_82EFF070;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82efe840
	ctx.lr = 0x82EFF06C;
	sub_82EFE840(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_82EFF070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EFF074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFF07C"))) PPC_WEAK_FUNC(sub_82EFF07C);
PPC_FUNC_IMPL(__imp__sub_82EFF07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF080"))) PPC_WEAK_FUNC(sub_82EFF080);
PPC_FUNC_IMPL(__imp__sub_82EFF080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82EFF088;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r26,r24,16
	ctx.r26.s64 = ctx.r24.s64 + 16;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82eff0b0
	if (ctx.cr6.lt) goto loc_82EFF0B0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82eff0b4
	if (!ctx.cr6.gt) goto loc_82EFF0B4;
loc_82EFF0B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EFF0B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eff274
	if (!ctx.cr0.eq) goto loc_82EFF274;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82eff0d0
	if (ctx.cr6.eq) goto loc_82EFF0D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eff274
	if (!ctx.cr6.eq) goto loc_82EFF274;
loc_82EFF0D0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82efee88
	ctx.lr = 0x82EFF0D8;
	sub_82EFEE88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82efee88
	ctx.lr = 0x82EFF0E4;
	sub_82EFEE88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82efee88
	ctx.lr = 0x82EFF0F0;
	sub_82EFEE88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82efee88
	ctx.lr = 0x82EFF0FC;
	sub_82EFEE88(ctx, base);
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82eff274
	if (!ctx.cr6.gt) goto loc_82EFF274;
loc_82EFF110:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82efef80
	ctx.lr = 0x82EFF128;
	sub_82EFEF80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eff264
	if (ctx.cr6.eq) goto loc_82EFF264;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82EFF140:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82eff1bc
	if (!ctx.cr6.eq) goto loc_82EFF1BC;
	// mulli r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 * 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eff254
	if (ctx.cr6.eq) goto loc_82EFF254;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EFF178:
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r22,-1(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 | ctx.r23.u64;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 | ctx.r22.u64;
	// srw r23,r6,r9
	ctx.r23.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r22,r6,r8
	ctx.r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// srw r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x82eff178
	if (!ctx.cr0.eq) goto loc_82EFF178;
	// b 0x82eff254
	goto loc_82EFF254;
loc_82EFF1BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82eff254
	if (!ctx.cr6.eq) goto loc_82EFF254;
	// rlwinm. r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82eff254
	if (ctx.cr0.eq) goto loc_82EFF254;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_82EFF1E8:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r23,1(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r21,-1(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// or r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 | ctx.r23.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 | ctx.r21.u64;
	// srw r23,r10,r9
	ctx.r23.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// stb r23,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// srw r22,r10,r8
	ctx.r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r21,r10,r7
	ctx.r21.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// stb r21,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r21.u8);
	// lbz r23,20(r28)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi r23,0
	ctx.cr0.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq 0x82eff240
	if (ctx.cr0.eq) goto loc_82EFF240;
	// clrlwi r23,r25,24
	ctx.r23.u64 = ctx.r25.u32 & 0xFF;
	// srw r10,r10,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r23.u8 & 0x3F));
	// b 0x82eff244
	goto loc_82EFF244;
loc_82EFF240:
	// li r10,255
	ctx.r10.s64 = 255;
loc_82EFF244:
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82eff1e8
	if (!ctx.cr0.eq) goto loc_82EFF1E8;
loc_82EFF254:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// bne 0x82eff140
	if (!ctx.cr0.eq) goto loc_82EFF140;
loc_82EFF264:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82eff110
	if (ctx.cr6.lt) goto loc_82EFF110;
loc_82EFF274:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82EFF27C"))) PPC_WEAK_FUNC(sub_82EFF27C);
PPC_FUNC_IMPL(__imp__sub_82EFF27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF280"))) PPC_WEAK_FUNC(sub_82EFF280);
PPC_FUNC_IMPL(__imp__sub_82EFF280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFF288;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFF298;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-9516
	ctx.r11.s64 = ctx.r11.s64 + -9516;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eff328
	if (ctx.cr6.eq) goto loc_82EFF328;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFF2CC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq 0x82eff328
	if (ctx.cr0.eq) goto loc_82EFF328;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82f17928
	ctx.lr = 0x82EFF314;
	sub_82F17928(ctx, base);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ca2c60
	ctx.lr = 0x82EFF324;
	sub_82CA2C60(ctx, base);
	// b 0x82eff354
	goto loc_82EFF354;
loc_82EFF328:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82f57778
	ctx.lr = 0x82EFF354;
	sub_82F57778(ctx, base);
loc_82EFF354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFF360"))) PPC_WEAK_FUNC(sub_82EFF360);
PPC_FUNC_IMPL(__imp__sub_82EFF360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EFF368;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EFF380;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-9516
	ctx.r11.s64 = ctx.r11.s64 + -9516;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82efe840
	ctx.lr = 0x82EFF3A8;
	sub_82EFE840(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82efeee8
	ctx.lr = 0x82EFF3B8;
	sub_82EFEEE8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFF3C0;
	sub_82EF6EF8(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82eff3ec
	if (ctx.cr0.eq) goto loc_82EFF3EC;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82EFF3E8;
	sub_82CA3190(ctx, base);
	// b 0x82eff414
	goto loc_82EFF414;
loc_82EFF3EC:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// bl 0x82f57778
	ctx.lr = 0x82EFF414;
	sub_82F57778(ctx, base);
loc_82EFF414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82EFF424"))) PPC_WEAK_FUNC(sub_82EFF424);
PPC_FUNC_IMPL(__imp__sub_82EFF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF428"))) PPC_WEAK_FUNC(sub_82EFF428);
PPC_FUNC_IMPL(__imp__sub_82EFF428) {
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
	// addi r11,r11,-9516
	ctx.r11.s64 = ctx.r11.s64 + -9516;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eff458
	if (ctx.cr6.eq) goto loc_82EFF458;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFF458;
	sub_82EF6F38(ctx, base);
loc_82EFF458:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82f57778
	ctx.lr = 0x82EFF468;
	sub_82F57778(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82eff478
	if (ctx.cr6.eq) goto loc_82EFF478;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFF478;
	sub_82EF6F38(ctx, base);
loc_82EFF478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EFF480;
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

__attribute__((alias("__imp__sub_82EFF494"))) PPC_WEAK_FUNC(sub_82EFF494);
PPC_FUNC_IMPL(__imp__sub_82EFF494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF498"))) PPC_WEAK_FUNC(sub_82EFF498);
PPC_FUNC_IMPL(__imp__sub_82EFF498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EFF4A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFF4B8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82eff4ec
	if (ctx.cr0.eq) goto loc_82EFF4EC;
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
	// bl 0x82eff360
	ctx.lr = 0x82EFF4E8;
	sub_82EFF360(ctx, base);
	// b 0x82eff4f0
	goto loc_82EFF4F0;
loc_82EFF4EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFF4F0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82eff50c
	if (ctx.cr6.eq) goto loc_82EFF50C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82eff50c
	if (ctx.cr6.eq) goto loc_82EFF50C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82eff524
	if (!ctx.cr6.eq) goto loc_82EFF524;
loc_82EFF50C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFF524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82EFF52C"))) PPC_WEAK_FUNC(sub_82EFF52C);
PPC_FUNC_IMPL(__imp__sub_82EFF52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFF530"))) PPC_WEAK_FUNC(sub_82EFF530);
PPC_FUNC_IMPL(__imp__sub_82EFF530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82EFF538;
	sub_82CA2BB0(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17696(r1)
	ea = -17696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82effbb8
	if (ctx.cr6.eq) goto loc_82EFFBB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82effbb8
	if (ctx.cr0.eq) goto loc_82EFFBB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r23.u8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r23.u8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r23.u16);
	// addi r4,r1,98
	ctx.r4.s64 = ctx.r1.s64 + 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r23.u16);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r1,98
	ctx.r4.s64 = ctx.r1.s64 + 98;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r23.u8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// or r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r27,101(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82eff67c
	if (ctx.cr0.eq) goto loc_82EFF67C;
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 24, ctx.xer);
	// beq cr6,0x82eff67c
	if (ctx.cr6.eq) goto loc_82EFF67C;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bne cr6,0x82effbb8
	if (!ctx.cr6.eq) goto loc_82EFFBB8;
loc_82EFF67C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r23.u16);
	// addi r4,r1,98
	ctx.r4.s64 = ctx.r1.s64 + 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// or r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r23.u8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r23.u8);
	// addi r4,r1,98
	ctx.r4.s64 = ctx.r1.s64 + 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82eff778
	if (!ctx.cr0.eq) goto loc_82EFF778;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x82eff78c
	if (ctx.cr6.eq) goto loc_82EFF78C;
loc_82EFF778:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x82effbb8
	if (!ctx.cr6.eq) goto loc_82EFFBB8;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x82effbb8
	if (!ctx.cr6.eq) goto loc_82EFFBB8;
loc_82EFF78C:
	// lbz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82eff7ac
	if (ctx.cr0.eq) goto loc_82EFF7AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFF7AC:
	// lbz r11,101(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82eff7f0
	if (ctx.cr6.eq) goto loc_82EFF7F0;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// beq cr6,0x82eff7e0
	if (ctx.cr6.eq) goto loc_82EFF7E0;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x82effbb8
	if (!ctx.cr6.eq) goto loc_82EFFBB8;
	// li r17,1
	ctx.r17.s64 = 1;
	// clrlwi r20,r30,16
	ctx.r20.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r16,r30,2,14,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// b 0x82eff7fc
	goto loc_82EFF7FC;
loc_82EFF7E0:
	// clrlwi r20,r30,16
	ctx.r20.u64 = ctx.r30.u32 & 0xFFFF;
	// li r17,2
	ctx.r17.s64 = 2;
	// mulli r16,r20,3
	ctx.r16.s64 = ctx.r20.s64 * 3;
	// b 0x82eff7fc
	goto loc_82EFF7FC;
loc_82EFF7F0:
	// clrlwi r20,r30,16
	ctx.r20.u64 = ctx.r30.u32 & 0xFFFF;
	// li r17,100
	ctx.r17.s64 = 100;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
loc_82EFF7FC:
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82eff930
	if (!ctx.cr6.eq) goto loc_82EFF930;
	// cmpwi cr6,r17,100
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 100, ctx.xer);
	// bne cr6,0x82eff924
	if (!ctx.cr6.eq) goto loc_82EFF924;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x82eff828
	if (!ctx.cr6.lt) goto loc_82EFF828;
	// li r15,2
	ctx.r15.s64 = 2;
	// mulli r19,r20,3
	ctx.r19.s64 = ctx.r20.s64 * 3;
	// li r18,24
	ctx.r18.s64 = 24;
	// b 0x82eff834
	goto loc_82EFF834;
loc_82EFF828:
	// li r15,1
	ctx.r15.s64 = 1;
loc_82EFF82C:
	// rlwinm r19,r20,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r18,32
	ctx.r18.s64 = 32;
loc_82EFF834:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x82eff988
	if (!ctx.cr6.eq) goto loc_82EFF988;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x82eff988
	if (!ctx.cr6.eq) goto loc_82EFF988;
	// addi r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x82effbb8
	if (ctx.cr6.gt) goto loc_82EFFBB8;
	// addi r11,r27,-32
	ctx.r11.s64 = ctx.r27.s64 + -32;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// beq cr6,0x82eff988
	if (ctx.cr6.eq) goto loc_82EFF988;
	// addi r30,r1,124
	ctx.r30.s64 = ctx.r1.s64 + 124;
loc_82EFF878:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r23.u8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// bne cr6,0x82eff968
	if (!ctx.cr6.eq) goto loc_82EFF968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFF918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// b 0x82eff974
	goto loc_82EFF974;
loc_82EFF924:
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// b 0x82eff834
	goto loc_82EFF834;
loc_82EFF930:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// beq cr6,0x82eff82c
	if (ctx.cr6.eq) goto loc_82EFF82C;
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// beq cr6,0x82eff95c
	if (ctx.cr6.eq) goto loc_82EFF95C;
	// cmpwi cr6,r15,9
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 9, ctx.xer);
	// beq cr6,0x82eff950
	if (ctx.cr6.eq) goto loc_82EFF950;
	// cmpwi cr6,r15,100
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 100, ctx.xer);
	// bne cr6,0x82effbb8
	if (!ctx.cr6.eq) goto loc_82EFFBB8;
loc_82EFF950:
	// li r18,8
	ctx.r18.s64 = 8;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// b 0x82eff834
	goto loc_82EFF834;
loc_82EFF95C:
	// li r18,24
	ctx.r18.s64 = 24;
	// mulli r19,r20,3
	ctx.r19.s64 = ctx.r20.s64 * 3;
	// b 0x82eff834
	goto loc_82EFF834;
loc_82EFF968:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EFF974:
	// lwz r14,116(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r14
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x82eff878
	if (ctx.cr6.lt) goto loc_82EFF878;
loc_82EFF988:
	// clrlwi r22,r26,16
	ctx.r22.u64 = ctx.r26.u32 & 0xFFFF;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82eff498
	ctx.lr = 0x82EFF99C;
	sub_82EFF498(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82effbc4
	if (ctx.cr0.eq) goto loc_82EFFBC4;
	// cmplwi cr6,r16,16384
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 16384, ctx.xer);
	// ble cr6,0x82eff9bc
	if (!ctx.cr6.gt) goto loc_82EFF9BC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFF9B4;
	sub_82EF6EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82eff9c0
	goto loc_82EFF9C0;
loc_82EFF9BC:
	// addi r25,r1,1152
	ctx.r25.s64 = ctx.r1.s64 + 1152;
loc_82EFF9C0:
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82eff9d4
	if (!ctx.cr0.eq) goto loc_82EFF9D4;
	// addi r27,r22,-1
	ctx.r27.s64 = ctx.r22.s64 + -1;
loc_82EFF9D4:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82effb7c
	if (ctx.cr6.eq) goto loc_82EFFB7C;
	// addi r28,r21,16
	ctx.r28.s64 = ctx.r21.s64 + 16;
	// neg r26,r27
	ctx.r26.s64 = -ctx.r27.s64;
loc_82EFF9E8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bge cr6,0x82eff9f8
	if (!ctx.cr6.lt) goto loc_82EFF9F8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82EFF9F8:
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpw cr6,r17,r15
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r15.s32, ctx.xer);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x82effa18
	if (ctx.cr6.eq) goto loc_82EFFA18;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82EFFA18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// bne cr6,0x82effb7c
	if (!ctx.cr6.eq) goto loc_82EFFB7C;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// bne cr6,0x82effa7c
	if (!ctx.cr6.eq) goto loc_82EFFA7C;
	// rlwinm. r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82effb28
	if (ctx.cr0.eq) goto loc_82EFFB28;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EFFA5C:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82effa5c
	if (!ctx.cr0.eq) goto loc_82EFFA5C;
	// b 0x82effb28
	goto loc_82EFFB28;
loc_82EFFA7C:
	// cmpwi cr6,r17,2
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 2, ctx.xer);
	// bne cr6,0x82effac4
	if (!ctx.cr6.eq) goto loc_82EFFAC4;
	// mulli r11,r20,3
	ctx.r11.s64 = ctx.r20.s64 * 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82effb28
	if (ctx.cr6.eq) goto loc_82EFFB28;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82EFFAA4:
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x82effaa4
	if (!ctx.cr0.eq) goto loc_82EFFAA4;
	// b 0x82effb28
	goto loc_82EFFB28;
loc_82EFFAC4:
	// cmpwi cr6,r15,100
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 100, ctx.xer);
	// bne cr6,0x82effb28
	if (!ctx.cr6.eq) goto loc_82EFFB28;
	// addi r30,r21,44
	ctx.r30.s64 = ctx.r21.s64 + 44;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f57778
	ctx.lr = 0x82EFFADC;
	sub_82F57778(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82effb28
	if (ctx.cr6.eq) goto loc_82EFFB28;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_82EFFAEC:
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// bne 0x82effaec
	if (!ctx.cr0.eq) goto loc_82EFFAEC;
loc_82EFFB28:
	// cmpw cr6,r17,r15
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r15.s32, ctx.xer);
	// beq cr6,0x82effb68
	if (ctx.cr6.eq) goto loc_82EFFB68;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi r8,r18,24
	ctx.r8.u64 = ctx.r18.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82efe898
	ctx.lr = 0x82EFFB5C;
	sub_82EFE898(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82effb7c
	if (ctx.cr0.eq) goto loc_82EFFB7C;
	// lwz r14,116(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82EFFB68:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82eff9e8
	if (ctx.cr6.lt) goto loc_82EFF9E8;
loc_82EFFB7C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82effb98
	if (ctx.cr6.eq) goto loc_82EFFB98;
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82effb98
	if (ctx.cr6.eq) goto loc_82EFFB98;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFFB98;
	sub_82EF6F38(ctx, base);
loc_82EFFB98:
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82effbc4
	if (!ctx.cr6.lt) goto loc_82EFFBC4;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFFBB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFFBBC:
	// addi r1,r1,17696
	ctx.r1.s64 = ctx.r1.s64 + 17696;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
loc_82EFFBC4:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x82effbbc
	goto loc_82EFFBBC;
}

__attribute__((alias("__imp__sub_82EFFBF8"))) PPC_WEAK_FUNC(sub_82EFFBF8);
PPC_FUNC_IMPL(__imp__sub_82EFFBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFFC00;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82f3e348
	ctx.lr = 0x82EFFC08;
	sub_82F3E348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82effc18
	if (!ctx.cr0.eq) goto loc_82EFFC18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82effd04
	goto loc_82EFFD04;
loc_82EFFC18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82effce4
	if (!ctx.cr0.eq) goto loc_82EFFCE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82eff498
	ctx.lr = 0x82EFFC70;
	sub_82EFF498(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82effce8
	if (ctx.cr0.eq) goto loc_82EFFCE8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82effce8
	if (!ctx.cr6.gt) goto loc_82EFFCE8;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
loc_82EFFC8C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EFFCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82effccc
	if (ctx.cr0.eq) goto loc_82EFFCCC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82effc8c
	if (ctx.cr6.lt) goto loc_82EFFC8C;
	// b 0x82effce8
	goto loc_82EFFCE8;
loc_82EFFCCC:
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
	ctx.lr = 0x82EFFCE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFFCE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EFFCE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFD00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EFFD04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFFD0C"))) PPC_WEAK_FUNC(sub_82EFFD0C);
PPC_FUNC_IMPL(__imp__sub_82EFFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EFFD10"))) PPC_WEAK_FUNC(sub_82EFFD10);
PPC_FUNC_IMPL(__imp__sub_82EFFD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EFFD18;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82effe44
	if (ctx.cr6.eq) goto loc_82EFFE44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82effe44
	if (!ctx.cr0.eq) goto loc_82EFFE44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82eff498
	ctx.lr = 0x82EFFD90;
	sub_82EFF498(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82effe28
	if (ctx.cr0.eq) goto loc_82EFFE28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82effe28
	if (ctx.cr0.eq) goto loc_82EFFE28;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
loc_82EFFDBC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EFFDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82effe0c
	if (ctx.cr0.eq) goto loc_82EFFE0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82effdbc
	if (ctx.cr6.lt) goto loc_82EFFDBC;
	// b 0x82effe28
	goto loc_82EFFE28;
loc_82EFFE0C:
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
	ctx.lr = 0x82EFFE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82EFFE28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82effe48
	goto loc_82EFFE48;
loc_82EFFE44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EFFE48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82EFFE50"))) PPC_WEAK_FUNC(sub_82EFFE50);
PPC_FUNC_IMPL(__imp__sub_82EFFE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EFFE58;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82f3e3b0
	ctx.lr = 0x82EFFE60;
	sub_82F3E3B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82effe70
	if (!ctx.cr0.eq) goto loc_82EFFE70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f0000c
	goto loc_82F0000C;
loc_82EFFE70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82effff0
	if (!ctx.cr0.eq) goto loc_82EFFFF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82effff0
	if (ctx.cr0.eq) goto loc_82EFFFF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82eff498
	ctx.lr = 0x82EFFEE8;
	sub_82EFF498(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82efffdc
	if (ctx.cr0.eq) goto loc_82EFFFDC;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mulli r3,r29,3
	ctx.r3.s64 = ctx.r29.s64 * 3;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EFFEFC;
	sub_82EF6EF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82efffd4
	if (ctx.cr0.eq) goto loc_82EFFFD4;
loc_82EFFF20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82efffb8
	if (ctx.cr0.eq) goto loc_82EFFFB8;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82efff94
	if (ctx.cr6.eq) goto loc_82EFFF94;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82EFFF64:
	// lbz r8,-2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// li r7,255
	ctx.r7.s64 = 255;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r8,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r8.u8);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82efff64
	if (!ctx.cr0.eq) goto loc_82EFFF64;
loc_82EFFF94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFFAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82efff20
	if (ctx.cr6.lt) goto loc_82EFFF20;
	// b 0x82efffd4
	goto loc_82EFFFD4;
loc_82EFFFB8:
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
	ctx.lr = 0x82EFFFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EFFFD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EFFFDC;
	sub_82EF6F38(ctx, base);
loc_82EFFFDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EFFFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EFFFF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F0000C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F00014"))) PPC_WEAK_FUNC(sub_82F00014);
PPC_FUNC_IMPL(__imp__sub_82F00014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00018"))) PPC_WEAK_FUNC(sub_82F00018);
PPC_FUNC_IMPL(__imp__sub_82F00018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F00020;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00078
	if (ctx.cr0.eq) goto loc_82F00078;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,56
	ctx.r11.s64 = ctx.r10.s64 * 56;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82f00060
	if (ctx.cr0.lt) goto loc_82F00060;
loc_82F0004C:
	// addi r30,r30,-56
	ctx.r30.s64 = ctx.r30.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eff428
	ctx.lr = 0x82F00058;
	sub_82EFF428(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82f0004c
	if (!ctx.cr0.lt) goto loc_82F0004C;
loc_82F00060:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00070
	if (ctx.cr0.eq) goto loc_82F00070;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fe010
	ctx.lr = 0x82F00070;
	sub_824FE010(ctx, base);
loc_82F00070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f00094
	goto loc_82F00094;
loc_82F00078:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eff428
	ctx.lr = 0x82F00080;
	sub_82EFF428(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00090
	if (ctx.cr0.eq) goto loc_82F00090;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00090;
	sub_82EF6F38(ctx, base);
loc_82F00090:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F00094:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F0009C"))) PPC_WEAK_FUNC(sub_82F0009C);
PPC_FUNC_IMPL(__imp__sub_82F0009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F000A0"))) PPC_WEAK_FUNC(sub_82F000A0);
PPC_FUNC_IMPL(__imp__sub_82F000A0) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F000B8;
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-9516
	ctx.r10.s64 = ctx.r10.s64 + -9516;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F0010C"))) PPC_WEAK_FUNC(sub_82F0010C);
PPC_FUNC_IMPL(__imp__sub_82F0010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00110"))) PPC_WEAK_FUNC(sub_82F00110);
PPC_FUNC_IMPL(__imp__sub_82F00110) {
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
	// bl 0x82f3e3b0
	ctx.lr = 0x82F00128;
	sub_82F3E3B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82f00138
	if (!ctx.cr0.eq) goto loc_82F00138;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f00184
	goto loc_82F00184;
loc_82F00138:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F0014C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00164
	if (!ctx.cr0.eq) goto loc_82F00164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82effd10
	ctx.lr = 0x82F0015C;
	sub_82EFFD10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f00168
	goto loc_82F00168;
loc_82F00164:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F00168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F00184:
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

__attribute__((alias("__imp__sub_82F0019C"))) PPC_WEAK_FUNC(sub_82F0019C);
PPC_FUNC_IMPL(__imp__sub_82F0019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F001A0"))) PPC_WEAK_FUNC(sub_82F001A0);
PPC_FUNC_IMPL(__imp__sub_82F001A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F001A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F001C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f001d0
	if (!ctx.cr0.eq) goto loc_82F001D0;
loc_82F001C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f004ac
	goto loc_82F004AC;
loc_82F001D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F001F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,8275
	ctx.r10.s64 = 542310400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// ori r10,r10,17476
	ctx.r10.u64 = ctx.r10.u64 | 17476;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f00268
	if (ctx.cr6.eq) goto loc_82F00268;
loc_82F00248:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
loc_82F00250:
	// bl 0x82f57778
	ctx.lr = 0x82F00254;
	sub_82F57778(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f001c8
	if (ctx.cr6.eq) goto loc_82F001C8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00264;
	sub_82EF6F38(ctx, base);
	// b 0x82f001c8
	goto loc_82F001C8;
loc_82F00268:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x82f00248
	if (!ctx.cr6.eq) goto loc_82F00248;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F002CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bne cr6,0x82f00250
	if (!ctx.cr6.eq) goto loc_82F00250;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82f57778
	ctx.lr = 0x82F00300;
	sub_82F57778(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r29.u8);
	// bl 0x82efeb20
	ctx.lr = 0x82F0032C;
	sub_82EFEB20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00248
	if (ctx.cr0.eq) goto loc_82F00248;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F0033C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f00368
	if (ctx.cr0.eq) goto loc_82F00368;
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
	// bl 0x82f000a0
	ctx.lr = 0x82F00360;
	sub_82F000A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f0036c
	goto loc_82F0036C;
loc_82F00368:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82F0036C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f00248
	if (ctx.cr6.eq) goto loc_82F00248;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F003B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F003BC;
	sub_82EF6EF8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82f003e0
	if (!ctx.cr0.eq) goto loc_82F003E0;
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
	ctx.lr = 0x82F003DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f00248
	goto loc_82F00248;
loc_82F003E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F003FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82f00428
	if (ctx.cr6.eq) goto loc_82F00428;
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
	ctx.lr = 0x82F0041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00424;
	sub_82EF6F38(ctx, base);
	// b 0x82f00248
	goto loc_82F00248;
loc_82F00428:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82f00440
	if (ctx.cr6.lt) goto loc_82F00440;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x82f00440
	if (ctx.cr6.gt) goto loc_82F00440;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F00440:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00478
	if (ctx.cr0.eq) goto loc_82F00478;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addze. r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82f00478
	if (!ctx.cr0.gt) goto loc_82F00478;
loc_82F00458:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82f00458
	if (!ctx.cr0.eq) goto loc_82F00458;
loc_82F00478:
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eff080
	ctx.lr = 0x82F0048C;
	sub_82EFF080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82f57778
	ctx.lr = 0x82F00498;
	sub_82F57778(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f004a8
	if (ctx.cr6.eq) goto loc_82F004A8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F004A8;
	sub_82EF6F38(ctx, base);
loc_82F004A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F004AC:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F004B4"))) PPC_WEAK_FUNC(sub_82F004B4);
PPC_FUNC_IMPL(__imp__sub_82F004B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F004B8"))) PPC_WEAK_FUNC(sub_82F004B8);
PPC_FUNC_IMPL(__imp__sub_82F004B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F004C8"))) PPC_WEAK_FUNC(sub_82F004C8);
PPC_FUNC_IMPL(__imp__sub_82F004C8) {
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
	// addi r11,r11,-9512
	ctx.r11.s64 = ctx.r11.s64 + -9512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82f004f4
	if (ctx.cr0.eq) goto loc_82F004F4;
	// bl 0x82ef6f38
	ctx.lr = 0x82F004F4;
	sub_82EF6F38(ctx, base);
loc_82F004F4:
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

__attribute__((alias("__imp__sub_82F0050C"))) PPC_WEAK_FUNC(sub_82F0050C);
PPC_FUNC_IMPL(__imp__sub_82F0050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00510"))) PPC_WEAK_FUNC(sub_82F00510);
PPC_FUNC_IMPL(__imp__sub_82F00510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00550;
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

__attribute__((alias("__imp__sub_82F00560"))) PPC_WEAK_FUNC(sub_82F00560);
PPC_FUNC_IMPL(__imp__sub_82F00560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F00568;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sth r4,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r4.u16);
	// addi r28,r11,3224
	ctx.r28.s64 = ctx.r11.s64 + 3224;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// bne cr6,0x82f00594
	if (!ctx.cr6.eq) goto loc_82F00594;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82F00594:
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7c30
	ctx.lr = 0x82F005A4;
	sub_82EF7C30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82f005b4
	if (!ctx.cr6.eq) goto loc_82F005B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82F005B4:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef7c30
	ctx.lr = 0x82F005BC;
	sub_82EF7C30(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F005E0"))) PPC_WEAK_FUNC(sub_82F005E0);
PPC_FUNC_IMPL(__imp__sub_82F005E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F005E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f00770
	if (ctx.cr6.eq) goto loc_82F00770;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F0060C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F00644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82f00654
	if (ctx.cr0.gt) goto loc_82F00654;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f00770
	goto loc_82F00770;
loc_82F00654:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82f00798
	if (ctx.cr6.eq) goto loc_82F00798;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// beq cr6,0x82f00778
	if (ctx.cr6.eq) goto loc_82F00778;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// beq cr6,0x82f00798
	if (ctx.cr6.eq) goto loc_82F00798;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beq cr6,0x82f006c8
	if (ctx.cr6.eq) goto loc_82F006C8;
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// beq cr6,0x82f0069c
	if (ctx.cr6.eq) goto loc_82F0069C;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,216
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 216, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82f0070c
	goto loc_82F0070C;
loc_82F0069C:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82f0070c
	goto loc_82F0070C;
loc_82F006C8:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,73
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 73, ctx.xer);
	// bne cr6,0x82f006f4
	if (!ctx.cr6.eq) goto loc_82F006F4;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,70
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 70, ctx.xer);
	// bne cr6,0x82f006f4
	if (!ctx.cr6.eq) goto loc_82F006F4;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r9,56
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 56, ctx.xer);
	// bne cr6,0x82f006f4
	if (!ctx.cr6.eq) goto loc_82F006F4;
	// li r30,12
	ctx.r30.s64 = 12;
loc_82F006F4:
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F0070C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82f0076c
	if (!ctx.cr6.eq) goto loc_82F0076C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f0076c
	if (ctx.cr0.eq) goto loc_82F0076C;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82ca70c0
	ctx.lr = 0x82F00754;
	sub_82CA70C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-24244
	ctx.r4.s64 = ctx.r11.s64 + -24244;
	// bl 0x82ef7350
	ctx.lr = 0x82F00760;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f0076c
	if (!ctx.cr0.eq) goto loc_82F0076C;
	// li r30,13
	ctx.r30.s64 = 13;
loc_82F0076C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F00770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82F00778:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,68
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 68, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x82f0070c
	if (!ctx.cr6.eq) goto loc_82F0070C;
	// li r30,14
	ctx.r30.s64 = 14;
	// b 0x82f0070c
	goto loc_82F0070C;
loc_82F00798:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// bne cr6,0x82f006f4
	if (!ctx.cr6.eq) goto loc_82F006F4;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,83
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 83, ctx.xer);
	// bne cr6,0x82f006f4
	if (!ctx.cr6.eq) goto loc_82F006F4;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82f0070c
	goto loc_82F0070C;
}

__attribute__((alias("__imp__sub_82F007BC"))) PPC_WEAK_FUNC(sub_82F007BC);
PPC_FUNC_IMPL(__imp__sub_82F007BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F007C0"))) PPC_WEAK_FUNC(sub_82F007C0);
PPC_FUNC_IMPL(__imp__sub_82F007C0) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82F007E4;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9500
	ctx.r11.s64 = ctx.r11.s64 + -9500;
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

__attribute__((alias("__imp__sub_82F00810"))) PPC_WEAK_FUNC(sub_82F00810);
PPC_FUNC_IMPL(__imp__sub_82F00810) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82F0082C;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// addi r10,r10,-9484
	ctx.r10.s64 = ctx.r10.s64 + -9484;
	// addi r9,r9,-9492
	ctx.r9.s64 = ctx.r9.s64 + -9492;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F00868"))) PPC_WEAK_FUNC(sub_82F00868);
PPC_FUNC_IMPL(__imp__sub_82F00868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82f00870
	sub_82F00870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F00870"))) PPC_WEAK_FUNC(sub_82F00870);
PPC_FUNC_IMPL(__imp__sub_82F00870) {
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
	// addi r11,r11,-9492
	ctx.r11.s64 = ctx.r11.s64 + -9492;
	// addi r10,r10,-5240
	ctx.r10.s64 = ctx.r10.s64 + -5240;
	// addi r9,r9,-12000
	ctx.r9.s64 = ctx.r9.s64 + -12000;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// bl 0x82ef70b0
	ctx.lr = 0x82F008B8;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f008c8
	if (ctx.cr0.eq) goto loc_82F008C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F008C8;
	sub_82EF6F38(ctx, base);
loc_82F008C8:
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

__attribute__((alias("__imp__sub_82F008E4"))) PPC_WEAK_FUNC(sub_82F008E4);
PPC_FUNC_IMPL(__imp__sub_82F008E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F008E8"))) PPC_WEAK_FUNC(sub_82F008E8);
PPC_FUNC_IMPL(__imp__sub_82F008E8) {
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82ef7600
	ctx.lr = 0x82F00904;
	sub_82EF7600(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef7600
	ctx.lr = 0x82F0090C;
	sub_82EF7600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82F0093C"))) PPC_WEAK_FUNC(sub_82F0093C);
PPC_FUNC_IMPL(__imp__sub_82F0093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00940"))) PPC_WEAK_FUNC(sub_82F00940);
PPC_FUNC_IMPL(__imp__sub_82F00940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,2736(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lfs f13,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.f12.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.f0.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f009c8
	if (ctx.cr6.eq) goto loc_82F009C8;
	// lhz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// sth r11,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, ctx.r11.u16);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// b 0x82f009d0
	goto loc_82F009D0;
loc_82F009C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, ctx.r11.u16);
loc_82F009D0:
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F009D8"))) PPC_WEAK_FUNC(sub_82F009D8);
PPC_FUNC_IMPL(__imp__sub_82F009D8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F009FC:
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
	// bne 0x82f009fc
	if (!ctx.cr0.eq) goto loc_82F009FC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00a28
	if (!ctx.cr0.eq) goto loc_82F00A28;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00A28;
	sub_82EF6F38(ctx, base);
loc_82F00A28:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F00A30:
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
	// bne 0x82f00a30
	if (!ctx.cr0.eq) goto loc_82F00A30;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00a5c
	if (!ctx.cr0.eq) goto loc_82F00A5C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00A5C;
	sub_82EF6F38(ctx, base);
loc_82F00A5C:
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

__attribute__((alias("__imp__sub_82F00A74"))) PPC_WEAK_FUNC(sub_82F00A74);
PPC_FUNC_IMPL(__imp__sub_82F00A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00A78"))) PPC_WEAK_FUNC(sub_82F00A78);
PPC_FUNC_IMPL(__imp__sub_82F00A78) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F00A98;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9476
	ctx.r11.s64 = ctx.r11.s64 + -9476;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ef70f0
	ctx.lr = 0x82F00ABC;
	sub_82EF70F0(ctx, base);
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

__attribute__((alias("__imp__sub_82F00AD8"))) PPC_WEAK_FUNC(sub_82F00AD8);
PPC_FUNC_IMPL(__imp__sub_82F00AD8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-9476
	ctx.r11.s64 = ctx.r11.s64 + -9476;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82F00B04;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00b14
	if (ctx.cr0.eq) goto loc_82F00B14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00B14;
	sub_82EF6F38(ctx, base);
loc_82F00B14:
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

__attribute__((alias("__imp__sub_82F00B30"))) PPC_WEAK_FUNC(sub_82F00B30);
PPC_FUNC_IMPL(__imp__sub_82F00B30) {
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
	// beq cr6,0x82f00b68
	if (ctx.cr6.eq) goto loc_82F00B68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00B68:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00b88
	if (ctx.cr6.eq) goto loc_82F00B88;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00B88:
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82F00BA4"))) PPC_WEAK_FUNC(sub_82F00BA4);
PPC_FUNC_IMPL(__imp__sub_82F00BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00BA8"))) PPC_WEAK_FUNC(sub_82F00BA8);
PPC_FUNC_IMPL(__imp__sub_82F00BA8) {
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
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-11856
	ctx.r11.s64 = ctx.r11.s64 + -11856;
	// addi r10,r10,-11876
	ctx.r10.s64 = ctx.r10.s64 + -11876;
	// addi r9,r9,-11884
	ctx.r9.s64 = ctx.r9.s64 + -11884;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00c00
	if (ctx.cr6.eq) goto loc_82F00C00;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00C00:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00c20
	if (ctx.cr6.eq) goto loc_82F00C20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00C20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// addi r10,r10,-12048
	ctx.r10.s64 = ctx.r10.s64 + -12048;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82F00C40;
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

__attribute__((alias("__imp__sub_82F00C54"))) PPC_WEAK_FUNC(sub_82F00C54);
PPC_FUNC_IMPL(__imp__sub_82F00C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00C58"))) PPC_WEAK_FUNC(sub_82F00C58);
PPC_FUNC_IMPL(__imp__sub_82F00C58) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F00C7C:
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
	// bne 0x82f00c7c
	if (!ctx.cr0.eq) goto loc_82F00C7C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00ca8
	if (!ctx.cr0.eq) goto loc_82F00CA8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00CA8;
	sub_82EF6F38(ctx, base);
loc_82F00CA8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82F00CB0:
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
	// bne 0x82f00cb0
	if (!ctx.cr0.eq) goto loc_82F00CB0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00cdc
	if (!ctx.cr0.eq) goto loc_82F00CDC;
	// bl 0x82ef6f38
	ctx.lr = 0x82F00CDC;
	sub_82EF6F38(ctx, base);
loc_82F00CDC:
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

__attribute__((alias("__imp__sub_82F00CF4"))) PPC_WEAK_FUNC(sub_82F00CF4);
PPC_FUNC_IMPL(__imp__sub_82F00CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00CF8"))) PPC_WEAK_FUNC(sub_82F00CF8);
PPC_FUNC_IMPL(__imp__sub_82F00CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F00D00;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82f00a78
	ctx.lr = 0x82F00D2C;
	sub_82F00A78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-9464
	ctx.r11.s64 = ctx.r11.s64 + -9464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82f00d48
	if (ctx.cr6.eq) goto loc_82F00D48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F00D48;
	sub_82EF1710(ctx, base);
loc_82F00D48:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f00d5c
	if (ctx.cr6.eq) goto loc_82F00D5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F00D5C;
	sub_82EF1710(ctx, base);
loc_82F00D5C:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f00d7c
	if (ctx.cr6.eq) goto loc_82F00D7C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00D7C:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// beq cr6,0x82f00da0
	if (ctx.cr6.eq) goto loc_82F00DA0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00DA0:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f00dc0
	if (ctx.cr6.eq) goto loc_82F00DC0;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00DC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F00DDC"))) PPC_WEAK_FUNC(sub_82F00DDC);
PPC_FUNC_IMPL(__imp__sub_82F00DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00DE0"))) PPC_WEAK_FUNC(sub_82F00DE0);
PPC_FUNC_IMPL(__imp__sub_82F00DE0) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e04
	if (ctx.cr6.eq) goto loc_82F00E04;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F00E04;
	sub_82EF1BF0(ctx, base);
loc_82F00E04:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e24
	if (ctx.cr6.eq) goto loc_82F00E24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00E24:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e44
	if (ctx.cr6.eq) goto loc_82F00E44;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00E44:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e64
	if (ctx.cr6.eq) goto loc_82F00E64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00E64:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e74
	if (ctx.cr6.eq) goto loc_82F00E74;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F00E74;
	sub_82EF1BF0(ctx, base);
loc_82F00E74:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f00e84
	if (ctx.cr6.eq) goto loc_82F00E84;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F00E84;
	sub_82EF1BF0(ctx, base);
loc_82F00E84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-9476
	ctx.r11.s64 = ctx.r11.s64 + -9476;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82F00E98;
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

__attribute__((alias("__imp__sub_82F00EAC"))) PPC_WEAK_FUNC(sub_82F00EAC);
PPC_FUNC_IMPL(__imp__sub_82F00EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F00EB0"))) PPC_WEAK_FUNC(sub_82F00EB0);
PPC_FUNC_IMPL(__imp__sub_82F00EB0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f00f10
	if (ctx.cr6.eq) goto loc_82F00F10;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f00efc
	if (ctx.cr6.eq) goto loc_82F00EFC;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00efc
	if (!ctx.cr0.eq) goto loc_82F00EFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f00f10
	goto loc_82F00F10;
loc_82F00EFC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F00F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F00F10:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82f00f24
	if (ctx.cr0.eq) goto loc_82F00F24;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x82f00f30
	goto loc_82F00F30;
loc_82F00F24:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f00f38
	if (ctx.cr0.eq) goto loc_82F00F38;
	// li r4,256
	ctx.r4.s64 = 256;
loc_82F00F30:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82f2a9c0
	ctx.lr = 0x82F00F38;
	sub_82F2A9C0(ctx, base);
loc_82F00F38:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f00f4c
	if (!ctx.cr0.eq) goto loc_82F00F4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F00F48;
	sub_82EF1BF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F00F4C:
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

__attribute__((alias("__imp__sub_82F00F68"))) PPC_WEAK_FUNC(sub_82F00F68);
PPC_FUNC_IMPL(__imp__sub_82F00F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F00F70;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f2b9a0
	ctx.lr = 0x82F00FA0;
	sub_82F2B9A0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82ef2088
	ctx.lr = 0x82F00FB0;
	sub_82EF2088(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82f01200
	if (!ctx.cr6.eq) goto loc_82F01200;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F00FC0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f00fec
	if (ctx.cr0.eq) goto loc_82F00FEC;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,28(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// bl 0x82f2eed8
	ctx.lr = 0x82F00FE4;
	sub_82F2EED8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f00ff0
	goto loc_82F00FF0;
loc_82F00FEC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F00FF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f01054
	if (ctx.cr6.eq) goto loc_82F01054;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F01000;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f01030
	if (ctx.cr0.eq) goto loc_82F01030;
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f2b420
	ctx.lr = 0x82F0102C;
	sub_82F2B420(ctx, base);
	// b 0x82f01034
	goto loc_82F01034;
loc_82F01030:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82F01034:
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f01054
	if (!ctx.cr6.eq) goto loc_82F01054;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f010a0
	if (ctx.cr6.eq) goto loc_82F010A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F01050;
	sub_82EF1BF0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F01054:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f010a0
	if (ctx.cr6.eq) goto loc_82F010A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef1d88
	ctx.lr = 0x82F01068;
	sub_82EF1D88(ctx, base);
loc_82F01068:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f01088
	if (ctx.cr6.eq) goto loc_82F01088;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01088:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f01258
	if (!ctx.cr6.eq) goto loc_82F01258;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F0109C;
	sub_82EF1BF0(ctx, base);
	// b 0x82f01278
	goto loc_82F01278;
loc_82F010A0:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r4,r10,-9432
	ctx.r4.s64 = ctx.r10.s64 + -9432;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r9,-9436
	ctx.r30.s64 = ctx.r9.s64 + -9436;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef7638
	ctx.lr = 0x82F010C4;
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F010D4;
	sub_82EF8260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F010E4;
	sub_82EF8260(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F010F4:
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
	// bne 0x82f010f4
	if (!ctx.cr0.eq) goto loc_82F010F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f01120
	if (!ctx.cr0.eq) goto loc_82F01120;
	// bl 0x82ef6f38
	ctx.lr = 0x82F01120;
	sub_82EF6F38(ctx, base);
loc_82F01120:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F0112C:
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
	// bne 0x82f0112c
	if (!ctx.cr0.eq) goto loc_82F0112C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f01158
	if (!ctx.cr0.eq) goto loc_82F01158;
	// bl 0x82ef6f38
	ctx.lr = 0x82F01158;
	sub_82EF6F38(ctx, base);
loc_82F01158:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef1e18
	ctx.lr = 0x82F01168;
	sub_82EF1E18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F01174:
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
	// bne 0x82f01174
	if (!ctx.cr0.eq) goto loc_82F01174;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f011a0
	if (!ctx.cr0.eq) goto loc_82F011A0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F011A0;
	sub_82EF6F38(ctx, base);
loc_82F011A0:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f011c0
	if (ctx.cr6.eq) goto loc_82F011C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F011C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F011C0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f011d8
	if (!ctx.cr6.eq) goto loc_82F011D8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F011D4;
	sub_82EF1BF0(ctx, base);
	// b 0x82f011f8
	goto loc_82F011F8;
loc_82F011D8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f011f8
	if (ctx.cr6.lt) goto loc_82F011F8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F011F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F011F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f0127c
	goto loc_82F0127C;
loc_82F01200:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef1810
	ctx.lr = 0x82F01208;
	sub_82EF1810(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f01068
	if (!ctx.cr0.eq) goto loc_82F01068;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f011a0
	if (ctx.cr6.eq) goto loc_82F011A0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f01238
	if (ctx.cr6.lt) goto loc_82F01238;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82ef0d88
	ctx.lr = 0x82F01230;
	sub_82EF0D88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82f01240
	goto loc_82F01240;
loc_82F01238:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
loc_82F01240:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-9448
	ctx.r4.s64 = ctx.r10.s64 + -9448;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82ef6558
	ctx.lr = 0x82F01254;
	sub_82EF6558(ctx, base);
	// b 0x82f011a0
	goto loc_82F011A0;
loc_82F01258:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f01278
	if (ctx.cr6.lt) goto loc_82F01278;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F0127C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F01284"))) PPC_WEAK_FUNC(sub_82F01284);
PPC_FUNC_IMPL(__imp__sub_82F01284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01288"))) PPC_WEAK_FUNC(sub_82F01288);
PPC_FUNC_IMPL(__imp__sub_82F01288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F01290;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// beq cr6,0x82f012ac
	if (ctx.cr6.eq) goto loc_82F012AC;
	// bl 0x82f3eae0
	ctx.lr = 0x82F012AC;
	sub_82F3EAE0(ctx, base);
loc_82F012AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f00f68
	ctx.lr = 0x82F012C8;
	sub_82F00F68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f012f8
	if (!ctx.cr0.eq) goto loc_82F012F8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f012f0
	if (ctx.cr6.eq) goto loc_82F012F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F012F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F012F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f01334
	goto loc_82F01334;
loc_82F012F8:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f00eb0
	ctx.lr = 0x82F0130C;
	sub_82F00EB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f01330
	if (ctx.cr6.eq) goto loc_82F01330;
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
	ctx.lr = 0x82F01330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F01334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F0133C"))) PPC_WEAK_FUNC(sub_82F0133C);
PPC_FUNC_IMPL(__imp__sub_82F0133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01340"))) PPC_WEAK_FUNC(sub_82F01340);
PPC_FUNC_IMPL(__imp__sub_82F01340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82F01348;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F01354;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r20,r11,7817
	ctx.r20.u64 = ctx.r11.u64 | 7817;
	// ori r21,r10,9034
	ctx.r21.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f0138c
	if (ctx.cr0.eq) goto loc_82F0138C;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eff360
	ctx.lr = 0x82F01384;
	sub_82EFF360(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82f01390
	goto loc_82F01390;
loc_82F0138C:
	// li r23,0
	ctx.r23.s64 = 0;
loc_82F01390:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f014a0
	if (ctx.cr6.eq) goto loc_82F014A0;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r22,r23,16
	ctx.r22.s64 = ctx.r23.s64 + 16;
	// addi r24,r11,-6920
	ctx.r24.s64 = ctx.r11.s64 + -6920;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82F013AC:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82F013B4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82f01440
	if (ctx.cr6.eq) goto loc_82F01440;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82f01434
	if (ctx.cr6.eq) goto loc_82F01434;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82f01428
	if (ctx.cr6.eq) goto loc_82F01428;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82f0141c
	if (ctx.cr6.eq) goto loc_82F0141C;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// beq cr6,0x82f01410
	if (ctx.cr6.eq) goto loc_82F01410;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82f01404
	if (ctx.cr6.eq) goto loc_82F01404;
	// cmpwi cr6,r11,121
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 121, ctx.xer);
	// bne cr6,0x82f01444
	if (!ctx.cr6.eq) goto loc_82F01444;
	// lis r28,-32513
	ctx.r28.s64 = -2130771968;
	// ori r28,r28,65280
	ctx.r28.u64 = ctx.r28.u64 | 65280;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F01404:
	// lis r28,-32513
	ctx.r28.s64 = -2130771968;
	// ori r28,r28,8224
	ctx.r28.u64 = ctx.r28.u64 | 8224;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F01410:
	// lis r28,-32736
	ctx.r28.s64 = -2145386496;
	// ori r28,r28,65312
	ctx.r28.u64 = ctx.r28.u64 | 65312;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F0141C:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F01428:
	// lis r28,-32736
	ctx.r28.s64 = -2145386496;
	// ori r28,r28,8447
	ctx.r28.u64 = ctx.r28.u64 | 8447;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F01434:
	// lis r28,-32513
	ctx.r28.s64 = -2130771968;
	// ori r28,r28,255
	ctx.r28.u64 = ctx.r28.u64 | 255;
	// b 0x82f01444
	goto loc_82F01444;
loc_82F01440:
	// lis r28,-256
	ctx.r28.s64 = -16777216;
loc_82F01444:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F01448:
	// li r31,0
	ctx.r31.s64 = 0;
	// add r30,r25,r29
	ctx.r30.u64 = ctx.r25.u64 + ctx.r29.u64;
loc_82F01450:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82efe790
	ctx.lr = 0x82F01464;
	sub_82EFE790(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82f01450
	if (ctx.cr6.lt) goto loc_82F01450;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x82f01448
	if (ctx.cr6.lt) goto loc_82F01448;
	// addi r26,r26,3
	ctx.r26.s64 = ctx.r26.s64 + 3;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r26,57
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 57, ctx.xer);
	// blt cr6,0x82f013b4
	if (ctx.cr6.lt) goto loc_82F013B4;
	// addi r10,r24,228
	ctx.r10.s64 = ctx.r24.s64 + 228;
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82f013ac
	if (ctx.cr6.lt) goto loc_82F013AC;
loc_82F014A0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F014A8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f014cc
	if (ctx.cr0.eq) goto loc_82F014CC;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82ef5ff0
	ctx.lr = 0x82F014C4;
	sub_82EF5FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f014d0
	goto loc_82F014D0;
loc_82F014CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F014D0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f014f0
	if (ctx.cr6.eq) goto loc_82F014F0;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F014F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F014F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82F014FC"))) PPC_WEAK_FUNC(sub_82F014FC);
PPC_FUNC_IMPL(__imp__sub_82F014FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01500"))) PPC_WEAK_FUNC(sub_82F01500);
PPC_FUNC_IMPL(__imp__sub_82F01500) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-20
	ctx.r31.s64 = ctx.r3.s64 + -20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82f0154c
	if (!ctx.cr6.eq) goto loc_82F0154C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F0154C:
	// addic. r11,r31,20
	ctx.xer.ca = ctx.r31.u32 > 4294967275;
	ctx.r11.s64 = ctx.r31.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82f0155c
	if (!ctx.cr0.eq) goto loc_82F0155C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F0155C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f01598
	if (ctx.cr0.eq) goto loc_82F01598;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01598:
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

__attribute__((alias("__imp__sub_82F015B0"))) PPC_WEAK_FUNC(sub_82F015B0);
PPC_FUNC_IMPL(__imp__sub_82F015B0) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f015e8
	if (ctx.cr6.eq) goto loc_82F015E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F015E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F015E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f01608
	if (ctx.cr6.eq) goto loc_82F01608;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01608:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F0162C"))) PPC_WEAK_FUNC(sub_82F0162C);
PPC_FUNC_IMPL(__imp__sub_82F0162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01630"))) PPC_WEAK_FUNC(sub_82F01630);
PPC_FUNC_IMPL(__imp__sub_82F01630) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82f008e8
	ctx.lr = 0x82F0166C;
	sub_82F008E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F0168C"))) PPC_WEAK_FUNC(sub_82F0168C);
PPC_FUNC_IMPL(__imp__sub_82F0168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01690"))) PPC_WEAK_FUNC(sub_82F01690);
PPC_FUNC_IMPL(__imp__sub_82F01690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F01698;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-9404
	ctx.r10.s64 = ctx.r10.s64 + -9404;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82f016ec
	if (ctx.cr6.eq) goto loc_82F016EC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F016EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F016EC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f0170c
	if (ctx.cr6.eq) goto loc_82F0170C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F0170C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F0170C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F01720"))) PPC_WEAK_FUNC(sub_82F01720);
PPC_FUNC_IMPL(__imp__sub_82F01720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F0172C"))) PPC_WEAK_FUNC(sub_82F0172C);
PPC_FUNC_IMPL(__imp__sub_82F0172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F01730"))) PPC_WEAK_FUNC(sub_82F01730);
PPC_FUNC_IMPL(__imp__sub_82F01730) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f01764
	if (ctx.cr6.eq) goto loc_82F01764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01764:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f01784
	if (ctx.cr6.eq) goto loc_82F01784;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01784:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-9512
	ctx.r11.s64 = ctx.r11.s64 + -9512;
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

__attribute__((alias("__imp__sub_82F017A4"))) PPC_WEAK_FUNC(sub_82F017A4);
PPC_FUNC_IMPL(__imp__sub_82F017A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F017A8"))) PPC_WEAK_FUNC(sub_82F017A8);
PPC_FUNC_IMPL(__imp__sub_82F017A8) {
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
	// bl 0x82f01730
	ctx.lr = 0x82F017C8;
	sub_82F01730(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f017d8
	if (ctx.cr0.eq) goto loc_82F017D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F017D8;
	sub_82EF6F38(ctx, base);
loc_82F017D8:
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

__attribute__((alias("__imp__sub_82F017F4"))) PPC_WEAK_FUNC(sub_82F017F4);
PPC_FUNC_IMPL(__imp__sub_82F017F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F017F8"))) PPC_WEAK_FUNC(sub_82F017F8);
PPC_FUNC_IMPL(__imp__sub_82F017F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F01800;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82f0183c
	if (!ctx.cr6.lt) goto loc_82F0183C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82F0183C;
	sub_82F29318(ctx, base);
loc_82F0183C:
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
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r29,266
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 266, ctx.xer);
	// blt cr6,0x82f018c0
	if (ctx.cr6.lt) goto loc_82F018C0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82f01888
	if (!ctx.cr6.lt) goto loc_82F01888;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82F01888;
	sub_82F29318(ctx, base);
loc_82F01888:
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
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82F018C0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82f018e4
	if (!ctx.cr6.lt) goto loc_82F018E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82F018E4;
	sub_82F29318(ctx, base);
loc_82F018E4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82f297c8
	ctx.lr = 0x82F01910;
	sub_82F297C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f297c8
	ctx.lr = 0x82F0191C;
	sub_82F297C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r11,-9392
	ctx.r4.s64 = ctx.r11.s64 + -9392;
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r6,r29,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef9600
	ctx.lr = 0x82F0194C;
	sub_82EF9600(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f00560
	ctx.lr = 0x82F01968;
	sub_82F00560(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F01970;
	sub_82EF6F38(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F01978;
	sub_82EF6F38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F01980"))) PPC_WEAK_FUNC(sub_82F01980);
PPC_FUNC_IMPL(__imp__sub_82F01980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F01988;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F019B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F019DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r8,83
	ctx.r8.s64 = 5439488;
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r11,r11,-67
	ctx.r11.s64 = ctx.r11.s64 + -67;
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
	// ori r7,r8,22342
	ctx.r7.u64 = ctx.r8.u64 | 22342;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r10,r29,8
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFFFF;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// rlwinm r6,r29,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// stw r6,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r7,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r5,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r7,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r7.u32);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// beq cr6,0x82f01acc
	if (ctx.cr6.eq) goto loc_82F01ACC;
	// lis r11,83
	ctx.r11.s64 = 5439488;
	// ori r11,r11,22339
	ctx.r11.u64 = ctx.r11.u64 | 22339;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f01acc
	if (ctx.cr6.eq) goto loc_82F01ACC;
	// lis r11,88
	ctx.r11.s64 = 5767168;
	// ori r11,r11,17991
	ctx.r11.u64 = ctx.r11.u64 | 17991;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f01acc
	if (ctx.cr6.eq) goto loc_82F01ACC;
	// lis r11,88
	ctx.r11.s64 = 5767168;
	// ori r11,r11,17987
	ctx.r11.u64 = ctx.r11.u64 | 17987;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f01acc
	if (ctx.cr6.eq) goto loc_82F01ACC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f01ac4
	if (ctx.cr6.eq) goto loc_82F01AC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r24,20
	ctx.r3.s64 = ctx.r24.s64 + 20;
	// addi r4,r11,-9064
	ctx.r4.s64 = ctx.r11.s64 + -9064;
	// bl 0x82ef6558
	ctx.lr = 0x82F01AC4;
	sub_82EF6558(ctx, base);
loc_82F01AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f01d74
	goto loc_82F01D74;
loc_82F01ACC:
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// lis r10,88
	ctx.r10.s64 = 5767168;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f01ae4
	if (!ctx.cr6.eq) goto loc_82F01AE4;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_82F01AE4:
	// clrlwi. r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82f01af8
	if (ctx.cr0.eq) goto loc_82F01AF8;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
loc_82F01AF8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f01b14
	if (ctx.cr6.eq) goto loc_82F01B14;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f01b14
	if (ctx.cr6.eq) goto loc_82F01B14;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f01b18
	if (!ctx.cr0.eq) goto loc_82F01B18;
loc_82F01B14:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82F01B18:
	// clrlwi. r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82f01b34
	if (ctx.cr0.eq) goto loc_82F01B34;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r5,r11,-9112
	ctx.r5.s64 = ctx.r11.s64 + -9112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f00510
	ctx.lr = 0x82F01B34;
	sub_82F00510(ctx, base);
loc_82F01B34:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f01bd0
	if (ctx.cr6.eq) goto loc_82F01BD0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f01b70
	if (ctx.cr6.eq) goto loc_82F01B70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r5,r11,-9140
	ctx.r5.s64 = ctx.r11.s64 + -9140;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f00510
	ctx.lr = 0x82F01B70;
	sub_82F00510(ctx, base);
loc_82F01B70:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F01B78;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f01ba8
	if (ctx.cr0.eq) goto loc_82F01BA8;
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f28ae0
	ctx.lr = 0x82F01BA0;
	sub_82F28AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f01bac
	goto loc_82F01BAC;
loc_82F01BA8:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82F01BAC:
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
	ctx.lr = 0x82F01BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
loc_82F01BD0:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29250
	ctx.lr = 0x82F01BE4;
	sub_82F29250(ctx, base);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f2a020
	ctx.lr = 0x82F01BF0;
	sub_82F2A020(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82f01c14
	if (!ctx.cr6.lt) goto loc_82F01C14;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82F01C14;
	sub_82F29318(ctx, base);
loc_82F01C14:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f0,2700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2700);
	ctx.f0.f64 = double(temp.f32);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lbz r8,49(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// bge cr6,0x82f01c78
	if (!ctx.cr6.lt) goto loc_82F01C78;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82F01C78;
	sub_82F29318(ctx, base);
loc_82F01C78:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// beq 0x82f01d50
	if (ctx.cr0.eq) goto loc_82F01D50;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82f01d50
	if (!ctx.cr6.lt) goto loc_82F01D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f299e8
	ctx.lr = 0x82F01CD0;
	sub_82F299E8(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x82f01d7c
	if (!ctx.cr6.eq) goto loc_82F01D7C;
	// addi r30,r31,604
	ctx.r30.s64 = ctx.r31.s64 + 604;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f017f8
	ctx.lr = 0x82F01CEC;
	sub_82F017F8(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f01cfc
	if (!ctx.cr6.eq) goto loc_82F01CFC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82F01CFC:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x82f01d48
	if (ctx.cr6.eq) goto loc_82F01D48;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f01d24
	if (ctx.cr6.eq) goto loc_82F01D24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-9216
	ctx.r4.s64 = ctx.r11.s64 + -9216;
loc_82F01D1C:
	// addi r3,r24,20
	ctx.r3.s64 = ctx.r24.s64 + 20;
	// bl 0x82ef6558
	ctx.lr = 0x82F01D24;
	sub_82EF6558(ctx, base);
loc_82F01D24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f01ac4
	if (ctx.cr6.eq) goto loc_82F01AC4;
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
	ctx.lr = 0x82F01D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f01ac4
	goto loc_82F01AC4;
loc_82F01D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29550
	ctx.lr = 0x82F01D50;
	sub_82F29550(ctx, base);
loc_82F01D50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f01d70
	if (ctx.cr6.eq) goto loc_82F01D70;
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
	ctx.lr = 0x82F01D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01D70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F01D74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82F01D7C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f01d24
	if (ctx.cr6.eq) goto loc_82F01D24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-9288
	ctx.r4.s64 = ctx.r11.s64 + -9288;
	// b 0x82f01d1c
	goto loc_82F01D1C;
}

__attribute__((alias("__imp__sub_82F01D90"))) PPC_WEAK_FUNC(sub_82F01D90);
PPC_FUNC_IMPL(__imp__sub_82F01D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F01D98;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f01dc4
	if (!ctx.cr6.eq) goto loc_82F01DC4;
loc_82F01DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F01DBC:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82F01DC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// sth r26,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r26.u16);
	// stw r26,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r26.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F01DFC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f01e34
	if (ctx.cr0.eq) goto loc_82F01E34;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f40910
	ctx.lr = 0x82F01E2C;
	sub_82F40910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f01e38
	goto loc_82F01E38;
loc_82F01E34:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82F01E38:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f01e60
	if (!ctx.cr6.eq) goto loc_82F01E60;
loc_82F01E44:
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
	ctx.lr = 0x82F01E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f01db8
	goto loc_82F01DB8;
loc_82F01E60:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82ef7638
	ctx.lr = 0x82F01E70;
	sub_82EF7638(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ef7600
	ctx.lr = 0x82F01E78;
	sub_82EF7600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	ctx.lr = 0x82F01E80;
	sub_82EF7600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f3eb98
	ctx.lr = 0x82F01E90;
	sub_82F3EB98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f3eaa8
	ctx.lr = 0x82F01E9C;
	sub_82F3EAA8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f01ed4
	if (ctx.cr6.eq) goto loc_82F01ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82f01ed8
	goto loc_82F01ED8;
loc_82F01ED4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82F01ED8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82f2b358
	ctx.lr = 0x82F01EF8;
	sub_82F2B358(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x82ef1ff0
	ctx.lr = 0x82F01F04;
	sub_82EF1FF0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f01f2c
	if (ctx.cr6.eq) goto loc_82F01F2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F01F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F01F2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f01f5c
	if (ctx.cr6.eq) goto loc_82F01F5C;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82f00940
	ctx.lr = 0x82F01F44;
	sub_82F00940(ctx, base);
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02120
	if (ctx.cr0.eq) goto loc_82F02120;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82f02120
	goto loc_82F02120;
loc_82F01F5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82f3eb38
	ctx.lr = 0x82F01F6C;
	sub_82F3EB38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82f01fbc
	if (!ctx.cr0.eq) goto loc_82F01FBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F01F84:
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
	// bne 0x82f01f84
	if (!ctx.cr0.eq) goto loc_82F01F84;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f01fb0
	if (!ctx.cr0.eq) goto loc_82F01FB0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F01FB0;
	sub_82EF6F38(ctx, base);
loc_82F01FB0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f00c58
	ctx.lr = 0x82F01FB8;
	sub_82F00C58(ctx, base);
	// b 0x82f01e44
	goto loc_82F01E44;
loc_82F01FBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f29110
	ctx.lr = 0x82F01FD0;
	sub_82F29110(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82f01630
	ctx.lr = 0x82F01FD8;
	sub_82F01630(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82f01980
	ctx.lr = 0x82F01FF0;
	sub_82F01980(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02088
	if (!ctx.cr0.eq) goto loc_82F02088;
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82f009d8
	ctx.lr = 0x82F02000;
	sub_82F009D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f291f0
	ctx.lr = 0x82F02008;
	sub_82F291F0(ctx, base);
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
	ctx.lr = 0x82F02020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02030:
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
	// bne 0x82f02030
	if (!ctx.cr0.eq) goto loc_82F02030;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f0205c
	if (!ctx.cr0.eq) goto loc_82F0205C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F0205C;
	sub_82EF6F38(ctx, base);
loc_82F0205C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82F02060:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f00c58
	ctx.lr = 0x82F02068;
	sub_82F00C58(ctx, base);
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
	ctx.lr = 0x82F02080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f01dbc
	goto loc_82F01DBC;
loc_82F02088:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82f00940
	ctx.lr = 0x82F02094;
	sub_82F00940(ctx, base);
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f020f8
	if (ctx.cr0.eq) goto loc_82F020F8;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r9,676(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82f020f8
	if (!ctx.cr6.lt) goto loc_82F020F8;
loc_82F020BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f299e8
	ctx.lr = 0x82F020C4;
	sub_82F299E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f29550
	ctx.lr = 0x82F020CC;
	sub_82F29550(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r8,676(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f020bc
	if (ctx.cr6.lt) goto loc_82F020BC;
loc_82F020F8:
	// addi r3,r1,716
	ctx.r3.s64 = ctx.r1.s64 + 716;
	// bl 0x82f009d8
	ctx.lr = 0x82F02100;
	sub_82F009D8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f291f0
	ctx.lr = 0x82F02108;
	sub_82F291F0(ctx, base);
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
	ctx.lr = 0x82F02120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02120:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f02130
	if (ctx.cr6.eq) goto loc_82F02130;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02130;
	sub_82EF1BF0(ctx, base);
loc_82F02130:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02140:
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
	// bne 0x82f02140
	if (!ctx.cr0.eq) goto loc_82F02140;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f0216c
	if (!ctx.cr0.eq) goto loc_82F0216C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F0216C;
	sub_82EF6F38(ctx, base);
loc_82F0216C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82f02060
	goto loc_82F02060;
}

__attribute__((alias("__imp__sub_82F02174"))) PPC_WEAK_FUNC(sub_82F02174);
PPC_FUNC_IMPL(__imp__sub_82F02174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02178"))) PPC_WEAK_FUNC(sub_82F02178);
PPC_FUNC_IMPL(__imp__sub_82F02178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F02180;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ef6380
	ctx.lr = 0x82F021A0;
	sub_82EF6380(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82f02224
	if (ctx.cr0.eq) goto loc_82F02224;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F021E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f02224
	if (ctx.cr0.eq) goto loc_82F02224;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F021F8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f02210
	if (ctx.cr0.eq) goto loc_82F02210;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f01690
	ctx.lr = 0x82F0220C;
	sub_82F01690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82F02210:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02220
	if (ctx.cr6.eq) goto loc_82F02220;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02220;
	sub_82EF1BF0(ctx, base);
loc_82F02220:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82F02224:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f02298
	if (ctx.cr6.eq) goto loc_82F02298;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f31088
	ctx.lr = 0x82F0225C;
	sub_82F31088(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r27,36(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82f2c528
	ctx.lr = 0x82F02290;
	sub_82F2C528(ctx, base);
	// li r4,770
	ctx.r4.s64 = 770;
	// b 0x82f0229c
	goto loc_82F0229C;
loc_82F02298:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82F0229C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82f2a980
	ctx.lr = 0x82F022A8;
	sub_82F2A980(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f022c8
	if (ctx.cr6.eq) goto loc_82F022C8;
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
	ctx.lr = 0x82F022C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F022C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f022e8
	if (ctx.cr6.eq) goto loc_82F022E8;
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
	ctx.lr = 0x82F022E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F022E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F022F0"))) PPC_WEAK_FUNC(sub_82F022F0);
PPC_FUNC_IMPL(__imp__sub_82F022F0) {
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
	// bl 0x82f00de0
	ctx.lr = 0x82F02310;
	sub_82F00DE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02320
	if (ctx.cr0.eq) goto loc_82F02320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02320;
	sub_82EF6F38(ctx, base);
loc_82F02320:
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

__attribute__((alias("__imp__sub_82F0233C"))) PPC_WEAK_FUNC(sub_82F0233C);
PPC_FUNC_IMPL(__imp__sub_82F0233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F02340"))) PPC_WEAK_FUNC(sub_82F02340);
PPC_FUNC_IMPL(__imp__sub_82F02340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82F02348;
	sub_82CA2BBC(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82ef7600
	ctx.lr = 0x82F02360;
	sub_82EF7600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3eb98
	ctx.lr = 0x82F02370;
	sub_82F3EB98(ctx, base);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82f3eaa8
	ctx.lr = 0x82F023A8;
	sub_82F3EAA8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f023e0
	if (ctx.cr6.eq) goto loc_82F023E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F023D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82f023e4
	goto loc_82F023E4;
loc_82F023E0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82F023E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82f2b358
	ctx.lr = 0x82F02404;
	sub_82F2B358(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82ef2088
	ctx.lr = 0x82F02414;
	sub_82EF2088(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r25,r11,7817
	ctx.r25.u64 = ctx.r11.u64 | 7817;
	// ori r26,r10,9034
	ctx.r26.u64 = ctx.r10.u64 | 9034;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82f02c64
	if (!ctx.cr6.eq) goto loc_82F02C64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82f3eb38
	ctx.lr = 0x82F02440;
	sub_82F3EB38(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne 0x82f025d8
	if (!ctx.cr0.eq) goto loc_82F025D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-8872
	ctx.r4.s64 = ctx.r11.s64 + -8872;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r31,r10,-9436
	ctx.r31.s64 = ctx.r10.s64 + -9436;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82F02464;
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef82d8
	ctx.lr = 0x82F02474;
	sub_82EF82D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F02484;
	sub_82EF8260(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02494:
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
	// bne 0x82f02494
	if (!ctx.cr0.eq) goto loc_82F02494;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f024c0
	if (!ctx.cr0.eq) goto loc_82F024C0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F024C0;
	sub_82EF6F38(ctx, base);
loc_82F024C0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F024CC:
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
	// bne 0x82f024cc
	if (!ctx.cr0.eq) goto loc_82F024CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f024f8
	if (!ctx.cr0.eq) goto loc_82F024F8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F024F8;
	sub_82EF6F38(ctx, base);
loc_82F024F8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef1e18
	ctx.lr = 0x82F02508;
	sub_82EF1E18(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02514:
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
	// bne 0x82f02514
	if (!ctx.cr0.eq) goto loc_82F02514;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02540
	if (!ctx.cr0.eq) goto loc_82F02540;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02540;
	sub_82EF6F38(ctx, base);
loc_82F02540:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02560
	if (ctx.cr6.eq) goto loc_82F02560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02560:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02578
	if (!ctx.cr6.eq) goto loc_82F02578;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02574;
	sub_82EF1BF0(ctx, base);
	// b 0x82f02598
	goto loc_82F02598;
loc_82F02578:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02598
	if (ctx.cr6.lt) goto loc_82F02598;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02598:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F025A4:
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
	// bne 0x82f025a4
	if (!ctx.cr0.eq) goto loc_82F025A4;
loc_82F025C0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f025d0
	if (!ctx.cr0.eq) goto loc_82F025D0;
	// bl 0x82ef6f38
	ctx.lr = 0x82F025D0;
	sub_82EF6F38(ctx, base);
loc_82F025D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f03258
	goto loc_82F03258;
loc_82F025D8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f005e0
	ctx.lr = 0x82F025E0;
	sub_82F005E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82f027d0
	if (ctx.cr6.eq) goto loc_82F027D0;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// beq cr6,0x82f02984
	if (ctx.cr6.eq) goto loc_82F02984;
	// cmpwi cr6,r24,9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 9, ctx.xer);
	// ble cr6,0x82f02624
	if (!ctx.cr6.gt) goto loc_82F02624;
	// cmpwi cr6,r24,11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 11, ctx.xer);
	// ble cr6,0x82f02614
	if (!ctx.cr6.gt) goto loc_82F02614;
	// cmpwi cr6,r24,12
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 12, ctx.xer);
	// ble cr6,0x82f02624
	if (!ctx.cr6.gt) goto loc_82F02624;
	// cmpwi cr6,r24,14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 14, ctx.xer);
	// bgt cr6,0x82f02624
	if (ctx.cr6.gt) goto loc_82F02624;
loc_82F02614:
	// rlwinm. r11,r23,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02624
	if (ctx.cr0.eq) goto loc_82F02624;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82f02988
	goto loc_82F02988;
loc_82F02624:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-8904
	ctx.r4.s64 = ctx.r11.s64 + -8904;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r31,r10,-9436
	ctx.r31.s64 = ctx.r10.s64 + -9436;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82F02640;
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef82d8
	ctx.lr = 0x82F02650;
	sub_82EF82D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F02660;
	sub_82EF8260(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02670:
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
	// bne 0x82f02670
	if (!ctx.cr0.eq) goto loc_82F02670;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f0269c
	if (!ctx.cr0.eq) goto loc_82F0269C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F0269C;
	sub_82EF6F38(ctx, base);
loc_82F0269C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F026A8:
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
	// bne 0x82f026a8
	if (!ctx.cr0.eq) goto loc_82F026A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f026d4
	if (!ctx.cr0.eq) goto loc_82F026D4;
	// bl 0x82ef6f38
	ctx.lr = 0x82F026D4;
	sub_82EF6F38(ctx, base);
loc_82F026D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f026ec
	if (ctx.cr6.eq) goto loc_82F026EC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef6558
	ctx.lr = 0x82F026EC;
	sub_82EF6558(ctx, base);
loc_82F026EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef1e18
	ctx.lr = 0x82F026FC;
	sub_82EF1E18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02708:
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
	// bne 0x82f02708
	if (!ctx.cr0.eq) goto loc_82F02708;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02734
	if (!ctx.cr0.eq) goto loc_82F02734;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02734;
	sub_82EF6F38(ctx, base);
loc_82F02734:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02754
	if (ctx.cr6.eq) goto loc_82F02754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02754:
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
	ctx.lr = 0x82F0276C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02784
	if (!ctx.cr6.eq) goto loc_82F02784;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02780;
	sub_82EF1BF0(ctx, base);
	// b 0x82f027a4
	goto loc_82F027A4;
loc_82F02784:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f027a4
	if (ctx.cr6.lt) goto loc_82F027A4;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F027A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F027A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F027B0:
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
	// bne 0x82f027b0
	if (!ctx.cr0.eq) goto loc_82F027B0;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F027D0:
	// rlwinm. r11,r23,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02984
	if (ctx.cr0.eq) goto loc_82F02984;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-8932
	ctx.r4.s64 = ctx.r11.s64 + -8932;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r31,r10,-8964
	ctx.r31.s64 = ctx.r10.s64 + -8964;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82F027F4;
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef82d8
	ctx.lr = 0x82F02804;
	sub_82EF82D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F02814;
	sub_82EF8260(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02824:
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
	// bne 0x82f02824
	if (!ctx.cr0.eq) goto loc_82F02824;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02850
	if (!ctx.cr0.eq) goto loc_82F02850;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02850;
	sub_82EF6F38(ctx, base);
loc_82F02850:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F0285C:
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
	// bne 0x82f0285c
	if (!ctx.cr0.eq) goto loc_82F0285C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02888
	if (!ctx.cr0.eq) goto loc_82F02888;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02888;
	sub_82EF6F38(ctx, base);
loc_82F02888:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f028a0
	if (ctx.cr6.eq) goto loc_82F028A0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef6558
	ctx.lr = 0x82F028A0;
	sub_82EF6558(ctx, base);
loc_82F028A0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef1e18
	ctx.lr = 0x82F028B0;
	sub_82EF1E18(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F028BC:
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
	// bne 0x82f028bc
	if (!ctx.cr0.eq) goto loc_82F028BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f028e8
	if (!ctx.cr0.eq) goto loc_82F028E8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F028E8;
	sub_82EF6F38(ctx, base);
loc_82F028E8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02908
	if (ctx.cr6.eq) goto loc_82F02908;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02908:
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
	ctx.lr = 0x82F02920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02938
	if (!ctx.cr6.eq) goto loc_82F02938;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02934;
	sub_82EF1BF0(ctx, base);
	// b 0x82f02958
	goto loc_82F02958;
loc_82F02938:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02958
	if (ctx.cr6.lt) goto loc_82F02958;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02958:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02964:
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
	// bne 0x82f02964
	if (!ctx.cr0.eq) goto loc_82F02964;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F02984:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_82F02988:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F02990;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f029b4
	if (ctx.cr0.eq) goto loc_82F029B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// bl 0x82f31c00
	ctx.lr = 0x82F029AC;
	sub_82F31C00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f029b8
	goto loc_82F029B8;
loc_82F029B4:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82F029B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f02aa0
	if (ctx.cr6.eq) goto loc_82F02AA0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3eae0
	ctx.lr = 0x82F029CC;
	sub_82F3EAE0(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82f02a50
	if (!ctx.cr6.eq) goto loc_82F02A50;
	// li r3,772
	ctx.r3.s64 = 772;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F029DC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f02a04
	if (ctx.cr0.eq) goto loc_82F02A04;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f40378
	ctx.lr = 0x82F029FC;
	sub_82F40378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f02a08
	goto loc_82F02A08;
loc_82F02A04:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82F02A08:
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f02a40
	if (ctx.cr6.eq) goto loc_82F02A40;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f3ebd0
	ctx.lr = 0x82F02A20;
	sub_82F3EBD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02a50
	if (!ctx.cr0.eq) goto loc_82F02A50;
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
	ctx.lr = 0x82F02A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02A40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02A4C;
	sub_82EF1BF0(ctx, base);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82F02A50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f02aa0
	if (ctx.cr6.eq) goto loc_82F02AA0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82f02a70
	if (!ctx.cr6.eq) goto loc_82F02A70;
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02a8c
	if (!ctx.cr0.eq) goto loc_82F02A8C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// b 0x82f02a74
	goto loc_82F02A74;
loc_82F02A70:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_82F02A74:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f00f68
	ctx.lr = 0x82F02A84;
	sub_82F00F68(ctx, base);
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82F02A8C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1d88
	ctx.lr = 0x82F02A98;
	sub_82EF1D88(ctx, base);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82f02d48
	goto loc_82F02D48;
loc_82F02AA0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r11,-8992
	ctx.r4.s64 = ctx.r11.s64 + -8992;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r31,r10,-9436
	ctx.r31.s64 = ctx.r10.s64 + -9436;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7638
	ctx.lr = 0x82F02ABC;
	sub_82EF7638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ef82d8
	ctx.lr = 0x82F02ACC;
	sub_82EF82D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ef8260
	ctx.lr = 0x82F02ADC;
	sub_82EF8260(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02AEC:
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
	// bne 0x82f02aec
	if (!ctx.cr0.eq) goto loc_82F02AEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02b18
	if (!ctx.cr0.eq) goto loc_82F02B18;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02B18;
	sub_82EF6F38(ctx, base);
loc_82F02B18:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02B24:
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
	// bne 0x82f02b24
	if (!ctx.cr0.eq) goto loc_82F02B24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02b50
	if (!ctx.cr0.eq) goto loc_82F02B50;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02B50;
	sub_82EF6F38(ctx, base);
loc_82F02B50:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef1e18
	ctx.lr = 0x82F02B60;
	sub_82EF1E18(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02B6C:
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
	// bne 0x82f02b6c
	if (!ctx.cr0.eq) goto loc_82F02B6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02b98
	if (!ctx.cr0.eq) goto loc_82F02B98;
	// bl 0x82ef6f38
	ctx.lr = 0x82F02B98;
	sub_82EF6F38(ctx, base);
loc_82F02B98:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02bb8
	if (ctx.cr6.eq) goto loc_82F02BB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02BB8:
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
	ctx.lr = 0x82F02BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f02bf0
	if (ctx.cr6.eq) goto loc_82F02BF0;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02BF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f02c00
	if (ctx.cr6.eq) goto loc_82F02C00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02C00;
	sub_82EF1BF0(ctx, base);
loc_82F02C00:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02c18
	if (!ctx.cr6.eq) goto loc_82F02C18;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02C14;
	sub_82EF1BF0(ctx, base);
	// b 0x82f02c38
	goto loc_82F02C38;
loc_82F02C18:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02c38
	if (ctx.cr6.lt) goto loc_82F02C38;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02C38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02C44:
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
	// bne 0x82f02c44
	if (!ctx.cr0.eq) goto loc_82F02C44;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F02C64:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82ef1810
	ctx.lr = 0x82F02C6C;
	sub_82EF1810(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82f02d38
	if (!ctx.cr0.eq) goto loc_82F02D38;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f02cb0
	if (ctx.cr6.eq) goto loc_82F02CB0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02c98
	if (ctx.cr6.lt) goto loc_82F02C98;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef0d88
	ctx.lr = 0x82F02C90;
	sub_82EF0D88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82f02ca0
	goto loc_82F02CA0;
loc_82F02C98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
loc_82F02CA0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// addi r4,r11,-9448
	ctx.r4.s64 = ctx.r11.s64 + -9448;
	// bl 0x82ef6558
	ctx.lr = 0x82F02CB0;
	sub_82EF6558(ctx, base);
loc_82F02CB0:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02cd0
	if (ctx.cr6.eq) goto loc_82F02CD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02CD0:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02ce8
	if (!ctx.cr6.eq) goto loc_82F02CE8;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02CE4;
	sub_82EF1BF0(ctx, base);
	// b 0x82f02d08
	goto loc_82F02D08;
loc_82F02CE8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02d08
	if (ctx.cr6.lt) goto loc_82F02D08;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02D08:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02D18:
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
	// bne 0x82f02d18
	if (!ctx.cr0.eq) goto loc_82F02D18;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F02D38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3eae0
	ctx.lr = 0x82F02D48;
	sub_82F3EAE0(ctx, base);
loc_82F02D48:
	// clrlwi. r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f02d58
	if (ctx.cr0.eq) goto loc_82F02D58;
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02d88
	if (ctx.cr0.eq) goto loc_82F02D88;
loc_82F02D58:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82f02e80
	if (!ctx.cr6.eq) goto loc_82F02E80;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// beq cr6,0x82f02d70
	if (ctx.cr6.eq) goto loc_82F02D70;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
loc_82F02D70:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f00f68
	ctx.lr = 0x82F02D80;
	sub_82F00F68(ctx, base);
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82F02D88:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82f02e80
	if (!ctx.cr6.eq) goto loc_82F02E80;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f02db0
	if (ctx.cr6.eq) goto loc_82F02DB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02DB0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f02dd0
	if (ctx.cr6.eq) goto loc_82F02DD0;
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
	ctx.lr = 0x82F02DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02DD0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f02df0
	if (ctx.cr6.eq) goto loc_82F02DF0;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02DF0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f02e10
	if (ctx.cr6.eq) goto loc_82F02E10;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02E10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02E18;
	sub_82EF1BF0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f02e30
	if (!ctx.cr6.eq) goto loc_82F02E30;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F02E2C;
	sub_82EF1BF0(ctx, base);
	// b 0x82f02e50
	goto loc_82F02E50;
loc_82F02E30:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f02e50
	if (ctx.cr6.lt) goto loc_82F02E50;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02E50:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F02E60:
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
	// bne 0x82f02e60
	if (!ctx.cr0.eq) goto loc_82F02E60;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F02E80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f03004
	if (ctx.cr6.eq) goto loc_82F03004;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82f02f74
	if (!ctx.cr6.eq) goto loc_82F02F74;
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f02ea0
	if (ctx.cr0.eq) goto loc_82F02EA0;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x82f02eb8
	goto loc_82F02EB8;
loc_82F02EA0:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f02eb8
	if (ctx.cr6.eq) goto loc_82F02EB8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82f00b30
	ctx.lr = 0x82F02EB8;
	sub_82F00B30(ctx, base);
loc_82F02EB8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f02ee8
	if (ctx.cr6.eq) goto loc_82F02EE8;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f02ee8
	if (!ctx.cr0.eq) goto loc_82F02EE8;
	// stb r20,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r20.u8);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f02efc
	goto loc_82F02EFC;
loc_82F02EE8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02EFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f02f28
	if (ctx.cr6.eq) goto loc_82F02F28;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f02f24
	if (ctx.cr6.eq) goto loc_82F02F24;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02F24:
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_82F02F28:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f02f48
	if (ctx.cr6.eq) goto loc_82F02F48;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02F48:
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f02f6c
	if (ctx.cr6.eq) goto loc_82F02F6C;
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
	ctx.lr = 0x82F02F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02F6C:
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// b 0x82f03004
	goto loc_82F03004;
loc_82F02F74:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F02F7C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f02fb4
	if (ctx.cr0.eq) goto loc_82F02FB4;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f00cf8
	ctx.lr = 0x82F02FAC;
	sub_82F00CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f02fb8
	goto loc_82F02FB8;
loc_82F02FB4:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82F02FB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f030c0
	if (ctx.cr6.eq) goto loc_82F030C0;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f030c0
	if (!ctx.cr0.eq) goto loc_82F030C0;
	// stb r20,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r20.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r20,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r20.u8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F02FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F02FEC:
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
	ctx.lr = 0x82F03004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03004:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82f00eb0
	ctx.lr = 0x82F03018;
	sub_82F00EB0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f03040
	if (ctx.cr6.eq) goto loc_82F03040;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03040:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f03060
	if (ctx.cr6.eq) goto loc_82F03060;
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
	ctx.lr = 0x82F03060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03060:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f03080
	if (ctx.cr6.eq) goto loc_82F03080;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03080:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f030a0
	if (ctx.cr6.eq) goto loc_82F030A0;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F030A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F030A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F030A8;
	sub_82EF1BF0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f031f8
	if (!ctx.cr6.eq) goto loc_82F031F8;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F030BC;
	sub_82EF1BF0(ctx, base);
	// b 0x82f03218
	goto loc_82F03218;
loc_82F030C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F030D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f02fec
	if (!ctx.cr6.eq) goto loc_82F02FEC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f030f0
	if (ctx.cr6.eq) goto loc_82F030F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F030F0;
	sub_82EF1BF0(ctx, base);
loc_82F030F0:
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
	ctx.lr = 0x82F03108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03128
	if (ctx.cr6.eq) goto loc_82F03128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03128:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f03148
	if (ctx.cr6.eq) goto loc_82F03148;
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
	ctx.lr = 0x82F03148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03148:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f03168
	if (ctx.cr6.eq) goto loc_82F03168;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03168:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f03188
	if (ctx.cr6.eq) goto loc_82F03188;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03188:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F03190;
	sub_82EF1BF0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f031a8
	if (!ctx.cr6.eq) goto loc_82F031A8;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F031A4;
	sub_82EF1BF0(ctx, base);
	// b 0x82f031c8
	goto loc_82F031C8;
loc_82F031A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f031c8
	if (ctx.cr6.lt) goto loc_82F031C8;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F031C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F031C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F031D8:
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
	// bne 0x82f031d8
	if (!ctx.cr0.eq) goto loc_82F031D8;
	// b 0x82f025c0
	goto loc_82F025C0;
loc_82F031F8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f03218
	if (ctx.cr6.lt) goto loc_82F03218;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03218:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F03228:
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
	// bne 0x82f03228
	if (!ctx.cr0.eq) goto loc_82F03228;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f03254
	if (!ctx.cr0.eq) goto loc_82F03254;
	// bl 0x82ef6f38
	ctx.lr = 0x82F03254;
	sub_82EF6F38(ctx, base);
loc_82F03254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F03258:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_82F03260"))) PPC_WEAK_FUNC(sub_82F03260);
PPC_FUNC_IMPL(__imp__sub_82F03260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F03268;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f0329c
	if (ctx.cr6.eq) goto loc_82F0329C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82f032c4
	if (!ctx.cr0.eq) goto loc_82F032C4;
loc_82F0329C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f032b8
	if (ctx.cr6.eq) goto loc_82F032B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-8840
	ctx.r4.s64 = ctx.r11.s64 + -8840;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82f01500
	ctx.lr = 0x82F032B8;
	sub_82F01500(ctx, base);
loc_82F032B8:
	// bl 0x82f01340
	ctx.lr = 0x82F032BC;
	sub_82F01340(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f032e8
	if (ctx.cr0.eq) goto loc_82F032E8;
loc_82F032C4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F032CC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f032e8
	if (ctx.cr0.eq) goto loc_82F032E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f01690
	ctx.lr = 0x82F032E0;
	sub_82F01690(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f032ec
	goto loc_82F032EC;
loc_82F032E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F032EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f0330c
	if (ctx.cr6.eq) goto loc_82F0330C;
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
	ctx.lr = 0x82F0330C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F0330C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F03318"))) PPC_WEAK_FUNC(sub_82F03318);
PPC_FUNC_IMPL(__imp__sub_82F03318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F03320;
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
	// bl 0x82f03670
	ctx.lr = 0x82F03334;
	sub_82F03670(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// bne cr6,0x82f03380
	if (!ctx.cr6.eq) goto loc_82F03380;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6dae8
	ctx.lr = 0x82F0337C;
	sub_82F6DAE8(ctx, base);
	// b 0x82f03444
	goto loc_82F03444;
loc_82F03380:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F03388:
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// and r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f03388
	if (!ctx.cr6.eq) goto loc_82F03388;
	// mulli r9,r28,12
	ctx.r9.s64 = ctx.r28.s64 * 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne cr6,0x82f033f4
	if (!ctx.cr6.eq) goto loc_82F033F4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f033dc
	if (ctx.cr6.eq) goto loc_82F033DC;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F033DC;
	sub_82F6DAE8(ctx, base);
loc_82F033DC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f015b0
	ctx.lr = 0x82F033E8;
	sub_82F015B0(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82f03444
	goto loc_82F03444;
loc_82F033F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F033F4:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82f033f0
	if (!ctx.cr6.eq) goto loc_82F033F0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f0342c
	if (ctx.cr6.eq) goto loc_82F0342C;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F0342C;
	sub_82F6DAE8(ctx, base);
loc_82F0342C:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f015b0
	ctx.lr = 0x82F0343C;
	sub_82F015B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F03444:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F03450"))) PPC_WEAK_FUNC(sub_82F03450);
PPC_FUNC_IMPL(__imp__sub_82F03450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F03458;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03470;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f034a8
	if (ctx.cr0.eq) goto loc_82F034A8;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f40910
	ctx.lr = 0x82F034A0;
	sub_82F40910(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f034ac
	goto loc_82F034AC;
loc_82F034A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F034AC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f034e0
	if (!ctx.cr6.eq) goto loc_82F034E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F034BC:
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
	ctx.lr = 0x82F034D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82F034E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ef7638
	ctx.lr = 0x82F034F4;
	sub_82EF7638(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef7600
	ctx.lr = 0x82F034FC;
	sub_82EF7600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f02340
	ctx.lr = 0x82F0350C;
	sub_82F02340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f00c58
	ctx.lr = 0x82F03518;
	sub_82F00C58(ctx, base);
	// b 0x82f034bc
	goto loc_82F034BC;
}

__attribute__((alias("__imp__sub_82F0351C"))) PPC_WEAK_FUNC(sub_82F0351C);
PPC_FUNC_IMPL(__imp__sub_82F0351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03520"))) PPC_WEAK_FUNC(sub_82F03520);
PPC_FUNC_IMPL(__imp__sub_82F03520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F03528;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f0353c
	if (!ctx.cr6.eq) goto loc_82F0353C;
	// b 0x82f03660
	goto loc_82F03660;
loc_82F0353C:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f0354c
	if (!ctx.cr6.lt) goto loc_82F0354C;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f03594
	goto loc_82F03594;
loc_82F0354C:
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
	ctx.lr = 0x82F03568;
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
loc_82F03594:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F035A8;
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
	// beq cr6,0x82f035e4
	if (ctx.cr6.eq) goto loc_82F035E4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F035CC:
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
	// bne 0x82f035cc
	if (!ctx.cr0.eq) goto loc_82F035CC;
loc_82F035E4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f03650
	if (ctx.cr6.eq) goto loc_82F03650;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F035FC:
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
	// beq cr6,0x82f0363c
	if (ctx.cr6.eq) goto loc_82F0363C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f03318
	ctx.lr = 0x82F0362C;
	sub_82F03318(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6fae8
	ctx.lr = 0x82F03638;
	sub_82F6FAE8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F0363C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82f035fc
	if (!ctx.cr0.eq) goto loc_82F035FC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F03650;
	sub_82EF6F38(ctx, base);
loc_82F03650:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F03660:
	// bl 0x82f74218
	ctx.lr = 0x82F03664;
	sub_82F74218(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F0366C"))) PPC_WEAK_FUNC(sub_82F0366C);
PPC_FUNC_IMPL(__imp__sub_82F0366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03670"))) PPC_WEAK_FUNC(sub_82F03670);
PPC_FUNC_IMPL(__imp__sub_82F03670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f03684
	if (!ctx.cr6.eq) goto loc_82F03684;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f03520
	sub_82F03520(ctx, base);
	return;
loc_82F03684:
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
	// b 0x82f03520
	sub_82F03520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F036B0"))) PPC_WEAK_FUNC(sub_82F036B0);
PPC_FUNC_IMPL(__imp__sub_82F036B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F036B4"))) PPC_WEAK_FUNC(sub_82F036B4);
PPC_FUNC_IMPL(__imp__sub_82F036B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F036B8"))) PPC_WEAK_FUNC(sub_82F036B8);
PPC_FUNC_IMPL(__imp__sub_82F036B8) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F036D8;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12048
	ctx.r11.s64 = ctx.r11.s64 + -12048;
	// addi r10,r10,-5240
	ctx.r10.s64 = ctx.r10.s64 + -5240;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r9,r9,-8744
	ctx.r9.s64 = ctx.r9.s64 + -8744;
	// addi r8,r8,-8764
	ctx.r8.s64 = ctx.r8.s64 + -8764;
	// addi r10,r7,-8740
	ctx.r10.s64 = ctx.r7.s64 + -8740;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82ef2698
	ctx.lr = 0x82F0372C;
	sub_82EF2698(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f03748
	if (ctx.cr6.eq) goto loc_82F03748;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03748:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03768
	if (ctx.cr6.eq) goto loc_82F03768;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03768:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F03788"))) PPC_WEAK_FUNC(sub_82F03788);
PPC_FUNC_IMPL(__imp__sub_82F03788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f03d18
	sub_82F03D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03790"))) PPC_WEAK_FUNC(sub_82F03790);
PPC_FUNC_IMPL(__imp__sub_82F03790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x82f03d18
	sub_82F03D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F03798"))) PPC_WEAK_FUNC(sub_82F03798);
PPC_FUNC_IMPL(__imp__sub_82F03798) {
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
	// beq cr6,0x82f03804
	if (ctx.cr6.eq) goto loc_82F03804;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f03804
	if (!ctx.cr6.eq) goto loc_82F03804;
loc_82F037C4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f037e8
	if (!ctx.cr6.eq) goto loc_82F037E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F037E8:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f03804
	if (ctx.cr6.eq) goto loc_82F03804;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f037c4
	goto loc_82F037C4;
loc_82F03804:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F0380C"))) PPC_WEAK_FUNC(sub_82F0380C);
PPC_FUNC_IMPL(__imp__sub_82F0380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03810"))) PPC_WEAK_FUNC(sub_82F03810);
PPC_FUNC_IMPL(__imp__sub_82F03810) {
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
	// beq cr6,0x82f03878
	if (ctx.cr6.eq) goto loc_82F03878;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f03878
	if (!ctx.cr6.eq) goto loc_82F03878;
loc_82F0383C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f0385c
	if (!ctx.cr6.eq) goto loc_82F0385C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F0385C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f03878
	if (ctx.cr6.eq) goto loc_82F03878;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f0383c
	goto loc_82F0383C;
loc_82F03878:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F03880"))) PPC_WEAK_FUNC(sub_82F03880);
PPC_FUNC_IMPL(__imp__sub_82F03880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F03888;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f0399c
	if (ctx.cr6.eq) goto loc_82F0399C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f0399c
	if (ctx.cr6.eq) goto loc_82F0399C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f0399c
	if (!ctx.cr6.eq) goto loc_82F0399C;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82F038D4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82f038f0
	if (!ctx.cr6.eq) goto loc_82F038F0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82f03910
	if (ctx.cr6.eq) goto loc_82F03910;
loc_82F038F0:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f0399c
	if (ctx.cr6.eq) goto loc_82F0399C;
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// b 0x82f038d4
	goto loc_82F038D4;
loc_82F03910:
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f0396c
	if (!ctx.cr6.eq) goto loc_82F0396C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f0397c
	if (ctx.cr6.eq) goto loc_82F0397C;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x82f6fae8
	ctx.lr = 0x82F03944;
	sub_82F6FAE8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82f6dae8
	ctx.lr = 0x82F03964;
	sub_82F6DAE8(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f0397c
	goto loc_82F0397C;
loc_82F0396C:
	// mulli r11,r7,12
	ctx.r11.s64 = ctx.r7.s64 * 12;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82F0397C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f6fae8
	ctx.lr = 0x82F03988;
	sub_82F6FAE8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F0399C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F039A4"))) PPC_WEAK_FUNC(sub_82F039A4);
PPC_FUNC_IMPL(__imp__sub_82F039A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F039A8"))) PPC_WEAK_FUNC(sub_82F039A8);
PPC_FUNC_IMPL(__imp__sub_82F039A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F039B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x82f039fc
	if (ctx.cr6.eq) goto loc_82F039FC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// and r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x82f03798
	ctx.lr = 0x82F039DC;
	sub_82F03798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f039fc
	if (ctx.cr0.lt) goto loc_82F039FC;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82f015b0
	ctx.lr = 0x82F039F8;
	sub_82F015B0(ctx, base);
	// b 0x82f03a0c
	goto loc_82F03A0C;
loc_82F039FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f03318
	ctx.lr = 0x82F03A0C;
	sub_82F03318(ctx, base);
loc_82F03A0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F03A14"))) PPC_WEAK_FUNC(sub_82F03A14);
PPC_FUNC_IMPL(__imp__sub_82F03A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03A18"))) PPC_WEAK_FUNC(sub_82F03A18);
PPC_FUNC_IMPL(__imp__sub_82F03A18) {
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
	// beq cr6,0x82f03a5c
	if (ctx.cr6.eq) goto loc_82F03A5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f03810
	ctx.lr = 0x82F03A44;
	sub_82F03810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f03a5c
	if (ctx.cr0.lt) goto loc_82F03A5C;
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82f03a60
	goto loc_82F03A60;
loc_82F03A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F03A60:
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

__attribute__((alias("__imp__sub_82F03A74"))) PPC_WEAK_FUNC(sub_82F03A74);
PPC_FUNC_IMPL(__imp__sub_82F03A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03A78"))) PPC_WEAK_FUNC(sub_82F03A78);
PPC_FUNC_IMPL(__imp__sub_82F03A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F03A80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b227c
	ctx.lr = 0x82F03A9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f03ae0
	if (ctx.cr6.eq) goto loc_82F03AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f70ad0
	ctx.lr = 0x82F03AB0;
	sub_82F70AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f039a8
	ctx.lr = 0x82F03ABC;
	sub_82F039A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03aec
	if (ctx.cr6.eq) goto loc_82F03AEC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f03aec
	goto loc_82F03AEC;
loc_82F03AE0:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f03880
	ctx.lr = 0x82F03AEC;
	sub_82F03880(ctx, base);
loc_82F03AEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b226c
	ctx.lr = 0x82F03AF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F03AFC"))) PPC_WEAK_FUNC(sub_82F03AFC);
PPC_FUNC_IMPL(__imp__sub_82F03AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03B00"))) PPC_WEAK_FUNC(sub_82F03B00);
PPC_FUNC_IMPL(__imp__sub_82F03B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F03B08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b227c
	ctx.lr = 0x82F03B24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f03a18
	ctx.lr = 0x82F03B30;
	sub_82F03A18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f03b60
	if (ctx.cr0.eq) goto loc_82F03B60;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832b226c
	ctx.lr = 0x82F03B58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f03b94
	goto loc_82F03B94;
loc_82F03B60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b226c
	ctx.lr = 0x82F03B68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f03b90
	if (ctx.cr6.eq) goto loc_82F03B90;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f03b94
	goto loc_82F03B94;
loc_82F03B90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F03B94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F03B9C"))) PPC_WEAK_FUNC(sub_82F03B9C);
PPC_FUNC_IMPL(__imp__sub_82F03B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03BA0"))) PPC_WEAK_FUNC(sub_82F03BA0);
PPC_FUNC_IMPL(__imp__sub_82F03BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82F03BA8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r23,r25,20
	ctx.r23.s64 = ctx.r25.s64 + 20;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// bl 0x832b227c
	ctx.lr = 0x82F03BCC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f03c30
	if (ctx.cr6.eq) goto loc_82F03C30;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// subf r26,r29,r24
	ctx.r26.s64 = ctx.r24.s64 - ctx.r29.s64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82F03BE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f03c24
	if (!ctx.cr6.eq) goto loc_82F03C24;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// bl 0x82f03a18
	ctx.lr = 0x82F03BF8;
	sub_82F03A18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f03c20
	if (ctx.cr0.eq) goto loc_82F03C20;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f03c24
	goto loc_82F03C24;
loc_82F03C20:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82F03C24:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82f03be0
	if (!ctx.cr0.eq) goto loc_82F03BE0;
loc_82F03C30:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832b226c
	ctx.lr = 0x82F03C38;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f03c6c
	if (ctx.cr0.eq) goto loc_82F03C6C;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f03c6c
	if (ctx.cr6.eq) goto loc_82F03C6C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03C6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82F03C74"))) PPC_WEAK_FUNC(sub_82F03C74);
PPC_FUNC_IMPL(__imp__sub_82F03C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03C78"))) PPC_WEAK_FUNC(sub_82F03C78);
PPC_FUNC_IMPL(__imp__sub_82F03C78) {
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
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-8744
	ctx.r11.s64 = ctx.r11.s64 + -8744;
	// addi r10,r10,-8764
	ctx.r10.s64 = ctx.r10.s64 + -8764;
	// addi r9,r9,-8740
	ctx.r9.s64 = ctx.r9.s64 + -8740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// bl 0x82f279e0
	ctx.lr = 0x82F03CB8;
	sub_82F279E0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82f74218
	ctx.lr = 0x82F03CC0;
	sub_82F74218(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03ce0
	if (ctx.cr6.eq) goto loc_82F03CE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03CE0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// addi r10,r10,-12048
	ctx.r10.s64 = ctx.r10.s64 + -12048;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82F03D00;
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

__attribute__((alias("__imp__sub_82F03D14"))) PPC_WEAK_FUNC(sub_82F03D14);
PPC_FUNC_IMPL(__imp__sub_82F03D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03D18"))) PPC_WEAK_FUNC(sub_82F03D18);
PPC_FUNC_IMPL(__imp__sub_82F03D18) {
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
	// bl 0x82f03c78
	ctx.lr = 0x82F03D38;
	sub_82F03C78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f03d48
	if (ctx.cr0.eq) goto loc_82F03D48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F03D48;
	sub_82EF6F38(ctx, base);
loc_82F03D48:
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

__attribute__((alias("__imp__sub_82F03D64"))) PPC_WEAK_FUNC(sub_82F03D64);
PPC_FUNC_IMPL(__imp__sub_82F03D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F03D68"))) PPC_WEAK_FUNC(sub_82F03D68);
PPC_FUNC_IMPL(__imp__sub_82F03D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F03D70;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F03D80;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12048
	ctx.r11.s64 = ctx.r11.s64 + -12048;
	// addi r10,r10,-5240
	ctx.r10.s64 = ctx.r10.s64 + -5240;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r8,-11876
	ctx.r11.s64 = ctx.r8.s64 + -11876;
	// addi r9,r9,-11856
	ctx.r9.s64 = ctx.r9.s64 + -11856;
	// addi r10,r7,-11884
	ctx.r10.s64 = ctx.r7.s64 + -11884;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// bl 0x82ef70f0
	ctx.lr = 0x82F03DD4;
	sub_82EF70F0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f03e20
	if (ctx.cr6.eq) goto loc_82F03E20;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f03dfc
	if (ctx.cr6.eq) goto loc_82F03DFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03DFC:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03e1c
	if (ctx.cr6.eq) goto loc_82F03E1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03E1C:
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
loc_82F03E20:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03E28;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r28,r11,7817
	ctx.r28.u64 = ctx.r11.u64 | 7817;
	// ori r29,r10,9034
	ctx.r29.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f03e58
	if (ctx.cr0.eq) goto loc_82F03E58;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f036b8
	ctx.lr = 0x82F03E50;
	sub_82F036B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f03e5c
	goto loc_82F03E5C;
loc_82F03E58:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F03E5C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f03e7c
	if (ctx.cr6.eq) goto loc_82F03E7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03E7C:
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82f040bc
	if (ctx.cr6.eq) goto loc_82F040BC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03E90;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f03eac
	if (ctx.cr0.eq) goto loc_82F03EAC;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f00810
	ctx.lr = 0x82F03EA4;
	sub_82F00810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f03eb0
	goto loc_82F03EB0;
loc_82F03EAC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F03EB0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f03ef0
	if (ctx.cr6.eq) goto loc_82F03EF0;
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
	ctx.lr = 0x82F03EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03EF0:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03EF8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f03f18
	if (ctx.cr0.eq) goto loc_82F03F18;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f007c0
	ctx.lr = 0x82F03F10;
	sub_82F007C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f03f1c
	goto loc_82F03F1C;
loc_82F03F18:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F03F1C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f03f5c
	if (ctx.cr6.eq) goto loc_82F03F5C;
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
	ctx.lr = 0x82F03F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03F5C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03F84;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f03fa4
	if (ctx.cr0.eq) goto loc_82F03FA4;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f5daf0
	ctx.lr = 0x82F03F9C;
	sub_82F5DAF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f03fa8
	goto loc_82F03FA8;
loc_82F03FA4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F03FA8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F03FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f03fe8
	if (ctx.cr6.eq) goto loc_82F03FE8;
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
	ctx.lr = 0x82F03FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F03FE8:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F03FF0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f0400c
	if (ctx.cr0.eq) goto loc_82F0400C;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f068f0
	ctx.lr = 0x82F04004;
	sub_82F068F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f04010
	goto loc_82F04010;
loc_82F0400C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F04010:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F04030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f04050
	if (ctx.cr6.eq) goto loc_82F04050;
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
	ctx.lr = 0x82F04050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F04050:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F04058;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f04070
	if (ctx.cr0.eq) goto loc_82F04070;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x82f0a138
	ctx.lr = 0x82F0406C;
	sub_82F0A138(ctx, base);
	// b 0x82f04074
	goto loc_82F04074;
loc_82F04070:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82F04074:
	// bl 0x82f09940
	ctx.lr = 0x82F04078;
	sub_82F09940(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F0409C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f040bc
	if (ctx.cr6.eq) goto loc_82F040BC;
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
	ctx.lr = 0x82F040BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F040BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F040C8"))) PPC_WEAK_FUNC(sub_82F040C8);
PPC_FUNC_IMPL(__imp__sub_82F040C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca6320
	sub_82CA6320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F040CC"))) PPC_WEAK_FUNC(sub_82F040CC);
PPC_FUNC_IMPL(__imp__sub_82F040CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F040D0"))) PPC_WEAK_FUNC(sub_82F040D0);
PPC_FUNC_IMPL(__imp__sub_82F040D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8217ab30
	sub_8217AB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F040D4"))) PPC_WEAK_FUNC(sub_82F040D4);
PPC_FUNC_IMPL(__imp__sub_82F040D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F040D8"))) PPC_WEAK_FUNC(sub_82F040D8);
PPC_FUNC_IMPL(__imp__sub_82F040D8) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82f67220
	ctx.lr = 0x82F04104;
	sub_82F67220(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F04130"))) PPC_WEAK_FUNC(sub_82F04130);
PPC_FUNC_IMPL(__imp__sub_82F04130) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82F0414C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f0414c
	if (!ctx.cr6.eq) goto loc_82F0414C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82f67160
	ctx.lr = 0x82F04174;
	sub_82F67160(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F041A0"))) PPC_WEAK_FUNC(sub_82F041A0);
PPC_FUNC_IMPL(__imp__sub_82F041A0) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f041cc
	if (ctx.cr6.lt) goto loc_82F041CC;
	// bl 0x82f6baa0
	ctx.lr = 0x82F041CC;
	sub_82F6BAA0(ctx, base);
loc_82F041CC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F04200"))) PPC_WEAK_FUNC(sub_82F04200);
PPC_FUNC_IMPL(__imp__sub_82F04200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f0422c
	if (ctx.cr6.lt) goto loc_82F0422C;
	// bl 0x82f6baa0
	ctx.lr = 0x82F0422C;
	sub_82F6BAA0(ctx, base);
loc_82F0422C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfd f31,8(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.f31.u64);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F04250"))) PPC_WEAK_FUNC(sub_82F04250);
PPC_FUNC_IMPL(__imp__sub_82F04250) {
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
	// bl 0x82f6baa0
	ctx.lr = 0x82F04270;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82F04294"))) PPC_WEAK_FUNC(sub_82F04294);
PPC_FUNC_IMPL(__imp__sub_82F04294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04298"))) PPC_WEAK_FUNC(sub_82F04298);
PPC_FUNC_IMPL(__imp__sub_82F04298) {
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
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f65770
	ctx.lr = 0x82F042BC;
	sub_82F65770(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-7752
	ctx.r11.s64 = ctx.r11.s64 + -7752;
	// addi r10,r10,11048
	ctx.r10.s64 = ctx.r10.s64 + 11048;
	// addi r9,r9,10968
	ctx.r9.s64 = ctx.r9.s64 + 10968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F042F8"))) PPC_WEAK_FUNC(sub_82F042F8);
PPC_FUNC_IMPL(__imp__sub_82F042F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F0430C"))) PPC_WEAK_FUNC(sub_82F0430C);
PPC_FUNC_IMPL(__imp__sub_82F0430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04310"))) PPC_WEAK_FUNC(sub_82F04310);
PPC_FUNC_IMPL(__imp__sub_82F04310) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F04324"))) PPC_WEAK_FUNC(sub_82F04324);
PPC_FUNC_IMPL(__imp__sub_82F04324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04328"))) PPC_WEAK_FUNC(sub_82F04328);
PPC_FUNC_IMPL(__imp__sub_82F04328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F0433C"))) PPC_WEAK_FUNC(sub_82F0433C);
PPC_FUNC_IMPL(__imp__sub_82F0433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04340"))) PPC_WEAK_FUNC(sub_82F04340);
PPC_FUNC_IMPL(__imp__sub_82F04340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F04354"))) PPC_WEAK_FUNC(sub_82F04354);
PPC_FUNC_IMPL(__imp__sub_82F04354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F04358"))) PPC_WEAK_FUNC(sub_82F04358);
PPC_FUNC_IMPL(__imp__sub_82F04358) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F0436C"))) PPC_WEAK_FUNC(sub_82F0436C);
PPC_FUNC_IMPL(__imp__sub_82F0436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

