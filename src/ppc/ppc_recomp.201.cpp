#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_831FBD28) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bgt cr6,0x831fbe78
	if (ctx.cr6.gt) {
		sub_831FBE78(ctx, base);
		return;
	}
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// addi r12,r12,-31216
	ctx.r12.s64 = ctx.r12.s64 + -31216;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-31968
	ctx.r12.s64 = -2095054848;
	// addi r12,r12,-17056
	ctx.r12.s64 = ctx.r12.s64 + -17056;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// WARNING: Target 0x831FBD60 is outside current function but inside image
		goto loc_831FBD60;
	case 1:
		// WARNING: Target 0x831FBD74 is outside current function but inside image
		goto loc_831FBD74;
	case 2:
		// WARNING: Target 0x831FBD8C is outside current function but inside image
		goto loc_831FBD8C;
	case 3:
		// WARNING: Target 0x831FBDAC is outside current function but inside image
		goto loc_831FBDAC;
	case 4:
		// WARNING: Target 0x831FBE00 is outside current function but inside image
		goto loc_831FBE00;
	case 5:
		// WARNING: Target 0x831FBE1C is outside current function but inside image
		goto loc_831FBE1C;
	case 6:
		// WARNING: Target 0x831FBD60 is outside current function but inside image
		goto loc_831FBD60;
	case 7:
		// WARNING: Target 0x831FBD60 is outside current function but inside image
		goto loc_831FBD60;
	case 8:
		// WARNING: Target 0x831FBDD0 is outside current function but inside image
		goto loc_831FBDD0;
	case 9:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 10:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 11:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 12:
		// WARNING: Target 0x831FBE00 is outside current function but inside image
		goto loc_831FBE00;
	case 13:
		// WARNING: Target 0x831FBDEC is outside current function but inside image
		goto loc_831FBDEC;
	case 14:
		// WARNING: Target 0x831FBE28 is outside current function but inside image
		goto loc_831FBE28;
	case 15:
		// WARNING: Target 0x831FBE34 is outside current function but inside image
		goto loc_831FBE34;
	case 16:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 17:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 18:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 19:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 20:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 21:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 22:
		// WARNING: Target 0x831FBDF8 is outside current function but inside image
		goto loc_831FBDF8;
	case 23:
		// WARNING: Target 0x831FBE50 is outside current function but inside image
		goto loc_831FBE50;
	case 24:
		// WARNING: Target 0x831FBE60 is outside current function but inside image
		goto loc_831FBE60;
	case 25:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 26:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 27:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 28:
		// WARNING: Target 0x831FBDF8 is outside current function but inside image
		goto loc_831FBDF8;
	case 29:
		// WARNING: Target 0x831FBE50 is outside current function but inside image
		goto loc_831FBE50;
	case 30:
		// WARNING: Target 0x831FBE60 is outside current function but inside image
		goto loc_831FBE60;
	case 31:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 32:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 33:
		// WARNING: Target 0x831FBE78 is outside current function but inside image
		goto loc_831FBE78;
	case 34:
		// WARNING: Target 0x831FBE58 is outside current function but inside image
		goto loc_831FBE58;
	case 35:
		// WARNING: Target 0x831FBE68 is outside current function but inside image
		goto loc_831FBE68;
	case 36:
		// WARNING: Target 0x831FBE70 is outside current function but inside image
		goto loc_831FBE70;
	default:
		__builtin_unreachable();
	}
}

PPC_WEAK_FUNC(sub_831FBD28) {
	__imp__sub_831FBD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBD60) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831fbe84
	// ERROR 831FBE84
	return;
}

PPC_WEAK_FUNC(sub_831FBD60) {
	__imp__sub_831FBD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBD74) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x831fbe88
	// ERROR 831FBE88
	return;
}

PPC_WEAK_FUNC(sub_831FBD74) {
	__imp__sub_831FBD74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBD8C) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x831fbe8c
	// ERROR 831FBE8C
	return;
}

PPC_WEAK_FUNC(sub_831FBD8C) {
	__imp__sub_831FBD8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBDAC) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FBDAC) {
	__imp__sub_831FBDAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBDD0) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x831fbe8c
	// ERROR 831FBE8C
	return;
}

PPC_WEAK_FUNC(sub_831FBDD0) {
	__imp__sub_831FBDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBDEC) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x831fbe80
	// ERROR 831FBE80
	return;
}

PPC_WEAK_FUNC(sub_831FBDEC) {
	__imp__sub_831FBDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBDF8) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x831fbd64
	// ERROR 831FBD64
	return;
}

PPC_WEAK_FUNC(sub_831FBDF8) {
	__imp__sub_831FBDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE00) {
	PPC_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FBE00) {
	__imp__sub_831FBE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE1C) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x831fbd7c
	// ERROR 831FBD7C
	return;
}

PPC_WEAK_FUNC(sub_831FBE1C) {
	__imp__sub_831FBE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE28) {
	PPC_FUNC_PROLOGUE();
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x831fbdb4
	// ERROR 831FBDB4
	return;
}

PPC_WEAK_FUNC(sub_831FBE28) {
	__imp__sub_831FBE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE34) {
	PPC_FUNC_PROLOGUE();
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x831fbe88
	// ERROR 831FBE88
	return;
}

PPC_WEAK_FUNC(sub_831FBE34) {
	__imp__sub_831FBE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE50) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x831fbdd4
	// ERROR 831FBDD4
	return;
}

PPC_WEAK_FUNC(sub_831FBE50) {
	__imp__sub_831FBE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE58) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x831fbd64
	// ERROR 831FBD64
	return;
}

PPC_WEAK_FUNC(sub_831FBE58) {
	__imp__sub_831FBE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE60) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x831fbe04
	// ERROR 831FBE04
	return;
}

PPC_WEAK_FUNC(sub_831FBE60) {
	__imp__sub_831FBE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE68) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x831fbdd4
	// ERROR 831FBDD4
	return;
}

PPC_WEAK_FUNC(sub_831FBE68) {
	__imp__sub_831FBE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE70) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x831fbe04
	// ERROR 831FBE04
	return;
}

PPC_WEAK_FUNC(sub_831FBE70) {
	__imp__sub_831FBE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE78) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FBE78) {
	__imp__sub_831FBE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FBE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FBEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831fba60
	ctx.lr = 0x831FBEB4;
	sub_831FBA60(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x831fbec4
	if (!ctx.cr0.eq) goto loc_831FBEC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fc004
	goto loc_831FC004;
loc_831FBEC4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fbb90
	ctx.lr = 0x831FBED0;
	sub_831FBB90(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ble cr6,0x831fbf40
	if (!ctx.cr6.gt) goto loc_831FBF40;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x831fbfcc
	if (!ctx.cr6.gt) goto loc_831FBFCC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subf r30,r7,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_831FBEF4:
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// srawi. r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x831fbf2c
	if (!ctx.cr0.gt) goto loc_831FBF2C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
loc_831FBF14:
	// sraw r27,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r27.s64 = ctx.r5.s32 >> temp.u32;
	// stbx r27,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r27.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x831fbf14
	if (ctx.cr6.lt) goto loc_831FBF14;
loc_831FBF2C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x831fbef4
	if (!ctx.cr0.eq) goto loc_831FBEF4;
	// b 0x831fbfcc
	goto loc_831FBFCC;
loc_831FBF40:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x831fbfa0
	if (!ctx.cr6.gt) goto loc_831FBFA0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_831FBF60:
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x831fbf7c
	if (!ctx.cr6.lt) goto loc_831FBF7C;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x831fbf80
	goto loc_831FBF80;
loc_831FBF7C:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_831FBF80:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 & ctx.r7.u64;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x831fbf60
	if (!ctx.cr0.eq) goto loc_831FBF60;
loc_831FBFA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x831fbfcc
	if (!ctx.cr6.gt) goto loc_831FBFCC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_831FBFB0:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// sraw r9,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r9.s64 = ctx.r5.s32 >> temp.u32;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x831fbfb0
	if (ctx.cr6.lt) goto loc_831FBFB0;
loc_831FBFCC:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4000
	ctx.r9.s64 = ctx.r11.s64 + 4000;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ble cr6,0x831fc004
	if (!ctx.cr6.gt) goto loc_831FC004;
loc_831FBFE8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stbx r9,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r9.u8);
	// blt cr6,0x831fbfe8
	if (ctx.cr6.lt) goto loc_831FBFE8;
loc_831FC004:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FBE98) {
	__imp__sub_831FBE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC010) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831fbac8
	ctx.lr = 0x831FC028;
	sub_831FBAC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831fc038
	if (ctx.cr0.eq) goto loc_831FC038;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831fbe98
	ctx.lr = 0x831FC038;
	sub_831FBE98(ctx, base);
loc_831FC038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC010) {
	__imp__sub_831FC010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC048) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x831fc0a0
	if (!ctx.cr6.eq) goto loc_831FC0A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x831fbb30
	ctx.lr = 0x831FC068;
	sub_831FBB30(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x831fc084
	if (ctx.cr6.lt) goto loc_831FC084;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x831fc0a0
	goto loc_831FC0A0;
loc_831FC084:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_831FC0A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC048) {
	__imp__sub_831FC048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,20096
	ctx.r10.s64 = 1317011456;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x831fc0fc
	if (!ctx.cr6.gt) goto loc_831FC0FC;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fc0f0
	if (ctx.cr0.eq) goto loc_831FC0F0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_831FC0F0:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_831FC0FC:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC0B0) {
	__imp__sub_831FC0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-16944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x831fc12c
	if (ctx.cr6.lt) goto loc_831FC12C;
	// lis r3,2047
	ctx.r3.s64 = 134152192;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_831FC12C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,1024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x831fc144
	if (ctx.cr6.gt) goto loc_831FC144;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// blr 
	return;
loc_831FC144:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r11,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 23;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,129
	ctx.xer.ca = ctx.r11.u32 <= 129;
	ctx.r11.s64 = 129 - ctx.r11.s64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x831fc164
	if (!ctx.cr6.gt) goto loc_831FC164;
	// li r11,15
	ctx.r11.s64 = 15;
loc_831FC164:
	// addi r10,r11,25
	ctx.r10.s64 = ctx.r11.s64 + 25;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// sld r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC110) {
	__imp__sub_831FC110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC1B0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bgt cr6,0x831fc220
	if (ctx.cr6.gt) goto loc_831FC220;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x831fc1ec
	if (!ctx.cr6.eq) goto loc_831FC1EC;
loc_831FC1E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC1EC:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-4888(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4888);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,3248(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// fnmsub f0,f12,f0,f13
	ctx.f0.f64 = -(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x831fc674
	if (!ctx.cr6.lt) goto loc_831FC674;
	// b 0x831fc1e4
	goto loc_831FC1E4;
loc_831FC220:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x831fc3b8
	if (ctx.cr6.lt) goto loc_831FC3B8;
	// beq cr6,0x831fc584
	if (ctx.cr6.eq) goto loc_831FC584;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x831fc51c
	if (ctx.cr6.lt) goto loc_831FC51C;
	// beq cr6,0x831fc464
	if (ctx.cr6.eq) goto loc_831FC464;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x831fc398
	if (ctx.cr6.lt) goto loc_831FC398;
	// beq cr6,0x831fc34c
	if (ctx.cr6.eq) goto loc_831FC34C;
	// cmplwi cr6,r6,7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 7, ctx.xer);
	// bne cr6,0x831fc1e4
	if (!ctx.cr6.eq) goto loc_831FC1E4;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bne cr6,0x831fc260
	if (!ctx.cr6.eq) goto loc_831FC260;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC260:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bne cr6,0x831fc2cc
	if (!ctx.cr6.eq) goto loc_831FC2CC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfd f0,-31088(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31088);
	// fmul f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831fc2b4
	if (ctx.cr0.eq) goto loc_831FC2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x831fc2ac
	if (!ctx.cr6.lt) goto loc_831FC2AC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC2AC:
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC2B4:
	// srawi. r11,r11,13
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 13;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x831fc2c4
	if (!ctx.cr0.lt) goto loc_831FC2C4;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_831FC2C4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC2CC:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x831fc1e4
	if (ctx.cr6.lt) goto loc_831FC1E4;
	// li r4,-124
	ctx.r4.s64 = -124;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8227a818
	ctx.lr = 0x831FC2E0;
	sub_8227A818(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// subfic r11,r31,18
	ctx.xer.ca = ctx.r31.u32 <= 18;
	ctx.r11.s64 = 18 - ctx.r31.s64;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x831fc330
	if (ctx.cr0.eq) goto loc_831FC330;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x831fc31c
	if (!ctx.cr6.lt) goto loc_831FC31C;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// b 0x831fc328
	goto loc_831FC328;
loc_831FC31C:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
loc_831FC328:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC330:
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r9,r31,26
	ctx.xer.ca = ctx.r31.u32 <= 26;
	ctx.r9.s64 = 26 - ctx.r31.s64;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// sraw r11,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC34C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2664);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f13,3368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3368);
	// ble cr6,0x831fc384
	if (!ctx.cr6.gt) goto loc_831FC384;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC384:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC398:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lfd f0,-31072(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31072);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x831fc438
	if (ctx.cr6.gt) goto loc_831FC438;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_831FC3B8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// slw r11,r10,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lfd f0,-4888(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4888);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f31.f64), float(ctx.f0.f64)));
	// bl 0x831fc0b0
	ctx.lr = 0x831FC404;
	sub_831FC0B0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f12,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831fc1e4
	if (!ctx.cr6.gt) goto loc_831FC1E4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x831fc668
	if (ctx.cr6.lt) goto loc_831FC668;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC438:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f2,968(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 968);
	// bl 0x821fe378
	ctx.lr = 0x831FC444;
	sub_821FE378(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfd f0,-31080(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31080);
	// lfd f13,-31096(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31096);
	// fmsub f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// b 0x831fc3b8
	goto loc_831FC3B8;
loc_831FC464:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x831fc4d0
	if (ctx.cr6.lt) goto loc_831FC4D0;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x831fc674
	if (!ctx.cr6.lt) goto loc_831FC674;
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC4D0:
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = static_cast<float>(ctx.f31.f64 - ctx.f0.f64);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x831fc674
	if (!ctx.cr6.gt) goto loc_831FC674;
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC51C:
	// srawi r11,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// slw r11,r9,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f13,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x831fc1e4
	if (!ctx.cr6.gt) goto loc_831FC1E4;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x831fc674
	if (!ctx.cr6.lt) goto loc_831FC674;
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC584:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// divw r10,r30,r3
	ctx.r10.s32 = ctx.r30.s32 / ctx.r3.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r3,0
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// twlgei r11,-1
	// blt cr6,0x831fc614
	if (ctx.cr6.lt) goto loc_831FC614;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x831fc674
	if (!ctx.cr6.lt) goto loc_831FC674;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC614:
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3800(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3800);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = static_cast<float>(ctx.f31.f64 - ctx.f0.f64);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x831fc640
	if (ctx.cr6.gt) goto loc_831FC640;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC640:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x831fc674
	goto loc_831FC674;
loc_831FC668:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_831FC674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC1B0) {
	__imp__sub_831FC1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC690) {
	__imp__sub_831FC690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_831FC6A8) {
	__imp__sub_831FC6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x831fc6ec
	if (ctx.cr6.eq) goto loc_831FC6EC;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_831FC6EC:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC6D8) {
	__imp__sub_831FC6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC6F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x831fc70c
	if (ctx.cr6.eq) goto loc_831FC70C;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_831FC70C:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC6F8) {
	__imp__sub_831FC6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC718) {
	__imp__sub_831FC718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25032
	ctx.r9.s64 = ctx.r10.s64 + 25032;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC738) {
	__imp__sub_831FC738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fc788
	goto loc_831FC788;
loc_831FC780:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_831FC788:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x831fc780
	if (!ctx.cr6.eq) goto loc_831FC780;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC770) {
	__imp__sub_831FC770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// beq cr6,0x831fc7b0
	if (ctx.cr6.eq) goto loc_831FC7B0;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_831FC7B0:
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC798) {
	__imp__sub_831FC798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beq cr6,0x831fc7d4
	if (ctx.cr6.eq) goto loc_831FC7D4;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_831FC7D4:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC7C0) {
	__imp__sub_831FC7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FC7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x831fc824
	if (ctx.cr6.eq) goto loc_831FC824;
loc_831FC800:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FC818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x831fc800
	if (!ctx.cr6.eq) goto loc_831FC800;
loc_831FC824:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FC7E0) {
	__imp__sub_831FC7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x831FC840;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,8(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
loc_831FC858:
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fc858
	if (ctx.cr6.lt) goto loc_831FC858;
	// li r20,3
	ctx.r20.s64 = 3;
	// divwu. r31,r10,r20
	ctx.r31.u32 = ctx.r10.u32 / ctx.r20.u32;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x831fc904
	if (ctx.cr0.eq) goto loc_831FC904;
loc_831FC874:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fc8fc
	if (!ctx.cr6.lt) goto loc_831FC8FC;
	// rlwinm r23,r31,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r23,r22
	ctx.r29.u64 = ctx.r23.u64 + ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_831FC88C:
	// lwz r24,0(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x831fc8d4
	if (ctx.cr6.lt) goto loc_831FC8D4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_831FC8A4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x831FC8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x831fc8d4
	if (!ctx.cr0.gt) goto loc_831FC8D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r28,r23,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r23.s64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// subf r25,r23,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r23.s64;
	// bge 0x831fc8a4
	if (!ctx.cr0.lt) goto loc_831FC8A4;
loc_831FC8D4:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stwx r24,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r24.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fc88c
	if (ctx.cr6.lt) goto loc_831FC88C;
loc_831FC8FC:
	// divwu. r31,r31,r20
	ctx.r31.u32 = ctx.r31.u32 / ctx.r20.u32;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x831fc874
	if (!ctx.cr0.eq) goto loc_831FC874;
loc_831FC904:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FC838) {
	__imp__sub_831FC838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FC910) {
	__imp__sub_831FC910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FC940) {
	__imp__sub_831FC940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC948) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831fc98c
	if (ctx.cr6.eq) goto loc_831FC98C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_831FC96C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x831fc9a0
	if (ctx.cr6.eq) goto loc_831FC9A0;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x831fc96c
	if (ctx.cr6.lt) goto loc_831FC96C;
loc_831FC98C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FC990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831FC9A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x831fc9c8
	if (!ctx.cr6.lt) goto loc_831FC9C8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x82ca2c60
	ctx.lr = 0x831FC9C8;
	sub_82CA2C60(ctx, base);
loc_831FC9C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831fc990
	goto loc_831FC990;
}

PPC_WEAK_FUNC(sub_831FC948) {
	__imp__sub_831FC948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FC9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FC9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831fca04
	if (!ctx.cr6.gt) goto loc_831FCA04;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x831fca04
	goto loc_831FCA04;
loc_831FC9FC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_831FCA04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fc9fc
	if (!ctx.cr6.lt) goto loc_831FC9FC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831c58b0
	ctx.lr = 0x831FCA20;
	sub_831C58B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x831FCA34;
	sub_82CA2C60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831c59e0
	ctx.lr = 0x831FCA40;
	sub_831C59E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FC9D0) {
	__imp__sub_831FC9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCA58) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x831fca84
	if (!ctx.cr6.gt) goto loc_831FCA84;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_831FCA84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831fcaa8
	if (!ctx.cr6.gt) goto loc_831FCAA8;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FCAA8;
	sub_831FC9D0(ctx, base);
loc_831FCAA8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq 0x831fcae4
	if (ctx.cr0.eq) goto loc_831FCAE4;
loc_831FCACC:
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x831fcacc
	if (!ctx.cr0.eq) goto loc_831FCACC;
loc_831FCAE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FCA58) {
	__imp__sub_831FCA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x831FCB10;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r22,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x831c58b0
	ctx.lr = 0x831FCB30;
	sub_831C58B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x831FCB44;
	sub_82CA3190(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x831fcc7c
	if (!ctx.cr6.gt) goto loc_831FCC7C;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r21,r11,r23
	ctx.r21.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_831FCB5C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r25,r26,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x831fcc68
	if (ctx.cr6.eq) goto loc_831FCC68;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FCB7C;
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x831fcb9c
	if (ctx.cr0.eq) goto loc_831FCB9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831df0d8
	ctx.lr = 0x831FCB94;
	sub_831DF0D8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x831fcba0
	goto loc_831FCBA0;
loc_831FCB9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FCBA0:
	// stwx r11,r26,r23
	PPC_STORE_U32(ctx.r26.u32 + ctx.r23.u32, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FCBB4;
	sub_831C58B0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x831fcbd4
	if (ctx.cr0.eq) goto loc_831FCBD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831df0d8
	ctx.lr = 0x831FCBCC;
	sub_831DF0D8(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x831fcbd8
	goto loc_831FCBD8;
loc_831FCBD4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831FCBD8:
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r24,r26,r23
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// beq cr6,0x831fcc68
	if (ctx.cr6.eq) goto loc_831FCC68;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_831FCBF0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fcc10
	if (!ctx.cr6.lt) goto loc_831FCC10;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x831fcc1c
	goto loc_831FCC1C;
loc_831FCC10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FCC1C;
	sub_831FC9D0(ctx, base);
loc_831FCC1C:
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x831fcc50
	if (!ctx.cr6.eq) goto loc_831FCC50;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x831fcc58
	goto loc_831FCC58;
loc_831FCC50:
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831FCC58:
	// bl 0x831fc9d0
	ctx.lr = 0x831FCC5C;
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x831fcbf0
	if (!ctx.cr6.eq) goto loc_831FCBF0;
loc_831FCC68:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r20,r22
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x831fcb5c
	if (ctx.cr6.lt) goto loc_831FCB5C;
loc_831FCC7C:
	// stw r23,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FCB08) {
	__imp__sub_831FCB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831FCC90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831fcd34
	if (ctx.cr6.eq) goto loc_831FCD34;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fcd34
	if (ctx.cr6.eq) goto loc_831FCD34;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fccf4
	if (!ctx.cr6.lt) goto loc_831FCCF4;
loc_831FCCE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x831fcd00
	goto loc_831FCD00;
loc_831FCCF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FCD00;
	sub_831FC9D0(ctx, base);
loc_831FCD00:
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831fcd40
	if (ctx.cr0.eq) goto loc_831FCD40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fcce8
	if (ctx.cr6.lt) goto loc_831FCCE8;
loc_831FCD34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FCD38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_831FCD40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831fcd38
	goto loc_831FCD38;
}

PPC_WEAK_FUNC(sub_831FCC88) {
	__imp__sub_831FCC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FCD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831fcdc4
	if (!ctx.cr6.eq) goto loc_831FCDC4;
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FCD9C;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x831fcdb8
	if (ctx.cr0.eq) goto loc_831FCDB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831df0d8
	ctx.lr = 0x831FCDB4;
	sub_831DF0D8(ctx, base);
	// b 0x831fcdbc
	goto loc_831FCDBC;
loc_831FCDB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831FCDBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
loc_831FCDC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fca58
	ctx.lr = 0x831FCDD8;
	sub_831FCA58(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x831fcdf4
	if (!ctx.cr6.gt) goto loc_831FCDF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fcb08
	ctx.lr = 0x831FCDF4;
	sub_831FCB08(ctx, base);
loc_831FCDF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FCD48) {
	__imp__sub_831FCD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FCE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831fcee4
	if (ctx.cr6.eq) goto loc_831FCEE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831fcee4
	if (!ctx.cr6.gt) goto loc_831FCEE4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FCE60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fce78
	if (!ctx.cr6.lt) goto loc_831FCE78;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x831fce84
	goto loc_831FCE84;
loc_831FCE78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FCE84;
	sub_831FC9D0(ctx, base);
loc_831FCE84:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FCE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x831fceb8
	if (ctx.cr0.eq) goto loc_831FCEB8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fce60
	if (ctx.cr6.lt) goto loc_831FCE60;
	// b 0x831fcee4
	goto loc_831FCEE4;
loc_831FCEB8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fcee4
	if (!ctx.cr6.lt) goto loc_831FCEE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x82ca2c60
	ctx.lr = 0x831FCEE4;
	sub_82CA2C60(ctx, base);
loc_831FCEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FCE08) {
	__imp__sub_831FCE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCEF0) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x831fcf44
	if (ctx.cr6.lt) goto loc_831FCF44;
loc_831FCF10:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fcf38
	if (!ctx.cr6.lt) goto loc_831FCF38;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831fcf3c
	goto loc_831FCF3C;
loc_831FCF38:
	// bl 0x831fc9d0
	ctx.lr = 0x831FCF3C;
	sub_831FC9D0(ctx, base);
loc_831FCF3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831fcf9c
	goto loc_831FCF9C;
loc_831FCF44:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_831FCF4C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x831fcf98
	if (!ctx.cr6.lt) goto loc_831FCF98;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x831fcf4c
	if (ctx.cr6.eq) goto loc_831FCF4C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fcf4c
	if (ctx.cr6.eq) goto loc_831FCF4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x831fcf10
	goto loc_831FCF10;
loc_831FCF98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FCF9C:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FCEF0) {
	__imp__sub_831FCEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x831fcef0
	sub_831FCEF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FCFB8) {
	__imp__sub_831FCFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_831FCFD0) {
	__imp__sub_831FCFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FCFF0) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FD010:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831fd040
	if (!ctx.cr0.eq) goto loc_831FD040;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831FD040:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x831fd010
	if (ctx.cr6.lt) goto loc_831FD010;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
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

PPC_WEAK_FUNC(sub_831FCFF0) {
	__imp__sub_831FCFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD068) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831df090
	ctx.lr = 0x831FD08C;
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fd0dc
	if (ctx.cr0.eq) goto loc_831FD0DC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FD098:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831fd0c8
	if (!ctx.cr0.eq) goto loc_831FD0C8;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831FD0C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x831fd098
	if (ctx.cr6.lt) goto loc_831FD098;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// b 0x831fd0e0
	goto loc_831FD0E0;
loc_831FD0DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_831FD0E0:
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

PPC_WEAK_FUNC(sub_831FD068) {
	__imp__sub_831FD068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FD100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,1452(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD124;
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x831fd144
	if (ctx.cr0.eq) goto loc_831FD144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x831fd148
	goto loc_831FD148;
loc_831FD144:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FD148:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD0F8) {
	__imp__sub_831FD0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD160) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x831c59e0
	sub_831C59E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD160) {
	__imp__sub_831FD160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD184) {
	__imp__sub_831FD184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD188) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fd19c
	if (!ctx.cr6.eq) goto loc_831FD19C;
	// b 0x831fd0f8
	sub_831FD0F8(ctx, base);
	return;
loc_831FD19C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x831fd1b4
	if (!ctx.cr6.eq) goto loc_831FD1B4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_831FD1B4:
	// b 0x831fd0f8
	sub_831FD0F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD188) {
	__imp__sub_831FD188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD1B8) {
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
	// b 0x831fd1f0
	goto loc_831FD1F0;
loc_831FD1D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fd1f0
	if (ctx.cr6.eq) goto loc_831FD1F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831FD1F0;
	sub_831C59E0(ctx, base);
loc_831FD1F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fd1d0
	if (!ctx.cr6.eq) goto loc_831FD1D0;
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

PPC_WEAK_FUNC(sub_831FD1B8) {
	__imp__sub_831FD1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FD218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r29,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r29.u8);
	// stb r29,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r29.u8);
	// lwz r28,1452(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD26C;
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x831fd284
	if (ctx.cr0.eq) goto loc_831FD284;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x831fd288
	goto loc_831FD288;
loc_831FD284:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_831FD288:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD29C;
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x831fd2b8
	if (ctx.cr0.eq) goto loc_831FD2B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x831FD2B4;
	sub_831DF0D8(ctx, base);
	// b 0x831fd2bc
	goto loc_831FD2BC;
loc_831FD2B8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_831FD2BC:
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1452(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD2D0;
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x831fd2ec
	if (ctx.cr0.eq) goto loc_831FD2EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x831FD2E8;
	sub_831DF0D8(ctx, base);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_831FD2EC:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1432, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD210) {
	__imp__sub_831FD210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD310) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD310) {
	__imp__sub_831FD310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD318) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FD318) {
	__imp__sub_831FD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD320) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831FD348;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FD320) {
	__imp__sub_831FD320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD370) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x831fd3b8
	if (!ctx.cr6.gt) goto loc_831FD3B8;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
loc_831FD39C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x831fd3d4
	if (ctx.cr6.eq) goto loc_831FD3D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x831fd39c
	if (ctx.cr6.lt) goto loc_831FD39C;
loc_831FD3B8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831FD3C4;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_831FD3D4:
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

PPC_WEAK_FUNC(sub_831FD370) {
	__imp__sub_831FD370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x831FD3F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831fd424
	if (ctx.cr6.eq) goto loc_831FD424;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x831fd6c0
	goto loc_831FD6C0;
loc_831FD424:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// beq 0x831fd554
	if (ctx.cr0.eq) goto loc_831FD554;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FD454;
	sub_83201318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,2736(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2736);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x831ffe70
	ctx.lr = 0x831FD47C;
	sub_831FFE70(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831fd4a0
	if (!ctx.cr6.gt) goto loc_831FD4A0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x831fd4a8
	goto loc_831FD4A8;
loc_831FD4A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831fc9d0
	ctx.lr = 0x831FD4A8;
	sub_831FC9D0(ctx, base);
loc_831FD4A8:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831df328
	ctx.lr = 0x831FD4BC;
	sub_831DF328(ctx, base);
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fd5cc
	if (!ctx.cr6.eq) goto loc_831FD5CC;
	// lwz r23,1456(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD4E0;
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// beq 0x831fd510
	if (ctx.cr0.eq) goto loc_831FD510;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r28.u32);
	// stb r25,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r25.u8);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// b 0x831fd514
	goto loc_831FD514;
loc_831FD510:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_831FD514:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831f1e68
	ctx.lr = 0x831FD51C;
	sub_831F1E68(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,48(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831fd548
	if (ctx.cr6.eq) goto loc_831FD548;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x831fd548
	if (!ctx.cr6.eq) goto loc_831FD548;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD548:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831fd0f8
	ctx.lr = 0x831FD550;
	sub_831FD0F8(ctx, base);
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD554:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831fd594
	if (!ctx.cr0.eq) goto loc_831FD594;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = ctx.r11.s64 + -22424;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,236
	ctx.r7.s64 = 236;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FD594;
	sub_831034D8(ctx, base);
loc_831FD594:
	// lwz r31,1452(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD5A4;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x831fd5c8
	if (ctx.cr0.eq) goto loc_831FD5C8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83200328
	ctx.lr = 0x831FD5C0;
	sub_83200328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831fd5cc
	goto loc_831FD5CC;
loc_831FD5C8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_831FD5CC:
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FD5DC;
	sub_831FD320(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fd620
	if (ctx.cr0.eq) goto loc_831FD620;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// b 0x831fd648
	goto loc_831FD648;
loc_831FD620:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FD634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fd648
	if (ctx.cr0.eq) goto loc_831FD648;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_831FD648:
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fd660
	if (ctx.cr0.eq) goto loc_831FD660;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_831FD660:
	// lwz r30,1456(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD670;
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x831fd6a0
	if (ctx.cr0.eq) goto loc_831FD6A0;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r28.u32);
	// stb r25,264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 264, ctx.r25.u8);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// b 0x831fd6a4
	goto loc_831FD6A4;
loc_831FD6A0:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_831FD6A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831f1e68
	ctx.lr = 0x831FD6AC;
	sub_831F1E68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83202ac8
	ctx.lr = 0x831FD6BC;
	sub_83202AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831FD6C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD3F0) {
	__imp__sub_831FD3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FD6D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831fd764
	if (!ctx.cr6.gt) goto loc_831FD764;
	// li r30,0
	ctx.r30.s64 = 0;
loc_831FD6F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fd710
	if (!ctx.cr6.lt) goto loc_831FD710;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x831fd718
	goto loc_831FD718;
loc_831FD710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FD718;
	sub_831FC9D0(ctx, base);
loc_831FD718:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x831fd740
	if (ctx.cr6.eq) goto loc_831FD740;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fd6f8
	if (ctx.cr6.lt) goto loc_831FD6F8;
	// b 0x831fd764
	goto loc_831FD764;
loc_831FD740:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fd758
	if (!ctx.cr6.lt) goto loc_831FD758;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x831fd760
	goto loc_831FD760;
loc_831FD758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FD760;
	sub_831FC9D0(ctx, base);
loc_831FD760:
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_831FD764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD6C8) {
	__imp__sub_831FD6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FD778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x831fd7ec
	if (!ctx.cr6.gt) goto loc_831FD7EC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_831FD79C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831fd7b4
	if (!ctx.cr6.lt) goto loc_831FD7B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x831fd7bc
	goto loc_831FD7BC;
loc_831FD7B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FD7BC;
	sub_831FC9D0(ctx, base);
loc_831FD7BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x831fd7e4
	if (ctx.cr6.eq) goto loc_831FD7E4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831fd79c
	if (ctx.cr6.lt) goto loc_831FD79C;
	// b 0x831fd7ec
	goto loc_831FD7EC;
loc_831FD7E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831fc910
	ctx.lr = 0x831FD7EC;
	sub_831FC910(ctx, base);
loc_831FD7EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD770) {
	__imp__sub_831FD770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831FD800;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fd83c
	if (!ctx.cr6.eq) goto loc_831FD83C;
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831ee278
	ctx.lr = 0x831FD838;
	sub_831EE278(ctx, base);
	// stw r3,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r3.u32);
loc_831FD83C:
	// lwz r31,1452(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,52(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FD850;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x831fd870
	if (ctx.cr0.eq) goto loc_831FD870;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83200038
	ctx.lr = 0x831FD868;
	sub_83200038(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x831fd874
	goto loc_831FD874;
loc_831FD870:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FD874:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FD884;
	sub_831FF250(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x831fd898
	if (!ctx.cr6.eq) goto loc_831FD898;
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
loc_831FD898:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x831fd8b0
	if (!ctx.cr6.eq) goto loc_831FD8B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// stb r11,126(r30)
	PPC_STORE_U8(ctx.r30.u32 + 126, ctx.r11.u8);
loc_831FD8B0:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// addi r28,r11,-22432
	ctx.r28.s64 = ctx.r11.s64 + -22432;
	// bne cr6,0x831fd8e0
	if (!ctx.cr6.eq) goto loc_831FD8E0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r31,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831FD8DC;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_831FD8E0:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x831fd900
	if (!ctx.cr6.eq) goto loc_831FD900;
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x831FD8FC;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_831FD900:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FD910;
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df980
	ctx.lr = 0x831FD91C;
	sub_831DF980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x83201e88
	ctx.lr = 0x831FD928;
	sub_83201E88(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r28,r10,-18548
	ctx.r28.s64 = ctx.r10.s64 + -18548;
	// addi r29,r11,-22308
	ctx.r29.s64 = ctx.r11.s64 + -22308;
	// addi r27,r9,-22340
	ctx.r27.s64 = ctx.r9.s64 + -22340;
	// addi r26,r8,-22424
	ctx.r26.s64 = ctx.r8.s64 + -22424;
loc_831FD958:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 8, ctx.xer);
	// blt cr6,0x831fd980
	if (ctx.cr6.lt) goto loc_831FD980;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FD980;
	sub_831034D8(ctx, base);
loc_831FD980:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x831fd958
	if (ctx.cr6.lt) goto loc_831FD958;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD7F8) {
	__imp__sub_831FD7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FD9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831FD9B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fd9f4
	if (!ctx.cr6.eq) goto loc_831FD9F4;
	// lwz r11,1508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x831ee278
	ctx.lr = 0x831FD9F0;
	sub_831EE278(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_831FD9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df090
	ctx.lr = 0x831FD9FC;
	sub_831DF090(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fdb10
	if (ctx.cr0.eq) goto loc_831FDB10;
	// lwz r29,1452(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,60(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FDA18;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fda34
	if (ctx.cr0.eq) goto loc_831FDA34;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83200038
	ctx.lr = 0x831FDA30;
	sub_83200038(ctx, base);
	// b 0x831fda38
	goto loc_831FDA38;
loc_831FDA34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FDA38:
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x831FDA48;
	sub_831FF250(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x831ff250
	ctx.lr = 0x831FDA58;
	sub_831FF250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x831df980
	ctx.lr = 0x831FDA64;
	sub_831DF980(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x83201e40
	ctx.lr = 0x831FDA70;
	sub_83201E40(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x831fc9d0
	ctx.lr = 0x831FDA80;
	sub_831FC9D0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-22432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22432);
	// addi r28,r10,-18548
	ctx.r28.s64 = ctx.r10.s64 + -18548;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,-22308
	ctx.r29.s64 = ctx.r11.s64 + -22308;
	// addi r27,r9,-22340
	ctx.r27.s64 = ctx.r9.s64 + -22340;
	// addi r26,r8,-22424
	ctx.r26.s64 = ctx.r8.s64 + -22424;
loc_831FDAB8:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 8, ctx.xer);
	// blt cr6,0x831fdae0
	if (ctx.cr6.lt) goto loc_831FDAE0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,361
	ctx.r7.s64 = 361;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FDAE0;
	sub_831034D8(ctx, base);
loc_831FDAE0:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x831fdab8
	if (ctx.cr6.lt) goto loc_831FDAB8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// b 0x831fdb14
	goto loc_831FDB14;
loc_831FDB10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831FDB14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FD9B0) {
	__imp__sub_831FD9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDB20) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831fdb5c
	if (ctx.cr6.eq) goto loc_831FDB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fd1b8
	ctx.lr = 0x831FDB50;
	sub_831FD1B8(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831FDB5C;
	sub_831C59E0(ctx, base);
loc_831FDB5C:
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

PPC_WEAK_FUNC(sub_831FDB20) {
	__imp__sub_831FDB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FDB78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDB90;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// addi r11,r11,-22276
	ctx.r11.s64 = ctx.r11.s64 + -22276;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// beq cr6,0x831fdc0c
	if (ctx.cr6.eq) goto loc_831FDC0C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x831fdbe8
	if (ctx.cr6.eq) goto loc_831FDBE8;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x831fdc30
	if (!ctx.cr6.eq) goto loc_831FDC30;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831fdc30
	if (ctx.cr6.lt) goto loc_831FDC30;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ca9260
	ctx.lr = 0x831FDBE8;
	sub_82CA9260(ctx, base);
loc_831FDBE8:
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831fdc30
	if (ctx.cr6.lt) goto loc_831FDC30;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ca9260
	ctx.lr = 0x831FDC0C;
	sub_82CA9260(ctx, base);
loc_831FDC0C:
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831fdc30
	if (ctx.cr6.lt) goto loc_831FDC30;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ca9260
	ctx.lr = 0x831FDC30;
	sub_82CA9260(ctx, base);
loc_831FDC30:
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FDC40;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fdc64
	if (ctx.cr0.eq) goto loc_831FDC64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200248
	ctx.lr = 0x831FDC5C;
	sub_83200248(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831fdc68
	goto loc_831FDC68;
loc_831FDC64:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FDC68:
	// lwz r11,2736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2736);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FDC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FDC94;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FDCA0;
	sub_831FD320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FDB70) {
	__imp__sub_831FDB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDCB0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDCD0;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1412, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FDCB0) {
	__imp__sub_831FDCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDD10) {
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
	// bl 0x831fd210
	ctx.lr = 0x831FDD28;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22240
	ctx.r11.s64 = ctx.r11.s64 + -22240;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_831FDD10) {
	__imp__sub_831FDD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FDD60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDD70;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,-22204
	ctx.r11.s64 = ctx.r11.s64 + -22204;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x831fab00
	ctx.lr = 0x831FDDA8;
	sub_831FAB00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lbz r11,1380(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x831fde24
	if (!ctx.cr0.eq) goto loc_831FDE24;
	// lwz r28,1452(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FDDD0;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831fddec
	if (ctx.cr0.eq) goto loc_831FDDEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200398
	ctx.lr = 0x831FDDE8;
	sub_83200398(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831FDDEC:
	// lwz r11,2736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FDE08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FDE18;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FDE24;
	sub_831FD320(ctx, base);
loc_831FDE24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FDD58) {
	__imp__sub_831FDD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FDE38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDE54;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-22204
	ctx.r11.s64 = ctx.r11.s64 + -22204;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x831fabf0
	ctx.lr = 0x831FDE90;
	sub_831FABF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lbz r11,1380(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831fdecc
	if (ctx.cr0.eq) goto loc_831FDECC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = ctx.r11.s64 + -22424;
	// addi r5,r10,-22168
	ctx.r5.s64 = ctx.r10.s64 + -22168;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FDECC;
	sub_831034D8(ctx, base);
loc_831FDECC:
	// lwz r28,1452(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FDEDC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831fdef8
	if (ctx.cr0.eq) goto loc_831FDEF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200398
	ctx.lr = 0x831FDEF4;
	sub_83200398(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_831FDEF8:
	// lwz r11,2736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FDF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FDF24;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FDF30;
	sub_831FD320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FDE30) {
	__imp__sub_831FDE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FDF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDF5C;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2736);
	// bl 0x831f08b8
	ctx.lr = 0x831FDF74;
	sub_831F08B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FDF40) {
	__imp__sub_831FDF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FDF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FDFA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FDFB4;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22068
	ctx.r9.s64 = ctx.r11.s64 + -22068;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-22424
	ctx.r27.s64 = ctx.r10.s64 + -22424;
	// blt cr6,0x831fdffc
	if (ctx.cr6.lt) goto loc_831FDFFC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-22084
	ctx.r5.s64 = ctx.r11.s64 + -22084;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,577
	ctx.r7.s64 = 577;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FDFFC;
	sub_831034D8(ctx, base);
loc_831FDFFC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831fe024
	if (ctx.cr6.lt) goto loc_831FE024;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-22104
	ctx.r5.s64 = ctx.r11.s64 + -22104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,578
	ctx.r7.s64 = 578;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FE024;
	sub_831034D8(ctx, base);
loc_831FE024:
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FDF98) {
	__imp__sub_831FDF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831FE048;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	ctx.lr = 0x831FE058;
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// addi r29,r10,25480
	ctx.r29.s64 = ctx.r10.s64 + 25480;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r31,2736(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// lwz r28,1536(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FE088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x831db508
	ctx.lr = 0x831FE0A0;
	sub_831DB508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x831fe160
	if (!ctx.cr0.eq) goto loc_831FE160;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r5,-21832(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21832);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fe13c
	if (!ctx.cr6.eq) goto loc_831FE13C;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831FE0D0;
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE0E4;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fe108
	if (ctx.cr0.eq) goto loc_831FE108;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE100;
	sub_83200328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831fe10c
	goto loc_831FE10C;
loc_831FE108:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FE10C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE118;
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE128;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE134;
	sub_831FD320(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x831fe140
	goto loc_831FE140;
loc_831FE13C:
	// lwz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_831FE140:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE14C;
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE15C;
	sub_831FF250(ctx, base);
	// b 0x831fe45c
	goto loc_831FE45C;
loc_831FE160:
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r3,1536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,25480
	ctx.r5.s64 = ctx.r11.s64 + 25480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831dbaa0
	ctx.lr = 0x831FE178;
	sub_831DBAA0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r21,r11,-21664
	ctx.r21.s64 = ctx.r11.s64 + -21664;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x831fe37c
	if (ctx.cr6.lt) goto loc_831FE37C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r11,-21360
	ctx.r27.s64 = ctx.r11.s64 + -21360;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// addi r11,r11,-21832
	ctx.r11.s64 = ctx.r11.s64 + -21832;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 6;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r24,r23,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// bne cr6,0x831fe25c
	if (!ctx.cr6.eq) goto loc_831FE25C;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831FE1F0;
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE204;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fe228
	if (ctx.cr0.eq) goto loc_831FE228;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE220;
	sub_83200328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831fe22c
	goto loc_831FE22C;
loc_831FE228:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FE22C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE238;
	sub_83201E88(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE248;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE254;
	sub_831FD320(ctx, base);
	// stwx r29,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x831fe260
	goto loc_831FE260;
loc_831FE25C:
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_831FE260:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x831fe2e4
	if (!ctx.cr6.eq) goto loc_831FE2E4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x831eeac8
	ctx.lr = 0x831FE278;
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE28C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fe2b0
	if (ctx.cr0.eq) goto loc_831FE2B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE2A8;
	sub_83200328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831fe2b4
	goto loc_831FE2B4;
loc_831FE2B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FE2B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE2C0;
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE2D0;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE2DC;
	sub_831FD320(ctx, base);
	// stwx r29,r23,r31
	PPC_STORE_U32(ctx.r23.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x831fe2e8
	goto loc_831FE2E8;
loc_831FE2E4:
	// lwz r28,28(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
loc_831FE2E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE2F4;
	sub_83201318(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE304;
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// bl 0x831ff250
	ctx.lr = 0x831FE330;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE33C;
	sub_831FD320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831FE348;
	sub_83201E40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE354;
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE364;
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 + 12;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x831fe454
	goto loc_831FE454;
loc_831FE37C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r11,-21328
	ctx.r26.s64 = ctx.r11.s64 + -21328;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-21832
	ctx.r11.s64 = ctx.r11.s64 + -21832;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fe428
	if (!ctx.cr6.eq) goto loc_831FE428;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831FE3BC;
	sub_831EEAC8(ctx, base);
	// lwz r29,1452(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE3D0;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x831fe3f4
	if (ctx.cr0.eq) goto loc_831FE3F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE3EC;
	sub_83200328(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x831fe3f8
	goto loc_831FE3F8;
loc_831FE3F4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_831FE3F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE404;
	sub_83201E88(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE414;
	sub_831FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE420;
	sub_831FD320(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x831fe42c
	goto loc_831FE42C;
loc_831FE428:
	// lwz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_831FE42C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE438;
	sub_83201318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE448;
	sub_831FF250(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
loc_831FE454:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
loc_831FE45C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE46C;
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE478;
	sub_831FD320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831FE484;
	sub_83201E40(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FE040) {
	__imp__sub_831FE040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x831FE498;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	ctx.lr = 0x831FE4A8;
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// addi r10,r10,-21832
	ctx.r10.s64 = ctx.r10.s64 + -21832;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r5,160(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// lwz r29,2736(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2736);
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fe550
	if (!ctx.cr6.eq) goto loc_831FE550;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831FE4E4;
	sub_831EEAC8(ctx, base);
	// lwz r28,1452(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE4F8;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x831fe51c
	if (ctx.cr0.eq) goto loc_831FE51C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE514;
	sub_83200328(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x831fe520
	goto loc_831FE520;
loc_831FE51C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_831FE520:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE52C;
	sub_83201E88(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE53C;
	sub_831FF250(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE548;
	sub_831FD320(ctx, base);
	// stwx r28,r26,r29
	PPC_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r28.u32);
	// b 0x831fe554
	goto loc_831FE554;
loc_831FE550:
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_831FE554:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE560;
	sub_83201318(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE570;
	sub_831FF250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x831FE580;
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE58C;
	sub_831FD320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831FE598;
	sub_83201E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FE490) {
	__imp__sub_831FE490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x831FE5B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831fdcb0
	ctx.lr = 0x831FE5C4;
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r5,r10,25480
	ctx.r5.s64 = ctx.r10.s64 + 25480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r25,2736(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2736);
	// bl 0x831dbaa0
	ctx.lr = 0x831FE5EC;
	sub_831DBAA0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// addi r24,r11,-21328
	ctx.r24.s64 = ctx.r11.s64 + -21328;
	// addi r23,r10,-18548
	ctx.r23.s64 = ctx.r10.s64 + -18548;
	// addi r22,r9,5664
	ctx.r22.s64 = ctx.r9.s64 + 5664;
	// addi r21,r8,-22424
	ctx.r21.s64 = ctx.r8.s64 + -22424;
	// beq cr6,0x831fe654
	if (ctx.cr6.eq) goto loc_831FE654;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 13, ctx.xer);
	// beq cr6,0x831fe64c
	if (ctx.cr6.eq) goto loc_831FE64C;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 14, ctx.xer);
	// beq cr6,0x831fe644
	if (ctx.cr6.eq) goto loc_831FE644;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FE63C;
	sub_831034D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x831fe664
	goto loc_831FE664;
loc_831FE644:
	// addi r10,r24,8
	ctx.r10.s64 = ctx.r24.s64 + 8;
	// b 0x831fe658
	goto loc_831FE658;
loc_831FE64C:
	// addi r10,r24,24
	ctx.r10.s64 = ctx.r24.s64 + 24;
	// b 0x831fe658
	goto loc_831FE658;
loc_831FE654:
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
loc_831FE658:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_831FE664:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-21832
	ctx.r10.s64 = ctx.r10.s64 + -21832;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fe700
	if (!ctx.cr6.eq) goto loc_831FE700;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// bl 0x831eeac8
	ctx.lr = 0x831FE694;
	sub_831EEAC8(ctx, base);
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x831FE6A8;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x831fe6cc
	if (ctx.cr0.eq) goto loc_831FE6CC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83200328
	ctx.lr = 0x831FE6C4;
	sub_83200328(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831fe6d0
	goto loc_831FE6D0;
loc_831FE6CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831FE6D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// bl 0x83201e88
	ctx.lr = 0x831FE6DC;
	sub_83201E88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE6EC;
	sub_831FF250(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE6F8;
	sub_831FD320(ctx, base);
	// stwx r30,r26,r25
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, ctx.r30.u32);
	// b 0x831fe704
	goto loc_831FE704;
loc_831FE700:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_831FE704:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x83201318
	ctx.lr = 0x831FE710;
	sub_83201318(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE720;
	sub_831FF250(ctx, base);
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// beq cr6,0x831fe764
	if (ctx.cr6.eq) goto loc_831FE764;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 13, ctx.xer);
	// beq cr6,0x831fe75c
	if (ctx.cr6.eq) goto loc_831FE75C;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 14, ctx.xer);
	// beq cr6,0x831fe754
	if (ctx.cr6.eq) goto loc_831FE754;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FE750;
	sub_831034D8(ctx, base);
	// b 0x831fe778
	goto loc_831FE778;
loc_831FE754:
	// addi r10,r24,12
	ctx.r10.s64 = ctx.r24.s64 + 12;
	// b 0x831fe768
	goto loc_831FE768;
loc_831FE75C:
	// addi r10,r24,28
	ctx.r10.s64 = ctx.r24.s64 + 28;
	// b 0x831fe768
	goto loc_831FE768;
loc_831FE764:
	// addi r10,r24,20
	ctx.r10.s64 = ctx.r24.s64 + 20;
loc_831FE768:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_831FE778:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FE788;
	sub_831FF250(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831fd320
	ctx.lr = 0x831FE794;
	sub_831FD320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 164);
	// bl 0x83201e40
	ctx.lr = 0x831FE7A0;
	sub_83201E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FE5A8) {
	__imp__sub_831FE5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE7B0) {
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
	// bl 0x831fdcb0
	ctx.lr = 0x831FE7C8;
	sub_831FDCB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
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

PPC_WEAK_FUNC(sub_831FE7B0) {
	__imp__sub_831FE7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE7F0) {
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
	// bl 0x831fd210
	ctx.lr = 0x831FE810;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
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

PPC_WEAK_FUNC(sub_831FE7F0) {
	__imp__sub_831FE7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE840) {
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
	// bl 0x831fd210
	ctx.lr = 0x831FE860;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831fe898
	if (ctx.cr6.eq) goto loc_831FE898;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = ctx.r11.s64 + -22424;
	// addi r5,r10,-21996
	ctx.r5.s64 = ctx.r10.s64 + -21996;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,851
	ctx.r7.s64 = 851;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FE898;
	sub_831034D8(ctx, base);
loc_831FE898:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_831FE840) {
	__imp__sub_831FE840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE8C8) {
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
	// bl 0x831fd210
	ctx.lr = 0x831FE8E8;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-22140
	ctx.r11.s64 = ctx.r11.s64 + -22140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x831fe904
	if (ctx.cr6.lt) goto loc_831FE904;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x831fe928
	if (!ctx.cr6.gt) goto loc_831FE928;
loc_831FE904:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-22424
	ctx.r6.s64 = ctx.r11.s64 + -22424;
	// addi r5,r10,-21984
	ctx.r5.s64 = ctx.r10.s64 + -21984;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,862
	ctx.r7.s64 = 862;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FE928;
	sub_831034D8(ctx, base);
loc_831FE928:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r30,33
	ctx.r10.s64 = ctx.r30.s64 + 33;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_831FE8C8) {
	__imp__sub_831FE8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE958) {
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
	// bl 0x831fdb20
	ctx.lr = 0x831FE978;
	sub_831FDB20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831fe994
	if (ctx.cr0.eq) goto loc_831FE994;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831fe994
	if (ctx.cr6.eq) goto loc_831FE994;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x831FE994;
	sub_831C59E0(ctx, base);
loc_831FE994:
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

PPC_WEAK_FUNC(sub_831FE958) {
	__imp__sub_831FE958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FE9B0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FE9D0;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	ctx.r11.s64 = ctx.r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FE9B0) {
	__imp__sub_831FE9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEA18) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FEA38;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	ctx.r11.s64 = ctx.r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FEA18) {
	__imp__sub_831FEA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEA80) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831fd210
	ctx.lr = 0x831FEAA0;
	sub_831FD210(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21952
	ctx.r11.s64 = ctx.r11.s64 + -21952;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FEA80) {
	__imp__sub_831FEA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// li r8,-1
	ctx.r8.s64 = -1;
	// std r9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-8(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = static_cast<float>(ctx.f12.f64 - ctx.f0.f64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x831feb5c
	if (!ctx.cr6.gt) goto loc_831FEB5C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_831FEB5C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x831feb68
	if (!ctx.cr6.lt) goto loc_831FEB68;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_831FEB68:
	// slw r11,r10,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.u64 = uint64_t(int32_t(std::trunc(ctx.f0.f64)));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEAE8) {
	__imp__sub_831FEAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEB98) {
	__imp__sub_831FEB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FEBB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// lbz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831febd4
	if (ctx.cr6.eq) goto loc_831FEBD4;
loc_831FEBCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fec4c
	goto loc_831FEC4C;
loc_831FEBD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FEBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x831fec48
	if (ctx.cr6.lt) goto loc_831FEC48;
	// addi r29,r31,153
	ctx.r29.s64 = ctx.r31.s64 + 153;
	// subf r27,r31,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_831FEBFC:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831febcc
	if (!ctx.cr6.eq) goto loc_831FEBCC;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r11,158(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 158);
	// lbz r10,158(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 158);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831febcc
	if (!ctx.cr6.eq) goto loc_831FEBCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FEC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x831febfc
	if (!ctx.cr6.gt) goto loc_831FEBFC;
loc_831FEC48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831FEC4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FEBA8) {
	__imp__sub_831FEBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FEC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FEC70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FEC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x831fecb8
	if (ctx.cr6.eq) goto loc_831FECB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FECB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x831fecd0
	if (!ctx.cr6.eq) goto loc_831FECD0;
loc_831FECB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x831fec70
	if (ctx.cr6.lt) goto loc_831FEC70;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831FECC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_831FECD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831fecc8
	goto loc_831FECC8;
}

PPC_WEAK_FUNC(sub_831FEC58) {
	__imp__sub_831FEC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FECD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FECE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FECF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x831fed18
	if (ctx.cr6.eq) goto loc_831FED18;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_831FED18:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x831fecf0
	if (ctx.cr6.lt) goto loc_831FECF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FECD8) {
	__imp__sub_831FECD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FED30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FED38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_831FED48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FED64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x831fed88
	if (!ctx.cr6.eq) goto loc_831FED88;
	// li r6,0
	ctx.r6.s64 = 0;
loc_831FED88:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FED90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x831fed48
	if (ctx.cr6.lt) goto loc_831FED48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FED30) {
	__imp__sub_831FED30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEDA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831feddc
	if (ctx.cr6.eq) goto loc_831FEDDC;
	// lbz r11,129(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831feddc
	if (ctx.cr6.eq) goto loc_831FEDDC;
	// lbz r11,130(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x831feddc
	if (ctx.cr6.eq) goto loc_831FEDDC;
	// lbz r11,131(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_831FEDDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FEDA8) {
	__imp__sub_831FEDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r9,r9,-20720
	ctx.r9.s64 = ctx.r9.s64 + -20720;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_831FEDE8) {
	__imp__sub_831FEDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FEE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1452(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x831c58b0
	ctx.lr = 0x831FEE38;
	sub_831C58B0(ctx, base);
	// lwz r11,1452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// li r5,960
	ctx.r5.s64 = 960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x831FEE58;
	sub_82CA2C60(ctx, base);
	// lwz r11,1376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1376);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r11,1376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1376);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1376, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FEE18) {
	__imp__sub_831FEE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FEE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x831FEE80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r26,r7,-20376
	ctx.r26.s64 = ctx.r7.s64 + -20376;
	// addi r25,r8,-20416
	ctx.r25.s64 = ctx.r8.s64 + -20416;
	// addi r28,r9,-18548
	ctx.r28.s64 = ctx.r9.s64 + -18548;
	// addi r24,r10,-20428
	ctx.r24.s64 = ctx.r10.s64 + -20428;
	// addi r27,r11,-20528
	ctx.r27.s64 = ctx.r11.s64 + -20528;
	// ble cr6,0x831fef74
	if (!ctx.cr6.gt) goto loc_831FEF74;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
loc_831FEEC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831feee8
	if (!ctx.cr6.eq) goto loc_831FEEE8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FEEE8;
	sub_831034D8(ctx, base);
loc_831FEEE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831fef14
	if (ctx.cr6.eq) goto loc_831FEF14;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FEF14;
	sub_831034D8(ctx, base);
loc_831FEF14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x831fef4c
	if (ctx.cr6.eq) goto loc_831FEF4C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831fef4c
	if (ctx.cr6.eq) goto loc_831FEF4C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FEF4C;
	sub_831034D8(ctx, base);
loc_831FEF4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FEF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831feec4
	if (ctx.cr6.lt) goto loc_831FEEC4;
loc_831FEF74:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x831ff064
	if (!ctx.cr6.gt) goto loc_831FF064;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
loc_831FEF90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831fefb4
	if (!ctx.cr6.eq) goto loc_831FEFB4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FEFB4;
	sub_831034D8(ctx, base);
loc_831FEFB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831fefe0
	if (ctx.cr6.eq) goto loc_831FEFE0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,146
	ctx.r7.s64 = 146;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FEFE0;
	sub_831034D8(ctx, base);
loc_831FEFE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x831ff018
	if (ctx.cr6.eq) goto loc_831FF018;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x831ff018
	if (ctx.cr6.eq) goto loc_831FF018;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,148
	ctx.r7.s64 = 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FF018;
	sub_831034D8(ctx, base);
loc_831FF018:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ff048
	if (!ctx.cr0.eq) goto loc_831FF048;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831FF048:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x831fef90
	if (ctx.cr6.lt) goto loc_831FEF90;
loc_831FF064:
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ff08c
	if (!ctx.cr6.eq) goto loc_831FF08C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-20448
	ctx.r5.s64 = ctx.r11.s64 + -20448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,153
	ctx.r7.s64 = 153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FF08C;
	sub_831034D8(ctx, base);
loc_831FF08C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FEE78) {
	__imp__sub_831FEE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF098) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ff0b4
	if (ctx.cr6.eq) goto loc_831FF0B4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x831ff0c0
	goto loc_831FF0C0;
loc_831FF0B4:
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_831FF0C0:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// addi r11,r10,-3056
	ctx.r11.s64 = ctx.r10.s64 + -3056;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x831ff0ec
	if (ctx.cr6.eq) goto loc_831FF0EC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_831FF0EC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF098) {
	__imp__sub_831FF098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF0F8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FF100;
	__savegprlr_27(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20536
	ctx.r9.s64 = ctx.r10.s64 + -20536;
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// addi r5,r3,158
	ctx.r5.s64 = ctx.r3.s64 + 158;
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// stw r8,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r8.u32);
	// lis r8,-31951
	ctx.r8.s64 = -2093940736;
	// stwbrx r30,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, __builtin_bswap32(ctx.r30.u32));
	// addi r30,r8,10000
	ctx.r30.s64 = ctx.r8.s64 + 10000;
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stb r11,158(r3)
	PPC_STORE_U8(ctx.r3.u32 + 158, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
loc_831FF170:
	// addi r8,r10,14
	ctx.r8.s64 = ctx.r10.s64 + 14;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r31.u32);
	// stwx r4,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r7,-16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r7,r7,52
	ctx.r7.s64 = ctx.r7.s64 * 52;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// rlwinm. r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x831ff1c0
	if (ctx.cr0.eq) goto loc_831FF1C0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x831ff1bc
	if (!ctx.cr6.eq) goto loc_831FF1BC;
	// stw r28,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r28.u32);
	// b 0x831ff1c0
	goto loc_831FF1C0;
loc_831FF1BC:
	// stwx r29,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r29.u32);
loc_831FF1C0:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// stbx r11,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
	// stbx r11,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// blt cr6,0x831ff170
	if (ctx.cr6.lt) goto loc_831FF170;
	// addi r10,r3,364
	ctx.r10.s64 = ctx.r3.s64 + 364;
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// addi r7,r3,232
	ctx.r7.s64 = ctx.r3.s64 + 232;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,3
	ctx.r9.s64 = 3;
loc_831FF200:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x831ff200
	if (!ctx.cr0.eq) goto loc_831FF200;
	// addi r8,r3,928
	ctx.r8.s64 = ctx.r3.s64 + 928;
	// addi r10,r3,900
	ctx.r10.s64 = ctx.r3.s64 + 900;
	// li r9,4
	ctx.r9.s64 = 4;
loc_831FF230:
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x831ff230
	if (!ctx.cr0.eq) goto loc_831FF230;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FF0F8) {
	__imp__sub_831FF0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FF258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x831ff294
	if (ctx.cr6.lt) goto loc_831FF294;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = ctx.r11.s64 + -20528;
	// addi r5,r10,-20292
	ctx.r5.s64 = ctx.r10.s64 + -20292;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FF294;
	sub_831034D8(ctx, base);
loc_831FF294:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// addi r8,r31,7
	ctx.r8.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// stwx r29,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FF250) {
	__imp__sub_831FF250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x831FF2D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r10,-21840
	ctx.r10.s64 = ctx.r10.s64 + -21840;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r31,-20552(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20552);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_831FF340:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x831ff3c8
	if (ctx.cr6.lt) goto loc_831FF3C8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
loc_831FF350:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x831ff3a4
	if (ctx.cr6.eq) goto loc_831FF3A4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831ff384
	if (!ctx.cr6.eq) goto loc_831FF384;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831ff388
	if (ctx.cr6.eq) goto loc_831FF388;
loc_831FF384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FF388:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ff3c0
	if (!ctx.cr0.eq) goto loc_831FF3C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x831ff350
	if (!ctx.cr6.gt) goto loc_831FF350;
	// b 0x831ff3c8
	goto loc_831FF3C8;
loc_831FF3A4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stbx r9,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x831ff3c8
	goto loc_831FF3C8;
loc_831FF3C0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r9,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
loc_831FF3C8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x831ff340
	if (ctx.cr6.lt) goto loc_831FF340;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x831ff46c
	if (!ctx.cr6.gt) goto loc_831FF46C;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_831FF3EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x831ff460
	if (!ctx.cr6.gt) goto loc_831FF460;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_831FF3FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x831ff41c
	if (!ctx.cr6.eq) goto loc_831FF41C;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_831FF41C:
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x831ff450
	if (ctx.cr0.eq) goto loc_831FF450;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r9,r5,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbx r7,r5,r8
	PPC_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u8);
loc_831FF450:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x831ff3fc
	if (ctx.cr6.lt) goto loc_831FF3FC;
loc_831FF460:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bne 0x831ff3ec
	if (!ctx.cr0.eq) goto loc_831FF3EC;
loc_831FF46C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x831ff498
	if (!ctx.cr6.gt) goto loc_831FF498;
loc_831FF478:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// blt cr6,0x831ff478
	if (ctx.cr6.lt) goto loc_831FF478;
loc_831FF498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FF49C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x831ff49c
	if (ctx.cr6.lt) goto loc_831FF49C;
	// lwz r11,952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lbz r11,1393(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831ff5b0
	if (ctx.cr0.eq) goto loc_831FF5B0;
	// beq cr6,0x831ff588
	if (ctx.cr6.eq) goto loc_831FF588;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x831ff56c
	if (ctx.cr6.eq) goto loc_831FF56C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x831ff548
	if (ctx.cr6.eq) goto loc_831FF548;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x831ff51c
	if (ctx.cr6.eq) goto loc_831FF51C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = ctx.r11.s64 + -20528;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FF518;
	sub_831034D8(ctx, base);
	// b 0x831ff59c
	goto loc_831FF59C;
loc_831FF51C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x831eee28
	ctx.lr = 0x831FF544;
	sub_831EEE28(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF548:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x831eee08
	ctx.lr = 0x831FF568;
	sub_831EEE08(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF56C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x831eede8
	ctx.lr = 0x831FF584;
	sub_831EEDE8(ctx, base);
	// b 0x831ff598
	goto loc_831FF598;
loc_831FF588:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x831eedc8
	ctx.lr = 0x831FF598;
	sub_831EEDC8(ctx, base);
loc_831FF598:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831FF59C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831df328
	ctx.lr = 0x831FF5AC;
	sub_831DF328(ctx, base);
	// b 0x831ff684
	goto loc_831FF684;
loc_831FF5B0:
	// beq cr6,0x831ff660
	if (ctx.cr6.eq) goto loc_831FF660;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x831ff644
	if (ctx.cr6.eq) goto loc_831FF644;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x831ff620
	if (ctx.cr6.eq) goto loc_831FF620;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x831ff5f4
	if (ctx.cr6.eq) goto loc_831FF5F4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = ctx.r11.s64 + -20528;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,410
	ctx.r7.s64 = 410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FF5F0;
	sub_831034D8(ctx, base);
	// b 0x831ff674
	goto loc_831FF674;
loc_831FF5F4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x831f07a8
	ctx.lr = 0x831FF61C;
	sub_831F07A8(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF620:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x831f0788
	ctx.lr = 0x831FF640;
	sub_831F0788(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF644:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x831f0768
	ctx.lr = 0x831FF65C;
	sub_831F0768(ctx, base);
	// b 0x831ff670
	goto loc_831FF670;
loc_831FF660:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x831f0748
	ctx.lr = 0x831FF670;
	sub_831F0748(ctx, base);
loc_831FF670:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831FF674:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ff250
	ctx.lr = 0x831FF684;
	sub_831FF250(ctx, base);
loc_831FF684:
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FF2C8) {
	__imp__sub_831FF2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FF6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// bl 0x831fc718
	ctx.lr = 0x831FF6C0;
	sub_831FC718(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ff738
	if (ctx.cr0.eq) goto loc_831FF738;
	// lwz r11,952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 952);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,2736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x831ff738
	if (ctx.cr6.eq) goto loc_831FF738;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x831ff700
	if (!ctx.cr6.lt) goto loc_831FF700;
loc_831FF6F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x831ff70c
	goto loc_831FF70C;
loc_831FF700:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc9d0
	ctx.lr = 0x831FF70C;
	sub_831FC9D0(ctx, base);
loc_831FF70C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x831ff724
	if (!ctx.cr6.eq) goto loc_831FF724;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831fc910
	ctx.lr = 0x831FF724;
	sub_831FC910(ctx, base);
loc_831FF724:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x831ff6f4
	if (ctx.cr6.lt) goto loc_831FF6F4;
loc_831FF738:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FF6A0) {
	__imp__sub_831FF6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF740) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x831ff774
	if (!ctx.cr6.eq) goto loc_831FF774;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,2736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x831ee720
	ctx.lr = 0x831FF774;
	sub_831EE720(ctx, base);
loc_831FF774:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x831fc718
	ctx.lr = 0x831FF788;
	sub_831FC718(ctx, base);
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

PPC_WEAK_FUNC(sub_831FF740) {
	__imp__sub_831FF740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF7A0) {
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
	// bl 0x831fc718
	ctx.lr = 0x831FF7B8;
	sub_831FC718(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FF7A0) {
	__imp__sub_831FF7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF7D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// bne cr6,0x831ff800
	if (!ctx.cr6.eq) goto loc_831FF800;
	// bl 0x831f1988
	ctx.lr = 0x831FF7F4;
	sub_831F1988(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x831ff804
	if (!ctx.cr0.eq) goto loc_831FF804;
loc_831FF800:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FF804:
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

PPC_WEAK_FUNC(sub_831FF7D8) {
	__imp__sub_831FF7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// lwz r10,2152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2152);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x831ff82c
	if (!ctx.cr0.lt) goto loc_831FF82C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831FF82C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF818) {
	__imp__sub_831FF818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF840) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x831ff85c
	if (!ctx.cr6.eq) goto loc_831FF85C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r11,-20552
	ctx.r11.s64 = ctx.r11.s64 + -20552;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x831ff870
	goto loc_831FF870;
loc_831FF85C:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-20552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20552);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_831FF870:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF840) {
	__imp__sub_831FF840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2736(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2736);
	// lbz r11,2144(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831ff920
	if (ctx.cr0.eq) goto loc_831FF920;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bgt cr6,0x831ff8d0
	if (ctx.cr6.gt) goto loc_831FF8D0;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bge cr6,0x831ff8f8
	if (!ctx.cr6.lt) goto loc_831FF8F8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x831ff8f8
	if (ctx.cr6.eq) goto loc_831FF8F8;
	// ble cr6,0x831ff918
	if (!ctx.cr6.gt) goto loc_831FF918;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x831ff900
	if (ctx.cr6.eq) goto loc_831FF900;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x831ff918
	goto loc_831FF918;
loc_831FF8D0:
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bgt cr6,0x831ff908
	if (ctx.cr6.gt) goto loc_831FF908;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x831ff8f8
	if (!ctx.cr6.lt) goto loc_831FF8F8;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// blt cr6,0x831ff918
	if (ctx.cr6.lt) goto loc_831FF918;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// ble cr6,0x831ff900
	if (!ctx.cr6.gt) goto loc_831FF900;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bgt cr6,0x831ff918
	if (ctx.cr6.gt) goto loc_831FF918;
loc_831FF8F8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_831FF900:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_831FF908:
	// cmpwi cr6,r3,43
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 43, ctx.xer);
	// blt cr6,0x831ff918
	if (ctx.cr6.lt) goto loc_831FF918;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_831FF918:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_831FF920:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x831ff934
	if (ctx.cr6.eq) goto loc_831FF934;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x831ff900
	if (ctx.cr6.eq) goto loc_831FF900;
	// b 0x831ff918
	goto loc_831FF918;
loc_831FF934:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FF888) {
	__imp__sub_831FF888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FF940) {
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
	// addi r10,r4,58
	ctx.r10.s64 = ctx.r4.s64 + 58;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x831ff990
	goto loc_831FF990;
loc_831FF968:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x831ff998
	if (!ctx.cr0.eq) goto loc_831FF998;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x831ff984
	if (ctx.cr0.eq) goto loc_831FF984;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831ff9ac
	if (ctx.cr6.eq) goto loc_831FF9AC;
loc_831FF984:
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
loc_831FF990:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831ff968
	if (!ctx.cr6.eq) goto loc_831FF968;
loc_831FF998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831FF99C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_831FF9AC:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x831ff9c4
	if (!ctx.cr6.eq) goto loc_831FF9C4;
	// lwz r11,228(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ffa00
	if (!ctx.cr0.eq) goto loc_831FFA00;
loc_831FF9C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FF9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x831ffa00
	if (!ctx.cr0.eq) goto loc_831FFA00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = ctx.r11.s64 + -20528;
	// addi r5,r10,-20272
	ctx.r5.s64 = ctx.r10.s64 + -20272;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,647
	ctx.r7.s64 = 647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFA00;
	sub_831034D8(ctx, base);
loc_831FFA00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ff99c
	goto loc_831FF99C;
}

PPC_WEAK_FUNC(sub_831FF940) {
	__imp__sub_831FF940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// b 0x831df3d0
	sub_831DF3D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFA08) {
	__imp__sub_831FFA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA38) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stb r11,133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 133, ctx.r11.u8);
	// stb r11,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, ctx.r11.u8);
	// stb r11,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFA38) {
	__imp__sub_831FFA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFA58) {
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
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x831ffab8
	if (!ctx.cr6.eq) goto loc_831FFAB8;
	// lwz r31,236(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// b 0x831ffaa4
	goto loc_831FFAA4;
loc_831FFA84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FFA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ffab0
	if (ctx.cr0.eq) goto loc_831FFAB0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r31,236(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
loc_831FFAA4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x831ffa84
	if (!ctx.cr6.eq) goto loc_831FFA84;
loc_831FFAB0:
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831FFAB8:
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

PPC_WEAK_FUNC(sub_831FFA58) {
	__imp__sub_831FFA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FFAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r10,25480
	ctx.r7.s64 = ctx.r10.s64 + 25480;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// bl 0x831dbcb8
	ctx.lr = 0x831FFB10;
	sub_831DBCB8(ctx, base);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r7,r11,25480
	ctx.r7.s64 = ctx.r11.s64 + 25480;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,1384(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// lwz r3,1536(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// bl 0x831dc158
	ctx.lr = 0x831FFB34;
	sub_831DC158(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFAD0) {
	__imp__sub_831FFAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x831FFB68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FFB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// mulli r8,r9,52
	ctx.r8.s64 = ctx.r9.s64 * 52;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r10,-18548
	ctx.r30.s64 = ctx.r10.s64 + -18548;
	// addi r29,r9,-20528
	ctx.r29.s64 = ctx.r9.s64 + -20528;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x831ffbe0
	if (!ctx.cr6.eq) goto loc_831FFBE0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20144
	ctx.r5.s64 = ctx.r11.s64 + -20144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFBE0;
	sub_831034D8(ctx, base);
loc_831FFBE0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ffc50
	if (ctx.cr0.eq) goto loc_831FFC50;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x831ffc10
	if (ctx.cr6.eq) goto loc_831FFC10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20168
	ctx.r5.s64 = ctx.r11.s64 + -20168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1434
	ctx.r7.s64 = 1434;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFC10;
	sub_831034D8(ctx, base);
loc_831FFC10:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// li r10,53
	ctx.r10.s64 = 53;
	// lbz r9,153(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r11.u8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x831ffc50
	if (ctx.cr6.eq) goto loc_831FFC50;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20204
	ctx.r5.s64 = ctx.r11.s64 + -20204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1438
	ctx.r7.s64 = 1438;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFC50;
	sub_831034D8(ctx, base);
loc_831FFC50:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
	// stb r11,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r11.u8);
	// stb r11,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r11.u8);
	// bne cr6,0x831ffc80
	if (!ctx.cr6.eq) goto loc_831FFC80;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r11.u8);
	// stb r11,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r11.u8);
	// stb r11,139(r31)
	PPC_STORE_U8(ctx.r31.u32 + 139, ctx.r11.u8);
loc_831FFC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFB60) {
	__imp__sub_831FFB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x831FFC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 + 10000;
	// addi r30,r9,-18548
	ctx.r30.s64 = ctx.r9.s64 + -18548;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 * 52;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r11,-53
	ctx.r7.s64 = ctx.r11.s64 + -53;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r29,r11,-20528
	ctx.r29.s64 = ctx.r11.s64 + -20528;
	// rlwinm r28,r7,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x831ffcf4
	if (!ctx.cr6.eq) goto loc_831FFCF4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20144
	ctx.r5.s64 = ctx.r11.s64 + -20144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFCF4;
	sub_831034D8(ctx, base);
loc_831FFCF4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x831ffd38
	if (ctx.cr0.eq) goto loc_831FFD38;
	// lbz r11,153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 153);
	// lbz r10,154(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x831ffd28
	if (ctx.cr6.eq) goto loc_831FFD28;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-20204
	ctx.r5.s64 = ctx.r11.s64 + -20204;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1468
	ctx.r7.s64 = 1468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFD28;
	sub_831034D8(ctx, base);
loc_831FFD28:
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r11.u8);
loc_831FFD38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFC88) {
	__imp__sub_831FFC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFD48) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32144
	ctx.r10.s64 = ctx.r10.s64 + 32144;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1376);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1376);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1376, ctx.r10.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r5,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r5.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// bl 0x831ff0f8
	ctx.lr = 0x831FFDA8;
	sub_831FF0F8(ctx, base);
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

PPC_WEAK_FUNC(sub_831FFD48) {
	__imp__sub_831FFD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x831FFDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lbz r11,1393(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x831ffe08
	if (ctx.cr0.eq) goto loc_831FFE08;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-20528
	ctx.r6.s64 = ctx.r11.s64 + -20528;
	// addi r5,r10,28952
	ctx.r5.s64 = ctx.r10.s64 + 28952;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,184
	ctx.r7.s64 = 184;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x831FFE08;
	sub_831034D8(ctx, base);
loc_831FFE08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x831ff250
	ctx.lr = 0x831FFE1C;
	sub_831FF250(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x831ffe68
	if (!ctx.cr6.gt) goto loc_831FFE68;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x831ffe68
	if (!ctx.cr6.eq) goto loc_831FFE68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831FFE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x831ffe68
	if (!ctx.cr6.gt) goto loc_831FFE68;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_831FFE68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_831FFDC0) {
	__imp__sub_831FFDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x831ff2c8
	ctx.lr = 0x831FFEB4;
	sub_831FF2C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFE70) {
	__imp__sub_831FFE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x831ff2c8
	ctx.lr = 0x831FFF0C;
	sub_831FF2C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFEC8) {
	__imp__sub_831FFEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFF20) {
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
	// bl 0x831ffd48
	ctx.lr = 0x831FFF30;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-19808
	ctx.r9.s64 = ctx.r11.s64 + -19808;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_831FFF50:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831fff50
	if (!ctx.cr0.eq) goto loc_831FFF50;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_831FFF20) {
	__imp__sub_831FFF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFF80) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831fff20
	ctx.lr = 0x831FFFA0;
	sub_831FFF20(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19808
	ctx.r10.s64 = ctx.r10.s64 + -19808;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FFF80) {
	__imp__sub_831FFF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_831FFFD0) {
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
	// bl 0x831ffd48
	ctx.lr = 0x831FFFE8;
	sub_831FFD48(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-19704
	ctx.r9.s64 = ctx.r9.s64 + -19704;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_831FFFD0) {
	__imp__sub_831FFFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200028) {
	__imp__sub_83200028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200058;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-19592
	ctx.r11.s64 = ctx.r11.s64 + -19592;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200084;
	sub_831DF3D0(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200038) {
	__imp__sub_83200038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832000A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-3372
	ctx.r3.s64 = ctx.r11.s64 + -3372;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832000A8) {
	__imp__sub_832000A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832000B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832000C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83200038
	ctx.lr = 0x832000D8;
	sub_83200038(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19488
	ctx.r11.s64 = ctx.r11.s64 + -19488;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831ff250
	ctx.lr = 0x832000F4;
	sub_831FF250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832000B8) {
	__imp__sub_832000B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200110) {
	__imp__sub_83200110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-19372
	ctx.r3.s64 = ctx.r11.s64 + -19372;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200120) {
	__imp__sub_83200120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200130) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200150;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19360
	ctx.r11.s64 = ctx.r11.s64 + -19360;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200130) {
	__imp__sub_83200130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-19868
	ctx.r3.s64 = ctx.r11.s64 + -19868;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200178) {
	__imp__sub_83200178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200188) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x832001A8;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200188) {
	__imp__sub_83200188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832001D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832001D0) {
	__imp__sub_832001D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832001E0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200200;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19152
	ctx.r10.s64 = ctx.r10.s64 + -19152;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832001E0) {
	__imp__sub_832001E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200238) {
	__imp__sub_83200238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200248) {
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
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x8320026C;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19152
	ctx.r9.s64 = ctx.r11.s64 + -19152;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200248) {
	__imp__sub_83200248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832002C0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x832002E0;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-19032
	ctx.r10.s64 = ctx.r10.s64 + -19032;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832002C0) {
	__imp__sub_832002C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18928
	ctx.r3.s64 = ctx.r11.s64 + -18928;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200318) {
	__imp__sub_83200318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200328) {
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
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x8320034C;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19032
	ctx.r10.s64 = ctx.r10.s64 + -19032;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_83200328) {
	__imp__sub_83200328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200398) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x832003B8;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18912
	ctx.r11.s64 = ctx.r11.s64 + -18912;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200398) {
	__imp__sub_83200398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832003F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832003F8) {
	__imp__sub_832003F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200408) {
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
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200424;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18792
	ctx.r10.s64 = ctx.r10.s64 + -18792;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200408) {
	__imp__sub_83200408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200450) {
	__imp__sub_83200450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200460) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,137
	ctx.r4.s64 = 137;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200480;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83200460) {
	__imp__sub_83200460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832004A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832004A8) {
	__imp__sub_832004A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832004B8) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	ctx.lr = 0x832004DC;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200508;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832004B8) {
	__imp__sub_832004B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18456
	ctx.r3.s64 = ctx.r11.s64 + -18456;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200528) {
	__imp__sub_83200528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200538) {
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
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200554;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18448
	ctx.r10.s64 = ctx.r10.s64 + -18448;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200538) {
	__imp__sub_83200538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18344
	ctx.r3.s64 = ctx.r11.s64 + -18344;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200580) {
	__imp__sub_83200580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200590) {
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
	// bl 0x831ffd48
	ctx.lr = 0x832005A8;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-18328
	ctx.r10.s64 = ctx.r10.s64 + -18328;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200590) {
	__imp__sub_83200590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832005E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18120
	ctx.r3.s64 = ctx.r11.s64 + -18120;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832005E0) {
	__imp__sub_832005E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832005F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-18000
	ctx.r3.s64 = ctx.r11.s64 + -18000;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832005F0) {
	__imp__sub_832005F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17880
	ctx.r3.s64 = ctx.r11.s64 + -17880;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200600) {
	__imp__sub_83200600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17760
	ctx.r3.s64 = ctx.r11.s64 + -17760;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200610) {
	__imp__sub_83200610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200620) {
	__imp__sub_83200620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200630) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x83200664
	if (ctx.cr6.lt) goto loc_83200664;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x83200664
	if (ctx.cr6.gt) goto loc_83200664;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = ctx.r11.s64 + 25064;
	// addi r5,r10,5664
	ctx.r5.s64 = ctx.r10.s64 + 5664;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1712
	ctx.r7.s64 = 1712;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831034d8
	sub_831034D8(ctx, base);
	return;
loc_83200664:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200630) {
	__imp__sub_83200630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200694;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r8,-17744
	ctx.r8.s64 = ctx.r8.s64 + -17744;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// lwz r10,-20548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20548);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200678) {
	__imp__sub_83200678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832006E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832006F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200700;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-17640
	ctx.r11.s64 = ctx.r11.s64 + -17640;
	// stw r31,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r10,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r10.u32);
	// stw r31,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r31.u32);
	// stw r31,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
	// stw r31,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r31.u32);
	// stw r31,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r31.u32);
	// lwz r3,1452(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1452);
	// bl 0x831c58b0
	ctx.lr = 0x83200744;
	sub_831C58B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x83200754;
	sub_82CA3190(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r30,14(r28)
	PPC_STORE_U16(ctx.r28.u32 + 14, ctx.r30.u16);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
	// sth r10,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r10.u16);
	// sth r10,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r10.u16);
	// sth r11,10(r28)
	PPC_STORE_U16(ctx.r28.u32 + 10, ctx.r11.u16);
	// sth r11,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r11.u16);
	// sth r31,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r31.u16);
	// sth r30,18(r28)
	PPC_STORE_U16(ctx.r28.u32 + 18, ctx.r30.u16);
	// sth r31,22(r28)
	PPC_STORE_U16(ctx.r28.u32 + 22, ctx.r31.u16);
	// sth r31,24(r28)
	PPC_STORE_U16(ctx.r28.u32 + 24, ctx.r31.u16);
	// sth r31,26(r28)
	PPC_STORE_U16(ctx.r28.u32 + 26, ctx.r31.u16);
	// sth r31,28(r28)
	PPC_STORE_U16(ctx.r28.u32 + 28, ctx.r31.u16);
	// sth r31,20(r28)
	PPC_STORE_U16(ctx.r28.u32 + 20, ctx.r31.u16);
	// stw r28,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832006E8) {
	__imp__sub_832006E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832007A8) {
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
	// bl 0x83200038
	ctx.lr = 0x832007C0;
	sub_83200038(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,21
	ctx.r10.s64 = 21;
	// addi r11,r11,-17536
	ctx.r11.s64 = ctx.r11.s64 + -17536;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832007A8) {
	__imp__sub_832007A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832007F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17432
	ctx.r3.s64 = ctx.r11.s64 + -17432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832007F8) {
	__imp__sub_832007F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200808) {
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
	// li r4,134
	ctx.r4.s64 = 134;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	ctx.lr = 0x8320082C;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-17408
	ctx.r11.s64 = ctx.r11.s64 + -17408;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-20540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20540);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200874;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200808) {
	__imp__sub_83200808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200890) {
	__imp__sub_83200890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832008A0) {
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
	// bl 0x831ffd48
	ctx.lr = 0x832008C0;
	sub_831FFD48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r10,r10,-17296
	ctx.r10.s64 = ctx.r10.s64 + -17296;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x832008F8;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832008A0) {
	__imp__sub_832008A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17192
	ctx.r3.s64 = ctx.r11.s64 + -17192;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200918) {
	__imp__sub_83200918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200928) {
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
	// bl 0x831ffd48
	ctx.lr = 0x83200948;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-17184
	ctx.r11.s64 = ctx.r11.s64 + -17184;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200984;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200928) {
	__imp__sub_83200928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832009A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-17080
	ctx.r3.s64 = ctx.r11.s64 + -17080;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832009A0) {
	__imp__sub_832009A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832009B0) {
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
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	ctx.lr = 0x832009D4;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-17064
	ctx.r11.s64 = ctx.r11.s64 + -17064;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200A08;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_832009B0) {
	__imp__sub_832009B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200A28) {
	__imp__sub_83200A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200A38) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200A5C;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16944
	ctx.r11.s64 = ctx.r11.s64 + -16944;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x831df3d0
	ctx.lr = 0x83200A90;
	sub_831DF3D0(ctx, base);
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

PPC_WEAK_FUNC(sub_83200A38) {
	__imp__sub_83200A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16840
	ctx.r3.s64 = ctx.r11.s64 + -16840;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83200AB0) {
	__imp__sub_83200AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200AE4;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r11,r11,-16824
	ctx.r11.s64 = ctx.r11.s64 + -16824;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200AC0) {
	__imp__sub_83200AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,138
	ctx.r4.s64 = 138;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200B3C;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r11,r11,-16720
	ctx.r11.s64 = ctx.r11.s64 + -16720;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200B18) {
	__imp__sub_83200B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200B70) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,25032
	ctx.r11.s64 = ctx.r11.s64 + 25032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x83200ba4
	if (ctx.cr0.eq) goto loc_83200BA4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x83200BA4;
	sub_831C59E0(ctx, base);
loc_83200BA4:
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

PPC_WEAK_FUNC(sub_83200B70) {
	__imp__sub_83200B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200BC0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,141
	ctx.r4.s64 = 141;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200BE0;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16616
	ctx.r11.s64 = ctx.r11.s64 + -16616;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200BC0) {
	__imp__sub_83200BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200C18) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200C38;
	sub_831FFD48(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16512
	ctx.r11.s64 = ctx.r11.s64 + -16512;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83200C18) {
	__imp__sub_83200C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200C94;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200ccc
	if (ctx.cr0.eq) goto loc_83200CCC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200CB0;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-20016
	ctx.r10.s64 = ctx.r10.s64 + -20016;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x83200cd0
	goto loc_83200CD0;
loc_83200CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200CD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200C70) {
	__imp__sub_83200C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200CFC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200d1c
	if (ctx.cr0.eq) goto loc_83200D1C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831fffd0
	ctx.lr = 0x83200D18;
	sub_831FFFD0(ctx, base);
	// b 0x83200d20
	goto loc_83200D20;
loc_83200D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200CD8) {
	__imp__sub_83200CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200D30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200D4C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200d88
	if (ctx.cr0.eq) goto loc_83200D88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200D68;
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-19912
	ctx.r11.s64 = ctx.r11.s64 + -19912;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83200d8c
	goto loc_83200D8C;
loc_83200D88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200D28) {
	__imp__sub_83200D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200DA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200DBC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200df8
	if (ctx.cr0.eq) goto loc_83200DF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200DD8;
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,32256
	ctx.r11.s64 = ctx.r11.s64 + 32256;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83200dfc
	goto loc_83200DFC;
loc_83200DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200DFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200D98) {
	__imp__sub_83200D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200E2C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200e68
	if (ctx.cr0.eq) goto loc_83200E68;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ffd48
	ctx.lr = 0x83200E48;
	sub_831FFD48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20120
	ctx.r11.s64 = ctx.r11.s64 + -20120;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83200e6c
	goto loc_83200E6C;
loc_83200E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200E08) {
	__imp__sub_83200E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200E9C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200ebc
	if (ctx.cr0.eq) goto loc_83200EBC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832008a0
	ctx.lr = 0x83200EB8;
	sub_832008A0(ctx, base);
	// b 0x83200ec0
	goto loc_83200EC0;
loc_83200EBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200E78) {
	__imp__sub_83200E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200EEC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200f0c
	if (ctx.cr0.eq) goto loc_83200F0C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200928
	ctx.lr = 0x83200F08;
	sub_83200928(ctx, base);
	// b 0x83200f10
	goto loc_83200F10;
loc_83200F0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200F10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200EC8) {
	__imp__sub_83200EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200F3C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200f5c
	if (ctx.cr0.eq) goto loc_83200F5C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200808
	ctx.lr = 0x83200F58;
	sub_83200808(ctx, base);
	// b 0x83200f60
	goto loc_83200F60;
loc_83200F5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200F18) {
	__imp__sub_83200F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200F70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200F8C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200fac
	if (ctx.cr0.eq) goto loc_83200FAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832009b0
	ctx.lr = 0x83200FA8;
	sub_832009B0(ctx, base);
	// b 0x83200fb0
	goto loc_83200FB0;
loc_83200FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83200FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200F68) {
	__imp__sub_83200F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83200FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83200FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83200FDC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83200ffc
	if (ctx.cr0.eq) goto loc_83200FFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200a38
	ctx.lr = 0x83200FF8;
	sub_83200A38(ctx, base);
	// b 0x83201000
	goto loc_83201000;
loc_83200FFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83200FB8) {
	__imp__sub_83200FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201008) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201030;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x83201068
	if (ctx.cr0.eq) goto loc_83201068;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x831ffd48
	ctx.lr = 0x8320104C;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18792
	ctx.r10.s64 = ctx.r10.s64 + -18792;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x8320106c
	goto loc_8320106C;
loc_83201068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320106C:
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

PPC_WEAK_FUNC(sub_83201008) {
	__imp__sub_83201008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83201090;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832010AC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x832010cc
	if (ctx.cr0.eq) goto loc_832010CC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832004b8
	ctx.lr = 0x832010C8;
	sub_832004B8(ctx, base);
	// b 0x832010d0
	goto loc_832010D0;
loc_832010CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832010D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201088) {
	__imp__sub_83201088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832010D8) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201100;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x83201138
	if (ctx.cr0.eq) goto loc_83201138;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,126
	ctx.r4.s64 = 126;
	// bl 0x831ffd48
	ctx.lr = 0x8320111C;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-18448
	ctx.r10.s64 = ctx.r10.s64 + -18448;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x8320113c
	goto loc_8320113C;
loc_83201138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8320113C:
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

PPC_WEAK_FUNC(sub_832010D8) {
	__imp__sub_832010D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201158) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201180;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x832011ac
	if (ctx.cr0.eq) goto loc_832011AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x83200590
	ctx.lr = 0x8320119C;
	sub_83200590(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-18104
	ctx.r11.s64 = ctx.r11.s64 + -18104;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x832011b0
	goto loc_832011B0;
loc_832011AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832011B0:
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

PPC_WEAK_FUNC(sub_83201158) {
	__imp__sub_83201158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832011C8) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832011F0;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8320121c
	if (ctx.cr0.eq) goto loc_8320121C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x83200590
	ctx.lr = 0x8320120C;
	sub_83200590(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-17984
	ctx.r11.s64 = ctx.r11.s64 + -17984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83201220
	goto loc_83201220;
loc_8320121C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201220:
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

PPC_WEAK_FUNC(sub_832011C8) {
	__imp__sub_832011C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201238) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201260;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8320128c
	if (ctx.cr0.eq) goto loc_8320128C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x83200590
	ctx.lr = 0x8320127C;
	sub_83200590(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-17864
	ctx.r11.s64 = ctx.r11.s64 + -17864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83201290
	goto loc_83201290;
loc_8320128C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201290:
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

PPC_WEAK_FUNC(sub_83201238) {
	__imp__sub_83201238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832012A8) {
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
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832012D0;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x832012fc
	if (ctx.cr0.eq) goto loc_832012FC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x83200590
	ctx.lr = 0x832012EC;
	sub_83200590(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-18224
	ctx.r11.s64 = ctx.r11.s64 + -18224;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x83201300
	goto loc_83201300;
loc_832012FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201300:
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

PPC_WEAK_FUNC(sub_832012A8) {
	__imp__sub_832012A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83201320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x8320133C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8320135c
	if (ctx.cr0.eq) goto loc_8320135C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831fff20
	ctx.lr = 0x83201358;
	sub_831FFF20(ctx, base);
	// b 0x83201360
	goto loc_83201360;
loc_8320135C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201318) {
	__imp__sub_83201318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83201370;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r27,1452(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201394;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// beq 0x832013bc
	if (ctx.cr0.eq) goto loc_832013BC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83200678
	ctx.lr = 0x832013B8;
	sub_83200678(ctx, base);
	// b 0x832013c0
	goto loc_832013C0;
loc_832013BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832013C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201368) {
	__imp__sub_83201368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832013C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x832013D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832013EC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8320140c
	if (ctx.cr0.eq) goto loc_8320140C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832006e8
	ctx.lr = 0x83201408;
	sub_832006E8(ctx, base);
	// b 0x83201410
	goto loc_83201410;
loc_8320140C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83201410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832013C8) {
	__imp__sub_832013C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201418) {
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
	// bl 0x831ffd48
	ctx.lr = 0x83201430;
	sub_831FFD48(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-20120
	ctx.r10.s64 = ctx.r10.s64 + -20120;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,-20540(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20540);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_83201418) {
	__imp__sub_83201418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83201478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r29,1452(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201494;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x832014b4
	if (ctx.cr0.eq) goto loc_832014B4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83201418
	ctx.lr = 0x832014B0;
	sub_83201418(ctx, base);
	// b 0x832014b8
	goto loc_832014B8;
loc_832014B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832014B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201470) {
	__imp__sub_83201470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832014C0) {
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
	// addi r3,r4,128
	ctx.r3.s64 = ctx.r4.s64 + 128;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// bl 0x831fc770
	ctx.lr = 0x832014E4;
	sub_831FC770(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201508;
	sub_831C58B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x8320151C;
	sub_831C58B0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201530;
	sub_831C58B0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201544;
	sub_831C58B0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201558;
	sub_831C58B0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201574;
	sub_831C58B0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1456(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x831c58b0
	ctx.lr = 0x83201590;
	sub_831C58B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_832014C0) {
	__imp__sub_832014C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832015B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832015B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83201604
	goto loc_83201604;
loc_832015CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83201614
	if (ctx.cr6.eq) goto loc_83201614;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x832015fc
	if (ctx.cr0.eq) goto loc_832015FC;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x832015FC;
	sub_831C59E0(ctx, base);
loc_832015FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
loc_83201604:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832015cc
	if (!ctx.cr6.eq) goto loc_832015CC;
loc_83201614:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83201630
	if (ctx.cr6.eq) goto loc_83201630;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x83201630;
	sub_831C59E0(ctx, base);
loc_83201630:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83201604
	if (!ctx.cr6.gt) goto loc_83201604;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x83201654;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x83201664;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x83201674;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x83201684;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x83201694;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x832016A4;
	sub_831C59E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,1456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831c59e0
	ctx.lr = 0x832016B4;
	sub_831C59E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832015B0) {
	__imp__sub_832015B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832016C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x832016D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// bl 0x831e2dc8
	ctx.lr = 0x832016E0;
	sub_831E2DC8(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83201824
	if (ctx.cr6.lt) goto loc_83201824;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
loc_832016F4:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r24,72(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
loc_83201708:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83201720
	if (!ctx.cr6.gt) goto loc_83201720;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8320172c
	goto loc_8320172C;
loc_83201720:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_8320172C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83201764
	if (ctx.cr0.eq) goto loc_83201764;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x83201758
	if (ctx.cr6.eq) goto loc_83201758;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83202440
	ctx.lr = 0x83201758;
	sub_83202440(ctx, base);
loc_83201758:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x83201708
	goto loc_83201708;
loc_83201764:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_83201770:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83201788
	if (!ctx.cr6.gt) goto loc_83201788;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83201794
	goto loc_83201794;
loc_83201788:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r27,r10,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_83201794:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83201810
	if (ctx.cr0.eq) goto loc_83201810;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_832017A8:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832017c0
	if (!ctx.cr6.gt) goto loc_832017C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832017cc
	goto loc_832017CC;
loc_832017C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_832017CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83201804
	if (ctx.cr0.eq) goto loc_83201804;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x832017f8
	if (ctx.cr6.eq) goto loc_832017F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83202440
	ctx.lr = 0x832017F8;
	sub_83202440(ctx, base);
loc_832017F8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x832017a8
	goto loc_832017A8;
loc_83201804:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83201770
	goto loc_83201770;
loc_83201810:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x832016f4
	if (!ctx.cr6.gt) goto loc_832016F4;
loc_83201824:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832016C8) {
	__imp__sub_832016C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83201838;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,1456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201858;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x83201878
	if (ctx.cr0.eq) goto loc_83201878;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x83201874;
	sub_831DF0D8(ctx, base);
	// b 0x8320187c
	goto loc_8320187C;
loc_83201878:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8320187C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8320189c
	goto loc_8320189C;
loc_83201884:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83201890;
	sub_831FC9D0(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_8320189C:
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83201884
	if (!ctx.cr6.eq) goto loc_83201884;
	// b 0x8320190c
	goto loc_8320190C;
loc_832018B8:
	// bl 0x832027e0
	ctx.lr = 0x832018BC;
	sub_832027E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83201900
	if (!ctx.cr6.lt) goto loc_83201900;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
loc_83201900:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8320190C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832018b8
	if (!ctx.cr6.eq) goto loc_832018B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x83201924;
	sub_8320D3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201830) {
	__imp__sub_83201830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201930) {
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
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83201960
	if (ctx.cr6.eq) goto loc_83201960;
	// bl 0x83201830
	ctx.lr = 0x83201960;
	sub_83201830(ctx, base);
loc_83201960:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_83201930) {
	__imp__sub_83201930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83201988;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,2148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2148, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,1456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832019B8;
	sub_831C58B0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x832019d8
	if (ctx.cr0.eq) goto loc_832019D8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x831df0d8
	ctx.lr = 0x832019D4;
	sub_831DF0D8(ctx, base);
	// b 0x832019dc
	goto loc_832019DC;
loc_832019D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_832019DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83201A0C;
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,2
	ctx.r27.s64 = 2;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
loc_83201A28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_83201A34:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,2148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	// bl 0x83202330
	ctx.lr = 0x83201A44;
	sub_83202330(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x83201aac
	if (ctx.cr0.eq) goto loc_83201AAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83201A58;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r27,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r27.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,2148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// b 0x83201a28
	goto loc_83201A28;
loc_83201AAC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83201ac8
	if (ctx.cr6.eq) goto loc_83201AC8;
	// bl 0x832027e0
	ctx.lr = 0x83201AC0;
	sub_832027E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x83201a34
	goto loc_83201A34;
loc_83201AC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x83201AD0;
	sub_8320D3D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201980) {
	__imp__sub_83201980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x83201AE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r22,164(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r10,72(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83201b1c
	if (!ctx.cr6.eq) goto loc_83201B1C;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x83201b10
	goto loc_83201B10;
loc_83201B04:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83201B10:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83201b04
	if (!ctx.cr6.eq) goto loc_83201B04;
loc_83201B1C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201980
	ctx.lr = 0x83201B28;
	sub_83201980(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x831df638
	ctx.lr = 0x83201B38;
	sub_831DF638(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,28(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x83201cac
	if (!ctx.cr6.gt) goto loc_83201CAC;
	// rlwinm r29,r24,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_83201B4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwzx r25,r29,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_83201B60:
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83201b78
	if (!ctx.cr6.gt) goto loc_83201B78;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x83201b84
	goto loc_83201B84;
loc_83201B78:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
loc_83201B84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83201bc0
	if (ctx.cr0.eq) goto loc_83201BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x83201930
	ctx.lr = 0x83201B9C;
	sub_83201930(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83201bb4
	if (!ctx.cr6.lt) goto loc_83201BB4;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
loc_83201BB4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x83201b60
	goto loc_83201B60;
loc_83201BC0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r30,1456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201BD4;
	sub_831C58B0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x83201bec
	if (ctx.cr0.eq) goto loc_83201BEC;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// b 0x83201bf0
	goto loc_83201BF0;
loc_83201BEC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83201BF0:
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x83201c94
	goto loc_83201C94;
loc_83201C48:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83201930
	ctx.lr = 0x83201C58;
	sub_83201930(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83201c88
	if (!ctx.cr6.eq) goto loc_83201C88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x83201c90
	goto loc_83201C90;
loc_83201C88:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83201C90:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83201C94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83201c48
	if (!ctx.cr6.eq) goto loc_83201C48;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// bgt cr6,0x83201b4c
	if (ctx.cr6.gt) goto loc_83201B4C;
loc_83201CAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x83201d08
	if (ctx.cr6.lt) goto loc_83201D08;
	// li r11,8
	ctx.r11.s64 = 8;
loc_83201CC8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83201cf4
	if (ctx.cr6.eq) goto loc_83201CF4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_83201CF4:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83201cc8
	if (!ctx.cr6.gt) goto loc_83201CC8;
loc_83201D08:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83201d6c
	if (ctx.cr6.lt) goto loc_83201D6C;
loc_83201D18:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x83201d28
	if (!ctx.cr6.eq) goto loc_83201D28;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x83201d40
	goto loc_83201D40;
loc_83201D28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_83201D40:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r3,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// beq cr6,0x83201d5c
	if (ctx.cr6.eq) goto loc_83201D5C;
	// bl 0x83202408
	ctx.lr = 0x83201D5C;
	sub_83202408(ctx, base);
loc_83201D5C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83201d18
	if (!ctx.cr6.gt) goto loc_83201D18;
loc_83201D6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832016c8
	ctx.lr = 0x83201D74;
	sub_832016C8(ctx, base);
	// lwz r11,76(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83201da4
	if (!ctx.cr6.eq) goto loc_83201DA4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x83201d98
	goto loc_83201D98;
loc_83201D8C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_83201D98:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83201d8c
	if (!ctx.cr6.eq) goto loc_83201D8C;
loc_83201DA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201AD8) {
	__imp__sub_83201AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201DB0) {
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
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,1456(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83201DDC;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x83201dfc
	if (ctx.cr0.eq) goto loc_83201DFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832014c0
	ctx.lr = 0x83201DF4;
	sub_832014C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83201e00
	goto loc_83201E00;
loc_83201DFC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83201E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201ad8
	ctx.lr = 0x83201E08;
	sub_83201AD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83201e24
	if (ctx.cr6.eq) goto loc_83201E24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832015b0
	ctx.lr = 0x83201E18;
	sub_832015B0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x83201E24;
	sub_831C59E0(ctx, base);
loc_83201E24:
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

PPC_WEAK_FUNC(sub_83201DB0) {
	__imp__sub_83201DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201E40) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x831fc6d8
	ctx.lr = 0x83201E68;
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83201E40) {
	__imp__sub_83201E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201E88) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x831fc6f8
	ctx.lr = 0x83201EB0;
	sub_831FC6F8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83201E88) {
	__imp__sub_83201E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83201ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83201f18
	if (!ctx.cr6.eq) goto loc_83201F18;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = ctx.r11.s64 + -16376;
	// addi r5,r10,-16408
	ctx.r5.s64 = ctx.r10.s64 + -16408;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,181
	ctx.r7.s64 = 181;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83201F18;
	sub_831034D8(ctx, base);
loc_83201F18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc6f8
	ctx.lr = 0x83201F24;
	sub_831FC6F8(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201ED0) {
	__imp__sub_83201ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83201F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83201f78
	if (!ctx.cr6.eq) goto loc_83201F78;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = ctx.r11.s64 + -16376;
	// addi r5,r10,-16296
	ctx.r5.s64 = ctx.r10.s64 + -16296;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,193
	ctx.r7.s64 = 193;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83201F78;
	sub_831034D8(ctx, base);
loc_83201F78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc6d8
	ctx.lr = 0x83201F84;
	sub_831FC6D8(ctx, base);
	// stw r29,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83201F30) {
	__imp__sub_83201F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201F90) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x831fc6f8
	ctx.lr = 0x83201FB8;
	sub_831FC6F8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83201F90) {
	__imp__sub_83201F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83201FD8) {
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
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83202030
	goto loc_83202030;
loc_83201FF8:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320202c
	if (ctx.cr0.eq) goto loc_8320202C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8320202c
	if (!ctx.cr6.eq) goto loc_8320202C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83202024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202058
	if (ctx.cr0.eq) goto loc_83202058;
loc_8320202C:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_83202030:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83201ff8
	if (!ctx.cr6.eq) goto loc_83201FF8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83202040:
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
loc_83202058:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83202040
	goto loc_83202040;
}

PPC_WEAK_FUNC(sub_83201FD8) {
	__imp__sub_83201FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83202068;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-16268
	ctx.r11.s64 = ctx.r11.s64 + -16268;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x831fc738
	ctx.lr = 0x8320209C;
	sub_831FC738(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1388, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r27,1452(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202104;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83202124
	if (ctx.cr0.eq) goto loc_83202124;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x83202120;
	sub_831DF0D8(ctx, base);
	// b 0x83202128
	goto loc_83202128;
loc_83202124:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83202128:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202140;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83202160
	if (ctx.cr0.eq) goto loc_83202160;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x8320215C;
	sub_831DF0D8(ctx, base);
	// b 0x83202164
	goto loc_83202164;
loc_83202160:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83202164:
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x8320217C;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8320219c
	if (ctx.cr0.eq) goto loc_8320219C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x83202198;
	sub_831DF0D8(ctx, base);
	// b 0x832021a0
	goto loc_832021A0;
loc_8320219C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_832021A0:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832021B8;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x832021d8
	if (ctx.cr0.eq) goto loc_832021D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x832021D4;
	sub_831DF0D8(ctx, base);
	// b 0x832021dc
	goto loc_832021DC;
loc_832021D8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_832021DC:
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x832021F4;
	sub_831C58B0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83202214
	if (ctx.cr0.eq) goto loc_83202214;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x831df0d8
	ctx.lr = 0x83202210;
	sub_831DF0D8(ctx, base);
	// b 0x83202218
	goto loc_83202218;
loc_83202214:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83202218:
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,1452(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202230;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8320224c
	if (ctx.cr0.eq) goto loc_8320224C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200130
	ctx.lr = 0x83202248;
	sub_83200130(ctx, base);
	// b 0x83202250
	goto loc_83202250;
loc_8320224C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83202250:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,1452(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202268;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x83202284
	if (ctx.cr0.eq) goto loc_83202284;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83200188
	ctx.lr = 0x83202280;
	sub_83200188(ctx, base);
	// b 0x83202288
	goto loc_83202288;
loc_83202284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83202288:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x831fc7c0
	ctx.lr = 0x83202298;
	sub_831FC7C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x831fc798
	ctx.lr = 0x832022A4;
	sub_831FC798(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r31.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r31,948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 948, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202060) {
	__imp__sub_83202060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832022C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16220
	ctx.r3.s64 = ctx.r11.s64 + -16220;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832022C0) {
	__imp__sub_832022C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832022D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_832022E8:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x832022f8
	if (!ctx.cr6.gt) goto loc_832022F8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83202304
	goto loc_83202304;
loc_832022F8:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_83202304:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83202324
	if (ctx.cr0.eq) goto loc_83202324;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x832022e8
	goto loc_832022E8;
loc_83202324:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832022D0) {
	__imp__sub_832022D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_83202344:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x83202354
	if (!ctx.cr6.gt) goto loc_83202354;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83202360
	goto loc_83202360;
loc_83202354:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_83202360:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x83202380
	if (ctx.cr0.eq) goto loc_83202380;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x83202344
	goto loc_83202344;
loc_83202380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202330) {
	__imp__sub_83202330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202388) {
	__imp__sub_83202388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023A0) {
	__imp__sub_832023A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023B8) {
	__imp__sub_832023B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023C8) {
	__imp__sub_832023C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023D8) {
	__imp__sub_832023D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832023F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832023F0) {
	__imp__sub_832023F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202408) {
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
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83202428;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83202408) {
	__imp__sub_83202408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202440) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83202460;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83202440) {
	__imp__sub_83202440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202478) {
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
	// lwz r31,144(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x83202540
	goto loc_83202540;
loc_83202490:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83202548
	if (!ctx.cr6.gt) goto loc_83202548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832024B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83202548
	if (!ctx.cr0.eq) goto loc_83202548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832024D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83202548
	if (!ctx.cr0.eq) goto loc_83202548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832024EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832024fc
	if (ctx.cr0.eq) goto loc_832024FC;
	// lwz r31,156(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x83202540
	goto loc_83202540;
loc_832024FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83202510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202520
	if (ctx.cr0.eq) goto loc_83202520;
	// lwz r31,152(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x83202540
	goto loc_83202540;
loc_83202520:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83202538
	if (!ctx.cr6.gt) goto loc_83202538;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8320253c
	goto loc_8320253C;
loc_83202538:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8320253C:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83202540:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83202490
	if (!ctx.cr6.eq) goto loc_83202490;
loc_83202548:
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

PPC_WEAK_FUNC(sub_83202478) {
	__imp__sub_83202478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202560) {
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
	// lwz r31,148(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83202638
	if (ctx.cr6.eq) goto loc_83202638;
loc_8320257C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83202634
	if (!ctx.cr6.gt) goto loc_83202634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832025A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83202634
	if (!ctx.cr0.eq) goto loc_83202634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832025BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83202634
	if (!ctx.cr0.eq) goto loc_83202634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832025D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832025e8
	if (ctx.cr0.eq) goto loc_832025E8;
	// lwz r31,156(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x8320262c
	goto loc_8320262C;
loc_832025E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832025FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8320260c
	if (ctx.cr0.eq) goto loc_8320260C;
	// lwz r31,152(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x8320262c
	goto loc_8320262C;
loc_8320260C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x83202624
	if (!ctx.cr6.gt) goto loc_83202624;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83202628
	goto loc_83202628;
loc_83202624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202628:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8320262C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8320257c
	if (!ctx.cr6.eq) goto loc_8320257C;
loc_83202634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83202638:
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

PPC_WEAK_FUNC(sub_83202560) {
	__imp__sub_83202560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x83202658;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r26,r10,-18548
	ctx.r26.s64 = ctx.r10.s64 + -18548;
	// lwz r21,164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 164);
	// addi r25,r9,5664
	ctx.r25.s64 = ctx.r9.s64 + 5664;
	// addi r24,r11,-16376
	ctx.r24.s64 = ctx.r11.s64 + -16376;
loc_8320267C:
	// lwz r28,136(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 136);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r27,8(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x83202764
	goto loc_83202764;
loc_8320268C:
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8320275c
	if (ctx.cr6.eq) goto loc_8320275C;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320275c
	if (!ctx.cr6.eq) goto loc_8320275C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,559
	ctx.r7.s64 = 559;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x832026BC;
	sub_831034D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_832026C8:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x832026e0
	if (!ctx.cr6.gt) goto loc_832026E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832026ec
	goto loc_832026EC;
loc_832026E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_832026EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202754
	if (ctx.cr0.eq) goto loc_83202754;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x831fc948
	ctx.lr = 0x83202728;
	sub_831FC948(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8320273c
	if (!ctx.cr6.eq) goto loc_8320273C;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8320273C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831c59e0
	ctx.lr = 0x83202748;
	sub_831C59E0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832026c8
	goto loc_832026C8;
loc_83202754:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831fc6a8
	ctx.lr = 0x8320275C;
	sub_831FC6A8(ctx, base);
loc_8320275C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r27,8(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_83202764:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8320268c
	if (!ctx.cr6.eq) goto loc_8320268C;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8320267c
	if (!ctx.cr0.eq) goto loc_8320267C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202650) {
	__imp__sub_83202650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202780) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x832027cc
	if (!ctx.cr6.gt) goto loc_832027CC;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202798:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832027ac
	if (!ctx.cr6.lt) goto loc_832027AC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832027b0
	goto loc_832027B0;
loc_832027AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_832027B0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x832027d4
	if (ctx.cr6.eq) goto loc_832027D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x83202798
	if (ctx.cr6.lt) goto loc_83202798;
loc_832027CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832027D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202780) {
	__imp__sub_83202780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832027E0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83202810
	if (!ctx.cr6.lt) goto loc_83202810;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83202814
	goto loc_83202814;
loc_83202810:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83202814:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x831fc910
	ctx.lr = 0x83202824;
	sub_831FC910(ctx, base);
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

PPC_WEAK_FUNC(sub_832027E0) {
	__imp__sub_832027E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202840) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8320286c
	if (ctx.cr6.eq) goto loc_8320286C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83202890
	if (!ctx.cr6.eq) goto loc_83202890;
loc_8320286C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-16376
	ctx.r6.s64 = ctx.r11.s64 + -16376;
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83202890;
	sub_831034D8(ctx, base);
loc_83202890:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x8320289C;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x832028AC;
	sub_831FC9D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_83202840) {
	__imp__sub_83202840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832028C8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-16268
	ctx.r11.s64 = ctx.r11.s64 + -16268;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832028fc
	if (ctx.cr6.eq) goto loc_832028FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x832028FC;
	sub_8320D3D0(ctx, base);
loc_832028FC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83202910
	if (ctx.cr6.eq) goto loc_83202910;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x83202910;
	sub_8320D3D0(ctx, base);
loc_83202910:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83202924
	if (ctx.cr6.eq) goto loc_83202924;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x83202924;
	sub_8320D3D0(ctx, base);
loc_83202924:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83202938
	if (ctx.cr6.eq) goto loc_83202938;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x83202938;
	sub_8320D3D0(ctx, base);
loc_83202938:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8320294c
	if (ctx.cr6.eq) goto loc_8320294C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320d3d0
	ctx.lr = 0x8320294C;
	sub_8320D3D0(ctx, base);
loc_8320294C:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x831fc7e0
	ctx.lr = 0x83202954;
	sub_831FC7E0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,25032
	ctx.r11.s64 = ctx.r11.s64 + 25032;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832028C8) {
	__imp__sub_832028C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83202988;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_832029B0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x832029c0
	if (!ctx.cr6.gt) goto loc_832029C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832029cc
	goto loc_832029CC;
loc_832029C0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_832029CC:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83202a10
	if (ctx.cr0.eq) goto loc_83202A10;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x832029ec
	if (ctx.cr6.eq) goto loc_832029EC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x832029b0
	goto loc_832029B0;
loc_832029EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83202a08
	if (!ctx.cr6.lt) goto loc_83202A08;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83202a0c
	goto loc_83202A0C;
loc_83202A08:
	// bl 0x831fc9d0
	ctx.lr = 0x83202A0C;
	sub_831FC9D0(ctx, base);
loc_83202A0C:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_83202A10:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83202A28:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x83202a38
	if (!ctx.cr6.gt) goto loc_83202A38;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x83202a44
	goto loc_83202A44;
loc_83202A38:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_83202A44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83202a68
	if (ctx.cr0.eq) goto loc_83202A68;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83202a64
	if (ctx.cr6.eq) goto loc_83202A64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x83202a28
	goto loc_83202A28;
loc_83202A64:
	// bl 0x831fc910
	ctx.lr = 0x83202A68;
	sub_831FC910(ctx, base);
loc_83202A68:
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83202A74;
	sub_831FC9D0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202980) {
	__imp__sub_83202980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202A80) {
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
	// b 0x83202aa0
	goto loc_83202AA0;
loc_83202A98:
	// bl 0x832027e0
	ctx.lr = 0x83202A9C;
	sub_832027E0(ctx, base);
	// bl 0x831fd160
	ctx.lr = 0x83202AA0;
	sub_831FD160(ctx, base);
loc_83202AA0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83202a98
	if (!ctx.cr6.eq) goto loc_83202A98;
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

PPC_WEAK_FUNC(sub_83202A80) {
	__imp__sub_83202A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83202AD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202780
	ctx.lr = 0x83202AF4;
	sub_83202780(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83202b0c
	if (!ctx.cr0.eq) goto loc_83202B0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831fc9d0
	ctx.lr = 0x83202B08;
	sub_831FC9D0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_83202B0C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831fd188
	ctx.lr = 0x83202B1C;
	sub_831FD188(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202AC8) {
	__imp__sub_83202AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B28) {
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
	// bl 0x83202060
	ctx.lr = 0x83202B40;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16184
	ctx.r11.s64 = ctx.r11.s64 + -16184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83202B28) {
	__imp__sub_83202B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202B70) {
	__imp__sub_83202B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202B80) {
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
	// bl 0x83202060
	ctx.lr = 0x83202B98;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16128
	ctx.r11.s64 = ctx.r11.s64 + -16128;
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

PPC_WEAK_FUNC(sub_83202B80) {
	__imp__sub_83202B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16080
	ctx.r3.s64 = ctx.r11.s64 + -16080;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202BC0) {
	__imp__sub_83202BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83202BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83202060
	ctx.lr = 0x83202BE8;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-16072
	ctx.r11.s64 = ctx.r11.s64 + -16072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lwz r28,1452(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202C20;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x83202c40
	if (ctx.cr0.eq) goto loc_83202C40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83202060
	ctx.lr = 0x83202C38;
	sub_83202060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83202c44
	goto loc_83202C44;
loc_83202C40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83202C44:
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202840
	ctx.lr = 0x83202C50;
	sub_83202840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202BD0) {
	__imp__sub_83202BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-16020
	ctx.r3.s64 = ctx.r11.s64 + -16020;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202C60) {
	__imp__sub_83202C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202C70) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83202060
	ctx.lr = 0x83202C94;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-16008
	ctx.r11.s64 = ctx.r11.s64 + -16008;
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

PPC_WEAK_FUNC(sub_83202C70) {
	__imp__sub_83202C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15960
	ctx.r3.s64 = ctx.r11.s64 + -15960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202CC0) {
	__imp__sub_83202CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202CD0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83202060
	ctx.lr = 0x83202CF4;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-15952
	ctx.r11.s64 = ctx.r11.s64 + -15952;
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

PPC_WEAK_FUNC(sub_83202CD0) {
	__imp__sub_83202CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D20) {
	__imp__sub_83202D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15844
	ctx.r3.s64 = ctx.r11.s64 + -15844;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D30) {
	__imp__sub_83202D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D40) {
	__imp__sub_83202D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15716
	ctx.r3.s64 = ctx.r11.s64 + -15716;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D50) {
	__imp__sub_83202D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15656
	ctx.r3.s64 = ctx.r11.s64 + -15656;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202D60) {
	__imp__sub_83202D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202D70) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83202980
	ctx.lr = 0x83202D90;
	sub_83202980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202840
	ctx.lr = 0x83202D9C;
	sub_83202840(ctx, base);
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

PPC_WEAK_FUNC(sub_83202D70) {
	__imp__sub_83202D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202DB8) {
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
	// bl 0x832028c8
	ctx.lr = 0x83202DD8;
	sub_832028C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83202df4
	if (ctx.cr0.eq) goto loc_83202DF4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83202df4
	if (ctx.cr6.eq) goto loc_83202DF4;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x831c59e0
	ctx.lr = 0x83202DF4;
	sub_831C59E0(ctx, base);
loc_83202DF4:
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

PPC_WEAK_FUNC(sub_83202DB8) {
	__imp__sub_83202DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83202E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83202060
	ctx.lr = 0x83202E34;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r27,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r27.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r11,r11,-15644
	ctx.r11.s64 = ctx.r11.s64 + -15644;
	// stb r28,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r28.u8);
	// li r4,144
	ctx.r4.s64 = 144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r28,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r28.u8);
	// lwz r27,1452(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202E64;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83202e94
	if (ctx.cr0.eq) goto loc_83202E94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202060
	ctx.lr = 0x83202E7C;
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-15892
	ctx.r10.s64 = ctx.r10.s64 + -15892;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83202e98
	goto loc_83202E98;
loc_83202E94:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83202E98:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202EAC;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83202edc
	if (ctx.cr0.eq) goto loc_83202EDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202060
	ctx.lr = 0x83202EC4;
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-15832
	ctx.r10.s64 = ctx.r10.s64 + -15832;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83202ee0
	goto loc_83202EE0;
loc_83202EDC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83202EE0:
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83202840
	ctx.lr = 0x83202EF0;
	sub_83202840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,125
	ctx.r3.s64 = 125;
	// bl 0x831fede8
	ctx.lr = 0x83202EFC;
	sub_831FEDE8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc6d8
	ctx.lr = 0x83202F20;
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202E10) {
	__imp__sub_83202E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15596
	ctx.r3.s64 = ctx.r11.s64 + -15596;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_83202F30) {
	__imp__sub_83202F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83202F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83202F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83202060
	ctx.lr = 0x83202F64;
	sub_83202060(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r11,r11,-16072
	ctx.r11.s64 = ctx.r11.s64 + -16072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// lwz r30,1452(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202F9C;
	sub_831C58B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x83202fbc
	if (ctx.cr0.eq) goto loc_83202FBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83202060
	ctx.lr = 0x83202FB4;
	sub_83202060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83202fc0
	goto loc_83202FC0;
loc_83202FBC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83202FC0:
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83202840
	ctx.lr = 0x83202FCC;
	sub_83202840(ctx, base);
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831fc6d8
	ctx.lr = 0x83202FDC;
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r27,1452(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83202FF0;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x83203020
	if (ctx.cr0.eq) goto loc_83203020;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202060
	ctx.lr = 0x83203008;
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-15764
	ctx.r10.s64 = ctx.r10.s64 + -15764;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x83203024
	goto loc_83203024;
loc_83203020:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83203024:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83202F40) {
	__imp__sub_83202F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83203040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83202bd0
	ctx.lr = 0x8320305C;
	sub_83202BD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,-15584
	ctx.r11.s64 = ctx.r11.s64 + -15584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x831fc6d8
	ctx.lr = 0x83203078;
	sub_831FC6D8(ctx, base);
	// stw r31,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r28,1452(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831c58b0
	ctx.lr = 0x83203090;
	sub_831C58B0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x832030c0
	if (ctx.cr0.eq) goto loc_832030C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83202060
	ctx.lr = 0x832030A8;
	sub_83202060(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-15704
	ctx.r10.s64 = ctx.r10.s64 + -15704;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x832030c4
	goto loc_832030C4;
loc_832030C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832030C4:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_83203038) {
	__imp__sub_83203038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832030D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,-15532
	ctx.r3.s64 = ctx.r11.s64 + -15532;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_832030D8) {
	__imp__sub_832030D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832030E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832030F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r11,-18548
	ctx.r28.s64 = ctx.r11.s64 + -18548;
	// addi r27,r10,-5824
	ctx.r27.s64 = ctx.r10.s64 + -5824;
	// blt cr6,0x8320311c
	if (ctx.cr6.lt) goto loc_8320311C;
	// cmpwi cr6,r31,136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x83203138
	if (ctx.cr6.lt) goto loc_83203138;
loc_8320311C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5876
	ctx.r5.s64 = ctx.r11.s64 + -5876;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83203138;
	sub_831034D8(ctx, base);
loc_83203138:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 * 36;
	// addi r31,r11,4992
	ctx.r31.s64 = ctx.r11.s64 + 4992;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83203170
	if (!ctx.cr6.eq) goto loc_83203170;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5888
	ctx.r5.s64 = ctx.r11.s64 + -5888;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,71
	ctx.r7.s64 = 71;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83203170;
	sub_831034D8(ctx, base);
loc_83203170:
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x83203180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_832030E8) {
	__imp__sub_832030E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203188) {
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
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// addi r31,r11,-48
	ctx.r31.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x832031bc
	if (!ctx.cr6.gt) goto loc_832031BC;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x832031b8
	if (!ctx.cr6.eq) goto loc_832031B8;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x832031f0
	goto loc_832031F0;
loc_832031B8:
	// addi r31,r11,-116
	ctx.r31.s64 = ctx.r11.s64 + -116;
loc_832031BC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832031cc
	if (ctx.cr6.lt) goto loc_832031CC;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// ble cr6,0x832031f0
	if (!ctx.cr6.gt) goto loc_832031F0;
loc_832031CC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5824
	ctx.r6.s64 = ctx.r11.s64 + -5824;
	// addi r5,r10,-5740
	ctx.r5.s64 = ctx.r10.s64 + -5740;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x832031F0;
	sub_831034D8(ctx, base);
loc_832031F0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15456
	ctx.r11.s64 = ctx.r11.s64 + -15456;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83203188) {
	__imp__sub_83203188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203218) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83203260
	if (!ctx.cr6.eq) goto loc_83203260;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,25064
	ctx.r6.s64 = ctx.r11.s64 + 25064;
	// addi r5,r10,25144
	ctx.r5.s64 = ctx.r10.s64 + 25144;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83203260;
	sub_831034D8(ctx, base);
loc_83203260:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// bl 0x831ff250
	ctx.lr = 0x83203278;
	sub_831FF250(ctx, base);
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

PPC_WEAK_FUNC(sub_83203218) {
	__imp__sub_83203218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203290) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832032b4
	if (ctx.cr6.lt) goto loc_832032B4;
	// cmpwi cr6,r31,136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x832032d8
	if (ctx.cr6.lt) goto loc_832032D8;
loc_832032B4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = ctx.r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5226
	ctx.r7.s64 = 5226;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x832032D8;
	sub_831034D8(ctx, base);
loc_832032D8:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,4992
	ctx.r11.s64 = ctx.r11.s64 + 4992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82ca2c60
	ctx.lr = 0x832032F4;
	sub_82CA2C60(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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

PPC_WEAK_FUNC(sub_83203290) {
	__imp__sub_83203290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203310) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x83203334
	if (ctx.cr6.lt) goto loc_83203334;
	// cmpwi cr6,r31,136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x83203358
	if (ctx.cr6.lt) goto loc_83203358;
loc_83203334:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = ctx.r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5239
	ctx.r7.s64 = 5239;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83203358;
	sub_831034D8(ctx, base);
loc_83203358:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,4992
	ctx.r11.s64 = ctx.r11.s64 + 4992;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83203310) {
	__imp__sub_83203310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_83203380) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x832033a4
	if (ctx.cr6.lt) goto loc_832033A4;
	// cmpwi cr6,r31,136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x832033c8
	if (ctx.cr6.lt) goto loc_832033C8;
loc_832033A4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = ctx.r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5319
	ctx.r7.s64 = 5319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x832033C8;
	sub_831034D8(ctx, base);
loc_832033C8:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,4992
	ctx.r11.s64 = ctx.r11.s64 + 4992;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_83203380) {
	__imp__sub_83203380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_832033F0) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x83203414
	if (ctx.cr6.lt) goto loc_83203414;
	// cmpwi cr6,r31,136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 136, ctx.xer);
	// blt cr6,0x83203438
	if (ctx.cr6.lt) goto loc_83203438;
loc_83203414:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-5664
	ctx.r6.s64 = ctx.r11.s64 + -5664;
	// addi r5,r10,-5720
	ctx.r5.s64 = ctx.r10.s64 + -5720;
	// addi r4,r9,-18548
	ctx.r4.s64 = ctx.r9.s64 + -18548;
	// li r7,5351
	ctx.r7.s64 = 5351;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831034d8
	ctx.lr = 0x83203438;
	sub_831034D8(ctx, base);
loc_83203438:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// addi r11,r11,4992
	ctx.r11.s64 = ctx.r11.s64 + 4992;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_832033F0) {
	__imp__sub_832033F0(ctx, base);
}

