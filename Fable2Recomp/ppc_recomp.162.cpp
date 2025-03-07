#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BCE250"))) PPC_WEAK_FUNC(sub_82BCE250);
PPC_FUNC_IMPL(__imp__sub_82BCE250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BCE258;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE270;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce2a0
	if (ctx.cr6.eq) goto loc_82BCE2A0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bce2a8
	goto loc_82BCE2A8;
loc_82BCE2A0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE2A8;
	sub_82BCD8A8(ctx, base);
loc_82BCE2A8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82bce2bc
	if (ctx.cr6.eq) goto loc_82BCE2BC;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// bne cr6,0x82bce2c4
	if (!ctx.cr6.eq) goto loc_82BCE2C4;
loc_82BCE2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcdc20
	ctx.lr = 0x82BCE2C4;
	sub_82BCDC20(ctx, base);
loc_82BCE2C4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BCE2C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bgt cr6,0x82bce5a0
	if (ctx.cr6.gt) goto loc_82BCE5A0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,-7440
	ctx.r12.s64 = ctx.r12.s64 + -7440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BCE5F4;
	case 1:
		goto loc_82BCE5A0;
	case 2:
		goto loc_82BCE5A0;
	case 3:
		goto loc_82BCE5A0;
	case 4:
		goto loc_82BCE5A0;
	case 5:
		goto loc_82BCE5A0;
	case 6:
		goto loc_82BCE5A0;
	case 7:
		goto loc_82BCE5A0;
	case 8:
		goto loc_82BCE5A0;
	case 9:
		goto loc_82BCE5A0;
	case 10:
		goto loc_82BCE5A0;
	case 11:
		goto loc_82BCE578;
	case 12:
		goto loc_82BCE5A0;
	case 13:
		goto loc_82BCE5A0;
	case 14:
		goto loc_82BCE578;
	case 15:
		goto loc_82BCE5A0;
	case 16:
		goto loc_82BCE5A0;
	case 17:
		goto loc_82BCE5A0;
	case 18:
		goto loc_82BCE5A0;
	case 19:
		goto loc_82BCE5A0;
	case 20:
		goto loc_82BCE5A0;
	case 21:
		goto loc_82BCE5A0;
	case 22:
		goto loc_82BCE5A0;
	case 23:
		goto loc_82BCE5A0;
	case 24:
		goto loc_82BCE5A0;
	case 25:
		goto loc_82BCE5A0;
	case 26:
		goto loc_82BCE5A0;
	case 27:
		goto loc_82BCE5A0;
	case 28:
		goto loc_82BCE5A0;
	case 29:
		goto loc_82BCE5A0;
	case 30:
		goto loc_82BCE5A0;
	case 31:
		goto loc_82BCE5A0;
	case 32:
		goto loc_82BCE5A0;
	case 33:
		goto loc_82BCE5A0;
	case 34:
		goto loc_82BCE5A0;
	case 35:
		goto loc_82BCE5A0;
	case 36:
		goto loc_82BCE5A0;
	case 37:
		goto loc_82BCE5A0;
	case 38:
		goto loc_82BCE5A0;
	case 39:
		goto loc_82BCE5A0;
	case 40:
		goto loc_82BCE5A0;
	case 41:
		goto loc_82BCE5A0;
	case 42:
		goto loc_82BCE5A0;
	case 43:
		goto loc_82BCE5A0;
	case 44:
		goto loc_82BCE5A0;
	case 45:
		goto loc_82BCE5A0;
	case 46:
		goto loc_82BCE5A0;
	case 47:
		goto loc_82BCE5A0;
	case 48:
		goto loc_82BCE5A0;
	case 49:
		goto loc_82BCE5A0;
	case 50:
		goto loc_82BCE5A0;
	case 51:
		goto loc_82BCE5A0;
	case 52:
		goto loc_82BCE5A0;
	case 53:
		goto loc_82BCE5A0;
	case 54:
		goto loc_82BCE5A0;
	case 55:
		goto loc_82BCE5A0;
	case 56:
		goto loc_82BCE5A0;
	case 57:
		goto loc_82BCE5A0;
	case 58:
		goto loc_82BCE5A0;
	case 59:
		goto loc_82BCE5A0;
	case 60:
		goto loc_82BCE5A0;
	case 61:
		goto loc_82BCE5A0;
	case 62:
		goto loc_82BCE5A0;
	case 63:
		goto loc_82BCE5A0;
	case 64:
		goto loc_82BCE5A0;
	case 65:
		goto loc_82BCE5A0;
	case 66:
		goto loc_82BCE5A0;
	case 67:
		goto loc_82BCE5A0;
	case 68:
		goto loc_82BCE5A0;
	case 69:
		goto loc_82BCE5A0;
	case 70:
		goto loc_82BCE5A0;
	case 71:
		goto loc_82BCE5A0;
	case 72:
		goto loc_82BCE5A0;
	case 73:
		goto loc_82BCE5A0;
	case 74:
		goto loc_82BCE5A0;
	case 75:
		goto loc_82BCE5A0;
	case 76:
		goto loc_82BCE5A0;
	case 77:
		goto loc_82BCE5A0;
	case 78:
		goto loc_82BCE5A0;
	case 79:
		goto loc_82BCE5A0;
	case 80:
		goto loc_82BCE5A0;
	case 81:
		goto loc_82BCE5A0;
	case 82:
		goto loc_82BCE5A0;
	case 83:
		goto loc_82BCE5A0;
	case 84:
		goto loc_82BCE5A0;
	case 85:
		goto loc_82BCE5A0;
	case 86:
		goto loc_82BCE5A0;
	case 87:
		goto loc_82BCE5A0;
	case 88:
		goto loc_82BCE5A0;
	case 89:
		goto loc_82BCE5A0;
	case 90:
		goto loc_82BCE5A0;
	case 91:
		goto loc_82BCE5A0;
	case 92:
		goto loc_82BCE46C;
	case 93:
		goto loc_82BCE5A0;
	case 94:
		goto loc_82BCE52C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-6668(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6668);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6792(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6792);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6792(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6792);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-7060(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7060);
	// lwz r21,-6752(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6752);
	// lwz r21,-6868(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6868);
loc_82BCE46C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce178
	ctx.lr = 0x82BCE474;
	sub_82BCE178(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82bce2c8
	if (!ctx.cr6.eq) goto loc_82BCE2C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE488;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce4b8
	if (ctx.cr6.eq) goto loc_82BCE4B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bce4c0
	goto loc_82BCE4C0;
loc_82BCE4B8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE4C0;
	sub_82BCD8A8(ctx, base);
loc_82BCE4C0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82bce2c8
	if (!ctx.cr6.eq) goto loc_82BCE2C8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCE4E0;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,12996
	ctx.r7.s64 = ctx.r11.s64 + 12996;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCE500;
	sub_82BC8870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cb7d90
	ctx.lr = 0x82BCE508;
	sub_82CB7D90(ctx, base);
	// lhz r9,182(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 182);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,91
	ctx.r5.s64 = 91;
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bce66c
	if (ctx.cr6.eq) goto loc_82BCE66C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12860
	ctx.r4.s64 = ctx.r11.s64 + 12860;
	// b 0x82bce674
	goto loc_82BCE674;
loc_82BCE52C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce178
	ctx.lr = 0x82BCE534;
	sub_82BCE178(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82bce2c8
	if (!ctx.cr6.eq) goto loc_82BCE2C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE548;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce69c
	if (ctx.cr6.eq) goto loc_82BCE69C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bce6a4
	goto loc_82BCE6A4;
loc_82BCE578:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE584;
	sub_82BCD9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcdc20
	ctx.lr = 0x82BCE58C;
	sub_82BCDC20(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bce2c8
	if (!ctx.cr6.eq) goto loc_82BCE2C8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x82bce2c8
	goto loc_82BCE2C8;
loc_82BCE5A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bce5b0
	if (ctx.cr6.eq) goto loc_82BCE5B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE5B0;
	sub_82BCD9B8(ctx, base);
loc_82BCE5B0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce5e4
	if (ctx.cr6.eq) goto loc_82BCE5E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bce2c8
	goto loc_82BCE2C8;
loc_82BCE5E4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE5EC;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bce2c8
	goto loc_82BCE2C8;
loc_82BCE5F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bce608
	if (ctx.cr6.eq) goto loc_82BCE608;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,12948
	ctx.r30.s64 = ctx.r11.s64 + 12948;
	// b 0x82bce610
	goto loc_82BCE610;
loc_82BCE608:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,12972
	ctx.r30.s64 = ctx.r11.s64 + 12972;
loc_82BCE610:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCE624;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCE640;
	sub_82BC8870(ctx, base);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,1616
	ctx.r8.s64 = ctx.r10.s64 + 1616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,120(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// bl 0x82bc8870
	ctx.lr = 0x82BCE660;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCE66C;
	sub_82BCCB88(ctx, base);
loc_82BCE66C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
loc_82BCE674:
	// bl 0x82bc8870
	ctx.lr = 0x82BCE678;
	sub_82BC8870(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,12876
	ctx.r4.s64 = ctx.r11.s64 + 12876;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bc8870
	ctx.lr = 0x82BCE690;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCE69C;
	sub_82BCCB88(ctx, base);
loc_82BCE69C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE6A4;
	sub_82BCD8A8(ctx, base);
loc_82BCE6A4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bce6dc
	if (ctx.cr6.eq) goto loc_82BCE6DC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82bcdba8
	ctx.lr = 0x82BCE6D8;
	sub_82BCDBA8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82BCE6DC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BCE6E4"))) PPC_WEAK_FUNC(sub_82BCE6E4);
PPC_FUNC_IMPL(__imp__sub_82BCE6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCE6E8"))) PPC_WEAK_FUNC(sub_82BCE6E8);
PPC_FUNC_IMPL(__imp__sub_82BCE6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BCE6F0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCE708;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce738
	if (ctx.cr6.eq) goto loc_82BCE738;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bce740
	goto loc_82BCE740;
loc_82BCE738:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE740;
	sub_82BCD8A8(ctx, base);
loc_82BCE740:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82bcecb8
	if (ctx.cr6.eq) goto loc_82BCECB8;
loc_82BCE74C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bgt cr6,0x82bceb60
	if (ctx.cr6.gt) goto loc_82BCEB60;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,-6284
	ctx.r12.s64 = ctx.r12.s64 + -6284;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BCECF4;
	case 1:
		goto loc_82BCEB60;
	case 2:
		goto loc_82BCEB60;
	case 3:
		goto loc_82BCEB60;
	case 4:
		goto loc_82BCEB60;
	case 5:
		goto loc_82BCEB60;
	case 6:
		goto loc_82BCEB60;
	case 7:
		goto loc_82BCEB60;
	case 8:
		goto loc_82BCEB60;
	case 9:
		goto loc_82BCEB60;
	case 10:
		goto loc_82BCEB60;
	case 11:
		goto loc_82BCED54;
	case 12:
		goto loc_82BCEB60;
	case 13:
		goto loc_82BCEB60;
	case 14:
		goto loc_82BCED54;
	case 15:
		goto loc_82BCEB60;
	case 16:
		goto loc_82BCEB60;
	case 17:
		goto loc_82BCEB60;
	case 18:
		goto loc_82BCEB60;
	case 19:
		goto loc_82BCEB60;
	case 20:
		goto loc_82BCEB60;
	case 21:
		goto loc_82BCEB60;
	case 22:
		goto loc_82BCEB60;
	case 23:
		goto loc_82BCEB60;
	case 24:
		goto loc_82BCEB60;
	case 25:
		goto loc_82BCEB60;
	case 26:
		goto loc_82BCEB60;
	case 27:
		goto loc_82BCEB60;
	case 28:
		goto loc_82BCEB60;
	case 29:
		goto loc_82BCEB60;
	case 30:
		goto loc_82BCEB60;
	case 31:
		goto loc_82BCEB60;
	case 32:
		goto loc_82BCEB60;
	case 33:
		goto loc_82BCEB60;
	case 34:
		goto loc_82BCEB60;
	case 35:
		goto loc_82BCEB60;
	case 36:
		goto loc_82BCEB60;
	case 37:
		goto loc_82BCEB60;
	case 38:
		goto loc_82BCEB60;
	case 39:
		goto loc_82BCEB60;
	case 40:
		goto loc_82BCEB60;
	case 41:
		goto loc_82BCEB60;
	case 42:
		goto loc_82BCEB60;
	case 43:
		goto loc_82BCEB60;
	case 44:
		goto loc_82BCEB60;
	case 45:
		goto loc_82BCEB60;
	case 46:
		goto loc_82BCEB60;
	case 47:
		goto loc_82BCEB60;
	case 48:
		goto loc_82BCEB60;
	case 49:
		goto loc_82BCEB60;
	case 50:
		goto loc_82BCEB60;
	case 51:
		goto loc_82BCEB60;
	case 52:
		goto loc_82BCEB60;
	case 53:
		goto loc_82BCEB60;
	case 54:
		goto loc_82BCEB60;
	case 55:
		goto loc_82BCEB60;
	case 56:
		goto loc_82BCEB60;
	case 57:
		goto loc_82BCEB60;
	case 58:
		goto loc_82BCEB60;
	case 59:
		goto loc_82BCEB60;
	case 60:
		goto loc_82BCEB60;
	case 61:
		goto loc_82BCEB60;
	case 62:
		goto loc_82BCEB60;
	case 63:
		goto loc_82BCEB60;
	case 64:
		goto loc_82BCEB60;
	case 65:
		goto loc_82BCEB60;
	case 66:
		goto loc_82BCEB60;
	case 67:
		goto loc_82BCEB60;
	case 68:
		goto loc_82BCEB60;
	case 69:
		goto loc_82BCEB60;
	case 70:
		goto loc_82BCEB60;
	case 71:
		goto loc_82BCEB60;
	case 72:
		goto loc_82BCEB60;
	case 73:
		goto loc_82BCEB60;
	case 74:
		goto loc_82BCEB60;
	case 75:
		goto loc_82BCEB60;
	case 76:
		goto loc_82BCEB60;
	case 77:
		goto loc_82BCEB60;
	case 78:
		goto loc_82BCEB60;
	case 79:
		goto loc_82BCEB60;
	case 80:
		goto loc_82BCEB60;
	case 81:
		goto loc_82BCEB60;
	case 82:
		goto loc_82BCEB60;
	case 83:
		goto loc_82BCEB60;
	case 84:
		goto loc_82BCEB60;
	case 85:
		goto loc_82BCEB60;
	case 86:
		goto loc_82BCEB60;
	case 87:
		goto loc_82BCEB60;
	case 88:
		goto loc_82BCEB60;
	case 89:
		goto loc_82BCEB60;
	case 90:
		goto loc_82BCEB60;
	case 91:
		goto loc_82BCEB60;
	case 92:
		goto loc_82BCEB60;
	case 93:
		goto loc_82BCE8EC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4876(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4876);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-4780(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4780);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-4780(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4780);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5280(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5280);
	// lwz r21,-5908(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5908);
loc_82BCE8EC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bce91c
	if (ctx.cr6.eq) goto loc_82BCE91C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bce924
	goto loc_82BCE924;
loc_82BCE91C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCE924;
	sub_82BCD8A8(ctx, base);
loc_82BCE924:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x82bcebb0
	if (ctx.cr6.gt) goto loc_82BCEBB0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,-5812
	ctx.r12.s64 = ctx.r12.s64 + -5812;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BCECAC;
	case 1:
		goto loc_82BCEBB0;
	case 2:
		goto loc_82BCEBB0;
	case 3:
		goto loc_82BCEBB0;
	case 4:
		goto loc_82BCEBB0;
	case 5:
		goto loc_82BCEBB0;
	case 6:
		goto loc_82BCEBB0;
	case 7:
		goto loc_82BCEBB0;
	case 8:
		goto loc_82BCEBB0;
	case 9:
		goto loc_82BCEBB0;
	case 10:
		goto loc_82BCEBB0;
	case 11:
		goto loc_82BCEB98;
	case 12:
		goto loc_82BCEBB0;
	case 13:
		goto loc_82BCEBB0;
	case 14:
		goto loc_82BCEB98;
	case 15:
		goto loc_82BCEBB0;
	case 16:
		goto loc_82BCEBB0;
	case 17:
		goto loc_82BCEBB0;
	case 18:
		goto loc_82BCEBB0;
	case 19:
		goto loc_82BCEBB0;
	case 20:
		goto loc_82BCEBB0;
	case 21:
		goto loc_82BCEBB0;
	case 22:
		goto loc_82BCEBB0;
	case 23:
		goto loc_82BCEBB0;
	case 24:
		goto loc_82BCEBB0;
	case 25:
		goto loc_82BCEBB0;
	case 26:
		goto loc_82BCEBB0;
	case 27:
		goto loc_82BCEBB0;
	case 28:
		goto loc_82BCEBB0;
	case 29:
		goto loc_82BCEBB0;
	case 30:
		goto loc_82BCEBB0;
	case 31:
		goto loc_82BCEBB0;
	case 32:
		goto loc_82BCEBB0;
	case 33:
		goto loc_82BCEBB0;
	case 34:
		goto loc_82BCEBB0;
	case 35:
		goto loc_82BCEBB0;
	case 36:
		goto loc_82BCEBB0;
	case 37:
		goto loc_82BCEBB0;
	case 38:
		goto loc_82BCEBB0;
	case 39:
		goto loc_82BCEBB0;
	case 40:
		goto loc_82BCEBB0;
	case 41:
		goto loc_82BCEBB0;
	case 42:
		goto loc_82BCEBB0;
	case 43:
		goto loc_82BCEBB0;
	case 44:
		goto loc_82BCEBB0;
	case 45:
		goto loc_82BCEBB0;
	case 46:
		goto loc_82BCEBB0;
	case 47:
		goto loc_82BCEBB0;
	case 48:
		goto loc_82BCEBB0;
	case 49:
		goto loc_82BCEBB0;
	case 50:
		goto loc_82BCEBB0;
	case 51:
		goto loc_82BCEBB0;
	case 52:
		goto loc_82BCEBB0;
	case 53:
		goto loc_82BCEBB0;
	case 54:
		goto loc_82BCEBB0;
	case 55:
		goto loc_82BCEBB0;
	case 56:
		goto loc_82BCEBB0;
	case 57:
		goto loc_82BCEBB0;
	case 58:
		goto loc_82BCEBB0;
	case 59:
		goto loc_82BCEBB0;
	case 60:
		goto loc_82BCEBB0;
	case 61:
		goto loc_82BCEBB0;
	case 62:
		goto loc_82BCEBB0;
	case 63:
		goto loc_82BCEBB0;
	case 64:
		goto loc_82BCEBB0;
	case 65:
		goto loc_82BCEBB0;
	case 66:
		goto loc_82BCEBB0;
	case 67:
		goto loc_82BCEBB0;
	case 68:
		goto loc_82BCEBB0;
	case 69:
		goto loc_82BCEBB0;
	case 70:
		goto loc_82BCEBB0;
	case 71:
		goto loc_82BCEBB0;
	case 72:
		goto loc_82BCEBB0;
	case 73:
		goto loc_82BCEBB0;
	case 74:
		goto loc_82BCEBB0;
	case 75:
		goto loc_82BCEBB0;
	case 76:
		goto loc_82BCEBB0;
	case 77:
		goto loc_82BCEBB0;
	case 78:
		goto loc_82BCEBB0;
	case 79:
		goto loc_82BCEBB0;
	case 80:
		goto loc_82BCEBB0;
	case 81:
		goto loc_82BCEBB0;
	case 82:
		goto loc_82BCEBB0;
	case 83:
		goto loc_82BCEBB0;
	case 84:
		goto loc_82BCEBB0;
	case 85:
		goto loc_82BCEBB0;
	case 86:
		goto loc_82BCEBB0;
	case 87:
		goto loc_82BCEBB0;
	case 88:
		goto loc_82BCEBB0;
	case 89:
		goto loc_82BCEBB0;
	case 90:
		goto loc_82BCEBB0;
	case 91:
		goto loc_82BCEBB0;
	case 92:
		goto loc_82BCEBB0;
	case 93:
		goto loc_82BCEBB0;
	case 94:
		goto loc_82BCEBB0;
	case 95:
		goto loc_82BCEBB0;
	case 96:
		goto loc_82BCEBB0;
	case 97:
		goto loc_82BCEBB0;
	case 98:
		goto loc_82BCEB2C;
	case 99:
		goto loc_82BCEB34;
	case 100:
		goto loc_82BCEBB0;
	case 101:
		goto loc_82BCEBB0;
	case 102:
		goto loc_82BCEBB0;
	case 103:
		goto loc_82BCEB3C;
	case 104:
		goto loc_82BCEBB0;
	case 105:
		goto loc_82BCEBB0;
	case 106:
		goto loc_82BCEBB0;
	case 107:
		goto loc_82BCEBB0;
	case 108:
		goto loc_82BCEBB0;
	case 109:
		goto loc_82BCEBB0;
	case 110:
		goto loc_82BCEBB0;
	case 111:
		goto loc_82BCEB44;
	case 112:
		goto loc_82BCEBB0;
	case 113:
		goto loc_82BCEBB0;
	case 114:
		goto loc_82BCEBB0;
	case 115:
		goto loc_82BCEB4C;
	case 116:
		goto loc_82BCEBB0;
	case 117:
		goto loc_82BCEB54;
	case 118:
		goto loc_82BCEBB0;
	case 119:
		goto loc_82BCEB5C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4948(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4948);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5224(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5224);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5224(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5224);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5332(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5332);
	// lwz r21,-5324(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5324);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5316(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5316);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5308(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5308);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5300(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5300);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5292(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5292);
	// lwz r21,-5200(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5200);
	// lwz r21,-5284(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5284);
loc_82BCEB2C:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB34:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB3C:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB44:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB4C:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB54:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82bceb60
	goto loc_82BCEB60;
loc_82BCEB5C:
	// li r4,11
	ctx.r4.s64 = 11;
loc_82BCEB60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCEB68;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bceca0
	if (ctx.cr6.eq) goto loc_82BCECA0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bceca8
	goto loc_82BCECA8;
loc_82BCEB98:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCEBA4;
	sub_82BCD9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcdc20
	ctx.lr = 0x82BCEBAC;
	sub_82BCDC20(ctx, base);
	// b 0x82bcecac
	goto loc_82BCECAC;
loc_82BCEBB0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82cb7d90
	ctx.lr = 0x82BCEBB8;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bcec08
	if (!ctx.cr6.eq) goto loc_82BCEC08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCEBD8;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bceca0
	if (ctx.cr6.eq) goto loc_82BCECA0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bceca8
	goto loc_82BCECA8;
loc_82BCEC08:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BCEC10:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-48
	ctx.r29.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82bcec54
	if (ctx.cr6.eq) goto loc_82BCEC54;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcec5c
	goto loc_82BCEC5C;
loc_82BCEC54:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCEC5C;
	sub_82BCD8A8(ctx, base);
loc_82BCEC5C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bge cr6,0x82bcec88
	if (!ctx.cr6.lt) goto loc_82BCEC88;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82cb7d90
	ctx.lr = 0x82BCEC74;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bcec10
	if (!ctx.cr6.eq) goto loc_82BCEC10;
loc_82BCEC88:
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// bgt cr6,0x82bcedc0
	if (ctx.cr6.gt) goto loc_82BCEDC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCEC9C;
	sub_82BCD9B8(ctx, base);
	// b 0x82bcecac
	goto loc_82BCECAC;
loc_82BCECA0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCECA8;
	sub_82BCD8A8(ctx, base);
loc_82BCECA8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82BCECAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82bce74c
	if (!ctx.cr6.eq) goto loc_82BCE74C;
loc_82BCECB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCECC4;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcee2c
	if (ctx.cr6.eq) goto loc_82BCEE2C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcee34
	goto loc_82BCEE34;
loc_82BCECF4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCED08;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13032
	ctx.r7.s64 = ctx.r11.s64 + 13032;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCED28;
	sub_82BC8870(ctx, base);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r7,r9,1616
	ctx.r7.s64 = ctx.r9.s64 + 1616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r8,12876
	ctx.r4.s64 = ctx.r8.s64 + 12876;
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// bl 0x82bc8870
	ctx.lr = 0x82BCED48;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCED54;
	sub_82BCCB88(ctx, base);
loc_82BCED54:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCED68;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13032
	ctx.r7.s64 = ctx.r11.s64 + 13032;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCED88;
	sub_82BC8870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCED98;
	sub_82BCD9B8(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82bc8870
	ctx.lr = 0x82BCEDB4;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCEDC0;
	sub_82BCCB88(ctx, base);
loc_82BCEDC0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCEDD4;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13052
	ctx.r7.s64 = ctx.r11.s64 + 13052;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCEDF4;
	sub_82BC8870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCEE04;
	sub_82BCD9B8(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82bc8870
	ctx.lr = 0x82BCEE20;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCEE2C;
	sub_82BCCB88(ctx, base);
loc_82BCEE2C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCEE34;
	sub_82BCD8A8(ctx, base);
loc_82BCEE34:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82bcdba8
	ctx.lr = 0x82BCEE54;
	sub_82BCDBA8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BCEE60"))) PPC_WEAK_FUNC(sub_82BCEE60);
PPC_FUNC_IMPL(__imp__sub_82BCEE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BCEE68;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BCEE78:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82BCEE80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x82bcf1d4
	if (ctx.cr6.gt) goto loc_82BCF1D4;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,-4440
	ctx.r12.s64 = ctx.r12.s64 + -4440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BCF688;
	case 1:
		goto loc_82BCF1D4;
	case 2:
		goto loc_82BCF1D4;
	case 3:
		goto loc_82BCF1D4;
	case 4:
		goto loc_82BCF1D4;
	case 5:
		goto loc_82BCF1D4;
	case 6:
		goto loc_82BCF1D4;
	case 7:
		goto loc_82BCF1D4;
	case 8:
		goto loc_82BCF1D4;
	case 9:
		goto loc_82BCF1D4;
	case 10:
		goto loc_82BCF1D4;
	case 11:
		goto loc_82BCF0A8;
	case 12:
		goto loc_82BCF1D4;
	case 13:
		goto loc_82BCF1D4;
	case 14:
		goto loc_82BCF0A8;
	case 15:
		goto loc_82BCF1D4;
	case 16:
		goto loc_82BCF1D4;
	case 17:
		goto loc_82BCF1D4;
	case 18:
		goto loc_82BCF1D4;
	case 19:
		goto loc_82BCF1D4;
	case 20:
		goto loc_82BCF1D4;
	case 21:
		goto loc_82BCF1D4;
	case 22:
		goto loc_82BCF1D4;
	case 23:
		goto loc_82BCF1D4;
	case 24:
		goto loc_82BCF1D4;
	case 25:
		goto loc_82BCF1D4;
	case 26:
		goto loc_82BCF1D4;
	case 27:
		goto loc_82BCF1D4;
	case 28:
		goto loc_82BCF1D4;
	case 29:
		goto loc_82BCF1D4;
	case 30:
		goto loc_82BCF1D4;
	case 31:
		goto loc_82BCF1D4;
	case 32:
		goto loc_82BCF1D4;
	case 33:
		goto loc_82BCF1D4;
	case 34:
		goto loc_82BCF1D4;
	case 35:
		goto loc_82BCF57C;
	case 36:
		goto loc_82BCF1D4;
	case 37:
		goto loc_82BCF1D4;
	case 38:
		goto loc_82BCF1D4;
	case 39:
		goto loc_82BCF1D4;
	case 40:
		goto loc_82BCF57C;
	case 41:
		goto loc_82BCF1D4;
	case 42:
		goto loc_82BCF1D4;
	case 43:
		goto loc_82BCF1D4;
	case 44:
		goto loc_82BCF1D4;
	case 45:
		goto loc_82BCF1D4;
	case 46:
		goto loc_82BCF0B4;
	case 47:
		goto loc_82BCF598;
	case 48:
		goto loc_82BCF1D4;
	case 49:
		goto loc_82BCF1D4;
	case 50:
		goto loc_82BCF1D4;
	case 51:
		goto loc_82BCF1D4;
	case 52:
		goto loc_82BCF1D4;
	case 53:
		goto loc_82BCF1D4;
	case 54:
		goto loc_82BCF1D4;
	case 55:
		goto loc_82BCF1D4;
	case 56:
		goto loc_82BCF1D4;
	case 57:
		goto loc_82BCF1D4;
	case 58:
		goto loc_82BCF1D4;
	case 59:
		goto loc_82BCF1D4;
	case 60:
		goto loc_82BCF1D4;
	case 61:
		goto loc_82BCF390;
	case 62:
		goto loc_82BCF2EC;
	case 63:
		goto loc_82BCF434;
	case 64:
		goto loc_82BCF1D4;
	case 65:
		goto loc_82BCF1D4;
	case 66:
		goto loc_82BCF1D4;
	case 67:
		goto loc_82BCF1D4;
	case 68:
		goto loc_82BCF1D4;
	case 69:
		goto loc_82BCF1D4;
	case 70:
		goto loc_82BCF1D4;
	case 71:
		goto loc_82BCF1D4;
	case 72:
		goto loc_82BCF1D4;
	case 73:
		goto loc_82BCF1D4;
	case 74:
		goto loc_82BCF1D4;
	case 75:
		goto loc_82BCF1D4;
	case 76:
		goto loc_82BCF1D4;
	case 77:
		goto loc_82BCF1D4;
	case 78:
		goto loc_82BCF1D4;
	case 79:
		goto loc_82BCF1D4;
	case 80:
		goto loc_82BCF1D4;
	case 81:
		goto loc_82BCF1D4;
	case 82:
		goto loc_82BCF1D4;
	case 83:
		goto loc_82BCF1D4;
	case 84:
		goto loc_82BCF1D4;
	case 85:
		goto loc_82BCF1D4;
	case 86:
		goto loc_82BCF1D4;
	case 87:
		goto loc_82BCF1D4;
	case 88:
		goto loc_82BCF1D4;
	case 89:
		goto loc_82BCF1D4;
	case 90:
		goto loc_82BCF1D4;
	case 91:
		goto loc_82BCF1D4;
	case 92:
		goto loc_82BCF240;
	case 93:
		goto loc_82BCF1D4;
	case 94:
		goto loc_82BCF1D4;
	case 95:
		goto loc_82BCF1D4;
	case 96:
		goto loc_82BCF1D4;
	case 97:
		goto loc_82BCF1D4;
	case 98:
		goto loc_82BCF1D4;
	case 99:
		goto loc_82BCF1D4;
	case 100:
		goto loc_82BCF1D4;
	case 101:
		goto loc_82BCF1D4;
	case 102:
		goto loc_82BCF1D4;
	case 103:
		goto loc_82BCF1D4;
	case 104:
		goto loc_82BCF1D4;
	case 105:
		goto loc_82BCF1D4;
	case 106:
		goto loc_82BCF1D4;
	case 107:
		goto loc_82BCF1D4;
	case 108:
		goto loc_82BCF1D4;
	case 109:
		goto loc_82BCF1D4;
	case 110:
		goto loc_82BCF1D4;
	case 111:
		goto loc_82BCF1D4;
	case 112:
		goto loc_82BCF1D4;
	case 113:
		goto loc_82BCF1D4;
	case 114:
		goto loc_82BCF1D4;
	case 115:
		goto loc_82BCF1D4;
	case 116:
		goto loc_82BCF1D4;
	case 117:
		goto loc_82BCF1D4;
	case 118:
		goto loc_82BCF1D4;
	case 119:
		goto loc_82BCF1D4;
	case 120:
		goto loc_82BCF1D4;
	case 121:
		goto loc_82BCF1D4;
	case 122:
		goto loc_82BCF1D4;
	case 123:
		goto loc_82BCF1D4;
	case 124:
		goto loc_82BCF1D4;
	case 125:
		goto loc_82BCF1D4;
	case 126:
		goto loc_82BCF1D4;
	case 127:
		goto loc_82BCF4D8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-2424(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2424);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3928(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3928);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3928(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3928);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-2692(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2692);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-2692(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2692);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3916(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3916);
	// lwz r21,-2664(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2664);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3184(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3184);
	// lwz r21,-3348(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3348);
	// lwz r21,-3020(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3020);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3520(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3520);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-3628(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3628);
	// lwz r21,-2856(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + -2856);
loc_82BCF0A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcdc20
	ctx.lr = 0x82BCF0B0;
	sub_82BCDC20(ctx, base);
	// b 0x82bcee80
	goto loc_82BCEE80;
loc_82BCF0B4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf0e4
	if (ctx.cr6.eq) goto loc_82BCF0E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf0ec
	goto loc_82BCF0EC;
loc_82BCF0E4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF0EC;
	sub_82BCD8A8(ctx, base);
loc_82BCF0EC:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,45
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 45, ctx.xer);
	// bne cr6,0x82bcf234
	if (!ctx.cr6.eq) goto loc_82BCF234;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf128
	if (ctx.cr6.eq) goto loc_82BCF128;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf130
	goto loc_82BCF130;
loc_82BCF128:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF130;
	sub_82BCD8A8(ctx, base);
loc_82BCF130:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,91
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 91, ctx.xer);
	// bne cr6,0x82bcf168
	if (!ctx.cr6.eq) goto loc_82BCF168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce178
	ctx.lr = 0x82BCF144;
	sub_82BCE178(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// blt cr6,0x82bcf168
	if (ctx.cr6.lt) goto loc_82BCF168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce250
	ctx.lr = 0x82BCF164;
	sub_82BCE250(ctx, base);
	// b 0x82bcee78
	goto loc_82BCEE78;
loc_82BCF168:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82bcee80
	if (ctx.cr6.eq) goto loc_82BCEE80;
loc_82BCF174:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82bcee80
	if (ctx.cr6.eq) goto loc_82BCEE80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bcee80
	if (ctx.cr6.eq) goto loc_82BCEE80;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf1b8
	if (ctx.cr6.eq) goto loc_82BCF1B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf1c0
	goto loc_82BCF1C0;
loc_82BCF1B8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF1C0;
	sub_82BCD8A8(ctx, base);
loc_82BCF1C0:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82bcf174
	if (!ctx.cr6.eq) goto loc_82BCF174;
	// b 0x82bcee80
	goto loc_82BCEE80;
loc_82BCF1D4:
	// bl 0x82cb7d90
	ctx.lr = 0x82BCF1D8;
	sub_82CB7D90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bcf694
	if (ctx.cr6.eq) goto loc_82BCF694;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf224
	if (ctx.cr6.eq) goto loc_82BCF224;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bcee80
	goto loc_82BCEE80;
loc_82BCF224:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF22C;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82bcee80
	goto loc_82BCEE80;
loc_82BCF234:
	// li r3,45
	ctx.r3.s64 = 45;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce178
	ctx.lr = 0x82BCF248;
	sub_82BCE178(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82bcf26c
	if (ctx.cr6.lt) goto loc_82BCF26C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce250
	ctx.lr = 0x82BCF260;
	sub_82BCE250(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF26C:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82bcf280
	if (!ctx.cr6.eq) goto loc_82BCF280;
	// li r3,91
	ctx.r3.s64 = 91;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF280:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82a2ed70
	ctx.lr = 0x82BCF294;
	sub_82A2ED70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,13080
	ctx.r7.s64 = ctx.r11.s64 + 13080;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r10,11748
	ctx.r4.s64 = ctx.r10.s64 + 11748;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc8870
	ctx.lr = 0x82BCF2B4;
	sub_82BC8870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCF2C4;
	sub_82BCD9B8(ctx, base);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,12876
	ctx.r4.s64 = ctx.r9.s64 + 12876;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82bc8870
	ctx.lr = 0x82BCF2E0;
	sub_82BC8870(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82bccb88
	ctx.lr = 0x82BCF2EC;
	sub_82BCCB88(ctx, base);
loc_82BCF2EC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf31c
	if (ctx.cr6.eq) goto loc_82BCF31C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf324
	goto loc_82BCF324;
loc_82BCF31C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF324;
	sub_82BCD8A8(ctx, base);
loc_82BCF324:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82bcf33c
	if (ctx.cr6.eq) goto loc_82BCF33C;
	// li r3,61
	ctx.r3.s64 = 61;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF33C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf378
	if (ctx.cr6.eq) goto loc_82BCF378;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF378:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF380;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF390:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf3c0
	if (ctx.cr6.eq) goto loc_82BCF3C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf3c8
	goto loc_82BCF3C8;
loc_82BCF3C0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF3C8;
	sub_82BCD8A8(ctx, base);
loc_82BCF3C8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82bcf3e0
	if (ctx.cr6.eq) goto loc_82BCF3E0;
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF3E0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf41c
	if (ctx.cr6.eq) goto loc_82BCF41C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF41C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF424;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,282
	ctx.r3.s64 = 282;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF434:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf464
	if (ctx.cr6.eq) goto loc_82BCF464;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf46c
	goto loc_82BCF46C;
loc_82BCF464:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF46C;
	sub_82BCD8A8(ctx, base);
loc_82BCF46C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82bcf484
	if (ctx.cr6.eq) goto loc_82BCF484;
	// li r3,62
	ctx.r3.s64 = 62;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF484:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf4c0
	if (ctx.cr6.eq) goto loc_82BCF4C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF4C0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF4C8;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,281
	ctx.r3.s64 = 281;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF4D8:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf508
	if (ctx.cr6.eq) goto loc_82BCF508;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf510
	goto loc_82BCF510;
loc_82BCF508:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF510;
	sub_82BCD8A8(ctx, base);
loc_82BCF510:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 61, ctx.xer);
	// beq cr6,0x82bcf528
	if (ctx.cr6.eq) goto loc_82BCF528;
	// li r3,126
	ctx.r3.s64 = 126;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF528:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf564
	if (ctx.cr6.eq) goto loc_82BCF564;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF564:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF56C;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF57C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bce6e8
	ctx.lr = 0x82BCF58C;
	sub_82BCE6E8(ctx, base);
	// li r3,286
	ctx.r3.s64 = 286;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCF5A4;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf5d4
	if (ctx.cr6.eq) goto loc_82BCF5D4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf5e0
	goto loc_82BCF5E0;
loc_82BCF5D4:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF5DC;
	sub_82BCD8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BCF5E0:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r11,-6348
	ctx.r30.s64 = ctx.r11.s64 + -6348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BCF5F4;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bcf648
	if (ctx.cr6.eq) goto loc_82BCF648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcde08
	ctx.lr = 0x82BCF604;
	sub_82BCDE08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bcf648
	if (ctx.cr6.eq) goto loc_82BCF648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca3980
	ctx.lr = 0x82BCF618;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bcf63c
	if (ctx.cr6.eq) goto loc_82BCF63C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcde08
	ctx.lr = 0x82BCF628;
	sub_82BCDE08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bcf63c
	if (ctx.cr6.eq) goto loc_82BCF63C;
	// li r3,279
	ctx.r3.s64 = 279;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF63C:
	// li r3,278
	ctx.r3.s64 = 278;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF648:
	// bl 0x82cb7d90
	ctx.lr = 0x82BCF64C;
	sub_82CB7D90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bcf670
	if (!ctx.cr6.eq) goto loc_82BCF670;
	// li r3,46
	ctx.r3.s64 = 46;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF670:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcdfc8
	ctx.lr = 0x82BCF67C;
	sub_82BCDFC8(ctx, base);
	// li r3,284
	ctx.r3.s64 = 284;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF688:
	// li r3,287
	ctx.r3.s64 = 287;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF694:
	// bl 0x82cb7d90
	ctx.lr = 0x82BCF698;
	sub_82CB7D90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bcf670
	if (!ctx.cr6.eq) goto loc_82BCF670;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82cb7d90
	ctx.lr = 0x82BCF6B8;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,30,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bcf72c
	if (!ctx.cr6.eq) goto loc_82BCF72C;
	// cmpwi cr6,r30,95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 95, ctx.xer);
	// beq cr6,0x82bcf72c
	if (ctx.cr6.eq) goto loc_82BCF72C;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf714
	if (ctx.cr6.eq) goto loc_82BCF714;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF714:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF71C;
	sub_82BCD8A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF72C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcd9b8
	ctx.lr = 0x82BCF738;
	sub_82BCD9B8(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bcf768
	if (ctx.cr6.eq) goto loc_82BCF768;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82bcf770
	goto loc_82BCF770;
loc_82BCF768:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82bcd8a8
	ctx.lr = 0x82BCF770;
	sub_82BCD8A8(ctx, base);
loc_82BCF770:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82cb7d90
	ctx.lr = 0x82BCF77C;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bcf72c
	if (!ctx.cr6.eq) goto loc_82BCF72C;
	// cmpwi cr6,r30,95
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 95, ctx.xer);
	// beq cr6,0x82bcf72c
	if (ctx.cr6.eq) goto loc_82BCF72C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bcdba8
	ctx.lr = 0x82BCF7B0;
	sub_82BCDBA8(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bcf7c8
	if (ctx.cr6.eq) goto loc_82BCF7C8;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BCF7C8:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,285
	ctx.r3.s64 = 285;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BCF7D8"))) PPC_WEAK_FUNC(sub_82BCF7D8);
PPC_FUNC_IMPL(__imp__sub_82BCF7D8) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,287
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 287, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bcf82c
	if (ctx.cr6.eq) goto loc_82BCF82C;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,287
	ctx.r10.s64 = 287;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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
loc_82BCF82C:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcee60
	ctx.lr = 0x82BCF838;
	sub_82BCEE60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82BCF850"))) PPC_WEAK_FUNC(sub_82BCF850);
PPC_FUNC_IMPL(__imp__sub_82BCF850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BCF858;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bcf898
	if (ctx.cr6.lt) goto loc_82BCF898;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82bcf8a8
	if (ctx.cr6.lt) goto loc_82BCF8A8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82bc9860
	ctx.lr = 0x82BCF894;
	sub_82BC9860(ctx, base);
	// b 0x82bcf8a8
	goto loc_82BCF8A8;
loc_82BCF898:
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82bcf8a8
	if (!ctx.cr6.lt) goto loc_82BCF8A8;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82BCF8A8:
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// divwu r9,r11,r29
	ctx.r9.u32 = ctx.r11.u32 / ctx.r29.u32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82bcf8e0
	if (ctx.cr6.gt) goto loc_82BCF8E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// mullw r5,r11,r29
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8227bb58
	ctx.lr = 0x82BCF8D4;
	sub_8227BB58(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BCF8E0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11760
	ctx.r4.s64 = ctx.r11.s64 + 11760;
	// bl 0x82bc9860
	ctx.lr = 0x82BCF8EC;
	sub_82BC9860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BCF8FC"))) PPC_WEAK_FUNC(sub_82BCF8FC);
PPC_FUNC_IMPL(__imp__sub_82BCF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCF900"))) PPC_WEAK_FUNC(sub_82BCF900);
PPC_FUNC_IMPL(__imp__sub_82BCF900) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCF930"))) PPC_WEAK_FUNC(sub_82BCF930);
PPC_FUNC_IMPL(__imp__sub_82BCF930) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bcf970
	if (!ctx.cr6.lt) goto loc_82BCF970;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bcf970
	if (ctx.cr6.eq) goto loc_82BCF970;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bcf984
	if (!ctx.cr6.eq) goto loc_82BCF984;
loc_82BCF970:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BCF984;
	sub_82BC67F0(ctx, base);
loc_82BCF984:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BCF990;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82bcf9b4
	if (!ctx.cr6.eq) goto loc_82BCF9B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82BCF9B4:
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

__attribute__((alias("__imp__sub_82BCF9C8"))) PPC_WEAK_FUNC(sub_82BCF9C8);
PPC_FUNC_IMPL(__imp__sub_82BCF9C8) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bcfa14
	if (!ctx.cr6.lt) goto loc_82BCFA14;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bcfa14
	if (ctx.cr6.eq) goto loc_82BCFA14;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bcfa28
	if (ctx.cr6.eq) goto loc_82BCFA28;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bcfa28
	if (ctx.cr6.eq) goto loc_82BCFA28;
loc_82BCFA14:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BCFA28;
	sub_82BC67F0(ctx, base);
loc_82BCFA28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bcfa68
	if (!ctx.cr6.lt) goto loc_82BCFA68;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BCFA40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bcfa40
	if (ctx.cr6.lt) goto loc_82BCFA40;
loc_82BCFA68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5ff0
	ctx.lr = 0x82BCFA80;
	sub_82BC5FF0(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82BCFAC0"))) PPC_WEAK_FUNC(sub_82BCFAC0);
PPC_FUNC_IMPL(__imp__sub_82BCFAC0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc5dd0
	ctx.lr = 0x82BCFAD4;
	sub_82BC5DD0(ctx, base);
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

__attribute__((alias("__imp__sub_82BCFAE8"))) PPC_WEAK_FUNC(sub_82BCFAE8);
PPC_FUNC_IMPL(__imp__sub_82BCFAE8) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bcfb2c
	if (!ctx.cr6.lt) goto loc_82BCFB2C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bcfb2c
	if (ctx.cr6.eq) goto loc_82BCFB2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bcfb44
	if (ctx.cr6.eq) goto loc_82BCFB44;
loc_82BCFB2C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BCFB44;
	sub_82BC68F0(ctx, base);
loc_82BCFB44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bcfb84
	if (!ctx.cr6.lt) goto loc_82BCFB84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BCFB5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bcfb5c
	if (ctx.cr6.lt) goto loc_82BCFB5C;
loc_82BCFB84:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822c06c0
	ctx.lr = 0x82BCFB9C;
	sub_822C06C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bcfbb4
	if (!ctx.cr6.eq) goto loc_82BCFBB4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = ctx.r11.s64 + 8736;
	// bl 0x82bc6a18
	ctx.lr = 0x82BCFBB4;
	sub_82BC6A18(ctx, base);
loc_82BCFBB4:
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
}

__attribute__((alias("__imp__sub_82BCFBCC"))) PPC_WEAK_FUNC(sub_82BCFBCC);
PPC_FUNC_IMPL(__imp__sub_82BCFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCFBD0"))) PPC_WEAK_FUNC(sub_82BCFBD0);
PPC_FUNC_IMPL(__imp__sub_82BCFBD0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bcfc10
	if (!ctx.cr6.eq) goto loc_82BCFC10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82bcfc3c
	goto loc_82BCFC3C;
loc_82BCFC10:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82BCFC14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bcfc14
	if (!ctx.cr6.eq) goto loc_82BCFC14;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BCFC3C;
	sub_8219CDA8(ctx, base);
loc_82BCFC3C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BCFC4C;
	sub_82BC5EB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BCFC64"))) PPC_WEAK_FUNC(sub_82BCFC64);
PPC_FUNC_IMPL(__imp__sub_82BCFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCFC68"))) PPC_WEAK_FUNC(sub_82BCFC68);
PPC_FUNC_IMPL(__imp__sub_82BCFC68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bcfcc0
	if (!ctx.cr6.lt) goto loc_82BCFCC0;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r9,r9,1876
	ctx.r9.s64 = ctx.r9.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bcfcc0
	if (ctx.cr6.eq) goto loc_82BCFCC0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82bcfcc0
	if (!ctx.cr6.eq) goto loc_82BCFCC0;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82bcfca8
	if (ctx.cr6.lt) goto loc_82BCFCA8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82BCFCA8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82BCFCC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BCFCCC"))) PPC_WEAK_FUNC(sub_82BCFCCC);
PPC_FUNC_IMPL(__imp__sub_82BCFCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCFCD0"))) PPC_WEAK_FUNC(sub_82BCFCD0);
PPC_FUNC_IMPL(__imp__sub_82BCFCD0) {
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
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bcfd20
	if (!ctx.cr6.eq) goto loc_82BCFD20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82bc5630
	ctx.lr = 0x82BCFD1C;
	sub_82BC5630(ctx, base);
	// b 0x82bcfd48
	goto loc_82BCFD48;
loc_82BCFD20:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BCFD48:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BCFD58;
	sub_82BC5EB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BCFD70"))) PPC_WEAK_FUNC(sub_82BCFD70);
PPC_FUNC_IMPL(__imp__sub_82BCFD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BCFD78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bcfc68
	ctx.lr = 0x82BCFD88;
	sub_82BCFC68(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,11124
	ctx.r5.s64 = ctx.r11.s64 + 11124;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BCFDAC;
	sub_82BC6E30(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BCFDC0;
	sub_82BC5448(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82bcfddc
	if (ctx.cr6.eq) goto loc_82BCFDDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82bcbd48
	ctx.lr = 0x82BCFDD4;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bcfe28
	if (ctx.cr6.eq) goto loc_82BCFE28;
loc_82BCFDDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc59d0
	ctx.lr = 0x82BCFDEC;
	sub_82BC59D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BCFDFC;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bcff14
	if (!ctx.cr6.eq) goto loc_82BCFF14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BCFE28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BCFE34;
	sub_82BC5448(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,1876
	ctx.r10.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bd00b4
	if (ctx.cr6.eq) goto loc_82BD00B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82bd00b4
	if (!ctx.cr6.eq) goto loc_82BD00B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,11132
	ctx.r4.s64 = ctx.r11.s64 + 11132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BCFE64;
	sub_82BC5C08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bcfeb4
	if (ctx.cr6.eq) goto loc_82BCFEB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BCFE80;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bcfe90
	if (!ctx.cr6.eq) goto loc_82BCFE90;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82bcfebc
	goto loc_82BCFEBC;
loc_82BCFE90:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bcfeac
	if (ctx.cr6.lt) goto loc_82BCFEAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BCFEAC;
	sub_8227B8B8(ctx, base);
loc_82BCFEAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BCFEB4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
loc_82BCFEBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BCFEC8;
	sub_82BC5448(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bcff14
	if (ctx.cr6.eq) goto loc_82BCFF14;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BCFF14:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc8cb8
	ctx.lr = 0x82BCFF24;
	sub_82BC8CB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bcff48
	if (!ctx.cr6.eq) goto loc_82BCFF48;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,11164
	ctx.r5.s64 = ctx.r11.s64 + 11164;
	// bl 0x82bc67f0
	ctx.lr = 0x82BCFF40;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BCFF48:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BCFF54;
	sub_82BC5CD8(ctx, base);
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BCFF60;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bcffcc
	if (ctx.cr6.eq) goto loc_82BCFFCC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11180
	ctx.r4.s64 = ctx.r11.s64 + 11180;
	// bl 0x82bcfbd0
	ctx.lr = 0x82BCFF7C;
	sub_82BCFBD0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r10,11188
	ctx.r4.s64 = ctx.r10.s64 + 11188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcfbd0
	ctx.lr = 0x82BCFF90;
	sub_82BCFBD0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r4,r9,11200
	ctx.r4.s64 = ctx.r9.s64 + 11200;
	// bl 0x82bd9a98
	ctx.lr = 0x82BCFFA4;
	sub_82BD9A98(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r8,11212
	ctx.r4.s64 = ctx.r8.s64 + 11212;
	// bl 0x82bd9a98
	ctx.lr = 0x82BCFFB8;
	sub_82BD9A98(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r7,11228
	ctx.r4.s64 = ctx.r7.s64 + 11228;
	// bl 0x82bcfbd0
	ctx.lr = 0x82BCFFCC;
	sub_82BCFBD0(ctx, base);
loc_82BCFFCC:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BCFFD8;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bcfff4
	if (ctx.cr6.eq) goto loc_82BCFFF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11236
	ctx.r4.s64 = ctx.r11.s64 + 11236;
	// bl 0x82bd9a98
	ctx.lr = 0x82BCFFF4;
	sub_82BD9A98(ctx, base);
loc_82BCFFF4:
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD0000;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd001c
	if (ctx.cr6.eq) goto loc_82BD001C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11248
	ctx.r4.s64 = ctx.r11.s64 + 11248;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD001C;
	sub_82BD9A98(ctx, base);
loc_82BD001C:
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD0028;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0058
	if (ctx.cr6.eq) goto loc_82BD0058;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x82bcfbd0
	ctx.lr = 0x82BD0044;
	sub_82BCFBD0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r10,11256
	ctx.r4.s64 = ctx.r10.s64 + 11256;
	// bl 0x82bcfbd0
	ctx.lr = 0x82BD0058;
	sub_82BCFBD0(ctx, base);
loc_82BD0058:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD0064;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0080
	if (ctx.cr6.eq) goto loc_82BD0080;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11268
	ctx.r5.s64 = ctx.r11.s64 + 11268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcfcd0
	ctx.lr = 0x82BD0080;
	sub_82BCFCD0(ctx, base);
loc_82BD0080:
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD008C;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd00a8
	if (ctx.cr6.eq) goto loc_82BD00A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11280
	ctx.r5.s64 = ctx.r11.s64 + 11280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcfcd0
	ctx.lr = 0x82BD00A8;
	sub_82BCFCD0(ctx, base);
loc_82BD00A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD00B4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,11136
	ctx.r5.s64 = ctx.r11.s64 + 11136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD00C8;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD00D0"))) PPC_WEAK_FUNC(sub_82BD00D0);
PPC_FUNC_IMPL(__imp__sub_82BD00D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD00D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bcfc68
	ctx.lr = 0x82BD00E8;
	sub_82BCFC68(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD0104;
	sub_82BC6F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0114;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82bd0138
	if (!ctx.cr6.eq) goto loc_82BD0138;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,11288
	ctx.r5.s64 = ctx.r11.s64 + 11288;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD0130;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD0138:
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD0140;
	sub_82BC6F00(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a2b450
	ctx.lr = 0x82BD016C;
	sub_82A2B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bd0228
	if (ctx.cr6.eq) goto loc_82BD0228;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bd01d4
	if (ctx.cr6.eq) goto loc_82BD01D4;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD01D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD01D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd01d8
	if (!ctx.cr6.eq) goto loc_82BD01D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD01FC;
	sub_8219CDA8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,-12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD0228:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD024C"))) PPC_WEAK_FUNC(sub_82BD024C);
PPC_FUNC_IMPL(__imp__sub_82BD024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0250"))) PPC_WEAK_FUNC(sub_82BD0250);
PPC_FUNC_IMPL(__imp__sub_82BD0250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD0258;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bcfc68
	ctx.lr = 0x82BD0268;
	sub_82BCFC68(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD0284;
	sub_82BC6F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0294;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82bd02b8
	if (!ctx.cr6.eq) goto loc_82BD02B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,11288
	ctx.r5.s64 = ctx.r11.s64 + 11288;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD02B0;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD02B8:
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bc6dd8
	ctx.lr = 0x82BD02C4;
	sub_82BC6DD8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BD02D0;
	sub_82BC55B8(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bd0300
	if (ctx.cr6.eq) goto loc_82BD0300;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD0300:
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD030C;
	sub_82BC6F00(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a2b450
	ctx.lr = 0x82BD0338;
	sub_82A2B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bd0368
	if (ctx.cr6.eq) goto loc_82BD0368;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
loc_82BD0368:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82bd03a0
	if (!ctx.cr6.eq) goto loc_82BD03A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD03A0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD03A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd03a4
	if (!ctx.cr6.eq) goto loc_82BD03A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD03C8;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD03D4"))) PPC_WEAK_FUNC(sub_82BD03D4);
PPC_FUNC_IMPL(__imp__sub_82BD03D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD03D8"))) PPC_WEAK_FUNC(sub_82BD03D8);
PPC_FUNC_IMPL(__imp__sub_82BD03D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD03E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD03F4;
	sub_82BC6F00(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd0424
	if (!ctx.cr6.lt) goto loc_82BD0424;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd0424
	if (ctx.cr6.eq) goto loc_82BD0424;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bd043c
	if (ctx.cr6.eq) goto loc_82BD043C;
loc_82BD0424:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD043C;
	sub_82BC68F0(ctx, base);
loc_82BD043C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82bd0454
	if (!ctx.cr6.lt) goto loc_82BD0454;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BD0454:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82bd047c
	if (!ctx.cr6.eq) goto loc_82BD047C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bd047c
	if (ctx.cr6.eq) goto loc_82BD047C;
loc_82BD0470:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD047C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82bd04cc
	if (ctx.cr6.eq) goto loc_82BD04CC;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bd0490
	if (ctx.cr6.lt) goto loc_82BD0490;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BD0490:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bc6680
	ctx.lr = 0x82BD049C;
	sub_82BC6680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bd0470
	if (ctx.cr6.eq) goto loc_82BD0470;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82bd04e0
	goto loc_82BD04E0;
loc_82BD04CC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6718
	ctx.lr = 0x82BD04DC;
	sub_82BC6718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD04E0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bd0470
	if (ctx.cr6.eq) goto loc_82BD0470;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD04EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd04ec
	if (!ctx.cr6.eq) goto loc_82BD04EC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD0510;
	sub_8219CDA8(ctx, base);
	// subfic r4,r27,-1
	ctx.xer.ca = ctx.r27.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r27.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5690
	ctx.lr = 0x82BD051C;
	sub_82BC5690(ctx, base);
	// addi r3,r27,1
	ctx.r3.s64 = ctx.r27.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD0528"))) PPC_WEAK_FUNC(sub_82BD0528);
PPC_FUNC_IMPL(__imp__sub_82BD0528) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bd03d8
	sub_82BD03D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD0530"))) PPC_WEAK_FUNC(sub_82BD0530);
PPC_FUNC_IMPL(__imp__sub_82BD0530) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd0574
	if (!ctx.cr6.lt) goto loc_82BD0574;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd0574
	if (ctx.cr6.eq) goto loc_82BD0574;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd0588
	if (!ctx.cr6.eq) goto loc_82BD0588;
loc_82BD0574:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD0588;
	sub_82BC67F0(ctx, base);
loc_82BD0588:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd03d8
	ctx.lr = 0x82BD0594;
	sub_82BD03D8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD05A8"))) PPC_WEAK_FUNC(sub_82BD05A8);
PPC_FUNC_IMPL(__imp__sub_82BD05A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD05B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,860
	ctx.r30.s64 = ctx.r11.s64 + 860;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,-798
	ctx.r9.s64 = ctx.r30.s64 + -798;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x821cf230
	ctx.lr = 0x82BD05F4;
	sub_821CF230(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x821cf230
	ctx.lr = 0x82BD062C;
	sub_821CF230(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r9,r5,1876
	ctx.r9.s64 = ctx.r5.s64 + 1876;
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd0710
	if (ctx.cr6.eq) goto loc_82BD0710;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82bd0710
	if (!ctx.cr6.eq) goto loc_82BD0710;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bd0690
	if (!ctx.cr6.eq) goto loc_82BD0690;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82bd06b8
	goto loc_82BD06B8;
loc_82BD0690:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD0694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd0694
	if (!ctx.cr6.eq) goto loc_82BD0694;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD06B8;
	sub_8219CDA8(ctx, base);
loc_82BD06B8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82bd06ec
	if (ctx.cr6.lt) goto loc_82BD06EC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82bd06f4
	goto loc_82BD06F4;
loc_82BD06EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_82BD06F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8219ee00
	ctx.lr = 0x82BD0710;
	sub_8219EE00(ctx, base);
loc_82BD0710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD0718"))) PPC_WEAK_FUNC(sub_82BD0718);
PPC_FUNC_IMPL(__imp__sub_82BD0718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD0720;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,62
	ctx.r30.s64 = ctx.r11.s64 + 62;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x821cf230
	ctx.lr = 0x82BD075C;
	sub_821CF230(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r7,r9,1876
	ctx.r7.s64 = ctx.r9.s64 + 1876;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bd0794
	if (ctx.cr6.eq) goto loc_82BD0794;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82bd07e8
	if (ctx.cr6.eq) goto loc_82BD07E8;
loc_82BD0794:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD07A8;
	sub_82BC5CD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x822a5e98
	ctx.lr = 0x82BD07E8;
	sub_822A5E98(ctx, base);
loc_82BD07E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD07F0"))) PPC_WEAK_FUNC(sub_82BD07F0);
PPC_FUNC_IMPL(__imp__sub_82BD07F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BD07F8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bcfc68
	ctx.lr = 0x82BD0808;
	sub_82BCFC68(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r24,r28,1
	ctx.r24.s64 = ctx.r28.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD0820;
	sub_82BC5448(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,1876
	ctx.r27.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd083c
	if (ctx.cr6.eq) goto loc_82BD083C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd0860
	if (ctx.cr6.gt) goto loc_82BD0860;
loc_82BD083C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BD0848;
	sub_82BC55B8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r23.u32);
	// stw r23,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r23.u32);
	// stw r23,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r23.u32);
	// stb r23,54(r30)
	PPC_STORE_U8(ctx.r30.u32 + 54, ctx.r23.u8);
	// b 0x82bd09d8
	goto loc_82BD09D8;
loc_82BD0860:
	// addi r29,r28,2
	ctx.r29.s64 = ctx.r28.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD0870;
	sub_82BC5448(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r11,1744
	ctx.r26.s64 = ctx.r11.s64 + 1744;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd08cc
	if (ctx.cr6.eq) goto loc_82BD08CC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD0894;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd08a4
	if (!ctx.cr6.eq) goto loc_82BD08A4;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// b 0x82bd08d8
	goto loc_82BD08D8;
loc_82BD08A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd08c0
	if (ctx.cr6.lt) goto loc_82BD08C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD08C0;
	sub_8227B8B8(ctx, base);
loc_82BD08C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD08CC;
	sub_82BC5448(ctx, base);
loc_82BD08CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r25,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r25.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82bd08e8
	if (!ctx.cr0.eq) goto loc_82BD08E8;
loc_82BD08D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD08E8;
	sub_82BC68F0(ctx, base);
loc_82BD08E8:
	// addi r4,r28,3
	ctx.r4.s64 = ctx.r28.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD08F4;
	sub_82BC5448(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd0908
	if (ctx.cr6.eq) goto loc_82BD0908;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd0910
	if (ctx.cr6.gt) goto loc_82BD0910;
loc_82BD0908:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x82bd091c
	goto loc_82BD091C;
loc_82BD0910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD0918;
	sub_82BC6F00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BD091C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD0928;
	sub_82BC5448(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd093c
	if (ctx.cr6.eq) goto loc_82BD093C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bd094c
	if (ctx.cr6.eq) goto loc_82BD094C;
loc_82BD093C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD094C;
	sub_82BC68F0(ctx, base);
loc_82BD094C:
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD095C;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0968
	if (ctx.cr6.eq) goto loc_82BD0968;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BD0968:
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD0974;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0980
	if (ctx.cr6.eq) goto loc_82BD0980;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_82BD0980:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca3980
	ctx.lr = 0x82BD098C;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0998
	if (ctx.cr6.eq) goto loc_82BD0998;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
loc_82BD0998:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bd09a4
	if (!ctx.cr6.gt) goto loc_82BD09A4;
	// ori r29,r29,8
	ctx.r29.u64 = ctx.r29.u64 | 8;
loc_82BD09A4:
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,1448
	ctx.r11.s64 = ctx.r11.s64 + 1448;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd09c0
	if (ctx.cr6.eq) goto loc_82BD09C0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82bd09c8
	if (!ctx.cr6.eq) goto loc_82BD09C8;
loc_82BD09C0:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82BD09C8:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// stw r28,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r28.u32);
	// stb r10,54(r30)
	PPC_STORE_U8(ctx.r30.u32 + 54, ctx.r10.u8);
loc_82BD09D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd0718
	ctx.lr = 0x82BD09E0;
	sub_82BD0718(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5448
	ctx.lr = 0x82BD0A08;
	sub_82BC5448(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bd0a54
	if (ctx.cr6.eq) goto loc_82BD0A54;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD0A54:
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5e98
	ctx.lr = 0x82BD0A60;
	sub_822A5E98(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82BD0A78"))) PPC_WEAK_FUNC(sub_82BD0A78);
PPC_FUNC_IMPL(__imp__sub_82BD0A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD0A80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bcfc68
	ctx.lr = 0x82BD0A90;
	sub_82BCFC68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbz r29,54(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd0acc
	if (ctx.cr6.eq) goto loc_82BD0ACC;
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// addi r9,r10,1448
	ctx.r9.s64 = ctx.r10.s64 + 1448;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd0acc
	if (ctx.cr6.eq) goto loc_82BD0ACC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,11328
	ctx.r4.s64 = ctx.r11.s64 + 11328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD0AC8;
	sub_8219CDA8(ctx, base);
	// b 0x82bd0b50
	goto loc_82BD0B50;
loc_82BD0ACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd0718
	ctx.lr = 0x82BD0AD4;
	sub_82BD0718(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x821cf230
	ctx.lr = 0x82BD0AFC;
	sub_821CF230(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// bl 0x82bc5630
	ctx.lr = 0x82BD0B20;
	sub_82BC5630(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd0b50
	if (ctx.cr6.eq) goto loc_82BD0B50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD0B50:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bd0b6c
	if (ctx.cr6.eq) goto loc_82BD0B6C;
	// li r11,99
	ctx.r11.s64 = 99;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82BD0B6C:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bd0b88
	if (ctx.cr6.eq) goto loc_82BD0B88;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,114
	ctx.r9.s64 = 114;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BD0B88:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bd0ba4
	if (ctx.cr6.eq) goto loc_82BD0BA4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,108
	ctx.r9.s64 = 108;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82BD0BA4:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
loc_82BD0BB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd0bb8
	if (!ctx.cr6.eq) goto loc_82BD0BB8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD0BE0;
	sub_8219CDA8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// li r3,3
	ctx.r3.s64 = 3;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD0C20"))) PPC_WEAK_FUNC(sub_82BD0C20);
PPC_FUNC_IMPL(__imp__sub_82BD0C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BD0C28;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82240578
	ctx.lr = 0x82BD0C34;
	sub_82240578(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r25,r11,11344
	ctx.r25.s64 = ctx.r11.s64 + 11344;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD0C48;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD0C4C;
	sub_82240578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca8fb8
	ctx.lr = 0x82BD0C5C;
	sub_82CA8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0e18
	if (ctx.cr6.eq) goto loc_82BD0E18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,3200
	ctx.r26.s64 = ctx.r11.s64 + 3200;
	// addi r28,r10,11364
	ctx.r28.s64 = ctx.r10.s64 + 11364;
	// addi r27,r9,11356
	ctx.r27.s64 = ctx.r9.s64 + 11356;
loc_82BD0C80:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82BD0C88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bd0cac
	if (ctx.cr6.eq) goto loc_82BD0CAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bd0c88
	if (ctx.cr6.eq) goto loc_82BD0C88;
loc_82BD0CAC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bd0e18
	if (ctx.cr6.eq) goto loc_82BD0E18;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD0CBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd0cbc
	if (!ctx.cr6.eq) goto loc_82BD0CBC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r8,-32094
	ctx.r8.s64 = -2103312384;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r8,-152
	ctx.r4.s64 = ctx.r8.s64 + -152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6130
	ctx.lr = 0x82BD0CF8;
	sub_82BC6130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd0d38
	if (!ctx.cr6.eq) goto loc_82BD0D38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r10,24864
	ctx.r4.s64 = ctx.r10.s64 + 24864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BD0D30;
	sub_822C05F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd0db0
	if (ctx.cr6.eq) goto loc_82BD0DB0;
loc_82BD0D38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd0d88
	if (ctx.cr6.eq) goto loc_82BD0D88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD0D54;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd0d64
	if (!ctx.cr6.eq) goto loc_82BD0D64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82bd0d90
	goto loc_82BD0D90;
loc_82BD0D64:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd0d80
	if (ctx.cr6.lt) goto loc_82BD0D80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD0D80;
	sub_8227B8B8(ctx, base);
loc_82BD0D80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BD0D88:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_82BD0D90:
	// bl 0x82240578
	ctx.lr = 0x82BD0D94;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD0DA0;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD0DA4;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD0DB0;
	sub_82CA89A0(ctx, base);
loc_82BD0DB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd0de4
	if (!ctx.cr6.lt) goto loc_82BD0DE4;
loc_82BD0DC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bd0dc0
	if (ctx.cr6.lt) goto loc_82BD0DC0;
loc_82BD0DE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82240578
	ctx.lr = 0x82BD0DF0;
	sub_82240578(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD0DFC;
	sub_82CA89A0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD0E00;
	sub_82240578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca8fb8
	ctx.lr = 0x82BD0E10;
	sub_82CA8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd0c80
	if (!ctx.cr6.eq) goto loc_82BD0C80;
loc_82BD0E18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BD0E24"))) PPC_WEAK_FUNC(sub_82BD0E24);
PPC_FUNC_IMPL(__imp__sub_82BD0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD0E28"))) PPC_WEAK_FUNC(sub_82BD0E28);
PPC_FUNC_IMPL(__imp__sub_82BD0E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82BD0E30;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x82bcfc68
	ctx.lr = 0x82BD0E44;
	sub_82BCFC68(ctx, base);
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r16,2
	ctx.r30.s64 = ctx.r16.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD0E5C;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd0e78
	if (ctx.cr6.eq) goto loc_82BD0E78;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD0E70;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd0e98
	if (ctx.cr6.eq) goto loc_82BD0E98;
loc_82BD0E78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BD0E84;
	sub_82BC59D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82bd0ea4
	goto loc_82BD0EA4;
loc_82BD0E98:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82BD0EA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r8,r16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r16.s32, ctx.xer);
	// bne cr6,0x82bd0ed0
	if (!ctx.cr6.eq) goto loc_82BD0ED0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x82bd0ef0
	goto loc_82BD0EF0;
loc_82BD0ED0:
	// addi r4,r16,1
	ctx.r4.s64 = ctx.r16.s64 + 1;
	// bl 0x82bc5870
	ctx.lr = 0x82BD0ED8;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd1140
	if (ctx.cr6.eq) goto loc_82BD1140;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BD0EF0:
	// bl 0x8219cda8
	ctx.lr = 0x82BD0EF4;
	sub_8219CDA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,11384
	ctx.r4.s64 = ctx.r11.s64 + 11384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD0F08;
	sub_8219CDA8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0F18;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd1124
	if (ctx.cr6.eq) goto loc_82BD1124;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r22,4
	ctx.r22.s64 = 4;
	// addi r21,r6,11468
	ctx.r21.s64 = ctx.r6.s64 + 11468;
	// addi r20,r5,11464
	ctx.r20.s64 = ctx.r5.s64 + 11464;
	// addi r19,r4,11448
	ctx.r19.s64 = ctx.r4.s64 + 11448;
	// addi r18,r3,11428
	ctx.r18.s64 = ctx.r3.s64 + 11428;
	// addi r23,r7,11424
	ctx.r23.s64 = ctx.r7.s64 + 11424;
	// addi r28,r8,11420
	ctx.r28.s64 = ctx.r8.s64 + 11420;
	// addi r27,r9,11416
	ctx.r27.s64 = ctx.r9.s64 + 11416;
	// addi r26,r10,11412
	ctx.r26.s64 = ctx.r10.s64 + 11412;
	// addi r24,r11,11404
	ctx.r24.s64 = ctx.r11.s64 + 11404;
loc_82BD0F6C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// ble cr6,0x82bd0ff4
	if (!ctx.cr6.gt) goto loc_82BD0FF4;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x82bd0ff4
	if (ctx.cr6.eq) goto loc_82BD0FF4;
	// addi r30,r25,10
	ctx.r30.s64 = ctx.r25.s64 + 10;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0F94;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd0fa8
	if (!ctx.cr6.eq) goto loc_82BD0FA8;
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82bd110c
	goto loc_82BD110C;
loc_82BD0FA8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD0FB8;
	sub_8219CDA8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0FC8;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd0fec
	if (ctx.cr6.eq) goto loc_82BD0FEC;
loc_82BD0FD0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r25,10
	ctx.r4.s64 = ctx.r25.s64 + 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD0FE4;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd0fd0
	if (!ctx.cr6.eq) goto loc_82BD0FD0;
loc_82BD0FEC:
	// li r17,0
	ctx.r17.s64 = 0;
	// b 0x82bd110c
	goto loc_82BD110C;
loc_82BD0FF4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd1010
	if (ctx.cr6.lt) goto loc_82BD1010;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD1010;
	sub_8227B8B8(ctx, base);
loc_82BD1010:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD1024;
	sub_8227BA30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc8cb8
	ctx.lr = 0x82BD1048;
	sub_82BC8CB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD1058;
	sub_82BC5C08(ctx, base);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82bd1070
	if (!ctx.cr6.gt) goto loc_82BD1070;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD1070;
	sub_82BC5C08(ctx, base);
loc_82BD1070:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bd1094
	if (ctx.cr6.eq) goto loc_82BD1094;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD1090;
	sub_82BC5C08(ctx, base);
	// b 0x82bd10f0
	goto loc_82BD10F0;
loc_82BD1094:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bne cr6,0x82bd10b8
	if (!ctx.cr6.eq) goto loc_82BD10B8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD10B4;
	sub_82BC5C08(ctx, base);
	// b 0x82bd10f0
	goto loc_82BD10F0;
loc_82BD10B8:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82bd10e0
	if (ctx.cr6.eq) goto loc_82BD10E0;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x82bd10e0
	if (ctx.cr6.eq) goto loc_82BD10E0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD10DC;
	sub_82BC5C08(ctx, base);
	// b 0x82bd10f0
	goto loc_82BD10F0;
loc_82BD10E0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD10F0;
	sub_8219CDA8(ctx, base);
loc_82BD10F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r4,r16,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r16.s64;
	// bl 0x82bc6490
	ctx.lr = 0x82BD110C;
	sub_82BC6490(ctx, base);
loc_82BD110C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD111C;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd0f6c
	if (!ctx.cr6.eq) goto loc_82BD0F6C;
loc_82BD1124:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r4,r16,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r16.s64;
	// bl 0x82bc6490
	ctx.lr = 0x82BD1140;
	sub_82BC6490(ctx, base);
loc_82BD1140:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82BD114C"))) PPC_WEAK_FUNC(sub_82BD114C);
PPC_FUNC_IMPL(__imp__sub_82BD114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1150"))) PPC_WEAK_FUNC(sub_82BD1150);
PPC_FUNC_IMPL(__imp__sub_82BD1150) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r11,1496
	ctx.r5.s64 = ctx.r11.s64 + 1496;
	// addi r4,r10,7588
	ctx.r4.s64 = ctx.r10.s64 + 7588;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82bc7060
	ctx.lr = 0x82BD1174;
	sub_82BC7060(ctx, base);
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

__attribute__((alias("__imp__sub_82BD1188"))) PPC_WEAK_FUNC(sub_82BD1188);
PPC_FUNC_IMPL(__imp__sub_82BD1188) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD11A4;
	sub_821885C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD11DC"))) PPC_WEAK_FUNC(sub_82BD11DC);
PPC_FUNC_IMPL(__imp__sub_82BD11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD11E0"))) PPC_WEAK_FUNC(sub_82BD11E0);
PPC_FUNC_IMPL(__imp__sub_82BD11E0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD11FC;
	sub_821885C0(ctx, base);
	// bl 0x82239f68
	ctx.lr = 0x82BD1200;
	sub_82239F68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1238"))) PPC_WEAK_FUNC(sub_82BD1238);
PPC_FUNC_IMPL(__imp__sub_82BD1238) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1254;
	sub_821885C0(ctx, base);
	// bl 0x82ca7568
	ctx.lr = 0x82BD1258;
	sub_82CA7568(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1290"))) PPC_WEAK_FUNC(sub_82BD1290);
PPC_FUNC_IMPL(__imp__sub_82BD1290) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD12AC;
	sub_821885C0(ctx, base);
	// bl 0x82239e88
	ctx.lr = 0x82BD12B0;
	sub_82239E88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD12E8"))) PPC_WEAK_FUNC(sub_82BD12E8);
PPC_FUNC_IMPL(__imp__sub_82BD12E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1304;
	sub_821885C0(ctx, base);
	// bl 0x82ca77d0
	ctx.lr = 0x82BD1308;
	sub_82CA77D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1340"))) PPC_WEAK_FUNC(sub_82BD1340);
PPC_FUNC_IMPL(__imp__sub_82BD1340) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD135C;
	sub_821885C0(ctx, base);
	// bl 0x82293cd0
	ctx.lr = 0x82BD1360;
	sub_82293CD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1398"))) PPC_WEAK_FUNC(sub_82BD1398);
PPC_FUNC_IMPL(__imp__sub_82BD1398) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD13B4;
	sub_821885C0(ctx, base);
	// bl 0x82ca8d88
	ctx.lr = 0x82BD13B8;
	sub_82CA8D88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD13F0"))) PPC_WEAK_FUNC(sub_82BD13F0);
PPC_FUNC_IMPL(__imp__sub_82BD13F0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD140C;
	sub_821885C0(ctx, base);
	// bl 0x8227efe8
	ctx.lr = 0x82BD1410;
	sub_8227EFE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1448"))) PPC_WEAK_FUNC(sub_82BD1448);
PPC_FUNC_IMPL(__imp__sub_82BD1448) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1464;
	sub_821885C0(ctx, base);
	// bl 0x82260900
	ctx.lr = 0x82BD1468;
	sub_82260900(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD14A0"))) PPC_WEAK_FUNC(sub_82BD14A0);
PPC_FUNC_IMPL(__imp__sub_82BD14A0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD14BC;
	sub_821885C0(ctx, base);
	// bl 0x8227ee80
	ctx.lr = 0x82BD14C0;
	sub_8227EE80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD14F8"))) PPC_WEAK_FUNC(sub_82BD14F8);
PPC_FUNC_IMPL(__imp__sub_82BD14F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1518;
	sub_821885C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1528;
	sub_821885C0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8219ec50
	ctx.lr = 0x82BD1530;
	sub_8219EC50(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD156C"))) PPC_WEAK_FUNC(sub_82BD156C);
PPC_FUNC_IMPL(__imp__sub_82BD156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1570"))) PPC_WEAK_FUNC(sub_82BD1570);
PPC_FUNC_IMPL(__imp__sub_82BD1570) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD158C;
	sub_821885C0(ctx, base);
	// bl 0x822955c0
	ctx.lr = 0x82BD1590;
	sub_822955C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD15C8"))) PPC_WEAK_FUNC(sub_82BD15C8);
PPC_FUNC_IMPL(__imp__sub_82BD15C8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD15E4;
	sub_821885C0(ctx, base);
	// bl 0x8222c3e8
	ctx.lr = 0x82BD15E8;
	sub_8222C3E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1620"))) PPC_WEAK_FUNC(sub_82BD1620);
PPC_FUNC_IMPL(__imp__sub_82BD1620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1640;
	sub_821885C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1650;
	sub_821885C0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82200800
	ctx.lr = 0x82BD1658;
	sub_82200800(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1694"))) PPC_WEAK_FUNC(sub_82BD1694);
PPC_FUNC_IMPL(__imp__sub_82BD1694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1698"))) PPC_WEAK_FUNC(sub_82BD1698);
PPC_FUNC_IMPL(__imp__sub_82BD1698) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x821885c0
	ctx.lr = 0x82BD16BC;
	sub_821885C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca8c58
	ctx.lr = 0x82BD16C4;
	sub_82CA8C58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// li r3,2
	ctx.r3.s64 = 2;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BD171C"))) PPC_WEAK_FUNC(sub_82BD171C);
PPC_FUNC_IMPL(__imp__sub_82BD171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1720"))) PPC_WEAK_FUNC(sub_82BD1720);
PPC_FUNC_IMPL(__imp__sub_82BD1720) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD173C;
	sub_821885C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1774"))) PPC_WEAK_FUNC(sub_82BD1774);
PPC_FUNC_IMPL(__imp__sub_82BD1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1778"))) PPC_WEAK_FUNC(sub_82BD1778);
PPC_FUNC_IMPL(__imp__sub_82BD1778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1798;
	sub_821885C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BD17A8;
	sub_821885C0(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x821fe378
	ctx.lr = 0x82BD17B0;
	sub_821FE378(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD17EC"))) PPC_WEAK_FUNC(sub_82BD17EC);
PPC_FUNC_IMPL(__imp__sub_82BD17EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD17F0"))) PPC_WEAK_FUNC(sub_82BD17F0);
PPC_FUNC_IMPL(__imp__sub_82BD17F0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD180C;
	sub_821885C0(ctx, base);
	// bl 0x821f3c80
	ctx.lr = 0x82BD1810;
	sub_821F3C80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1848"))) PPC_WEAK_FUNC(sub_82BD1848);
PPC_FUNC_IMPL(__imp__sub_82BD1848) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1864;
	sub_821885C0(ctx, base);
	// bl 0x821b1580
	ctx.lr = 0x82BD1868;
	sub_821B1580(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD18A0"))) PPC_WEAK_FUNC(sub_82BD18A0);
PPC_FUNC_IMPL(__imp__sub_82BD18A0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD18BC;
	sub_821885C0(ctx, base);
	// bl 0x821fde30
	ctx.lr = 0x82BD18C0;
	sub_821FDE30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD18F8"))) PPC_WEAK_FUNC(sub_82BD18F8);
PPC_FUNC_IMPL(__imp__sub_82BD18F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1914;
	sub_821885C0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3036);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BD1954"))) PPC_WEAK_FUNC(sub_82BD1954);
PPC_FUNC_IMPL(__imp__sub_82BD1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1958"))) PPC_WEAK_FUNC(sub_82BD1958);
PPC_FUNC_IMPL(__imp__sub_82BD1958) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1974;
	sub_821885C0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BD19B4"))) PPC_WEAK_FUNC(sub_82BD19B4);
PPC_FUNC_IMPL(__imp__sub_82BD19B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD19B8"))) PPC_WEAK_FUNC(sub_82BD19B8);
PPC_FUNC_IMPL(__imp__sub_82BD19B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x821885c0
	ctx.lr = 0x82BD19DC;
	sub_821885C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca8e88
	ctx.lr = 0x82BD19E4;
	sub_82CA8E88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD1A4C"))) PPC_WEAK_FUNC(sub_82BD1A4C);
PPC_FUNC_IMPL(__imp__sub_82BD1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1A50"))) PPC_WEAK_FUNC(sub_82BD1A50);
PPC_FUNC_IMPL(__imp__sub_82BD1A50) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1A70;
	sub_82BC6F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1A80;
	sub_821885C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8227a818
	ctx.lr = 0x82BD1A88;
	sub_8227A818(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BD1AC4"))) PPC_WEAK_FUNC(sub_82BD1AC4);
PPC_FUNC_IMPL(__imp__sub_82BD1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1AC8"))) PPC_WEAK_FUNC(sub_82BD1AC8);
PPC_FUNC_IMPL(__imp__sub_82BD1AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD1AD0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 3;
	// bl 0x821885c0
	ctx.lr = 0x82BD1AF4;
	sub_821885C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82bd1b28
	if (ctx.cr6.lt) goto loc_82BD1B28;
loc_82BD1B04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1B10;
	sub_821885C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82bd1b1c
	if (!ctx.cr6.lt) goto loc_82BD1B1C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_82BD1B1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bd1b04
	if (!ctx.cr6.gt) goto loc_82BD1B04;
loc_82BD1B28:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD1B54"))) PPC_WEAK_FUNC(sub_82BD1B54);
PPC_FUNC_IMPL(__imp__sub_82BD1B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1B58"))) PPC_WEAK_FUNC(sub_82BD1B58);
PPC_FUNC_IMPL(__imp__sub_82BD1B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD1B60;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 3;
	// bl 0x821885c0
	ctx.lr = 0x82BD1B84;
	sub_821885C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82bd1bb8
	if (ctx.cr6.lt) goto loc_82BD1BB8;
loc_82BD1B94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD1BA0;
	sub_821885C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82bd1bac
	if (!ctx.cr6.gt) goto loc_82BD1BAC;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_82BD1BAC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bd1b94
	if (!ctx.cr6.gt) goto loc_82BD1B94;
loc_82BD1BB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD1BE4"))) PPC_WEAK_FUNC(sub_82BD1BE4);
PPC_FUNC_IMPL(__imp__sub_82BD1BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1BE8"))) PPC_WEAK_FUNC(sub_82BD1BE8);
PPC_FUNC_IMPL(__imp__sub_82BD1BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD1BF0;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ca3b80
	ctx.lr = 0x82BD1C00;
	sub_82CA3B80(ctx, base);
	// lis r9,-32767
	ctx.r9.s64 = -2147418112;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// subf r4,r8,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mulhw r9,r11,r7
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// srawi r11,r5,14
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 14;
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,3092(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3092);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r11,15,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blt cr6,0x82bd1dac
	if (ctx.cr6.lt) goto loc_82BD1DAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bd1d2c
	if (ctx.cr6.eq) goto loc_82BD1D2C;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82bd1c8c
	if (ctx.cr6.lt) goto loc_82BD1C8C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,10288
	ctx.r4.s64 = ctx.r11.s64 + 10288;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD1C80;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD1C8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1C94;
	sub_82BC6F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1CA4;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bd1cc4
	if (!ctx.cr6.gt) goto loc_82BD1CC4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,10268
	ctx.r5.s64 = ctx.r11.s64 + 10268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD1CC4;
	sub_82BC67F0(ctx, base);
loc_82BD1CC4:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82BD1CE8;
	sub_8222C3E8(ctx, base);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,3
	ctx.r7.s64 = 3;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadd f9,f1,f10
	ctx.f9.f64 = ctx.f1.f64 + ctx.f10.f64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD1D2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1D34;
	sub_82BC6F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82bd1d54
	if (!ctx.cr6.lt) goto loc_82BD1D54;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,10268
	ctx.r5.s64 = ctx.r11.s64 + 10268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD1D54;
	sub_82BC67F0(ctx, base);
loc_82BD1D54:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82BD1D70;
	sub_8222C3E8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,-40(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -40);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// fadd f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 + ctx.f0.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD1DAC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD1DD4"))) PPC_WEAK_FUNC(sub_82BD1DD4);
PPC_FUNC_IMPL(__imp__sub_82BD1DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1DD8"))) PPC_WEAK_FUNC(sub_82BD1DD8);
PPC_FUNC_IMPL(__imp__sub_82BD1DD8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1DEC;
	sub_82BC6F00(ctx, base);
	// bl 0x82ca3b50
	ctx.lr = 0x82BD1DF0;
	sub_82CA3B50(ctx, base);
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

__attribute__((alias("__imp__sub_82BD1E04"))) PPC_WEAK_FUNC(sub_82BD1E04);
PPC_FUNC_IMPL(__imp__sub_82BD1E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1E08"))) PPC_WEAK_FUNC(sub_82BD1E08);
PPC_FUNC_IMPL(__imp__sub_82BD1E08) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r11,1264
	ctx.r5.s64 = ctx.r11.s64 + 1264;
	// addi r4,r10,10316
	ctx.r4.s64 = ctx.r10.s64 + 10316;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BD1E38;
	sub_82BC7060(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,3
	ctx.r31.s64 = 3;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r8,10324
	ctx.r5.s64 = ctx.r8.s64 + 10324;
	// lfs f0,-28512(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28512);
	ctx.f0.f64 = double(temp.f32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD1E70;
	sub_82BC5EB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,10328
	ctx.r5.s64 = ctx.r10.s64 + 10328;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lfd f0,4048(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4048);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD1EA8;
	sub_82BC5EB0(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,10188
	ctx.r5.s64 = ctx.r7.s64 + 10188;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821e1408
	ctx.lr = 0x82BD1EBC;
	sub_821E1408(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r6,-4704
	ctx.r5.s64 = ctx.r6.s64 + -4704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD1ED0;
	sub_82BC5EB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BD1EEC"))) PPC_WEAK_FUNC(sub_82BD1EEC);
PPC_FUNC_IMPL(__imp__sub_82BD1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1EF0"))) PPC_WEAK_FUNC(sub_82BD1EF0);
PPC_FUNC_IMPL(__imp__sub_82BD1EF0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD1F10;
	sub_82BC5A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd1f30
	if (!ctx.cr6.eq) goto loc_82BD1F30;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD1F30;
	sub_82BC68F0(ctx, base);
loc_82BD1F30:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BD1F7C"))) PPC_WEAK_FUNC(sub_82BD1F7C);
PPC_FUNC_IMPL(__imp__sub_82BD1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD1F80"))) PPC_WEAK_FUNC(sub_82BD1F80);
PPC_FUNC_IMPL(__imp__sub_82BD1F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD1F88;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD1F9C;
	sub_82BC5A88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bd1fc0
	if (!ctx.cr6.eq) goto loc_82BD1FC0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD1FC0;
	sub_82BC68F0(ctx, base);
loc_82BD1FC0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD1FCC;
	sub_82BC6F00(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bd1fe0
	if (ctx.cr6.lt) goto loc_82BD1FE0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bd1fe8
	goto loc_82BD1FE8;
loc_82BD1FE0:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82BD1FE8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd2018
	if (!ctx.cr6.lt) goto loc_82BD2018;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd2018
	if (ctx.cr6.eq) goto loc_82BD2018;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd2020
	if (ctx.cr6.gt) goto loc_82BD2020;
loc_82BD2018:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bd2038
	goto loc_82BD2038;
loc_82BD2020:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD202C;
	sub_82BC6F00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82bd2040
	if (!ctx.cr6.lt) goto loc_82BD2040;
loc_82BD2038:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BD2040:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x82bd204c
	if (!ctx.cr6.lt) goto loc_82BD204C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82BD204C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bd2058
	if (!ctx.cr6.gt) goto loc_82BD2058;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD2058:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x82bd2084
	if (ctx.cr6.gt) goto loc_82BD2084;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x8219cda8
	ctx.lr = 0x82BD2078;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD2084:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// bl 0x8219cda8
	ctx.lr = 0x82BD2094;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD20A0"))) PPC_WEAK_FUNC(sub_82BD20A0);
PPC_FUNC_IMPL(__imp__sub_82BD20A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD20A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD20BC;
	sub_82BC5A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bd20e0
	if (!ctx.cr6.eq) goto loc_82BD20E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD20E0;
	sub_82BC68F0(ctx, base);
loc_82BD20E0:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82bd21a8
	if (ctx.cr6.eq) goto loc_82BD21A8;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x82bd210c
	goto loc_82BD210C;
loc_82BD2108:
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82BD210C:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd218c
	if (ctx.cr6.lt) goto loc_82BD218C;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd218c
	if (ctx.cr0.eq) goto loc_82BD218C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd2144
	if (ctx.cr6.lt) goto loc_82BD2144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD2144;
	sub_8227B8B8(ctx, base);
loc_82BD2144:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD2158;
	sub_8227BA30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82bc75d8
	ctx.lr = 0x82BD2188;
	sub_82BC75D8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD218C:
	// lbzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82bd2108
	if (!ctx.cr6.eq) goto loc_82BD2108;
loc_82BD21A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD21B0;
	sub_82BC7568(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82bc6490
	ctx.lr = 0x82BD21BC;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD21C8"))) PPC_WEAK_FUNC(sub_82BD21C8);
PPC_FUNC_IMPL(__imp__sub_82BD21C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD21D0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD21E4;
	sub_82BC5A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bd2208
	if (!ctx.cr6.eq) goto loc_82BD2208;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD2208;
	sub_82BC68F0(ctx, base);
loc_82BD2208:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bd2280
	if (ctx.cr6.eq) goto loc_82BD2280;
loc_82BD2230:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd2254
	if (ctx.cr6.lt) goto loc_82BD2254;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD2244;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd2254
	if (ctx.cr6.eq) goto loc_82BD2254;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD2254;
	sub_82BC75D8(ctx, base);
loc_82BD2254:
	// lbzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x821ee9e8
	ctx.lr = 0x82BD225C;
	sub_821EE9E8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x82bd2230
	if (ctx.cr6.lt) goto loc_82BD2230;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82BD2280:
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd22ec
	if (ctx.cr0.eq) goto loc_82BD22EC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd22a8
	if (ctx.cr6.lt) goto loc_82BD22A8;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD22A8;
	sub_8227B8B8(ctx, base);
loc_82BD22A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD22BC;
	sub_8227BA30(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_82BD22EC:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82bc6490
	ctx.lr = 0x82BD22F4;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD2300"))) PPC_WEAK_FUNC(sub_82BD2300);
PPC_FUNC_IMPL(__imp__sub_82BD2300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD2308;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD231C;
	sub_82BC5A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bd2340
	if (!ctx.cr6.eq) goto loc_82BD2340;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD2340;
	sub_82BC68F0(ctx, base);
loc_82BD2340:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bd23b8
	if (ctx.cr6.eq) goto loc_82BD23B8;
loc_82BD2368:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd238c
	if (ctx.cr6.lt) goto loc_82BD238C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD237C;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd238c
	if (ctx.cr6.eq) goto loc_82BD238C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD238C;
	sub_82BC75D8(ctx, base);
loc_82BD238C:
	// lbzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x821eeb10
	ctx.lr = 0x82BD2394;
	sub_821EEB10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x82bd2368
	if (ctx.cr6.lt) goto loc_82BD2368;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82BD23B8:
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd2424
	if (ctx.cr0.eq) goto loc_82BD2424;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd23e0
	if (ctx.cr6.lt) goto loc_82BD23E0;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD23E0;
	sub_8227B8B8(ctx, base);
loc_82BD23E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD23F4;
	sub_8227BA30(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_82BD2424:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82bc6490
	ctx.lr = 0x82BD242C;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD2438"))) PPC_WEAK_FUNC(sub_82BD2438);
PPC_FUNC_IMPL(__imp__sub_82BD2438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD2440;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD2454;
	sub_82BC5A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bd2478
	if (!ctx.cr6.eq) goto loc_82BD2478;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD2478;
	sub_82BC68F0(ctx, base);
loc_82BD2478:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD2484;
	sub_82BC6F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ble cr6,0x82bd24c4
	if (!ctx.cr6.gt) goto loc_82BD24C4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD24A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82bc7670
	ctx.lr = 0x82BD24BC;
	sub_82BC7670(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82bd24a8
	if (ctx.cr6.gt) goto loc_82BD24A8;
loc_82BD24C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD24CC;
	sub_82BC7568(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82bc6490
	ctx.lr = 0x82BD24D8;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD24E4"))) PPC_WEAK_FUNC(sub_82BD24E4);
PPC_FUNC_IMPL(__imp__sub_82BD24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD24E8"))) PPC_WEAK_FUNC(sub_82BD24E8);
PPC_FUNC_IMPL(__imp__sub_82BD24E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD24F0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD2504;
	sub_82BC5A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bd2528
	if (!ctx.cr6.eq) goto loc_82BD2528;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD2528;
	sub_82BC68F0(ctx, base);
loc_82BD2528:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd255c
	if (!ctx.cr6.lt) goto loc_82BD255C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd255c
	if (ctx.cr6.eq) goto loc_82BD255C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd2568
	if (ctx.cr6.gt) goto loc_82BD2568;
loc_82BD255C:
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82bd258c
	goto loc_82BD258C;
loc_82BD2568:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD2574;
	sub_82BC6F00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bd2584
	if (ctx.cr6.lt) goto loc_82BD2584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82bd258c
	goto loc_82BD258C;
loc_82BD2584:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82BD258C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd25b4
	if (!ctx.cr6.lt) goto loc_82BD25B4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd25b4
	if (ctx.cr6.eq) goto loc_82BD25B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd25bc
	if (ctx.cr6.gt) goto loc_82BD25BC;
loc_82BD25B4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82bd25cc
	goto loc_82BD25CC;
loc_82BD25BC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD25C8;
	sub_82BC6F00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BD25CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82bd25dc
	if (!ctx.cr6.lt) goto loc_82BD25DC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BD25DC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82bd25e8
	if (ctx.cr6.gt) goto loc_82BD25E8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82BD25E8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82bd25f4
	if (!ctx.cr6.gt) goto loc_82BD25F4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD25F4:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bd2608
	if (!ctx.cr6.gt) goto loc_82BD2608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD2608:
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// addi r29,r9,9532
	ctx.r29.s64 = ctx.r9.s64 + 9532;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82bd2630
	if (ctx.cr6.gt) goto loc_82BD2630;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2630;
	sub_82BC6A18(ctx, base);
loc_82BD2630:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6d80
	ctx.lr = 0x82BD2640;
	sub_82BC6D80(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82bd2714
	if (ctx.cr6.lt) goto loc_82BD2714;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82BD2664:
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x82bd2664
	if (!ctx.cr0.eq) goto loc_82BD2664;
loc_82BD2714:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82bd275c
	if (!ctx.cr6.lt) goto loc_82BD275C;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82BD2724:
	// lbzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// blt cr6,0x82bd2724
	if (ctx.cr6.lt) goto loc_82BD2724;
loc_82BD275C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD2768"))) PPC_WEAK_FUNC(sub_82BD2768);
PPC_FUNC_IMPL(__imp__sub_82BD2768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BD2770;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r27,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r7.s32 >> 3;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x82bd28a0
	if (ctx.cr6.lt) goto loc_82BD28A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r26,r11,1744
	ctx.r26.s64 = ctx.r11.s64 + 1744;
	// addi r25,r10,9556
	ctx.r25.s64 = ctx.r10.s64 + 9556;
loc_82BD27B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD27C4;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd27e8
	if (ctx.cr6.eq) goto loc_82BD27E8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD27D8;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd27e8
	if (!ctx.cr6.eq) goto loc_82BD27E8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82bd2800
	goto loc_82BD2800;
loc_82BD27E8:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82bd2838
	if (!ctx.cr6.eq) goto loc_82BD2838;
loc_82BD2800:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD280C;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd2838
	if (ctx.cr6.eq) goto loc_82BD2838;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD2820;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd2838
	if (!ctx.cr6.eq) goto loc_82BD2838;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD2838;
	sub_82BC68F0(ctx, base);
loc_82BD2838:
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82bd2854
	if (ctx.cr6.eq) goto loc_82BD2854;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD2854;
	sub_82BC67F0(ctx, base);
loc_82BD2854:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r1,636
	ctx.r10.s64 = ctx.r1.s64 + 636;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd287c
	if (ctx.cr6.lt) goto loc_82BD287C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bc7568
	ctx.lr = 0x82BD286C;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd287c
	if (ctx.cr6.eq) goto loc_82BD287C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD287C;
	sub_82BC75D8(ctx, base);
loc_82BD287C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ble cr6,0x82bd27b8
	if (!ctx.cr6.gt) goto loc_82BD27B8;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82BD28A0:
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd290c
	if (ctx.cr0.eq) goto loc_82BD290C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd28c8
	if (ctx.cr6.lt) goto loc_82BD28C8;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD28C8;
	sub_8227B8B8(ctx, base);
loc_82BD28C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD28DC;
	sub_8227BA30(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
loc_82BD290C:
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82bc6490
	ctx.lr = 0x82BD2914;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BD2920"))) PPC_WEAK_FUNC(sub_82BD2920);
PPC_FUNC_IMPL(__imp__sub_82BD2920) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82bc7670
	ctx.lr = 0x82BD2934;
	sub_82BC7670(ctx, base);
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

__attribute__((alias("__imp__sub_82BD2948"))) PPC_WEAK_FUNC(sub_82BD2948);
PPC_FUNC_IMPL(__imp__sub_82BD2948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd2988
	if (!ctx.cr6.lt) goto loc_82BD2988;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd2988
	if (ctx.cr6.eq) goto loc_82BD2988;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bd29a0
	if (ctx.cr6.eq) goto loc_82BD29A0;
loc_82BD2988:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD29A0;
	sub_82BC68F0(ctx, base);
loc_82BD29A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bd29e0
	if (!ctx.cr6.lt) goto loc_82BD29E0;
loc_82BD29B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd29b8
	if (ctx.cr6.lt) goto loc_82BD29B8;
loc_82BD29E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r8,-32067
	ctx.r8.s64 = -2101542912;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r4,r8,10528
	ctx.r4.s64 = ctx.r8.s64 + 10528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc61e0
	ctx.lr = 0x82BD2A10;
	sub_82BC61E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd2a28
	if (ctx.cr6.eq) goto loc_82BD2A28;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9572
	ctx.r4.s64 = ctx.r11.s64 + 9572;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2A28;
	sub_82BC6A18(ctx, base);
loc_82BD2A28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD2A30;
	sub_82BC7568(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82bc6490
	ctx.lr = 0x82BD2A3C;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD2A54"))) PPC_WEAK_FUNC(sub_82BD2A54);
PPC_FUNC_IMPL(__imp__sub_82BD2A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2A58"))) PPC_WEAK_FUNC(sub_82BD2A58);
PPC_FUNC_IMPL(__imp__sub_82BD2A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD2A60;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82bd2af8
	if (ctx.cr6.eq) goto loc_82BD2AF8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82bd2a90
	if (ctx.cr6.eq) goto loc_82BD2A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD2A90:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82bd2aa0
	if (!ctx.cr6.eq) goto loc_82BD2AA0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD2AA0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,9688
	ctx.r30.s64 = ctx.r11.s64 + 9688;
loc_82BD2AA8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd2ac0
	if (!ctx.cr6.eq) goto loc_82BD2AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2AC0;
	sub_82BC6A18(ctx, base);
loc_82BD2AC0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82bd2ae0
	if (!ctx.cr6.eq) goto loc_82BD2AE0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd2ae0
	if (ctx.cr6.eq) goto loc_82BD2AE0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD2AE0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x82bd2aa8
	if (!ctx.cr6.eq) goto loc_82BD2AA8;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD2AF8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd2b14
	if (!ctx.cr6.eq) goto loc_82BD2B14;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r11,9652
	ctx.r4.s64 = ctx.r11.s64 + 9652;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2B14;
	sub_82BC6A18(ctx, base);
loc_82BD2B14:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD2B20"))) PPC_WEAK_FUNC(sub_82BD2B20);
PPC_FUNC_IMPL(__imp__sub_82BD2B20) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ee9e8
	ctx.lr = 0x82BD2B44;
	sub_821EE9E8(ctx, base);
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgt cr6,0x82bd2cc0
	if (ctx.cr6.gt) goto loc_82BD2CC0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,11112
	ctx.r12.s64 = ctx.r12.s64 + 11112;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BD2BD0;
	case 1:
		goto loc_82BD2CC0;
	case 2:
		goto loc_82BD2BE8;
	case 3:
		goto loc_82BD2BFC;
	case 4:
		goto loc_82BD2CC0;
	case 5:
		goto loc_82BD2CC0;
	case 6:
		goto loc_82BD2CC0;
	case 7:
		goto loc_82BD2CC0;
	case 8:
		goto loc_82BD2CC0;
	case 9:
		goto loc_82BD2CC0;
	case 10:
		goto loc_82BD2CC0;
	case 11:
		goto loc_82BD2C10;
	case 12:
		goto loc_82BD2CC0;
	case 13:
		goto loc_82BD2CC0;
	case 14:
		goto loc_82BD2CC0;
	case 15:
		goto loc_82BD2C24;
	case 16:
		goto loc_82BD2CC0;
	case 17:
		goto loc_82BD2CC0;
	case 18:
		goto loc_82BD2C38;
	case 19:
		goto loc_82BD2CC0;
	case 20:
		goto loc_82BD2C4C;
	case 21:
		goto loc_82BD2CC0;
	case 22:
		goto loc_82BD2C60;
	case 23:
		goto loc_82BD2C78;
	case 24:
		goto loc_82BD2CC0;
	case 25:
		goto loc_82BD2C8C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,11216(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11216);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11240(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11240);
	// lwz r21,11260(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11260);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11280(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11280);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11300(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11300);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11320(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11320);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11340(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11360(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11360);
	// lwz r21,11384(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11384);
	// lwz r21,11456(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11456);
	// lwz r21,11404(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11404);
loc_82BD2BD0:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2BD4;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,30,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2BE8:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2BEC;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2BFC:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C00;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C10:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C14;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C24:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C28;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C38:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C3C;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C4C:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C50;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C60:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C64;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,29,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C78:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C7C;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// b 0x82bd2c94
	goto loc_82BD2C94;
loc_82BD2C8C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82BD2C94:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD2C98;
	sub_82CB7D90(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bd2cb4
	if (ctx.cr6.eq) goto loc_82BD2CB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bd2ccc
	goto loc_82BD2CCC;
loc_82BD2CB4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82bd2ccc
	goto loc_82BD2CCC;
loc_82BD2CC0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82BD2CCC:
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

__attribute__((alias("__imp__sub_82BD2CE4"))) PPC_WEAK_FUNC(sub_82BD2CE4);
PPC_FUNC_IMPL(__imp__sub_82BD2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2CE8"))) PPC_WEAK_FUNC(sub_82BD2CE8);
PPC_FUNC_IMPL(__imp__sub_82BD2CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD2CF0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82bd2d14
	if (!ctx.cr6.eq) goto loc_82BD2D14;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82BD2D14:
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bd2dac
	if (!ctx.cr6.lt) goto loc_82BD2DAC;
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
loc_82BD2D24:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82bd2d58
	if (!ctx.cr6.eq) goto loc_82BD2D58;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82bd2b20
	ctx.lr = 0x82BD2D44;
	sub_82BD2B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd2d9c
	if (ctx.cr6.eq) goto loc_82BD2D9C;
loc_82BD2D4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD2D58:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x82bd2d90
	if (!ctx.cr6.eq) goto loc_82BD2D90;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82bd2d90
	if (!ctx.cr6.lt) goto loc_82BD2D90;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82bd2d9c
	if (ctx.cr6.gt) goto loc_82BD2D9C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bd2d4c
	if (!ctx.cr6.gt) goto loc_82BD2D4C;
	// b 0x82bd2d9c
	goto loc_82BD2D9C;
loc_82BD2D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82bd2d4c
	if (ctx.cr6.eq) goto loc_82BD2D4C;
loc_82BD2D9C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82bd2d24
	if (ctx.cr6.lt) goto loc_82BD2D24;
loc_82BD2DAC:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD2DBC"))) PPC_WEAK_FUNC(sub_82BD2DBC);
PPC_FUNC_IMPL(__imp__sub_82BD2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2DC0"))) PPC_WEAK_FUNC(sub_82BD2DC0);
PPC_FUNC_IMPL(__imp__sub_82BD2DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BD2DC8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd2e64
	if (!ctx.cr6.lt) goto loc_82BD2E64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BD2DF0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82bd2e38
	if (ctx.cr6.eq) goto loc_82BD2E38;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82bd2e48
	if (ctx.cr6.eq) goto loc_82BD2E48;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82bd2e28
	if (ctx.cr6.eq) goto loc_82BD2E28;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82bd2e40
	goto loc_82BD2E40;
loc_82BD2E28:
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd2ce8
	ctx.lr = 0x82BD2E34;
	sub_82BD2CE8(ctx, base);
	// b 0x82bd2e40
	goto loc_82BD2E40;
loc_82BD2E38:
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x82bd2b20
	ctx.lr = 0x82BD2E40;
	sub_82BD2B20(ctx, base);
loc_82BD2E40:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd2e5c
	if (ctx.cr6.eq) goto loc_82BD2E5C;
loc_82BD2E48:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd2df0
	if (ctx.cr6.lt) goto loc_82BD2DF0;
loc_82BD2E5C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82bd2e88
	if (ctx.cr6.lt) goto loc_82BD2E88;
loc_82BD2E64:
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
loc_82BD2E68:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r26
	ctx.r4.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD2E78;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd2e8c
	if (!ctx.cr6.eq) goto loc_82BD2E8C;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82bd2e68
	if (!ctx.cr0.lt) goto loc_82BD2E68;
loc_82BD2E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD2E8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BD2E94"))) PPC_WEAK_FUNC(sub_82BD2E94);
PPC_FUNC_IMPL(__imp__sub_82BD2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2E98"))) PPC_WEAK_FUNC(sub_82BD2E98);
PPC_FUNC_IMPL(__imp__sub_82BD2E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD2EA0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82bd2ed0
	if (ctx.cr6.lt) goto loc_82BD2ED0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,9740
	ctx.r4.s64 = ctx.r11.s64 + 9740;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2ED0;
	sub_82BC6A18(ctx, base);
loc_82BD2ED0:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD2F00;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd2f14
	if (!ctx.cr6.eq) goto loc_82BD2F14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82BD2F14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD2F1C"))) PPC_WEAK_FUNC(sub_82BD2F1C);
PPC_FUNC_IMPL(__imp__sub_82BD2F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD2F20"))) PPC_WEAK_FUNC(sub_82BD2F20);
PPC_FUNC_IMPL(__imp__sub_82BD2F20) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addic. r3,r5,-49
	ctx.xer.ca = ctx.r5.u32 > 48;
	ctx.r3.s64 = ctx.r5.s64 + -49;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82bd2f64
	if (ctx.cr0.lt) goto loc_82BD2F64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82bd2f64
	if (!ctx.cr6.lt) goto loc_82BD2F64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bd2f74
	if (!ctx.cr6.eq) goto loc_82BD2F74;
loc_82BD2F64:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,9604
	ctx.r4.s64 = ctx.r11.s64 + 9604;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD2F74;
	sub_82BC6A18(ctx, base);
loc_82BD2F74:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bd2fdc
	if (ctx.cr6.lt) goto loc_82BD2FDC;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// beq cr6,0x82bd2fd0
	if (ctx.cr6.eq) goto loc_82BD2FD0;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82BD2FB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bd2fd0
	if (!ctx.cr0.eq) goto loc_82BD2FD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bd2fb0
	if (!ctx.cr6.eq) goto loc_82BD2FB0;
loc_82BD2FD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// beq cr6,0x82bd2fe0
	if (ctx.cr6.eq) goto loc_82BD2FE0;
loc_82BD2FDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD2FE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD2FF8"))) PPC_WEAK_FUNC(sub_82BD2FF8);
PPC_FUNC_IMPL(__imp__sub_82BD2FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BD3000;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r26,r11,9720
	ctx.r26.s64 = ctx.r11.s64 + 9720;
	// addi r25,r10,9760
	ctx.r25.s64 = ctx.r10.s64 + 9760;
loc_82BD3020:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x82bd327c
	if (ctx.cr6.gt) goto loc_82BD327C;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,12360
	ctx.r12.s64 = ctx.r12.s64 + 12360;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BD3480;
	case 1:
		goto loc_82BD327C;
	case 2:
		goto loc_82BD327C;
	case 3:
		goto loc_82BD327C;
	case 4:
		goto loc_82BD327C;
	case 5:
		goto loc_82BD327C;
	case 6:
		goto loc_82BD327C;
	case 7:
		goto loc_82BD327C;
	case 8:
		goto loc_82BD327C;
	case 9:
		goto loc_82BD327C;
	case 10:
		goto loc_82BD327C;
	case 11:
		goto loc_82BD327C;
	case 12:
		goto loc_82BD327C;
	case 13:
		goto loc_82BD327C;
	case 14:
		goto loc_82BD327C;
	case 15:
		goto loc_82BD327C;
	case 16:
		goto loc_82BD327C;
	case 17:
		goto loc_82BD327C;
	case 18:
		goto loc_82BD327C;
	case 19:
		goto loc_82BD327C;
	case 20:
		goto loc_82BD327C;
	case 21:
		goto loc_82BD327C;
	case 22:
		goto loc_82BD327C;
	case 23:
		goto loc_82BD327C;
	case 24:
		goto loc_82BD327C;
	case 25:
		goto loc_82BD327C;
	case 26:
		goto loc_82BD327C;
	case 27:
		goto loc_82BD327C;
	case 28:
		goto loc_82BD327C;
	case 29:
		goto loc_82BD327C;
	case 30:
		goto loc_82BD327C;
	case 31:
		goto loc_82BD327C;
	case 32:
		goto loc_82BD327C;
	case 33:
		goto loc_82BD327C;
	case 34:
		goto loc_82BD327C;
	case 35:
		goto loc_82BD327C;
	case 36:
		goto loc_82BD3270;
	case 37:
		goto loc_82BD30F0;
	case 38:
		goto loc_82BD327C;
	case 39:
		goto loc_82BD327C;
	case 40:
		goto loc_82BD33BC;
	case 41:
		goto loc_82BD33F8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,13440(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13440);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12912(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12912);
	// lwz r21,12528(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12528);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,12924(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12924);
	// lwz r21,13244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13244);
	// lwz r21,13304(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13304);
loc_82BD30F0:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82bd31cc
	if (ctx.cr6.eq) goto loc_82BD31CC;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x82bd3148
	if (ctx.cr6.eq) goto loc_82BD3148;
	// lbz r30,1(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x82cb7d90
	ctx.lr = 0x82BD3110;
	sub_82CB7D90(ctx, base);
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bd327c
	if (ctx.cr6.eq) goto loc_82BD327C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2f20
	ctx.lr = 0x82BD3134;
	sub_82BD2F20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd3264
	if (ctx.cr6.eq) goto loc_82BD3264;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x82bd3020
	goto loc_82BD3020;
loc_82BD3148:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82bd3164
	if (ctx.cr6.eq) goto loc_82BD3164;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82bc6a18
	ctx.lr = 0x82BD3164;
	sub_82BC6A18(ctx, base);
loc_82BD3164:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2a58
	ctx.lr = 0x82BD3170;
	sub_82BD2A58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bd3188
	if (!ctx.cr6.eq) goto loc_82BD3188;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bd3190
	goto loc_82BD3190;
loc_82BD3188:
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82BD3190:
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82bd2ce8
	ctx.lr = 0x82BD31A4;
	sub_82BD2CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd3264
	if (!ctx.cr6.eq) goto loc_82BD3264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bd2ce8
	ctx.lr = 0x82BD31BC;
	sub_82BD2CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3264
	if (ctx.cr6.eq) goto loc_82BD3264;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82bd3020
	goto loc_82BD3020;
loc_82BD31CC:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd31e4
	if (ctx.cr6.eq) goto loc_82BD31E4;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd31f0
	if (!ctx.cr6.eq) goto loc_82BD31F0;
loc_82BD31E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82bc6a18
	ctx.lr = 0x82BD31F0;
	sub_82BC6A18(ctx, base);
loc_82BD31F0:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82bd3264
	if (!ctx.cr6.eq) goto loc_82BD3264;
	// lbz r10,3(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd3264
	if (!ctx.cr6.lt) goto loc_82BD3264;
loc_82BD3224:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bd324c
	if (!ctx.cr6.eq) goto loc_82BD324C;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82bd3258
	if (!ctx.cr0.eq) goto loc_82BD3258;
	// addic. r31,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r31.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bd3264
	if (ctx.cr0.eq) goto loc_82BD3264;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82bd3020
	goto loc_82BD3020;
loc_82BD324C:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82bd3258
	if (!ctx.cr6.eq) goto loc_82BD3258;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82BD3258:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd3224
	if (ctx.cr6.lt) goto loc_82BD3224;
loc_82BD3264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD3268:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD3270:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd348c
	if (ctx.cr6.eq) goto loc_82BD348C;
loc_82BD327C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2a58
	ctx.lr = 0x82BD3288;
	sub_82BD2A58(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd32f8
	if (!ctx.cr6.lt) goto loc_82BD32F8;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82bd32e0
	if (ctx.cr6.eq) goto loc_82BD32E0;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82bd32f0
	if (ctx.cr6.eq) goto loc_82BD32F0;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82bd32d0
	if (ctx.cr6.eq) goto loc_82BD32D0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82bd32e8
	goto loc_82BD32E8;
loc_82BD32D0:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bd2ce8
	ctx.lr = 0x82BD32DC;
	sub_82BD2CE8(ctx, base);
	// b 0x82bd32e8
	goto loc_82BD32E8;
loc_82BD32E0:
	// lbz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x82bd2b20
	ctx.lr = 0x82BD32E8;
	sub_82BD2B20(ctx, base);
loc_82BD32E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd32f8
	if (ctx.cr6.eq) goto loc_82BD32F8;
loc_82BD32F0:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82bd32fc
	goto loc_82BD32FC;
loc_82BD32F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD32FC:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-42
	ctx.r11.s64 = ctx.r11.s64 + -42;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82bd33a8
	if (ctx.cr6.gt) goto loc_82BD33A8;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,13096
	ctx.r12.s64 = ctx.r12.s64 + 13096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BD34A8;
	case 1:
		goto loc_82BD34C4;
	case 2:
		goto loc_82BD33A8;
	case 3:
		goto loc_82BD34E8;
	case 4:
		goto loc_82BD33A8;
	case 5:
		goto loc_82BD33A8;
	case 6:
		goto loc_82BD33A8;
	case 7:
		goto loc_82BD33A8;
	case 8:
		goto loc_82BD33A8;
	case 9:
		goto loc_82BD33A8;
	case 10:
		goto loc_82BD33A8;
	case 11:
		goto loc_82BD33A8;
	case 12:
		goto loc_82BD33A8;
	case 13:
		goto loc_82BD33A8;
	case 14:
		goto loc_82BD33A8;
	case 15:
		goto loc_82BD33A8;
	case 16:
		goto loc_82BD33A8;
	case 17:
		goto loc_82BD33A8;
	case 18:
		goto loc_82BD33A8;
	case 19:
		goto loc_82BD33A8;
	case 20:
		goto loc_82BD33A8;
	case 21:
		goto loc_82BD3380;
	default:
		__builtin_unreachable();
	}
	// lwz r21,13480(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13480);
	// lwz r21,13508(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13508);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13544(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13544);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13224);
	// lwz r21,13184(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
loc_82BD3380:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bd33a0
	if (ctx.cr6.eq) goto loc_82BD33A0;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD3398;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd3268
	if (!ctx.cr6.eq) goto loc_82BD3268;
loc_82BD33A0:
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// b 0x82bd3020
	goto loc_82BD3020;
loc_82BD33A8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bd3264
	if (ctx.cr6.eq) goto loc_82BD3264;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82bd3020
	goto loc_82BD3020;
loc_82BD33BC:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82bd33e8
	if (!ctx.cr6.eq) goto loc_82BD33E8;
	// li r6,-2
	ctx.r6.s64 = -2;
	// addi r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 2;
	// bl 0x82bd2e98
	ctx.lr = 0x82BD33E0;
	sub_82BD2E98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD33E8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82bd2e98
	ctx.lr = 0x82BD33F0;
	sub_82BD2E98(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD33F8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82bd3428
	if (ctx.cr0.lt) goto loc_82BD3428;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_82BD3410:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82bd343c
	if (ctx.cr6.eq) goto loc_82BD343C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x82bd3410
	if (!ctx.cr0.lt) goto loc_82BD3410;
loc_82BD3428:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r11,9628
	ctx.r4.s64 = ctx.r11.s64 + 9628;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD3438;
	sub_82BC6A18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82BD343C:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD3468;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd3268
	if (!ctx.cr6.eq) goto loc_82BD3268;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD3480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD348C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bd3268
	if (ctx.cr6.eq) goto loc_82BD3268;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD34A8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2dc0
	ctx.lr = 0x82BD34BC;
	sub_82BD2DC0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD34C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bd3264
	if (ctx.cr6.eq) goto loc_82BD3264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2dc0
	ctx.lr = 0x82BD34E0;
	sub_82BD2DC0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82BD34E8:
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD34FC;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd3268
	if (!ctx.cr6.eq) goto loc_82BD3268;
loc_82BD3504:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd3264
	if (!ctx.cr6.lt) goto loc_82BD3264;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82bd3558
	if (ctx.cr6.eq) goto loc_82BD3558;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82bd3568
	if (ctx.cr6.eq) goto loc_82BD3568;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82bd3548
	if (ctx.cr6.eq) goto loc_82BD3548;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82bd3560
	goto loc_82BD3560;
loc_82BD3548:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bd2ce8
	ctx.lr = 0x82BD3554;
	sub_82BD2CE8(ctx, base);
	// b 0x82bd3560
	goto loc_82BD3560;
loc_82BD3558:
	// lbz r4,1(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// bl 0x82bd2b20
	ctx.lr = 0x82BD3560;
	sub_82BD2B20(ctx, base);
loc_82BD3560:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3264
	if (ctx.cr6.eq) goto loc_82BD3264;
loc_82BD3568:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD357C;
	sub_82BD2FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd3504
	if (ctx.cr6.eq) goto loc_82BD3504;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BD358C"))) PPC_WEAK_FUNC(sub_82BD358C);
PPC_FUNC_IMPL(__imp__sub_82BD358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3590"))) PPC_WEAK_FUNC(sub_82BD3590);
PPC_FUNC_IMPL(__imp__sub_82BD3590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD3598;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bd35e4
	if (ctx.cr6.lt) goto loc_82BD35E4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82bd35d0
	if (!ctx.cr6.eq) goto loc_82BD35D0;
	// subf r5,r4,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r4.s64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD35C8;
	sub_8219CDA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD35D0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,9604
	ctx.r4.s64 = ctx.r11.s64 + 9604;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD35DC;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD35E4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82bd3628
	if (!ctx.cr6.eq) goto loc_82BD3628;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,9796
	ctx.r4.s64 = ctx.r11.s64 + 9796;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD3608;
	sub_82BC6A18(ctx, base);
loc_82BD3608:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8219cda8
	ctx.lr = 0x82BD3620;
	sub_8219CDA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD3628:
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x82bd3608
	if (!ctx.cr6.eq) goto loc_82BD3608;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD3684"))) PPC_WEAK_FUNC(sub_82BD3684);
PPC_FUNC_IMPL(__imp__sub_82BD3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3688"))) PPC_WEAK_FUNC(sub_82BD3688);
PPC_FUNC_IMPL(__imp__sub_82BD3688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD3690;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82bd36b8
	if (!ctx.cr6.eq) goto loc_82BD36B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bd36b8
	if (ctx.cr6.eq) goto loc_82BD36B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82BD36B8:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5510
	ctx.lr = 0x82BD36C8;
	sub_82BC5510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd36e8
	if (!ctx.cr6.eq) goto loc_82BD36E8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r11,9740
	ctx.r5.s64 = ctx.r11.s64 + 9740;
	// addi r4,r10,8100
	ctx.r4.s64 = ctx.r10.s64 + 8100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD36E8;
	sub_82BC6A18(ctx, base);
loc_82BD36E8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bd3714
	if (!ctx.cr6.gt) goto loc_82BD3714;
loc_82BD36F4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd3590
	ctx.lr = 0x82BD3708;
	sub_82BD3590(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82bd36f4
	if (ctx.cr6.lt) goto loc_82BD36F4;
loc_82BD3714:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD3720"))) PPC_WEAK_FUNC(sub_82BD3720);
PPC_FUNC_IMPL(__imp__sub_82BD3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BD3728;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD3740;
	sub_82BC5A88(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r31,r11,1744
	ctx.r31.s64 = ctx.r11.s64 + 1744;
	// bne cr6,0x82bd3764
	if (!ctx.cr6.eq) goto loc_82BD3764;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD3764;
	sub_82BC68F0(ctx, base);
loc_82BD3764:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD3774;
	sub_82BC5A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82bd3790
	if (!ctx.cr6.eq) goto loc_82BD3790;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD3790;
	sub_82BC68F0(ctx, base);
loc_82BD3790:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd37c4
	if (!ctx.cr6.lt) goto loc_82BD37C4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd37c4
	if (ctx.cr6.eq) goto loc_82BD37C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd37cc
	if (ctx.cr6.gt) goto loc_82BD37CC;
loc_82BD37C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd37e8
	goto loc_82BD37E8;
loc_82BD37CC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD37D8;
	sub_82BC6F00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82bd37e8
	if (!ctx.cr6.lt) goto loc_82BD37E8;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82BD37E8:
	// addic. r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// bge 0x82bd37fc
	if (!ctx.cr0.lt) goto loc_82BD37FC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82bd3808
	goto loc_82BD3808;
loc_82BD37FC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82bd3808
	if (!ctx.cr6.gt) goto loc_82BD3808;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82BD3808:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82bd3978
	if (ctx.cr6.eq) goto loc_82BD3978;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BD381C;
	sub_82BC5A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd383c
	if (!ctx.cr6.eq) goto loc_82BD383C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,9816
	ctx.r4.s64 = ctx.r11.s64 + 9816;
	// bl 0x82ca8bc8
	ctx.lr = 0x82BD3834;
	sub_82CA8BC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd3978
	if (!ctx.cr6.eq) goto loc_82BD3978;
loc_82BD383C:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r28,r24,r31
	ctx.r28.u64 = ctx.r24.u64 + ctx.r31.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82bd3858
	if (!ctx.cr6.eq) goto loc_82BD3858;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82bd3900
	goto loc_82BD3900;
loc_82BD3858:
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bd38dc
	if (ctx.cr6.gt) goto loc_82BD38DC;
	// addi r29,r26,-1
	ctx.r29.s64 = ctx.r26.s64 + -1;
	// subf. r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82bd38dc
	if (ctx.cr0.eq) goto loc_82BD38DC;
loc_82BD386C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82ca5e30
	ctx.lr = 0x82BD3880;
	sub_82CA5E30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd38dc
	if (ctx.cr6.eq) goto loc_82BD38DC;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bd38c4
	if (ctx.cr6.eq) goto loc_82BD38C4;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82BD38A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82bd38c4
	if (!ctx.cr0.eq) goto loc_82BD38C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82bd38a4
	if (!ctx.cr6.eq) goto loc_82BD38A4;
loc_82BD38C4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bd38fc
	if (ctx.cr6.eq) goto loc_82BD38FC;
	// subf r11,r8,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r8.s64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bd386c
	if (!ctx.cr0.eq) goto loc_82BD386C;
loc_82BD38DC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82BD38FC:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_82BD3900:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd38dc
	if (ctx.cr6.eq) goto loc_82BD38DC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r3,2
	ctx.r3.s64 = 2;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82BD3978:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82bd3990
	if (!ctx.cr6.eq) goto loc_82BD3990;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82bd3994
	goto loc_82BD3994;
loc_82BD3990:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82BD3994:
	// add r11,r24,r29
	ctx.r11.u64 = ctx.r24.u64 + ctx.r29.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82BD39A8:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD39BC;
	sub_82BD2FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bd39e4
	if (!ctx.cr6.eq) goto loc_82BD39E4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bge cr6,0x82bd38dc
	if (!ctx.cr6.lt) goto loc_82BD38DC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bd39a8
	if (ctx.cr6.eq) goto loc_82BD39A8;
	// b 0x82bd38dc
	goto loc_82BD38DC;
loc_82BD39E4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82bd3a6c
	if (ctx.cr6.eq) goto loc_82BD3A6C;
	// subf r11,r24,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r24.s64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r24,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r24.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82bd3688
	ctx.lr = 0x82BD3A60;
	sub_82BD3688(ctx, base);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82BD3A6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd3688
	ctx.lr = 0x82BD3A74;
	sub_82BD3688(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BD3A7C"))) PPC_WEAK_FUNC(sub_82BD3A7C);
PPC_FUNC_IMPL(__imp__sub_82BD3A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3A80"))) PPC_WEAK_FUNC(sub_82BD3A80);
PPC_FUNC_IMPL(__imp__sub_82BD3A80) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82bd3720
	sub_82BD3720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD3A88"))) PPC_WEAK_FUNC(sub_82BD3A88);
PPC_FUNC_IMPL(__imp__sub_82BD3A88) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bd3720
	sub_82BD3720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD3A90"))) PPC_WEAK_FUNC(sub_82BD3A90);
PPC_FUNC_IMPL(__imp__sub_82BD3A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BD3A98;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD3AAC;
	sub_82BC5A88(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r26,r11,1876
	ctx.r26.s64 = ctx.r11.s64 + 1876;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bge cr6,0x82bd3ad8
	if (!ctx.cr6.lt) goto loc_82BD3AD8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BD3AD8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd3b3c
	if (ctx.cr6.eq) goto loc_82BD3B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD3AF0;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd3b00
	if (!ctx.cr6.eq) goto loc_82BD3B00;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82bd3b44
	goto loc_82BD3B44;
loc_82BD3B00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd3b1c
	if (ctx.cr6.lt) goto loc_82BD3B1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD3B1C;
	sub_8227B8B8(ctx, base);
loc_82BD3B1C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bge cr6,0x82bd3b3c
	if (!ctx.cr6.lt) goto loc_82BD3B3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BD3B3C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_82BD3B44:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,-10005
	ctx.r4.s64 = -10005;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82bc59d0
	ctx.lr = 0x82BD3B64;
	sub_82BC59D0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r29,r3,r28
	ctx.r29.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82bd3ba4
	if (ctx.cr6.gt) goto loc_82BD3BA4;
loc_82BD3B74:
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD3B88;
	sub_82BD2FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bd3bb0
	if (!ctx.cr6.eq) goto loc_82BD3BB0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bd3b74
	if (!ctx.cr6.gt) goto loc_82BD3B74;
loc_82BD3BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82BD3BB0:
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82bd3bc0
	if (!ctx.cr6.eq) goto loc_82BD3BC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82BD3BC0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r6,7(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bge cr6,0x82bd3c10
	if (!ctx.cr6.lt) goto loc_82BD3C10;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82BD3C10:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82bd3c90
	if (ctx.cr6.lt) goto loc_82BD3C90;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bd3c90
	if (ctx.cr6.eq) goto loc_82BD3C90;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd3c90
	if (ctx.cr6.eq) goto loc_82BD3C90;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82bd3c78
	if (!ctx.cr6.eq) goto loc_82BD3C78;
	// bl 0x82bca7d8
	ctx.lr = 0x82BD3C74;
	sub_82BCA7D8(ctx, base);
	// b 0x82bd3c90
	goto loc_82BD3C90;
loc_82BD3C78:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r10,r9,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
loc_82BD3C90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bd3688
	ctx.lr = 0x82BD3CA8;
	sub_82BD3688(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82BD3CB0"))) PPC_WEAK_FUNC(sub_82BD3CB0);
PPC_FUNC_IMPL(__imp__sub_82BD3CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD3CB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd3cdc
	if (ctx.cr6.lt) goto loc_82BD3CDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD3CDC:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r29,r11,1744
	ctx.r29.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bd3d30
	if (ctx.cr6.eq) goto loc_82BD3D30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD3CF8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3d3c
	if (ctx.cr6.eq) goto loc_82BD3D3C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd3d1c
	if (ctx.cr6.lt) goto loc_82BD3D1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD3D1C;
	sub_8227B8B8(ctx, base);
loc_82BD3D1C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd3d30
	if (ctx.cr6.lt) goto loc_82BD3D30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD3D30:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r11,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r11.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bd3d4c
	if (!ctx.cr0.eq) goto loc_82BD3D4C;
loc_82BD3D3C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD3D4C;
	sub_82BC68F0(ctx, base);
loc_82BD3D4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd3d64
	if (ctx.cr6.lt) goto loc_82BD3D64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD3D64:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd3db4
	if (ctx.cr6.eq) goto loc_82BD3DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD3D78;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3dc0
	if (ctx.cr6.eq) goto loc_82BD3DC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd3d9c
	if (ctx.cr6.lt) goto loc_82BD3D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD3D9C;
	sub_8227B8B8(ctx, base);
loc_82BD3D9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd3db4
	if (ctx.cr6.lt) goto loc_82BD3DB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD3DB4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r11,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r11.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82bd3dd0
	if (!ctx.cr0.eq) goto loc_82BD3DD0;
loc_82BD3DC0:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD3DD0;
	sub_82BC68F0(ctx, base);
loc_82BD3DD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd3e10
	if (!ctx.cr6.lt) goto loc_82BD3E10;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD3DE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd3de8
	if (ctx.cr6.lt) goto loc_82BD3DE8;
loc_82BD3E10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r8,-32067
	ctx.r8.s64 = -2101542912;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,14992
	ctx.r4.s64 = ctx.r8.s64 + 14992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x8227b7e0
	ctx.lr = 0x82BD3E50;
	sub_8227B7E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD3E5C"))) PPC_WEAK_FUNC(sub_82BD3E5C);
PPC_FUNC_IMPL(__imp__sub_82BD3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3E60"))) PPC_WEAK_FUNC(sub_82BD3E60);
PPC_FUNC_IMPL(__imp__sub_82BD3E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,9828
	ctx.r4.s64 = ctx.r11.s64 + 9828;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD3E78;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD3E88"))) PPC_WEAK_FUNC(sub_82BD3E88);
PPC_FUNC_IMPL(__imp__sub_82BD3E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BD3E90;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD3EB4;
	sub_82BC5A88(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82bd3fc4
	if (ctx.cr6.eq) goto loc_82BD3FC4;
loc_82BD3EC8:
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82bd3f18
	if (ctx.cr6.eq) goto loc_82BD3F18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd3f60
	if (ctx.cr6.lt) goto loc_82BD3F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD3EEC;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3f60
	if (ctx.cr6.eq) goto loc_82BD3F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD3EFC;
	sub_82BC75D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82bd3fb8
	goto loc_82BD3FB8;
loc_82BD3F18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r29,r30,r28
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x82cb7d90
	ctx.lr = 0x82BD3F24;
	sub_82CB7D90(ctx, base);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd3f7c
	if (!ctx.cr6.eq) goto loc_82BD3F7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd3f60
	if (ctx.cr6.lt) goto loc_82BD3F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD3F50;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd3f60
	if (ctx.cr6.eq) goto loc_82BD3F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD3F60;
	sub_82BC75D8(ctx, base);
loc_82BD3F60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82bd3fb8
	goto loc_82BD3FB8;
loc_82BD3F7C:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82bd3f9c
	if (!ctx.cr6.eq) goto loc_82BD3F9C;
	// subf r5,r27,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7670
	ctx.lr = 0x82BD3F98;
	sub_82BC7670(ctx, base);
	// b 0x82bd3fb8
	goto loc_82BD3FB8;
loc_82BD3F9C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-49
	ctx.r4.s64 = ctx.r11.s64 + -49;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bd3590
	ctx.lr = 0x82BD3FB0;
	sub_82BD3590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7748
	ctx.lr = 0x82BD3FB8;
	sub_82BC7748(ctx, base);
loc_82BD3FB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82bd3ec8
	if (ctx.cr6.lt) goto loc_82BD3EC8;
loc_82BD3FC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BD3FCC"))) PPC_WEAK_FUNC(sub_82BD3FCC);
PPC_FUNC_IMPL(__imp__sub_82BD3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD3FD0"))) PPC_WEAK_FUNC(sub_82BD3FD0);
PPC_FUNC_IMPL(__imp__sub_82BD3FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD3FD8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r28,r11,1876
	ctx.r28.s64 = ctx.r11.s64 + 1876;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd4010
	if (!ctx.cr6.lt) goto loc_82BD4010;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82bd4018
	if (!ctx.cr6.eq) goto loc_82BD4018;
loc_82BD4010:
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x82bd401c
	goto loc_82BD401C;
loc_82BD4018:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82BD401C:
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x82bd41a0
	if (ctx.cr6.gt) goto loc_82BD41A0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,16448
	ctx.r12.s64 = ctx.r12.s64 + 16448;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82BD4050;
	case 1:
		goto loc_82BD4050;
	case 2:
		goto loc_82BD40BC;
	case 3:
		goto loc_82BD4068;
	default:
		__builtin_unreachable();
	}
	// lwz r21,16464(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16464);
	// lwz r21,16464(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16464);
	// lwz r21,16572(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16572);
	// lwz r21,16488(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16488);
loc_82BD4050:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82bd3e88
	ctx.lr = 0x82BD4060;
	sub_82BD3E88(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD4068:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd4074
	if (ctx.cr6.lt) goto loc_82BD4074;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82BD4074:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bd3688
	ctx.lr = 0x82BD409C;
	sub_82BD3688(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// bl 0x8219ee00
	ctx.lr = 0x82BD40B8;
	sub_8219EE00(ctx, base);
	// b 0x82bd40f8
	goto loc_82BD40F8;
loc_82BD40BC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd3590
	ctx.lr = 0x82BD40CC;
	sub_82BD3590(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd40e4
	if (ctx.cr6.lt) goto loc_82BD40E4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BD40E4:
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x821cf320
	ctx.lr = 0x82BD40F8;
	sub_821CF320(ctx, base);
loc_82BD40F8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BD4104;
	sub_82BC5A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bd4138
	if (!ctx.cr6.eq) goto loc_82BD4138;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8219cda8
	ctx.lr = 0x82BD4128;
	sub_8219CDA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7748
	ctx.lr = 0x82BD4130;
	sub_82BC7748(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD4138:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82bc5870
	ctx.lr = 0x82BD4140;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd4190
	if (!ctx.cr6.eq) goto loc_82BD4190;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bd4164
	if (ctx.cr6.eq) goto loc_82BD4164;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd4170
	if (!ctx.cr6.eq) goto loc_82BD4170;
loc_82BD4164:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,7936
	ctx.r5.s64 = ctx.r11.s64 + 7936;
	// b 0x82bd4180
	goto loc_82BD4180;
loc_82BD4170:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1744
	ctx.r8.s64 = ctx.r10.s64 + 1744;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82BD4180:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,9876
	ctx.r4.s64 = ctx.r11.s64 + 9876;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD4190;
	sub_82BC6A18(ctx, base);
loc_82BD4190:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7748
	ctx.lr = 0x82BD4198;
	sub_82BC7748(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD41A0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,9912
	ctx.r5.s64 = ctx.r11.s64 + 9912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD41B4;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD41BC"))) PPC_WEAK_FUNC(sub_82BD41BC);
PPC_FUNC_IMPL(__imp__sub_82BD41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD41C0"))) PPC_WEAK_FUNC(sub_82BD41C0);
PPC_FUNC_IMPL(__imp__sub_82BD41C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BD41C8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD41DC;
	sub_82BC5A88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r30,r11,1744
	ctx.r30.s64 = ctx.r11.s64 + 1744;
	// bne cr6,0x82bd4200
	if (!ctx.cr6.eq) goto loc_82BD4200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD4200;
	sub_82BC68F0(ctx, base);
loc_82BD4200:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r11,1876
	ctx.r28.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd4220
	if (ctx.cr6.lt) goto loc_82BD4220;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BD4220:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd4280
	if (ctx.cr6.eq) goto loc_82BD4280;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD423C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd424c
	if (!ctx.cr6.eq) goto loc_82BD424C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x82bd428c
	goto loc_82BD428C;
loc_82BD424C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd4268
	if (ctx.cr6.lt) goto loc_82BD4268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD4268;
	sub_8227B8B8(ctx, base);
loc_82BD4268:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd4280
	if (ctx.cr6.lt) goto loc_82BD4280;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BD4280:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bd429c
	if (!ctx.cr0.eq) goto loc_82BD429C;
loc_82BD428C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD429C;
	sub_82BC68F0(ctx, base);
loc_82BD429C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd42d0
	if (!ctx.cr6.lt) goto loc_82BD42D0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bd42d0
	if (ctx.cr6.eq) goto loc_82BD42D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd42d8
	if (ctx.cr6.gt) goto loc_82BD42D8;
loc_82BD42D0:
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// b 0x82bd42e8
	goto loc_82BD42E8;
loc_82BD42D8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD42E4;
	sub_82BC6F00(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82BD42E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x82bd4300
	if (!ctx.cr6.eq) goto loc_82BD4300;
	// addi r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82bd4304
	goto loc_82BD4304;
loc_82BD4300:
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_82BD4304:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// stw r29,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r27,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r27.u32);
	// ble cr6,0x82bd4434
	if (!ctx.cr6.gt) goto loc_82BD4434;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82BD4334:
	// stw r22,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r22.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82bd2ff8
	ctx.lr = 0x82BD4348;
	sub_82BD2FF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd437c
	if (ctx.cr6.eq) goto loc_82BD437C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x82bd3fd0
	ctx.lr = 0x82BD436C;
	sub_82BD3FD0(ctx, base);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82bd437c
	if (!ctx.cr6.gt) goto loc_82BD437C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x82bd4424
	goto loc_82BD4424;
loc_82BD437C:
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd4434
	if (!ctx.cr6.lt) goto loc_82BD4434;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd440c
	if (ctx.cr6.lt) goto loc_82BD440C;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd440c
	if (ctx.cr0.eq) goto loc_82BD440C;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd43c4
	if (ctx.cr6.lt) goto loc_82BD43C4;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD43C4;
	sub_8227B8B8(ctx, base);
loc_82BD43C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD43D8;
	sub_8227BA30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82bc75d8
	ctx.lr = 0x82BD4408;
	sub_82BC75D8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD440C:
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82BD4424:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82bd4434
	if (!ctx.cr6.eq) goto loc_82BD4434;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82bd4334
	if (ctx.cr6.lt) goto loc_82BD4334;
loc_82BD4434:
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r5,r27,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r27.s64;
	// bl 0x82bc7670
	ctx.lr = 0x82BD4448;
	sub_82BC7670(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD4450;
	sub_82BC7568(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82bc6490
	ctx.lr = 0x82BD445C;
	sub_82BC6490(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,2
	ctx.r3.s64 = 2;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82BD4498"))) PPC_WEAK_FUNC(sub_82BD4498);
PPC_FUNC_IMPL(__imp__sub_82BD4498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BD44A0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD44BC;
	sub_82BC5A88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bd44e0
	if (!ctx.cr6.eq) goto loc_82BD44E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD44E0;
	sub_82BC68F0(ctx, base);
loc_82BD44E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,524
	ctx.r30.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bd4508
	if (ctx.cr6.lt) goto loc_82BD4508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD44F8;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd4508
	if (ctx.cr6.eq) goto loc_82BD4508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD4508;
	sub_82BC75D8(ctx, base);
loc_82BD4508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,34
	ctx.r24.s64 = 34;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82bd478c
	if (ctx.cr6.eq) goto loc_82BD478C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,92
	ctx.r27.s64 = 92;
	// addi r26,r10,9948
	ctx.r26.s64 = ctx.r10.s64 + 9948;
	// addi r25,r11,9944
	ctx.r25.s64 = ctx.r11.s64 + 9944;
loc_82BD4540:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bgt cr6,0x82bd4744
	if (ctx.cr6.gt) goto loc_82BD4744;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,17772
	ctx.r12.s64 = ctx.r12.s64 + 17772;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BD4730;
	case 1:
		goto loc_82BD4744;
	case 2:
		goto loc_82BD4744;
	case 3:
		goto loc_82BD4744;
	case 4:
		goto loc_82BD4744;
	case 5:
		goto loc_82BD4744;
	case 6:
		goto loc_82BD4744;
	case 7:
		goto loc_82BD4744;
	case 8:
		goto loc_82BD4744;
	case 9:
		goto loc_82BD4744;
	case 10:
		goto loc_82BD46E0;
	case 11:
		goto loc_82BD4744;
	case 12:
		goto loc_82BD4744;
	case 13:
		goto loc_82BD471C;
	case 14:
		goto loc_82BD4744;
	case 15:
		goto loc_82BD4744;
	case 16:
		goto loc_82BD4744;
	case 17:
		goto loc_82BD4744;
	case 18:
		goto loc_82BD4744;
	case 19:
		goto loc_82BD4744;
	case 20:
		goto loc_82BD4744;
	case 21:
		goto loc_82BD4744;
	case 22:
		goto loc_82BD4744;
	case 23:
		goto loc_82BD4744;
	case 24:
		goto loc_82BD4744;
	case 25:
		goto loc_82BD4744;
	case 26:
		goto loc_82BD4744;
	case 27:
		goto loc_82BD4744;
	case 28:
		goto loc_82BD4744;
	case 29:
		goto loc_82BD4744;
	case 30:
		goto loc_82BD4744;
	case 31:
		goto loc_82BD4744;
	case 32:
		goto loc_82BD4744;
	case 33:
		goto loc_82BD4744;
	case 34:
		goto loc_82BD46E0;
	case 35:
		goto loc_82BD4744;
	case 36:
		goto loc_82BD4744;
	case 37:
		goto loc_82BD4744;
	case 38:
		goto loc_82BD4744;
	case 39:
		goto loc_82BD4744;
	case 40:
		goto loc_82BD4744;
	case 41:
		goto loc_82BD4744;
	case 42:
		goto loc_82BD4744;
	case 43:
		goto loc_82BD4744;
	case 44:
		goto loc_82BD4744;
	case 45:
		goto loc_82BD4744;
	case 46:
		goto loc_82BD4744;
	case 47:
		goto loc_82BD4744;
	case 48:
		goto loc_82BD4744;
	case 49:
		goto loc_82BD4744;
	case 50:
		goto loc_82BD4744;
	case 51:
		goto loc_82BD4744;
	case 52:
		goto loc_82BD4744;
	case 53:
		goto loc_82BD4744;
	case 54:
		goto loc_82BD4744;
	case 55:
		goto loc_82BD4744;
	case 56:
		goto loc_82BD4744;
	case 57:
		goto loc_82BD4744;
	case 58:
		goto loc_82BD4744;
	case 59:
		goto loc_82BD4744;
	case 60:
		goto loc_82BD4744;
	case 61:
		goto loc_82BD4744;
	case 62:
		goto loc_82BD4744;
	case 63:
		goto loc_82BD4744;
	case 64:
		goto loc_82BD4744;
	case 65:
		goto loc_82BD4744;
	case 66:
		goto loc_82BD4744;
	case 67:
		goto loc_82BD4744;
	case 68:
		goto loc_82BD4744;
	case 69:
		goto loc_82BD4744;
	case 70:
		goto loc_82BD4744;
	case 71:
		goto loc_82BD4744;
	case 72:
		goto loc_82BD4744;
	case 73:
		goto loc_82BD4744;
	case 74:
		goto loc_82BD4744;
	case 75:
		goto loc_82BD4744;
	case 76:
		goto loc_82BD4744;
	case 77:
		goto loc_82BD4744;
	case 78:
		goto loc_82BD4744;
	case 79:
		goto loc_82BD4744;
	case 80:
		goto loc_82BD4744;
	case 81:
		goto loc_82BD4744;
	case 82:
		goto loc_82BD4744;
	case 83:
		goto loc_82BD4744;
	case 84:
		goto loc_82BD4744;
	case 85:
		goto loc_82BD4744;
	case 86:
		goto loc_82BD4744;
	case 87:
		goto loc_82BD4744;
	case 88:
		goto loc_82BD4744;
	case 89:
		goto loc_82BD4744;
	case 90:
		goto loc_82BD4744;
	case 91:
		goto loc_82BD4744;
	case 92:
		goto loc_82BD46E0;
	default:
		__builtin_unreachable();
	}
	// lwz r21,18224(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18224);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18144(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18144);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18204(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18204);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18144(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18144);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18244(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18244);
	// lwz r21,18144(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18144);
loc_82BD46E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bd4704
	if (ctx.cr6.lt) goto loc_82BD4704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD46F4;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd4704
	if (ctx.cr6.eq) goto loc_82BD4704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD4704;
	sub_82BC75D8(ctx, base);
loc_82BD4704:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82bd4748
	goto loc_82BD4748;
loc_82BD471C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7670
	ctx.lr = 0x82BD472C;
	sub_82BC7670(ctx, base);
	// b 0x82bd4780
	goto loc_82BD4780;
loc_82BD4730:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7670
	ctx.lr = 0x82BD4740;
	sub_82BC7670(ctx, base);
	// b 0x82bd4780
	goto loc_82BD4780;
loc_82BD4744:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82BD4748:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bd4768
	if (ctx.cr6.lt) goto loc_82BD4768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD4758;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd4768
	if (ctx.cr6.eq) goto loc_82BD4768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD4768;
	sub_82BC75D8(ctx, base);
loc_82BD4768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82BD4780:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bd4540
	if (!ctx.cr6.eq) goto loc_82BD4540;
loc_82BD478C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82bd47b0
	if (ctx.cr6.lt) goto loc_82BD47B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7568
	ctx.lr = 0x82BD47A0;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd47b0
	if (ctx.cr6.eq) goto loc_82BD47B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD47B0;
	sub_82BC75D8(ctx, base);
loc_82BD47B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BD47CC"))) PPC_WEAK_FUNC(sub_82BD47CC);
PPC_FUNC_IMPL(__imp__sub_82BD47CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD47D0"))) PPC_WEAK_FUNC(sub_82BD47D0);
PPC_FUNC_IMPL(__imp__sub_82BD47D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD47D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd4828
	if (ctx.cr6.eq) goto loc_82BD4828;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r11,9956
	ctx.r30.s64 = ctx.r11.s64 + 9956;
loc_82BD4800:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82ca3980
	ctx.lr = 0x82BD4810;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd4828
	if (ctx.cr6.eq) goto loc_82BD4828;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd4800
	if (!ctx.cr6.eq) goto loc_82BD4800;
loc_82BD4828:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82bd4844
	if (ctx.cr6.lt) goto loc_82BD4844;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,9964
	ctx.r4.s64 = ctx.r11.s64 + 9964;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD4844;
	sub_82BC6A18(ctx, base);
loc_82BD4844:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD4848;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd4864
	if (ctx.cr6.eq) goto loc_82BD4864;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD4864:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD4868;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd4884
	if (ctx.cr6.eq) goto loc_82BD4884;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD4884:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82bd48d4
	if (!ctx.cr6.eq) goto loc_82BD48D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82cb7d90
	ctx.lr = 0x82BD4898;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd48b4
	if (ctx.cr6.eq) goto loc_82BD48B4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD48B4:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD48B8;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd48d4
	if (ctx.cr6.eq) goto loc_82BD48D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BD48D4:
	// bl 0x82cb7d90
	ctx.lr = 0x82BD48D8;
	sub_82CB7D90(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bd4900
	if (ctx.cr6.eq) goto loc_82BD4900;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,9996
	ctx.r4.s64 = ctx.r11.s64 + 9996;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD4900;
	sub_82BC6A18(ctx, base);
loc_82BD4900:
	// li r11,37
	ctx.r11.s64 = 37;
	// subf r29,r28,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r28.s64;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cd828
	ctx.lr = 0x82BD4920;
	sub_822CD828(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD4938"))) PPC_WEAK_FUNC(sub_82BD4938);
PPC_FUNC_IMPL(__imp__sub_82BD4938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BD4940;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD4958;
	sub_82BC5A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r24,r11,1744
	ctx.r24.s64 = ctx.r11.s64 + 1744;
	// bne cr6,0x82bd497c
	if (!ctx.cr6.eq) goto loc_82BD497C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD497C;
	sub_82BC68F0(ctx, base);
loc_82BD497C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// add r25,r29,r11
	ctx.r25.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82bd4d5c
	if (!ctx.cr6.lt) goto loc_82BD4D5C;
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// b 0x82bd49b0
	goto loc_82BD49B0;
loc_82BD49AC:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82BD49B0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82bd4a00
	if (ctx.cr6.eq) goto loc_82BD4A00;
	// addi r11,r1,684
	ctx.r11.s64 = ctx.r1.s64 + 684;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd49e0
	if (ctx.cr6.lt) goto loc_82BD49E0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bc7568
	ctx.lr = 0x82BD49D0;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd49e0
	if (ctx.cr6.eq) goto loc_82BD49E0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD49E0;
	sub_82BC75D8(ctx, base);
loc_82BD49E0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// b 0x82bd4d54
	goto loc_82BD4D54;
loc_82BD4A00:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x82bd4a54
	if (!ctx.cr6.eq) goto loc_82BD4A54;
	// addi r11,r1,684
	ctx.r11.s64 = ctx.r1.s64 + 684;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd4a34
	if (ctx.cr6.lt) goto loc_82BD4A34;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bc7568
	ctx.lr = 0x82BD4A24;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd4a34
	if (ctx.cr6.eq) goto loc_82BD4A34;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD4A34;
	sub_82BC75D8(ctx, base);
loc_82BD4A34:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// b 0x82bd4d54
	goto loc_82BD4D54;
loc_82BD4A54:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82bd47d0
	ctx.lr = 0x82BD4A68;
	sub_82BD47D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-69
	ctx.r11.s64 = ctx.r11.s64 + -69;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x82bd4d7c
	if (ctx.cr6.gt) goto loc_82BD4D7C;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,19096
	ctx.r12.s64 = ctx.r12.s64 + 19096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BD4C54;
	case 1:
		goto loc_82BD4D7C;
	case 2:
		goto loc_82BD4C54;
	case 3:
		goto loc_82BD4D7C;
	case 4:
		goto loc_82BD4D7C;
	case 5:
		goto loc_82BD4D7C;
	case 6:
		goto loc_82BD4D7C;
	case 7:
		goto loc_82BD4D7C;
	case 8:
		goto loc_82BD4D7C;
	case 9:
		goto loc_82BD4D7C;
	case 10:
		goto loc_82BD4D7C;
	case 11:
		goto loc_82BD4D7C;
	case 12:
		goto loc_82BD4D7C;
	case 13:
		goto loc_82BD4D7C;
	case 14:
		goto loc_82BD4D7C;
	case 15:
		goto loc_82BD4D7C;
	case 16:
		goto loc_82BD4D7C;
	case 17:
		goto loc_82BD4D7C;
	case 18:
		goto loc_82BD4D7C;
	case 19:
		goto loc_82BD4BEC;
	case 20:
		goto loc_82BD4D7C;
	case 21:
		goto loc_82BD4D7C;
	case 22:
		goto loc_82BD4D7C;
	case 23:
		goto loc_82BD4D7C;
	case 24:
		goto loc_82BD4D7C;
	case 25:
		goto loc_82BD4D7C;
	case 26:
		goto loc_82BD4D7C;
	case 27:
		goto loc_82BD4D7C;
	case 28:
		goto loc_82BD4D7C;
	case 29:
		goto loc_82BD4D7C;
	case 30:
		goto loc_82BD4B68;
	case 31:
		goto loc_82BD4B84;
	case 32:
		goto loc_82BD4C54;
	case 33:
		goto loc_82BD4C54;
	case 34:
		goto loc_82BD4C54;
	case 35:
		goto loc_82BD4D7C;
	case 36:
		goto loc_82BD4B84;
	case 37:
		goto loc_82BD4D7C;
	case 38:
		goto loc_82BD4D7C;
	case 39:
		goto loc_82BD4D7C;
	case 40:
		goto loc_82BD4D7C;
	case 41:
		goto loc_82BD4D7C;
	case 42:
		goto loc_82BD4BEC;
	case 43:
		goto loc_82BD4D7C;
	case 44:
		goto loc_82BD4C78;
	case 45:
		goto loc_82BD4D7C;
	case 46:
		goto loc_82BD4C8C;
	case 47:
		goto loc_82BD4D7C;
	case 48:
		goto loc_82BD4BEC;
	case 49:
		goto loc_82BD4D7C;
	case 50:
		goto loc_82BD4D7C;
	case 51:
		goto loc_82BD4BEC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,19540(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19540);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19540(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19540);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19436(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19436);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19304(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19304);
	// lwz r21,19332(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19332);
	// lwz r21,19540(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19540);
	// lwz r21,19540(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19540);
	// lwz r21,19540(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19540);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19332(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19332);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19436(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19436);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19576(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19576);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19596(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19596);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19436(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19436);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19836(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19836);
	// lwz r21,19436(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19436);
loc_82BD4B68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD4B74;
	sub_821885C0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x82bd4d18
	goto loc_82BD4D18;
loc_82BD4B84:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD4B8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd4b8c
	if (!ctx.cr6.eq) goto loc_82BD4B8C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,10044(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 10044);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,129
	ctx.r6.s64 = ctx.r1.s64 + 129;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sth r8,-1(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1, ctx.r8.u16);
	// stbx r27,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u8);
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x821885c0
	ctx.lr = 0x82BD4BDC;
	sub_821885C0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x82bd4d18
	goto loc_82BD4D18;
loc_82BD4BEC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD4BF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd4bf4
	if (!ctx.cr6.eq) goto loc_82BD4BF4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,10044(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 10044);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,129
	ctx.r6.s64 = ctx.r1.s64 + 129;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sth r8,-1(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1, ctx.r8.u16);
	// stbx r27,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r27.u8);
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x821885c0
	ctx.lr = 0x82BD4C44;
	sub_821885C0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x82bd4d18
	goto loc_82BD4D18;
loc_82BD4C54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD4C60;
	sub_821885C0(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8223f888
	ctx.lr = 0x82BD4C74;
	sub_8223F888(ctx, base);
	// b 0x82bd4d24
	goto loc_82BD4D24;
loc_82BD4C78:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd4498
	ctx.lr = 0x82BD4C88;
	sub_82BD4498(ctx, base);
	// b 0x82bd4d54
	goto loc_82BD4D54;
loc_82BD4C8C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD4C9C;
	sub_82BC5A88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bd4cb8
	if (!ctx.cr6.eq) goto loc_82BD4CB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD4CB8;
	sub_82BC68F0(ctx, base);
loc_82BD4CB8:
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ca3980
	ctx.lr = 0x82BD4CC4;
	sub_82CA3980(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd4d14
	if (!ctx.cr6.eq) goto loc_82BD4D14;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x82bd4d14
	if (ctx.cr6.lt) goto loc_82BD4D14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD4CE4;
	sub_82BC5448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc7748
	ctx.lr = 0x82BD4D10;
	sub_82BC7748(ctx, base);
	// b 0x82bd4d54
	goto loc_82BD4D54;
loc_82BD4D14:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82BD4D18:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8223f888
	ctx.lr = 0x82BD4D24;
	sub_8223F888(ctx, base);
loc_82BD4D24:
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD4D2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd4d2c
	if (!ctx.cr6.eq) goto loc_82BD4D2C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82bc7670
	ctx.lr = 0x82BD4D54;
	sub_82BC7670(ctx, base);
loc_82BD4D54:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82bd49ac
	if (ctx.cr6.lt) goto loc_82BD49AC;
loc_82BD4D5C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bc7568
	ctx.lr = 0x82BD4D64;
	sub_82BC7568(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82bc6490
	ctx.lr = 0x82BD4D70;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_82BD4D7C:
	// lbz r11,-1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -1);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,10048
	ctx.r4.s64 = ctx.r10.s64 + 10048;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD4D94;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82BD4D9C"))) PPC_WEAK_FUNC(sub_82BD4D9C);
PPC_FUNC_IMPL(__imp__sub_82BD4D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4DA0"))) PPC_WEAK_FUNC(sub_82BD4DA0);
PPC_FUNC_IMPL(__imp__sub_82BD4DA0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,1136
	ctx.r5.s64 = ctx.r11.s64 + 1136;
	// addi r4,r10,3336
	ctx.r4.s64 = ctx.r10.s64 + 3336;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BD4DCC;
	sub_82BC7060(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r9,9476
	ctx.r5.s64 = ctx.r9.s64 + 9476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BD4DE0;
	sub_821E1408(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r8,9484
	ctx.r5.s64 = ctx.r8.s64 + 9484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD4DF4;
	sub_82BC5EB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD4E04;
	sub_82BC5CD8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r7,3224
	ctx.r4.s64 = ctx.r7.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD4E18;
	sub_8219CDA8(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r11,-12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82bc5ff0
	ctx.lr = 0x82BD4E44;
	sub_82BC5FF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r9,-9496
	ctx.r5.s64 = ctx.r9.s64 + -9496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD4E80;
	sub_82BC5EB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82BD4EA4"))) PPC_WEAK_FUNC(sub_82BD4EA4);
PPC_FUNC_IMPL(__imp__sub_82BD4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD4EA8"))) PPC_WEAK_FUNC(sub_82BD4EA8);
PPC_FUNC_IMPL(__imp__sub_82BD4EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD4EB0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r10,7616
	ctx.r5.s64 = ctx.r10.s64 + 7616;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r28,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 3;
	// bl 0x821e1408
	ctx.lr = 0x82BD4ED8;
	sub_821E1408(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x82bd4fe0
	if (ctx.cr6.lt) goto loc_82BD4FE0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,-27472
	ctx.r27.s64 = ctx.r11.s64 + -27472;
loc_82BD4EEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82bc5448
	ctx.lr = 0x82BD4F18;
	sub_82BC5448(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8219ee00
	ctx.lr = 0x82BD4F4C;
	sub_8219EE00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd4f94
	if (ctx.cr6.eq) goto loc_82BD4F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD4F68;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd5000
	if (ctx.cr6.eq) goto loc_82BD5000;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd4f8c
	if (ctx.cr6.lt) goto loc_82BD4F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD4F8C;
	sub_8227B8B8(ctx, base);
loc_82BD4F8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BD4F94:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bd5000
	if (ctx.cr0.eq) goto loc_82BD5000;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x82bd4fb8
	if (!ctx.cr6.gt) goto loc_82BD4FB8;
	// bl 0x82240578
	ctx.lr = 0x82BD4FAC;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD4FB8;
	sub_82CA89A0(ctx, base);
loc_82BD4FB8:
	// bl 0x82240578
	ctx.lr = 0x82BD4FBC;
	sub_82240578(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD4FC8;
	sub_82CA89A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82bd4eec
	if (!ctx.cr6.gt) goto loc_82BD4EEC;
loc_82BD4FE0:
	// bl 0x82240578
	ctx.lr = 0x82BD4FE4;
	sub_82240578(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// bl 0x82ca89a0
	ctx.lr = 0x82BD4FF4;
	sub_82CA89A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD5000:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8500
	ctx.r4.s64 = ctx.r11.s64 + 8500;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD5010;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD5018"))) PPC_WEAK_FUNC(sub_82BD5018);
PPC_FUNC_IMPL(__imp__sub_82BD5018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD5020;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd506c
	if (!ctx.cr6.lt) goto loc_82BD506C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd506c
	if (ctx.cr6.eq) goto loc_82BD506C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bd506c
	if (!ctx.cr6.gt) goto loc_82BD506C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD5060;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// bne cr6,0x82bd50c4
	if (!ctx.cr6.eq) goto loc_82BD50C4;
loc_82BD506C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6dd8
	ctx.lr = 0x82BD5078;
	sub_82BC6DD8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd508c
	if (ctx.cr6.lt) goto loc_82BD508C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BD508C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd50a8
	if (ctx.cr6.eq) goto loc_82BD50A8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD50A0;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd5224
	if (ctx.cr6.eq) goto loc_82BD5224;
loc_82BD50A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188568
	ctx.lr = 0x82BD50B4;
	sub_82188568(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82bd522c
	goto loc_82BD522C;
loc_82BD50C4:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd50d8
	if (ctx.cr6.lt) goto loc_82BD50D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD50D8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd512c
	if (ctx.cr6.eq) goto loc_82BD512C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD50EC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd50fc
	if (!ctx.cr6.eq) goto loc_82BD50FC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd5138
	goto loc_82BD5138;
loc_82BD50FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd5118
	if (ctx.cr6.lt) goto loc_82BD5118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD5118;
	sub_8227B8B8(ctx, base);
loc_82BD5118:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd512c
	if (ctx.cr6.lt) goto loc_82BD512C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD512C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd5150
	if (!ctx.cr0.eq) goto loc_82BD5150;
loc_82BD5138:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD5150;
	sub_82BC68F0(ctx, base);
loc_82BD5150:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82bd5160
	if (ctx.cr6.lt) goto loc_82BD5160;
	// cmpwi cr6,r29,36
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 36, ctx.xer);
	// ble cr6,0x82bd5174
	if (!ctx.cr6.gt) goto loc_82BD5174;
loc_82BD5160:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8544
	ctx.r5.s64 = ctx.r11.s64 + 8544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5174;
	sub_82BC67F0(ctx, base);
loc_82BD5174:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca6300
	ctx.lr = 0x82BD5184;
	sub_82CA6300(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bd5224
	if (ctx.cr6.eq) goto loc_82BD5224;
	// bl 0x82cb7d90
	ctx.lr = 0x82BD5198;
	sub_82CB7D90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bd51dc
	if (ctx.cr6.eq) goto loc_82BD51DC;
loc_82BD51B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82cb7d90
	ctx.lr = 0x82BD51C0;
	sub_82CB7D90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bd51b4
	if (!ctx.cr6.eq) goto loc_82BD51B4;
loc_82BD51DC:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd5224
	if (!ctx.cr6.eq) goto loc_82BD5224;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD5224:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD522C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD5248"))) PPC_WEAK_FUNC(sub_82BD5248);
PPC_FUNC_IMPL(__imp__sub_82BD5248) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5290
	if (!ctx.cr6.lt) goto loc_82BD5290;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5290
	if (ctx.cr6.eq) goto loc_82BD5290;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd5298
	if (ctx.cr6.gt) goto loc_82BD5298;
loc_82BD5290:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82bd52a8
	goto loc_82BD52A8;
loc_82BD5298:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD52A4;
	sub_82BC6F00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82BD52A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd52e8
	if (!ctx.cr6.lt) goto loc_82BD52E8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD52C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd52c0
	if (ctx.cr6.lt) goto loc_82BD52C0;
loc_82BD52E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5870
	ctx.lr = 0x82BD5300;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd5358
	if (ctx.cr6.eq) goto loc_82BD5358;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82bd5358
	if (!ctx.cr6.gt) goto loc_82BD5358;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6980
	ctx.lr = 0x82BD531C;
	sub_82BC6980(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd5330
	if (ctx.cr6.lt) goto loc_82BD5330;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD5330:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc6490
	ctx.lr = 0x82BD5358;
	sub_82BC6490(ctx, base);
loc_82BD5358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9788
	ctx.lr = 0x82BD5360;
	sub_82BC9788(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BD537C"))) PPC_WEAK_FUNC(sub_82BD537C);
PPC_FUNC_IMPL(__imp__sub_82BD537C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5380"))) PPC_WEAK_FUNC(sub_82BD5380);
PPC_FUNC_IMPL(__imp__sub_82BD5380) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd53c0
	if (!ctx.cr6.lt) goto loc_82BD53C0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd53c0
	if (ctx.cr6.eq) goto loc_82BD53C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd53d4
	if (!ctx.cr6.eq) goto loc_82BD53D4;
loc_82BD53C0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD53D4;
	sub_82BC67F0(ctx, base);
loc_82BD53D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD53E0;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd5404
	if (!ctx.cr6.eq) goto loc_82BD5404;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82bd5428
	goto loc_82BD5428;
loc_82BD5404:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD5410;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd5428
	if (ctx.cr6.eq) goto loc_82BD5428;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8564
	ctx.r4.s64 = ctx.r11.s64 + 8564;
	// bl 0x82bc6f70
	ctx.lr = 0x82BD5428;
	sub_82BC6F70(ctx, base);
loc_82BD5428:
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
}

__attribute__((alias("__imp__sub_82BD5440"))) PPC_WEAK_FUNC(sub_82BD5440);
PPC_FUNC_IMPL(__imp__sub_82BD5440) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r8,r11,1876
	ctx.r8.s64 = ctx.r11.s64 + 1876;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd547c
	if (!ctx.cr6.lt) goto loc_82BD547C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bd5484
	if (!ctx.cr6.eq) goto loc_82BD5484;
loc_82BD547C:
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82bd5488
	goto loc_82BD5488;
loc_82BD5484:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BD5488:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd54a4
	if (!ctx.cr6.lt) goto loc_82BD54A4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bd54a4
	if (ctx.cr6.eq) goto loc_82BD54A4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd54bc
	if (ctx.cr6.eq) goto loc_82BD54BC;
loc_82BD54A4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD54BC;
	sub_82BC68F0(ctx, base);
loc_82BD54BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bd54e0
	if (ctx.cr6.eq) goto loc_82BD54E0;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82bd54e0
	if (ctx.cr6.eq) goto loc_82BD54E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8576
	ctx.r5.s64 = ctx.r11.s64 + 8576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD54E0;
	sub_82BC67F0(ctx, base);
loc_82BD54E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD54EC;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd551c
	if (ctx.cr6.eq) goto loc_82BD551C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8564
	ctx.r4.s64 = ctx.r11.s64 + 8564;
	// bl 0x82bc6f70
	ctx.lr = 0x82BD5504;
	sub_82BC6F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd551c
	if (ctx.cr6.eq) goto loc_82BD551C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8600
	ctx.r4.s64 = ctx.r11.s64 + 8600;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD551C;
	sub_82BC6A18(ctx, base);
loc_82BD551C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd555c
	if (!ctx.cr6.lt) goto loc_82BD555C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD5534:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd5534
	if (ctx.cr6.lt) goto loc_82BD5534;
loc_82BD555C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5ff0
	ctx.lr = 0x82BD5574;
	sub_82BC5FF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD5590"))) PPC_WEAK_FUNC(sub_82BD5590);
PPC_FUNC_IMPL(__imp__sub_82BD5590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD5598;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r10,1876
	ctx.r29.s64 = ctx.r10.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd55fc
	if (!ctx.cr6.lt) goto loc_82BD55FC;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd55fc
	if (ctx.cr6.eq) goto loc_82BD55FC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82bd55fc
	if (!ctx.cr6.eq) goto loc_82BD55FC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd55d8
	if (ctx.cr6.lt) goto loc_82BD55D8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD55D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD55FC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82bd5628
	if (ctx.cr6.eq) goto loc_82BD5628;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5620
	if (!ctx.cr6.lt) goto loc_82BD5620;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd5620
	if (ctx.cr6.eq) goto loc_82BD5620;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd5628
	if (ctx.cr6.gt) goto loc_82BD5628;
loc_82BD5620:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82bd5654
	goto loc_82BD5654;
loc_82BD5628:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD5634;
	sub_82BC6F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82bd5654
	if (!ctx.cr6.lt) goto loc_82BD5654;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8636
	ctx.r5.s64 = ctx.r11.s64 + 8636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5654;
	sub_82BC67F0(ctx, base);
loc_82BD5654:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2b3c0
	ctx.lr = 0x82BD5664;
	sub_82A2B3C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd5680
	if (!ctx.cr6.eq) goto loc_82BD5680;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8664
	ctx.r5.s64 = ctx.r11.s64 + 8664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5680;
	sub_82BC67F0(ctx, base);
loc_82BD5680:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,8680
	ctx.r4.s64 = ctx.r11.s64 + 8680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc8cb8
	ctx.lr = 0x82BD5694;
	sub_82BC8CB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd56c4
	if (ctx.cr6.eq) goto loc_82BD56C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bd56c4
	if (!ctx.cr6.eq) goto loc_82BD56C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,8684
	ctx.r4.s64 = ctx.r11.s64 + 8684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD56C4;
	sub_82BC6A18(ctx, base);
loc_82BD56C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD56CC"))) PPC_WEAK_FUNC(sub_82BD56CC);
PPC_FUNC_IMPL(__imp__sub_82BD56CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD56D0"))) PPC_WEAK_FUNC(sub_82BD56D0);
PPC_FUNC_IMPL(__imp__sub_82BD56D0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd5590
	ctx.lr = 0x82BD56EC;
	sub_82BD5590(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82bd572c
	if (!ctx.cr6.eq) goto loc_82BD572C;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bd572c
	if (ctx.cr6.eq) goto loc_82BD572C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82bd5738
	goto loc_82BD5738;
loc_82BD572C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5dd0
	ctx.lr = 0x82BD5738;
	sub_82BC5DD0(ctx, base);
loc_82BD5738:
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
}

__attribute__((alias("__imp__sub_82BD5750"))) PPC_WEAK_FUNC(sub_82BD5750);
PPC_FUNC_IMPL(__imp__sub_82BD5750) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5798
	if (!ctx.cr6.lt) goto loc_82BD5798;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5798
	if (ctx.cr6.eq) goto loc_82BD5798;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd57b0
	if (ctx.cr6.eq) goto loc_82BD57B0;
loc_82BD5798:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD57B0;
	sub_82BC68F0(ctx, base);
loc_82BD57B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd5590
	ctx.lr = 0x82BD57BC;
	sub_82BD5590(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd57d4
	if (ctx.cr6.lt) goto loc_82BD57D4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD57D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd5800
	if (ctx.cr6.lt) goto loc_82BD5800;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD5800:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd5820
	if (ctx.cr6.eq) goto loc_82BD5820;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD5818;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd5874
	if (ctx.cr6.eq) goto loc_82BD5874;
loc_82BD5820:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188568
	ctx.lr = 0x82BD582C;
	sub_82188568(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82bd5874
	if (!ctx.cr6.eq) goto loc_82BD5874;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD5864;
	sub_82BC5690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c06c0
	ctx.lr = 0x82BD586C;
	sub_822C06C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd58bc
	goto loc_82BD58BC;
loc_82BD5874:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82bd5894
	if (!ctx.cr6.eq) goto loc_82BD5894;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd58a8
	if (!ctx.cr6.eq) goto loc_82BD58A8;
loc_82BD5894:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c06c0
	ctx.lr = 0x82BD58A0;
	sub_822C06C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd58b8
	if (!ctx.cr6.eq) goto loc_82BD58B8;
loc_82BD58A8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = ctx.r11.s64 + 8736;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD58B8;
	sub_82BC6A18(ctx, base);
loc_82BD58B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD58BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD58D4"))) PPC_WEAK_FUNC(sub_82BD58D4);
PPC_FUNC_IMPL(__imp__sub_82BD58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD58D8"))) PPC_WEAK_FUNC(sub_82BD58D8);
PPC_FUNC_IMPL(__imp__sub_82BD58D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD58E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// addi r29,r10,8120
	ctx.r29.s64 = ctx.r10.s64 + 8120;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd591c
	if (!ctx.cr6.lt) goto loc_82BD591C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd591c
	if (ctx.cr6.eq) goto loc_82BD591C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd592c
	if (!ctx.cr6.eq) goto loc_82BD592C;
loc_82BD591C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD592C;
	sub_82BC67F0(ctx, base);
loc_82BD592C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5954
	if (!ctx.cr6.lt) goto loc_82BD5954;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5954
	if (ctx.cr6.eq) goto loc_82BD5954;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5964
	if (!ctx.cr6.eq) goto loc_82BD5964;
loc_82BD5954:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5964;
	sub_82BC67F0(ctx, base);
loc_82BD5964:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc58d0
	ctx.lr = 0x82BD5974;
	sub_82BC58D0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD59A8"))) PPC_WEAK_FUNC(sub_82BD59A8);
PPC_FUNC_IMPL(__imp__sub_82BD59A8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd59ec
	if (!ctx.cr6.lt) goto loc_82BD59EC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd59ec
	if (ctx.cr6.eq) goto loc_82BD59EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd5a04
	if (ctx.cr6.eq) goto loc_82BD5A04;
loc_82BD59EC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD5A04;
	sub_82BC68F0(ctx, base);
loc_82BD5A04:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5a2c
	if (!ctx.cr6.lt) goto loc_82BD5A2C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5a2c
	if (ctx.cr6.eq) goto loc_82BD5A2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5a40
	if (!ctx.cr6.eq) goto loc_82BD5A40;
loc_82BD5A2C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5A40;
	sub_82BC67F0(ctx, base);
loc_82BD5A40:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd5a80
	if (!ctx.cr6.lt) goto loc_82BD5A80;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD5A58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd5a58
	if (ctx.cr6.lt) goto loc_82BD5A58;
loc_82BD5A80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd5a98
	if (ctx.cr6.lt) goto loc_82BD5A98;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD5A98:
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821cf230
	ctx.lr = 0x82BD5AA4;
	sub_821CF230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BD5AD8"))) PPC_WEAK_FUNC(sub_82BD5AD8);
PPC_FUNC_IMPL(__imp__sub_82BD5AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD5AE0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5b14
	if (!ctx.cr6.lt) goto loc_82BD5B14;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd5b14
	if (ctx.cr6.eq) goto loc_82BD5B14;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd5b2c
	if (ctx.cr6.eq) goto loc_82BD5B2C;
loc_82BD5B14:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD5B2C;
	sub_82BC68F0(ctx, base);
loc_82BD5B2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r30,r10,8120
	ctx.r30.s64 = ctx.r10.s64 + 8120;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd5b5c
	if (!ctx.cr6.lt) goto loc_82BD5B5C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd5b5c
	if (ctx.cr6.eq) goto loc_82BD5B5C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5b6c
	if (!ctx.cr6.eq) goto loc_82BD5B6C;
loc_82BD5B5C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5B6C;
	sub_82BC67F0(ctx, base);
loc_82BD5B6C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5b94
	if (!ctx.cr6.lt) goto loc_82BD5B94;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd5b94
	if (ctx.cr6.eq) goto loc_82BD5B94;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5ba4
	if (!ctx.cr6.eq) goto loc_82BD5BA4;
loc_82BD5B94:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5BA4;
	sub_82BC67F0(ctx, base);
loc_82BD5BA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd5be4
	if (!ctx.cr6.lt) goto loc_82BD5BE4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD5BBC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd5bbc
	if (ctx.cr6.lt) goto loc_82BD5BBC;
loc_82BD5BE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822a5e98
	ctx.lr = 0x82BD5BFC;
	sub_822A5E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD5C08"))) PPC_WEAK_FUNC(sub_82BD5C08);
PPC_FUNC_IMPL(__imp__sub_82BD5C08) {
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
	// li r7,3
	ctx.r7.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bc62b8
	ctx.lr = 0x82BD5C30;
	sub_82BC62B8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82BD5C78"))) PPC_WEAK_FUNC(sub_82BD5C78);
PPC_FUNC_IMPL(__imp__sub_82BD5C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD5C80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,832
	ctx.r29.s64 = ctx.r11.s64 + 832;
	// addi r5,r10,8476
	ctx.r5.s64 = ctx.r10.s64 + 8476;
	// addi r6,r29,-32
	ctx.r6.s64 = ctx.r29.s64 + -32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6af8
	ctx.lr = 0x82BD5CA4;
	sub_82BC6AF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd5cd8
	if (!ctx.cr6.lt) goto loc_82BD5CD8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd5cd8
	if (ctx.cr6.eq) goto loc_82BD5CD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd5ce0
	if (ctx.cr6.gt) goto loc_82BD5CE0;
loc_82BD5CD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bd5cf0
	goto loc_82BD5CF0;
loc_82BD5CE0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD5CEC;
	sub_82BC6F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD5CF0:
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r7,r28,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bgt cr6,0x82bd5d18
	if (ctx.cr6.gt) goto loc_82BD5D18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc62b8
	ctx.lr = 0x82BD5D10;
	sub_82BC62B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bd5d1c
	goto loc_82BD5D1C;
loc_82BD5D18:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82BD5D1C:
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd5d98
	if (ctx.cr6.eq) goto loc_82BD5D98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bd5d6c
	if (ctx.cr6.eq) goto loc_82BD5D6C;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD5D6C:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD5D98:
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc62b8
	ctx.lr = 0x82BD5DB0;
	sub_82BC62B8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-2112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2112);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmadds f8,f11,f0,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD5E0C"))) PPC_WEAK_FUNC(sub_82BD5E0C);
PPC_FUNC_IMPL(__imp__sub_82BD5E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD5E10"))) PPC_WEAK_FUNC(sub_82BD5E10);
PPC_FUNC_IMPL(__imp__sub_82BD5E10) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5e54
	if (!ctx.cr6.lt) goto loc_82BD5E54;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5e54
	if (ctx.cr6.eq) goto loc_82BD5E54;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5e68
	if (!ctx.cr6.eq) goto loc_82BD5E68;
loc_82BD5E54:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD5E68;
	sub_82BC67F0(ctx, base);
loc_82BD5E68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5e8c
	if (!ctx.cr6.lt) goto loc_82BD5E8C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd5e8c
	if (ctx.cr6.eq) goto loc_82BD5E8C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd5ed8
	if (!ctx.cr6.eq) goto loc_82BD5ED8;
loc_82BD5E8C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,7936
	ctx.r4.s64 = ctx.r11.s64 + 7936;
loc_82BD5E94:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD5E98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd5e98
	if (!ctx.cr6.eq) goto loc_82BD5E98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD5EBC;
	sub_8219CDA8(ctx, base);
loc_82BD5EBC:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82BD5ED8:
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,1744
	ctx.r7.s64 = ctx.r9.s64 + 1744;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bd5e94
	if (!ctx.cr6.eq) goto loc_82BD5E94;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bd5ebc
	goto loc_82BD5EBC;
}

__attribute__((alias("__imp__sub_82BD5F08"))) PPC_WEAK_FUNC(sub_82BD5F08);
PPC_FUNC_IMPL(__imp__sub_82BD5F08) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd5f4c
	if (!ctx.cr6.lt) goto loc_82BD5F4C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd5f4c
	if (ctx.cr6.eq) goto loc_82BD5F4C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd5f64
	if (ctx.cr6.eq) goto loc_82BD5F64;
loc_82BD5F4C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD5F64;
	sub_82BC68F0(ctx, base);
loc_82BD5F64:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd5fa4
	if (!ctx.cr6.lt) goto loc_82BD5FA4;
loc_82BD5F7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bd5f7c
	if (ctx.cr6.lt) goto loc_82BD5F7C;
loc_82BD5FA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82188508
	ctx.lr = 0x82BD5FBC;
	sub_82188508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd5fcc
	if (ctx.cr6.eq) goto loc_82BD5FCC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82bd5fe4
	goto loc_82BD5FE4;
loc_82BD5FCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82BD5FE4:
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

__attribute__((alias("__imp__sub_82BD5FFC"))) PPC_WEAK_FUNC(sub_82BD5FFC);
PPC_FUNC_IMPL(__imp__sub_82BD5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6000"))) PPC_WEAK_FUNC(sub_82BD6000);
PPC_FUNC_IMPL(__imp__sub_82BD6000) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6044
	if (!ctx.cr6.lt) goto loc_82BD6044;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6044
	if (ctx.cr6.eq) goto loc_82BD6044;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd605c
	if (ctx.cr6.eq) goto loc_82BD605C;
loc_82BD6044:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD605C;
	sub_82BC68F0(ctx, base);
loc_82BD605C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x82bd607c
	if (!ctx.cr6.lt) goto loc_82BD607C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD607C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd60ac
	if (ctx.cr6.lt) goto loc_82BD60AC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD60AC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82BD60F8"))) PPC_WEAK_FUNC(sub_82BD60F8);
PPC_FUNC_IMPL(__imp__sub_82BD60F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD6100;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD6110;
	sub_82BC6F00(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6140
	if (!ctx.cr6.lt) goto loc_82BD6140;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd6140
	if (ctx.cr6.eq) goto loc_82BD6140;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd6158
	if (ctx.cr6.eq) goto loc_82BD6158;
loc_82BD6140:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD6158;
	sub_82BC68F0(ctx, base);
loc_82BD6158:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd619c
	if (ctx.cr6.lt) goto loc_82BD619C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BD619C:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e1498
	ctx.lr = 0x82BD61A4;
	sub_821E1498(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd61d8
	if (ctx.cr6.eq) goto loc_82BD61D8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82BD61D8:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r10,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD61EC"))) PPC_WEAK_FUNC(sub_82BD61EC);
PPC_FUNC_IMPL(__imp__sub_82BD61EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD61F0"))) PPC_WEAK_FUNC(sub_82BD61F0);
PPC_FUNC_IMPL(__imp__sub_82BD61F0) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6234
	if (!ctx.cr6.lt) goto loc_82BD6234;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6234
	if (ctx.cr6.eq) goto loc_82BD6234;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd624c
	if (ctx.cr6.eq) goto loc_82BD624C;
loc_82BD6234:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD624C;
	sub_82BC68F0(ctx, base);
loc_82BD624C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x82bd626c
	if (!ctx.cr6.lt) goto loc_82BD626C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD626C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd629c
	if (ctx.cr6.lt) goto loc_82BD629C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD629C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82BD62F4"))) PPC_WEAK_FUNC(sub_82BD62F4);
PPC_FUNC_IMPL(__imp__sub_82BD62F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD62F8"))) PPC_WEAK_FUNC(sub_82BD62F8);
PPC_FUNC_IMPL(__imp__sub_82BD62F8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD631C;
	sub_82BC5A88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd6340
	if (!ctx.cr6.eq) goto loc_82BD6340;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD6340;
	sub_82BC68F0(ctx, base);
loc_82BD6340:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD6354;
	sub_82BC6E30(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-152
	ctx.r4.s64 = ctx.r10.s64 + -152;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6130
	ctx.lr = 0x82BD6378;
	sub_82BC6130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd6388
	if (!ctx.cr6.eq) goto loc_82BD6388;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd63b0
	goto loc_82BD63B0;
loc_82BD6388:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD63AC;
	sub_82BC5690(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82BD63B0:
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

__attribute__((alias("__imp__sub_82BD63C8"))) PPC_WEAK_FUNC(sub_82BD63C8);
PPC_FUNC_IMPL(__imp__sub_82BD63C8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD63EC;
	sub_82BC6E30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7950
	ctx.lr = 0x82BD63F8;
	sub_82BC7950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd6418
	if (!ctx.cr6.eq) goto loc_82BD6418;
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
loc_82BD6418:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD643C;
	sub_82BC5690(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_82BD6454"))) PPC_WEAK_FUNC(sub_82BD6454);
PPC_FUNC_IMPL(__imp__sub_82BD6454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6458"))) PPC_WEAK_FUNC(sub_82BD6458);
PPC_FUNC_IMPL(__imp__sub_82BD6458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD6460;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bc5510
	ctx.lr = 0x82BD6474;
	sub_82BC5510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd6494
	if (!ctx.cr6.eq) goto loc_82BD6494;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r11,8848
	ctx.r5.s64 = ctx.r11.s64 + 8848;
	// addi r4,r10,8100
	ctx.r4.s64 = ctx.r10.s64 + 8100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD6494;
	sub_82BC6A18(ctx, base);
loc_82BD6494:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd64b0
	if (ctx.cr6.lt) goto loc_82BD64B0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD64B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8219ee00
	ctx.lr = 0x82BD64DC;
	sub_8219EE00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6508
	if (ctx.cr6.eq) goto loc_82BD6508;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bd6508
	if (!ctx.cr6.eq) goto loc_82BD6508;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD6508:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5870
	ctx.lr = 0x82BD6514;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd6568
	if (ctx.cr6.eq) goto loc_82BD6568;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6534
	if (ctx.cr6.lt) goto loc_82BD6534;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD6534:
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5a88
	ctx.lr = 0x82BD6560;
	sub_82BC5A88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD6568:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8876
	ctx.r4.s64 = ctx.r11.s64 + 8876;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD6578;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD6584"))) PPC_WEAK_FUNC(sub_82BD6584);
PPC_FUNC_IMPL(__imp__sub_82BD6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6588"))) PPC_WEAK_FUNC(sub_82BD6588);
PPC_FUNC_IMPL(__imp__sub_82BD6588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD6590;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8916
	ctx.r5.s64 = ctx.r11.s64 + 8916;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD65AC;
	sub_82BC6E30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd65dc
	if (!ctx.cr6.lt) goto loc_82BD65DC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd65dc
	if (ctx.cr6.eq) goto loc_82BD65DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bd65f4
	if (ctx.cr6.eq) goto loc_82BD65F4;
loc_82BD65DC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD65F4;
	sub_82BC68F0(ctx, base);
loc_82BD65F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd6634
	if (!ctx.cr6.lt) goto loc_82BD6634;
loc_82BD660C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bd660c
	if (ctx.cr6.lt) goto loc_82BD660C;
loc_82BD6634:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,25688
	ctx.r4.s64 = ctx.r10.s64 + 25688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6130
	ctx.lr = 0x82BD6658;
	sub_82BC6130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd666c
	if (!ctx.cr6.eq) goto loc_82BD666C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD666C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD668C;
	sub_82BC5690(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD6698"))) PPC_WEAK_FUNC(sub_82BD6698);
PPC_FUNC_IMPL(__imp__sub_82BD6698) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD66C0;
	sub_82BC6E30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bc7950
	ctx.lr = 0x82BD66DC;
	sub_82BC7950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd66ec
	if (ctx.cr6.eq) goto loc_82BD66EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9788
	ctx.lr = 0x82BD66EC;
	sub_82BC9788(ctx, base);
loc_82BD66EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8219ee00
	ctx.lr = 0x82BD6700;
	sub_8219EE00(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd6718
	if (ctx.cr6.lt) goto loc_82BD6718;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BD6718:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r3,r30,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r30.s64;
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

__attribute__((alias("__imp__sub_82BD6744"))) PPC_WEAK_FUNC(sub_82BD6744);
PPC_FUNC_IMPL(__imp__sub_82BD6744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6748"))) PPC_WEAK_FUNC(sub_82BD6748);
PPC_FUNC_IMPL(__imp__sub_82BD6748) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd678c
	if (!ctx.cr6.lt) goto loc_82BD678C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd678c
	if (ctx.cr6.eq) goto loc_82BD678C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd67a0
	if (!ctx.cr6.eq) goto loc_82BD67A0;
loc_82BD678C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD67A0;
	sub_82BC67F0(ctx, base);
loc_82BD67A0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bd67b8
	if (!ctx.cr6.lt) goto loc_82BD67B8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82BD67B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bd67d8
	if (ctx.cr6.eq) goto loc_82BD67D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82bd6808
	if (!ctx.cr6.eq) goto loc_82BD6808;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bd6808
	if (!ctx.cr6.eq) goto loc_82BD6808;
loc_82BD67D8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,8924
	ctx.r5.s64 = ctx.r11.s64 + 8924;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD67F0;
	sub_82BC6E30(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-6332
	ctx.r4.s64 = ctx.r10.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD6804;
	sub_82BC6A18(ctx, base);
	// b 0x82bd6810
	goto loc_82BD6810;
loc_82BD6808:
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
loc_82BD6810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD6828"))) PPC_WEAK_FUNC(sub_82BD6828);
PPC_FUNC_IMPL(__imp__sub_82BD6828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD6830;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,1876
	ctx.r27.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6864
	if (!ctx.cr6.lt) goto loc_82BD6864;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd6864
	if (ctx.cr6.eq) goto loc_82BD6864;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd687c
	if (ctx.cr6.eq) goto loc_82BD687C;
loc_82BD6864:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD687C;
	sub_82BC68F0(ctx, base);
loc_82BD687C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd68a4
	if (!ctx.cr6.lt) goto loc_82BD68A4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd68a4
	if (ctx.cr6.eq) goto loc_82BD68A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd68ac
	if (ctx.cr6.gt) goto loc_82BD68AC;
loc_82BD68A4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82bd68bc
	goto loc_82BD68BC;
loc_82BD68AC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD68B8;
	sub_82BC6F00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BD68BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd68e4
	if (!ctx.cr6.lt) goto loc_82BD68E4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bd68e4
	if (ctx.cr6.eq) goto loc_82BD68E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd68f4
	if (ctx.cr6.gt) goto loc_82BD68F4;
loc_82BD68E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5b30
	ctx.lr = 0x82BD68F0;
	sub_82BC5B30(ctx, base);
	// b 0x82bd6900
	goto loc_82BD6900;
loc_82BD68F4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD6900;
	sub_82BC6F00(ctx, base);
loc_82BD6900:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt 0x82bd691c
	if (ctx.cr0.gt) goto loc_82BD691C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD691C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-4700
	ctx.r5.s64 = ctx.r11.s64 + -4700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6d80
	ctx.lr = 0x82BD6930;
	sub_82BC6D80(ctx, base);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82bd6984
	if (ctx.cr6.gt) goto loc_82BD6984;
loc_82BD6938:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd694c
	if (ctx.cr6.lt) goto loc_82BD694C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BD694C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821e1498
	ctx.lr = 0x82BD6958;
	sub_821E1498(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ble cr6,0x82bd6938
	if (!ctx.cr6.gt) goto loc_82BD6938;
loc_82BD6984:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD6990"))) PPC_WEAK_FUNC(sub_82BD6990);
PPC_FUNC_IMPL(__imp__sub_82BD6990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD6998;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r29,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 3;
	// bge cr6,0x82bd6a8c
	if (!ctx.cr6.lt) goto loc_82BD6A8C;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r31,r9,1876
	ctx.r31.s64 = ctx.r9.s64 + 1876;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bd6a8c
	if (ctx.cr6.eq) goto loc_82BD6A8C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x82bd6a8c
	if (!ctx.cr6.eq) goto loc_82BD6A8C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd69e0
	if (ctx.cr6.lt) goto loc_82BD69E0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD69E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd6a38
	if (ctx.cr6.eq) goto loc_82BD6A38;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD69F8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd6a08
	if (!ctx.cr6.eq) goto loc_82BD6A08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bd6a40
	goto loc_82BD6A40;
loc_82BD6A08:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd6a24
	if (ctx.cr6.lt) goto loc_82BD6A24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD6A24;
	sub_8227B8B8(ctx, base);
loc_82BD6A24:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6a38
	if (ctx.cr6.lt) goto loc_82BD6A38;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BD6A38:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82BD6A40:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82bd6a8c
	if (!ctx.cr6.eq) goto loc_82BD6A8C;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD6A8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD6A98;
	sub_82BC6F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82bd6aac
	if (!ctx.cr6.lt) goto loc_82BD6AAC;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x82bd6ab8
	goto loc_82BD6AB8;
loc_82BD6AAC:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bd6ab8
	if (!ctx.cr6.gt) goto loc_82BD6AB8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82BD6AB8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x82bd6ad4
	if (!ctx.cr6.lt) goto loc_82BD6AD4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8972
	ctx.r5.s64 = ctx.r11.s64 + 8972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD6AD4;
	sub_82BC67F0(ctx, base);
loc_82BD6AD4:
	// subf r3,r31,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD6AE0"))) PPC_WEAK_FUNC(sub_82BD6AE0);
PPC_FUNC_IMPL(__imp__sub_82BD6AE0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6b20
	if (!ctx.cr6.lt) goto loc_82BD6B20;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd6b20
	if (ctx.cr6.eq) goto loc_82BD6B20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd6b34
	if (!ctx.cr6.eq) goto loc_82BD6B34;
loc_82BD6B20:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD6B34;
	sub_82BC67F0(ctx, base);
loc_82BD6B34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r4,r8,24864
	ctx.r4.s64 = ctx.r8.s64 + 24864;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BD6B78;
	sub_822C05F8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd6b90
	if (ctx.cr6.lt) goto loc_82BD6B90;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BD6B90:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD6BC0;
	sub_82BC5690(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
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

__attribute__((alias("__imp__sub_82BD6BE4"))) PPC_WEAK_FUNC(sub_82BD6BE4);
PPC_FUNC_IMPL(__imp__sub_82BD6BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6BE8"))) PPC_WEAK_FUNC(sub_82BD6BE8);
PPC_FUNC_IMPL(__imp__sub_82BD6BE8) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6c30
	if (!ctx.cr6.lt) goto loc_82BD6C30;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6c30
	if (ctx.cr6.eq) goto loc_82BD6C30;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd6c44
	if (!ctx.cr6.eq) goto loc_82BD6C44;
loc_82BD6C30:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD6C44;
	sub_82BC67F0(ctx, base);
loc_82BD6C44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd6c84
	if (!ctx.cr6.lt) goto loc_82BD6C84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD6C5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd6c5c
	if (ctx.cr6.lt) goto loc_82BD6C5C;
loc_82BD6C84:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD6C9C;
	sub_82BC5690(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd6cb0
	if (ctx.cr6.lt) goto loc_82BD6CB0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD6CB0:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r6,24864
	ctx.r4.s64 = ctx.r6.s64 + 24864;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BD6CE0;
	sub_822C05F8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82bd6cf8
	if (ctx.cr6.lt) goto loc_82BD6CF8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BD6CF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd6d2c
	if (ctx.cr6.lt) goto loc_82BD6D2C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BD6D2C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
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

__attribute__((alias("__imp__sub_82BD6D6C"))) PPC_WEAK_FUNC(sub_82BD6D6C);
PPC_FUNC_IMPL(__imp__sub_82BD6D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD6D70"))) PPC_WEAK_FUNC(sub_82BD6D70);
PPC_FUNC_IMPL(__imp__sub_82BD6D70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6db4
	if (!ctx.cr6.lt) goto loc_82BD6DB4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6db4
	if (ctx.cr6.eq) goto loc_82BD6DB4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd6dc8
	if (!ctx.cr6.eq) goto loc_82BD6DC8;
loc_82BD6DB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD6DC8;
	sub_82BC67F0(ctx, base);
loc_82BD6DC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD6DD4;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd6e38
	if (ctx.cr6.eq) goto loc_82BD6E38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4196
	ctx.r4.s64 = ctx.r11.s64 + 4196;
	// bl 0x82bc6f70
	ctx.lr = 0x82BD6DEC;
	sub_82BC6F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd6e38
	if (ctx.cr6.eq) goto loc_82BD6E38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD6E00;
	sub_82BC5448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8219ee00
	ctx.lr = 0x82BD6E34;
	sub_8219EE00(ctx, base);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6E38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd6fd8
	if (!ctx.cr6.lt) goto loc_82BD6FD8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd6fd0
	if (ctx.cr6.eq) goto loc_82BD6FD0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82bd6fd0
	if (ctx.cr6.gt) goto loc_82BD6FD0;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,28276
	ctx.r12.s64 = ctx.r12.s64 + 28276;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82BD6FB8;
	case 1:
		goto loc_82BD6F64;
	case 2:
		goto loc_82BD6FD0;
	case 3:
		goto loc_82BD6E88;
	case 4:
		goto loc_82BD6F38;
	default:
		__builtin_unreachable();
	}
	// lwz r21,28600(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28600);
	// lwz r21,28516(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28516);
	// lwz r21,28624(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28624);
	// lwz r21,28296(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28296);
	// lwz r21,28472(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28472);
loc_82BD6E88:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6e94
	if (ctx.cr6.lt) goto loc_82BD6E94;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD6E94:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd6ee4
	if (ctx.cr6.eq) goto loc_82BD6EE4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD6EAC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd6ef0
	if (ctx.cr6.eq) goto loc_82BD6EF0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd6ed0
	if (ctx.cr6.lt) goto loc_82BD6ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD6ED0;
	sub_8227B8B8(ctx, base);
loc_82BD6ED0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6ee4
	if (ctx.cr6.lt) goto loc_82BD6EE4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD6EE4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r4,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r4.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bd6f0c
	if (!ctx.cr0.eq) goto loc_82BD6F0C;
loc_82BD6EF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6F0C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD6F10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd6f10
	if (!ctx.cr6.eq) goto loc_82BD6F10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD6F34;
	sub_8219CDA8(ctx, base);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6F38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6f44
	if (ctx.cr6.lt) goto loc_82BD6F44;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD6F44:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6F64:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BD6F70;
	sub_82BC5A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd6f84
	if (ctx.cr6.eq) goto loc_82BD6F84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3900
	ctx.r4.s64 = ctx.r11.s64 + 3900;
	// b 0x82bd6f8c
	goto loc_82BD6F8C;
loc_82BD6F84:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,5664
	ctx.r4.s64 = ctx.r11.s64 + 5664;
loc_82BD6F8C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BD6F90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd6f90
	if (!ctx.cr6.eq) goto loc_82BD6F90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD6FB4;
	sub_8219CDA8(ctx, base);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6FB8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,2228
	ctx.r4.s64 = ctx.r11.s64 + 2228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD6FCC;
	sub_8219CDA8(ctx, base);
	// b 0x82bd7090
	goto loc_82BD7090;
loc_82BD6FD0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd6fdc
	if (ctx.cr6.lt) goto loc_82BD6FDC;
loc_82BD6FD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD6FDC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82bd703c
	if (ctx.cr6.gt) goto loc_82BD703C;
	// lis r12,-32067
	ctx.r12.s64 = -2101542912;
	// addi r12,r12,28676
	ctx.r12.s64 = ctx.r12.s64 + 28676;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BD7028;
	case 1:
		goto loc_82BD703C;
	case 2:
		goto loc_82BD703C;
	case 3:
		goto loc_82BD7020;
	case 4:
		goto loc_82BD7020;
	case 5:
		goto loc_82BD7028;
	case 6:
		goto loc_82BD7020;
	default:
		__builtin_unreachable();
	}
	// lwz r21,28712(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28712);
	// lwz r21,28732(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28732);
	// lwz r21,28732(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28732);
	// lwz r21,28704(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28704);
	// lwz r21,28704(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28704);
	// lwz r21,28712(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28712);
	// lwz r21,28704(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28704);
loc_82BD7020:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82bd7040
	goto loc_82BD7040;
loc_82BD7028:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BD7034;
	sub_822AF338(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82bd7040
	goto loc_82BD7040;
loc_82BD703C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82BD7040:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd7064
	if (!ctx.cr6.lt) goto loc_82BD7064;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd7064
	if (ctx.cr6.eq) goto loc_82BD7064;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd7070
	if (!ctx.cr6.eq) goto loc_82BD7070;
loc_82BD7064:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,7936
	ctx.r5.s64 = ctx.r11.s64 + 7936;
	// b 0x82bd7080
	goto loc_82BD7080;
loc_82BD7070:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1744
	ctx.r8.s64 = ctx.r10.s64 + 1744;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82BD7080:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD7090;
	sub_82BC5C08(ctx, base);
loc_82BD7090:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82BD70AC"))) PPC_WEAK_FUNC(sub_82BD70AC);
PPC_FUNC_IMPL(__imp__sub_82BD70AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD70B0"))) PPC_WEAK_FUNC(sub_82BD70B0);
PPC_FUNC_IMPL(__imp__sub_82BD70B0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd7104
	if (!ctx.cr6.lt) goto loc_82BD7104;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD70DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd70dc
	if (ctx.cr6.lt) goto loc_82BD70DC;
loc_82BD7104:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc6558
	ctx.lr = 0x82BD711C;
	sub_82BC6558(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,1876
	ctx.r7.s64 = ctx.r11.s64 + 1876;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd713c
	if (!ctx.cr6.lt) goto loc_82BD713C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD713C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bd723c
	if (ctx.cr6.eq) goto loc_82BD723C;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82bd715c
	if (!ctx.cr6.eq) goto loc_82BD715C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bd723c
	if (ctx.cr6.eq) goto loc_82BD723C;
loc_82BD715C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd71d0
	if (!ctx.cr6.lt) goto loc_82BD71D0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bd71d0
	if (ctx.cr6.eq) goto loc_82BD71D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bd71d0
	if (!ctx.cr6.eq) goto loc_82BD71D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD7188;
	sub_82BC5CD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x822a5e98
	ctx.lr = 0x82BD71CC;
	sub_822A5E98(ctx, base);
	// b 0x82bd7230
	goto loc_82BD7230;
loc_82BD71D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD71DC;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd7210
	if (ctx.cr6.eq) goto loc_82BD7210;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c88
	ctx.lr = 0x82BD71F0;
	sub_82BC5C88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BD71FC;
	sub_82BC5A30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82bd7224
	if (!ctx.cr6.eq) goto loc_82BD7224;
loc_82BD7210:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,9000
	ctx.r5.s64 = ctx.r11.s64 + 9000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD7224;
	sub_82BC67F0(ctx, base);
loc_82BD7224:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD7230;
	sub_82BC5D40(ctx, base);
loc_82BD7230:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BD723C;
	sub_82BC5FF0(ctx, base);
loc_82BD723C:
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
}

__attribute__((alias("__imp__sub_82BD7254"))) PPC_WEAK_FUNC(sub_82BD7254);
PPC_FUNC_IMPL(__imp__sub_82BD7254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7258"))) PPC_WEAK_FUNC(sub_82BD7258);
PPC_FUNC_IMPL(__imp__sub_82BD7258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD7260;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5510
	ctx.lr = 0x82BD727C;
	sub_82BC5510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd7294
	if (!ctx.cr6.eq) goto loc_82BD7294;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9048
	ctx.r4.s64 = ctx.r11.s64 + 9048;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD7294;
	sub_82BC6A18(ctx, base);
loc_82BD7294:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd72d8
	if (!ctx.cr6.eq) goto loc_82BD72D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bd72d8
	if (!ctx.cr6.eq) goto loc_82BD72D8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,-4736
	ctx.r4.s64 = ctx.r11.s64 + -4736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD72CC;
	sub_8219CDA8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD72D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265850
	ctx.lr = 0x82BD72E8;
	sub_82265850(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ddf38
	ctx.lr = 0x82BD72F4;
	sub_822DDF38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd7340
	if (ctx.cr6.eq) goto loc_82BD7340;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82bd7340
	if (ctx.cr6.eq) goto loc_82BD7340;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd7334
	if (ctx.cr6.eq) goto loc_82BD7334;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD7334:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD7340:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5510
	ctx.lr = 0x82BD735C;
	sub_82BC5510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd7374
	if (!ctx.cr6.eq) goto loc_82BD7374;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,9108
	ctx.r4.s64 = ctx.r11.s64 + 9108;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD7374;
	sub_82BC6A18(ctx, base);
loc_82BD7374:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265850
	ctx.lr = 0x82BD7384;
	sub_82265850(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD7390"))) PPC_WEAK_FUNC(sub_82BD7390);
PPC_FUNC_IMPL(__imp__sub_82BD7390) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd73c0
	if (ctx.cr6.lt) goto loc_82BD73C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,1876
	ctx.r11.s64 = ctx.r11.s64 + 1876;
loc_82BD73C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82bd73d4
	if (ctx.cr6.eq) goto loc_82BD73D4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd73e0
	goto loc_82BD73E0;
loc_82BD73D4:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd73f4
	if (!ctx.cr6.eq) goto loc_82BD73F4;
loc_82BD73E0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD73F4;
	sub_82BC67F0(ctx, base);
loc_82BD73F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82bd7258
	ctx.lr = 0x82BD7414;
	sub_82BD7258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82bd7454
	if (!ctx.cr6.lt) goto loc_82BD7454;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD744C;
	sub_82BC5690(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82bd747c
	goto loc_82BD747C;
loc_82BD7454:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r30.s64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5690
	ctx.lr = 0x82BD7478;
	sub_82BC5690(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
loc_82BD747C:
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

__attribute__((alias("__imp__sub_82BD7494"))) PPC_WEAK_FUNC(sub_82BD7494);
PPC_FUNC_IMPL(__imp__sub_82BD7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7498"))) PPC_WEAK_FUNC(sub_82BD7498);
PPC_FUNC_IMPL(__imp__sub_82BD7498) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82bd74d0
	if (ctx.cr6.lt) goto loc_82BD74D0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// b 0x82bd74d8
	goto loc_82BD74D8;
loc_82BD74D0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,1876
	ctx.r11.s64 = ctx.r11.s64 + 1876;
loc_82BD74D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82bd74ec
	if (!ctx.cr6.eq) goto loc_82BD74EC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BD74EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bd7258
	ctx.lr = 0x82BD7504;
	sub_82BD7258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82bd7550
	if (!ctx.cr6.lt) goto loc_82BD7550;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5870
	ctx.lr = 0x82BD751C;
	sub_82BC5870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd7548
	if (ctx.cr6.eq) goto loc_82BD7548;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6980
	ctx.lr = 0x82BD7530;
	sub_82BC6980(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5690
	ctx.lr = 0x82BD753C;
	sub_82BC5690(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6490
	ctx.lr = 0x82BD7548;
	sub_82BC6490(ctx, base);
loc_82BD7548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9788
	ctx.lr = 0x82BD7550;
	sub_82BC9788(ctx, base);
loc_82BD7550:
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

__attribute__((alias("__imp__sub_82BD756C"))) PPC_WEAK_FUNC(sub_82BD756C);
PPC_FUNC_IMPL(__imp__sub_82BD756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7570"))) PPC_WEAK_FUNC(sub_82BD7570);
PPC_FUNC_IMPL(__imp__sub_82BD7570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD7578;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd7598
	if (ctx.cr6.lt) goto loc_82BD7598;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD7598;
	sub_8227B8B8(ctx, base);
loc_82BD7598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7e98
	ctx.lr = 0x82BD75A0;
	sub_82BC7E98(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd7610
	if (!ctx.cr6.lt) goto loc_82BD7610;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd7610
	if (ctx.cr6.eq) goto loc_82BD7610;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82bd7610
	if (!ctx.cr6.eq) goto loc_82BD7610;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd75f4
	if (ctx.cr6.lt) goto loc_82BD75F4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD75F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82bd7624
	if (!ctx.cr6.eq) goto loc_82BD7624;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bd7624
	if (ctx.cr6.eq) goto loc_82BD7624;
loc_82BD7610:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,9136
	ctx.r5.s64 = ctx.r11.s64 + 9136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD7624;
	sub_82BC67F0(ctx, base);
loc_82BD7624:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd7638
	if (ctx.cr6.lt) goto loc_82BD7638;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BD7638:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82bd7684
	if (ctx.cr6.eq) goto loc_82BD7684;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82BD7684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD768C"))) PPC_WEAK_FUNC(sub_82BD768C);
PPC_FUNC_IMPL(__imp__sub_82BD768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7690"))) PPC_WEAK_FUNC(sub_82BD7690);
PPC_FUNC_IMPL(__imp__sub_82BD7690) {
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
	// bl 0x82bd7570
	ctx.lr = 0x82BD76A8;
	sub_82BD7570(ctx, base);
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,29848
	ctx.r4.s64 = ctx.r11.s64 + 29848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD76BC;
	sub_8227B7E0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82BD76D4"))) PPC_WEAK_FUNC(sub_82BD76D4);
PPC_FUNC_IMPL(__imp__sub_82BD76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD76D8"))) PPC_WEAK_FUNC(sub_82BD76D8);
PPC_FUNC_IMPL(__imp__sub_82BD76D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// srawi r30,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// beq cr6,0x82bd7718
	if (ctx.cr6.eq) goto loc_82BD7718;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,11900
	ctx.r4.s64 = ctx.r11.s64 + 11900;
	// bl 0x82bc9860
	ctx.lr = 0x82BD7718;
	sub_82BC9860(ctx, base);
loc_82BD7718:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD774C"))) PPC_WEAK_FUNC(sub_82BD774C);
PPC_FUNC_IMPL(__imp__sub_82BD774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7750"))) PPC_WEAK_FUNC(sub_82BD7750);
PPC_FUNC_IMPL(__imp__sub_82BD7750) {
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
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd7780
	if (ctx.cr6.lt) goto loc_82BD7780;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,1876
	ctx.r11.s64 = ctx.r11.s64 + 1876;
loc_82BD7780:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82bd7794
	if (ctx.cr6.eq) goto loc_82BD7794;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bd77a0
	goto loc_82BD77A0;
loc_82BD7794:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bd77b4
	if (!ctx.cr6.eq) goto loc_82BD77B4;
loc_82BD77A0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD77B4;
	sub_82BC67F0(ctx, base);
loc_82BD77B4:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bd77cc
	if (!ctx.cr6.eq) goto loc_82BD77CC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,8244
	ctx.r4.s64 = ctx.r11.s64 + 8244;
	// b 0x82bd7854
	goto loc_82BD7854;
loc_82BD77CC:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bd7800
	if (ctx.cr6.lt) goto loc_82BD7800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82bd77f0
	if (ctx.cr6.eq) goto loc_82BD77F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,3836
	ctx.r4.s64 = ctx.r11.s64 + 3836;
	// b 0x82bd7858
	goto loc_82BD7858;
loc_82BD77F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,4364
	ctx.r4.s64 = ctx.r11.s64 + 4364;
	// b 0x82bd7858
	goto loc_82BD7858;
loc_82BD7800:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82bd7820
	if (!ctx.cr6.gt) goto loc_82BD7820;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,8236
	ctx.r4.s64 = ctx.r11.s64 + 8236;
	// b 0x82bd7854
	goto loc_82BD7854;
loc_82BD7820:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bd7848
	if (!ctx.cr6.eq) goto loc_82BD7848;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,3836
	ctx.r4.s64 = ctx.r11.s64 + 3836;
	// b 0x82bd7854
	goto loc_82BD7854;
loc_82BD7848:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,4364
	ctx.r4.s64 = ctx.r11.s64 + 4364;
loc_82BD7854:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BD7858:
	// bl 0x8219cda8
	ctx.lr = 0x82BD785C;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BD7878"))) PPC_WEAK_FUNC(sub_82BD7878);
PPC_FUNC_IMPL(__imp__sub_82BD7878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,100(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD78B0"))) PPC_WEAK_FUNC(sub_82BD78B0);
PPC_FUNC_IMPL(__imp__sub_82BD78B0) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r30,r10,-28000
	ctx.r30.s64 = ctx.r10.s64 + -28000;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD78FC;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r6,880
	ctx.r5.s64 = ctx.r6.s64 + 880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82bc7060
	ctx.lr = 0x82BD7914;
	sub_82BC7060(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,9160
	ctx.r4.s64 = ctx.r5.s64 + 9160;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x8219cda8
	ctx.lr = 0x82BD7928;
	sub_8219CDA8(ctx, base);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r4,9168
	ctx.r5.s64 = ctx.r4.s64 + 9168;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD793C;
	sub_82BC5EB0(ctx, base);
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,24824
	ctx.r4.s64 = ctx.r11.s64 + 24824;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD7950;
	sub_8227B7E0(ctx, base);
	// lis r10,-32067
	ctx.r10.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,25072
	ctx.r4.s64 = ctx.r10.s64 + 25072;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD7964;
	sub_8227B7E0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,9180
	ctx.r5.s64 = ctx.r9.s64 + 9180;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD7978;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32067
	ctx.r8.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,24328
	ctx.r4.s64 = ctx.r8.s64 + 24328;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD798C;
	sub_8227B7E0(ctx, base);
	// lis r7,-32067
	ctx.r7.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,24576
	ctx.r4.s64 = ctx.r7.s64 + 24576;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD79A0;
	sub_8227B7E0(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r6,9188
	ctx.r5.s64 = ctx.r6.s64 + 9188;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD79B4;
	sub_82BC5EB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD79C4;
	sub_82BC5CD8(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,-8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5ff0
	ctx.lr = 0x82BD79F0;
	sub_82BC5FF0(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r8,9196
	ctx.r4.s64 = ctx.r8.s64 + 9196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD7A04;
	sub_8219CDA8(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r7,9200
	ctx.r5.s64 = ctx.r7.s64 + 9200;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD7A18;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32067
	ctx.r6.s64 = -2101542912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,28848
	ctx.r4.s64 = ctx.r6.s64 + 28848;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD7A2C;
	sub_8227B7E0(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r5,9208
	ctx.r5.s64 = ctx.r5.s64 + 9208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD7A40;
	sub_82BC5EB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD7A58"))) PPC_WEAK_FUNC(sub_82BD7A58);
PPC_FUNC_IMPL(__imp__sub_82BD7A58) {
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
	// bl 0x82bd78b0
	ctx.lr = 0x82BD7A70;
	sub_82BD78B0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r11,1080
	ctx.r5.s64 = ctx.r11.s64 + 1080;
	// addi r4,r10,9220
	ctx.r4.s64 = ctx.r10.s64 + 9220;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BD7A8C;
	sub_82BC7060(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_82BD7AA4"))) PPC_WEAK_FUNC(sub_82BD7AA4);
PPC_FUNC_IMPL(__imp__sub_82BD7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7AA8"))) PPC_WEAK_FUNC(sub_82BD7AA8);
PPC_FUNC_IMPL(__imp__sub_82BD7AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD7AB0;
	sub_82CA2BE8(ctx, base);
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
	// bl 0x82cab770
	ctx.lr = 0x82BD7AC4;
	sub_82CAB770(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bd7af8
	if (ctx.cr6.eq) goto loc_82BD7AF8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD7AF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82bd7b3c
	if (ctx.cr6.eq) goto loc_82BD7B3C;
	// bl 0x83000f30
	ctx.lr = 0x82BD7B20;
	sub_83000F30(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4584
	ctx.r4.s64 = ctx.r11.s64 + -4584;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD7B38;
	sub_82BC5C08(ctx, base);
	// b 0x82bd7b54
	goto loc_82BD7B54;
loc_82BD7B3C:
	// bl 0x83000f30
	ctx.lr = 0x82BD7B40;
	sub_83000F30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD7B54;
	sub_82BC5C08(ctx, base);
loc_82BD7B54:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,3
	ctx.r3.s64 = 3;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD7B90"))) PPC_WEAK_FUNC(sub_82BD7B90);
PPC_FUNC_IMPL(__imp__sub_82BD7B90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82cab770
	ctx.lr = 0x82BD7BB0;
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83000f30
	ctx.lr = 0x82BD7BB8;
	sub_83000F30(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4584
	ctx.r4.s64 = ctx.r11.s64 + -4584;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD7BD0;
	sub_82BC5C08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd7c20
	if (ctx.cr6.eq) goto loc_82BD7C20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD7BEC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd7bfc
	if (!ctx.cr6.eq) goto loc_82BD7BFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bd7c28
	goto loc_82BD7C28;
loc_82BD7BFC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd7c18
	if (ctx.cr6.lt) goto loc_82BD7C18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD7C18;
	sub_8227B8B8(ctx, base);
loc_82BD7C18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
loc_82BD7C20:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_82BD7C28:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD7C34;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82BD7C4C"))) PPC_WEAK_FUNC(sub_82BD7C4C);
PPC_FUNC_IMPL(__imp__sub_82BD7C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7C50"))) PPC_WEAK_FUNC(sub_82BD7C50);
PPC_FUNC_IMPL(__imp__sub_82BD7C50) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd7c94
	if (!ctx.cr6.lt) goto loc_82BD7C94;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd7c94
	if (ctx.cr6.eq) goto loc_82BD7C94;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd7ca8
	if (!ctx.cr6.eq) goto loc_82BD7CA8;
loc_82BD7C94:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,8120
	ctx.r5.s64 = ctx.r11.s64 + 8120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD7CA8;
	sub_82BC67F0(ctx, base);
loc_82BD7CA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BD7CB4;
	sub_822AF338(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BD7CCC;
	sub_821E1408(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bd7d38
	if (ctx.cr6.eq) goto loc_82BD7D38;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BD7CE0;
	sub_82BC5D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd7d38
	if (ctx.cr6.eq) goto loc_82BD7D38;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc58d0
	ctx.lr = 0x82BD7CF8;
	sub_82BC58D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd7d38
	if (ctx.cr6.eq) goto loc_82BD7D38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd7d24
	if (!ctx.cr6.eq) goto loc_82BD7D24;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// bl 0x8219cda8
	ctx.lr = 0x82BD7D20;
	sub_8219CDA8(ctx, base);
	// b 0x82bd7d50
	goto loc_82BD7D50;
loc_82BD7D24:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-4556
	ctx.r4.s64 = ctx.r11.s64 + -4556;
	// bl 0x8219cda8
	ctx.lr = 0x82BD7D34;
	sub_8219CDA8(ctx, base);
	// b 0x82bd7d50
	goto loc_82BD7D50;
loc_82BD7D38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82BD7D50:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BD7D6C"))) PPC_WEAK_FUNC(sub_82BD7D6C);
PPC_FUNC_IMPL(__imp__sub_82BD7D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7D70"))) PPC_WEAK_FUNC(sub_82BD7D70);
PPC_FUNC_IMPL(__imp__sub_82BD7D70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BD7D98;
	sub_82BC6CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bd7db8
	if (!ctx.cr6.eq) goto loc_82BD7DB8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-4548
	ctx.r4.s64 = ctx.r11.s64 + -4548;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD7DB8;
	sub_82BC6A18(ctx, base);
loc_82BD7DB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BD7DD4"))) PPC_WEAK_FUNC(sub_82BD7DD4);
PPC_FUNC_IMPL(__imp__sub_82BD7DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7DD8"))) PPC_WEAK_FUNC(sub_82BD7DD8);
PPC_FUNC_IMPL(__imp__sub_82BD7DD8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6558
	ctx.lr = 0x82BD7DF8;
	sub_82BC6558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-4576
	ctx.r5.s64 = ctx.r10.s64 + -4576;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1408
	ctx.lr = 0x82BD7E18;
	sub_821E1408(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BD7E24;
	sub_82BC5FF0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD7E40"))) PPC_WEAK_FUNC(sub_82BD7E40);
PPC_FUNC_IMPL(__imp__sub_82BD7E40) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BD7E64;
	sub_82BC6CE8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD7E80;
	sub_82BD7AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD7E94"))) PPC_WEAK_FUNC(sub_82BD7E94);
PPC_FUNC_IMPL(__imp__sub_82BD7E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7E98"))) PPC_WEAK_FUNC(sub_82BD7E98);
PPC_FUNC_IMPL(__imp__sub_82BD7E98) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BD7EC0;
	sub_82BC6CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ca49d8
	ctx.lr = 0x82BD7ECC;
	sub_82CA49D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD7EE8;
	sub_82BD7AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD7F00"))) PPC_WEAK_FUNC(sub_82BD7F00);
PPC_FUNC_IMPL(__imp__sub_82BD7F00) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5dd0
	ctx.lr = 0x82BD7F1C;
	sub_82BC5DD0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r11,-4516
	ctx.r5.s64 = ctx.r11.s64 + -4516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BD7F30;
	sub_821E1408(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82bd7f58
	if (!ctx.cr6.eq) goto loc_82BD7F58;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bd7f58
	if (ctx.cr6.eq) goto loc_82BD7F58;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82bd7f5c
	goto loc_82BD7F5C;
loc_82BD7F58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BD7F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BD7F68;
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

__attribute__((alias("__imp__sub_82BD7F7C"))) PPC_WEAK_FUNC(sub_82BD7F7C);
PPC_FUNC_IMPL(__imp__sub_82BD7F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7F80"))) PPC_WEAK_FUNC(sub_82BD7F80);
PPC_FUNC_IMPL(__imp__sub_82BD7F80) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd7fc0
	if (!ctx.cr6.lt) goto loc_82BD7FC0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd7fc0
	if (ctx.cr6.eq) goto loc_82BD7FC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bd7fd0
	if (!ctx.cr6.eq) goto loc_82BD7FD0;
loc_82BD7FC0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BD7FD0;
	sub_821E1548(ctx, base);
loc_82BD7FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7d70
	ctx.lr = 0x82BD7FD8;
	sub_82BD7D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7f00
	ctx.lr = 0x82BD7FE0;
	sub_82BD7F00(ctx, base);
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

__attribute__((alias("__imp__sub_82BD7FF4"))) PPC_WEAK_FUNC(sub_82BD7FF4);
PPC_FUNC_IMPL(__imp__sub_82BD7FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD7FF8"))) PPC_WEAK_FUNC(sub_82BD7FF8);
PPC_FUNC_IMPL(__imp__sub_82BD7FF8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BD8020;
	sub_82BC6CE8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bd8060
	if (ctx.cr6.eq) goto loc_82BD8060;
	// bl 0x82240578
	ctx.lr = 0x82BD8030;
	sub_82240578(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bd8060
	if (ctx.cr6.eq) goto loc_82BD8060;
	// bl 0x82240578
	ctx.lr = 0x82BD803C;
	sub_82240578(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bd8060
	if (ctx.cr6.eq) goto loc_82BD8060;
	// bl 0x82240578
	ctx.lr = 0x82BD804C;
	sub_82240578(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bd8060
	if (ctx.cr6.eq) goto loc_82BD8060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bd7f00
	ctx.lr = 0x82BD8060;
	sub_82BD7F00(ctx, base);
loc_82BD8060:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82BD807C"))) PPC_WEAK_FUNC(sub_82BD807C);
PPC_FUNC_IMPL(__imp__sub_82BD807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8080"))) PPC_WEAK_FUNC(sub_82BD8080);
PPC_FUNC_IMPL(__imp__sub_82BD8080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4576
	ctx.r5.s64 = ctx.r11.s64 + -4576;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BD80A4;
	sub_82BC6CE8(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bd80c8
	if (!ctx.cr6.eq) goto loc_82BD80C8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-4508
	ctx.r4.s64 = ctx.r11.s64 + -4508;
	// bl 0x8219cda8
	ctx.lr = 0x82BD80C4;
	sub_8219CDA8(ctx, base);
	// b 0x82bd80d4
	goto loc_82BD80D4;
loc_82BD80C8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-4492
	ctx.r4.s64 = ctx.r11.s64 + -4492;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD80D4;
	sub_82BC5C08(ctx, base);
loc_82BD80D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD80EC"))) PPC_WEAK_FUNC(sub_82BD80EC);
PPC_FUNC_IMPL(__imp__sub_82BD80EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD80F0"))) PPC_WEAK_FUNC(sub_82BD80F0);
PPC_FUNC_IMPL(__imp__sub_82BD80F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD80F8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd811c
	if (ctx.cr6.lt) goto loc_82BD811C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD811C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd8170
	if (ctx.cr6.eq) goto loc_82BD8170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD8130;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd8140
	if (!ctx.cr6.eq) goto loc_82BD8140;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd817c
	goto loc_82BD817C;
loc_82BD8140:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd815c
	if (ctx.cr6.lt) goto loc_82BD815C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD815C;
	sub_8227B8B8(ctx, base);
loc_82BD815C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd8170
	if (ctx.cr6.lt) goto loc_82BD8170;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD8170:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd8194
	if (!ctx.cr0.eq) goto loc_82BD8194;
loc_82BD817C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD8194;
	sub_82BC68F0(ctx, base);
loc_82BD8194:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11932
	ctx.r5.s64 = ctx.r11.s64 + 11932;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD81AC;
	sub_82BC6E30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD81B8;
	sub_82BD7DD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4890
	ctx.lr = 0x82BD81C8;
	sub_82CA4890(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd81ec
	if (!ctx.cr6.eq) goto loc_82BD81EC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD81E4;
	sub_82BD7AA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD81EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD81F8"))) PPC_WEAK_FUNC(sub_82BD81F8);
PPC_FUNC_IMPL(__imp__sub_82BD81F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD8200;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd8224
	if (ctx.cr6.lt) goto loc_82BD8224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD8224:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd8278
	if (ctx.cr6.eq) goto loc_82BD8278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD8238;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd8248
	if (!ctx.cr6.eq) goto loc_82BD8248;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd8284
	goto loc_82BD8284;
loc_82BD8248:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd8264
	if (ctx.cr6.lt) goto loc_82BD8264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD8264;
	sub_8227B8B8(ctx, base);
loc_82BD8264:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd8278
	if (ctx.cr6.lt) goto loc_82BD8278;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD8278:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd829c
	if (!ctx.cr0.eq) goto loc_82BD829C;
loc_82BD8284:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD829C;
	sub_82BC68F0(ctx, base);
loc_82BD829C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,11932
	ctx.r5.s64 = ctx.r11.s64 + 11932;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD82B4;
	sub_82BC6E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD82BC;
	sub_82BD7DD8(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r10,-4480
	ctx.r4.s64 = ctx.r10.s64 + -4480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD82D0;
	sub_82BC6A18(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD82E8;
	sub_82BD7AA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD82F0"))) PPC_WEAK_FUNC(sub_82BD82F0);
PPC_FUNC_IMPL(__imp__sub_82BD82F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD830C;
	sub_82BD7DD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83000d90
	ctx.lr = 0x82BD8314;
	sub_83000D90(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd8394
	if (!ctx.cr6.eq) goto loc_82BD8394;
	// bl 0x82cab770
	ctx.lr = 0x82BD8324;
	sub_82CAB770(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x83000f30
	ctx.lr = 0x82BD8348;
	sub_83000F30(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-6332
	ctx.r4.s64 = ctx.r8.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD835C;
	sub_82BC5C08(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,3
	ctx.r6.s64 = 3;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,3
	ctx.r3.s64 = 3;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// b 0x82bd8398
	goto loc_82BD8398;
loc_82BD8394:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD8398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82BD83B0"))) PPC_WEAK_FUNC(sub_82BD83B0);
PPC_FUNC_IMPL(__imp__sub_82BD83B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD83B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// bl 0x821e1498
	ctx.lr = 0x82BD83EC;
	sub_821E1498(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x822af338
	ctx.lr = 0x82BD8418;
	sub_822AF338(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd8448
	if (!ctx.cr6.eq) goto loc_82BD8448;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,-4456
	ctx.r4.s64 = ctx.r9.s64 + -4456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82bc6a18
	ctx.lr = 0x82BD8448;
	sub_82BC6A18(ctx, base);
loc_82BD8448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD8454"))) PPC_WEAK_FUNC(sub_82BD8454);
PPC_FUNC_IMPL(__imp__sub_82BD8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8458"))) PPC_WEAK_FUNC(sub_82BD8458);
PPC_FUNC_IMPL(__imp__sub_82BD8458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD8460;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd8584
	if (!ctx.cr6.lt) goto loc_82BD8584;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r29,r9,1876
	ctx.r29.s64 = ctx.r9.s64 + 1876;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bd8584
	if (ctx.cr6.eq) goto loc_82BD8584;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bd8584
	if (!ctx.cr6.gt) goto loc_82BD8584;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd84a8
	if (ctx.cr6.lt) goto loc_82BD84A8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD84A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd84f8
	if (ctx.cr6.eq) goto loc_82BD84F8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD84C0;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd853c
	if (ctx.cr6.eq) goto loc_82BD853C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd84e4
	if (ctx.cr6.lt) goto loc_82BD84E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD84E4;
	sub_8227B8B8(ctx, base);
loc_82BD84E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd84f8
	if (ctx.cr6.lt) goto loc_82BD84F8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BD84F8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd853c
	if (ctx.cr0.eq) goto loc_82BD853C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD850C;
	sub_82BD7DD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4890
	ctx.lr = 0x82BD851C;
	sub_82CA4890(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd8574
	if (!ctx.cr6.eq) goto loc_82BD8574;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7b90
	ctx.lr = 0x82BD8538;
	sub_82BD7B90(ctx, base);
	// b 0x82bd8574
	goto loc_82BD8574;
loc_82BD853C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7d70
	ctx.lr = 0x82BD8544;
	sub_82BD7D70(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd8558
	if (ctx.cr6.lt) goto loc_82BD8558;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BD8558:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
loc_82BD8574:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5f48
	ctx.lr = 0x82BD8584;
	sub_82BC5F48(ctx, base);
loc_82BD8584:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// bl 0x821e1498
	ctx.lr = 0x82BD85B0;
	sub_821E1498(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD85E0"))) PPC_WEAK_FUNC(sub_82BD85E0);
PPC_FUNC_IMPL(__imp__sub_82BD85E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,11932
	ctx.r5.s64 = ctx.r11.s64 + 11932;
	// b 0x82bd8458
	sub_82BD8458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD85F0"))) PPC_WEAK_FUNC(sub_82BD85F0);
PPC_FUNC_IMPL(__imp__sub_82BD85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,11952
	ctx.r5.s64 = ctx.r11.s64 + 11952;
	// b 0x82bd8458
	sub_82BD8458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD8600"))) PPC_WEAK_FUNC(sub_82BD8600);
PPC_FUNC_IMPL(__imp__sub_82BD8600) {
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
	// bl 0x82bd7d70
	ctx.lr = 0x82BD8618;
	sub_82BD7D70(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd8630
	if (ctx.cr6.lt) goto loc_82BD8630;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,1876
	ctx.r11.s64 = ctx.r11.s64 + 1876;
loc_82BD8630:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32066
	ctx.r6.s64 = -2101477376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r6,-29120
	ctx.r4.s64 = ctx.r6.s64 + -29120;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8227b7e0
	ctx.lr = 0x82BD867C;
	sub_8227B7E0(ctx, base);
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
}

__attribute__((alias("__imp__sub_82BD8694"))) PPC_WEAK_FUNC(sub_82BD8694);
PPC_FUNC_IMPL(__imp__sub_82BD8694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8698"))) PPC_WEAK_FUNC(sub_82BD8698);
PPC_FUNC_IMPL(__imp__sub_82BD8698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD86A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd86d4
	if (!ctx.cr6.lt) goto loc_82BD86D4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r10,1876
	ctx.r30.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd86d4
	if (ctx.cr6.eq) goto loc_82BD86D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82bd86f4
	if (ctx.cr6.gt) goto loc_82BD86F4;
loc_82BD86D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BD86E4;
	sub_821E1548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd8600
	ctx.lr = 0x82BD86EC;
	sub_82BD8600(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD86F4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd8700
	if (ctx.cr6.lt) goto loc_82BD8700;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD8700:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bd8758
	if (ctx.cr6.eq) goto loc_82BD8758;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD8718;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd8728
	if (!ctx.cr6.eq) goto loc_82BD8728;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd8764
	goto loc_82BD8764;
loc_82BD8728:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd8744
	if (ctx.cr6.lt) goto loc_82BD8744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD8744;
	sub_8227B8B8(ctx, base);
loc_82BD8744:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd8758
	if (ctx.cr6.lt) goto loc_82BD8758;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BD8758:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd877c
	if (!ctx.cr0.eq) goto loc_82BD877C;
loc_82BD8764:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD877C;
	sub_82BC68F0(ctx, base);
loc_82BD877C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD8784;
	sub_82BD7DD8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,11932
	ctx.r4.s64 = ctx.r11.s64 + 11932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4890
	ctx.lr = 0x82BD8798;
	sub_82CA4890(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd87b4
	if (!ctx.cr6.eq) goto loc_82BD87B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7b90
	ctx.lr = 0x82BD87B4;
	sub_82BD7B90(ctx, base);
loc_82BD87B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bc5448
	ctx.lr = 0x82BD87CC;
	sub_82BC5448(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r6,-32066
	ctx.r6.s64 = -2101477376;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r6,-29120
	ctx.r4.s64 = ctx.r6.s64 + -29120;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x8227b7e0
	ctx.lr = 0x82BD881C;
	sub_8227B7E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD8828"))) PPC_WEAK_FUNC(sub_82BD8828);
PPC_FUNC_IMPL(__imp__sub_82BD8828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BD8830;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82BD8850:
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf. r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd88c0
	if (ctx.cr0.eq) goto loc_82BD88C0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd887c
	if (ctx.cr6.lt) goto loc_82BD887C;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD887C;
	sub_8227B8B8(ctx, base);
loc_82BD887C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD8890;
	sub_8227BA30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82bc75d8
	ctx.lr = 0x82BD88C0;
	sub_82BC75D8(ctx, base);
loc_82BD88C0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ca8fb8
	ctx.lr = 0x82BD88D0;
	sub_82CA8FB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd8924
	if (ctx.cr6.eq) goto loc_82BD8924;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD88E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd88e0
	if (!ctx.cr6.eq) goto loc_82BD88E0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd8914
	if (ctx.cr6.eq) goto loc_82BD8914;
	// addi r10,r1,91
	ctx.r10.s64 = ctx.r1.s64 + 91;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x82bd8960
	if (ctx.cr6.eq) goto loc_82BD8960;
loc_82BD8914:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82bd8850
	goto loc_82BD8850;
loc_82BD8924:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bc7568
	ctx.lr = 0x82BD892C;
	sub_82BC7568(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82bc6490
	ctx.lr = 0x82BD8938;
	sub_82BC6490(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc5b30
	ctx.lr = 0x82BD894C;
	sub_82BC5B30(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82BD8960:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bc7568
	ctx.lr = 0x82BD8978;
	sub_82BC7568(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82bc6490
	ctx.lr = 0x82BD8984;
	sub_82BC6490(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82BD8990"))) PPC_WEAK_FUNC(sub_82BD8990);
PPC_FUNC_IMPL(__imp__sub_82BD8990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BD8998;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,512
	ctx.r28.s64 = 512;
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x82bd89cc
	goto loc_82BD89CC;
loc_82BD89C8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82BD89CC:
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// subf. r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82bd8a38
	if (ctx.cr0.eq) goto loc_82BD8A38;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd89f4
	if (ctx.cr6.lt) goto loc_82BD89F4;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD89F4;
	sub_8227B8B8(ctx, base);
loc_82BD89F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BD8A08;
	sub_8227BA30(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82bc75d8
	ctx.lr = 0x82BD8A38;
	sub_82BC75D8(ctx, base);
loc_82BD8A38:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82bd8a44
	if (!ctx.cr6.gt) goto loc_82BD8A44;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82BD8A44:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82cab340
	ctx.lr = 0x82BD8A58;
	sub_82CAB340(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x82bd8a74
	if (ctx.cr0.eq) goto loc_82BD8A74;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bd89c8
	if (ctx.cr6.eq) goto loc_82BD89C8;
loc_82BD8A74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bc7568
	ctx.lr = 0x82BD8A7C;
	sub_82BC7568(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82bc6490
	ctx.lr = 0x82BD8A88;
	sub_82BC6490(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82bd8ab0
	if (ctx.cr6.eq) goto loc_82BD8AB0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc5b30
	ctx.lr = 0x82BD8AA4;
	sub_82BC5B30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82bd8ab4
	if (ctx.cr6.eq) goto loc_82BD8AB4;
loc_82BD8AB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD8AB4:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82BD8ABC"))) PPC_WEAK_FUNC(sub_82BD8ABC);
PPC_FUNC_IMPL(__imp__sub_82BD8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8AC0"))) PPC_WEAK_FUNC(sub_82BD8AC0);
PPC_FUNC_IMPL(__imp__sub_82BD8AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82BD8AC8;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// bl 0x83001810
	ctx.lr = 0x82BD8AF4;
	sub_83001810(ctx, base);
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,3
	ctx.r21.s64 = 3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82bd8b98
	if (!ctx.cr6.eq) goto loc_82BD8B98;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bd8828
	ctx.lr = 0x82BD8B10;
	sub_82BD8828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r22,1
	ctx.r28.s64 = ctx.r22.s64 + 1;
loc_82BD8B18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83001448
	ctx.lr = 0x82BD8B20;
	sub_83001448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd8d90
	if (ctx.cr6.eq) goto loc_82BD8D90;
	// bl 0x82cab770
	ctx.lr = 0x82BD8B2C;
	sub_82CAB770(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x83000f30
	ctx.lr = 0x82BD8B4C;
	sub_83000F30(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,-6332
	ctx.r4.s64 = ctx.r9.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD8B60;
	sub_82BC5C08(ctx, base);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stw r21,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82BD8B98:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r27,20
	ctx.r4.s64 = ctx.r27.s64 + 20;
	// addi r5,r11,-4424
	ctx.r5.s64 = ctx.r11.s64 + -4424;
	// bl 0x82bc6d80
	ctx.lr = 0x82BD8BA8;
	sub_82BC6D80(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r23,r11,-4428
	ctx.r23.s64 = ctx.r11.s64 + -4428;
	// addi r26,r10,1876
	ctx.r26.s64 = ctx.r10.s64 + 1876;
	// addi r24,r9,11164
	ctx.r24.s64 = ctx.r9.s64 + 11164;
loc_82BD8BCC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bd8b18
	if (ctx.cr6.eq) goto loc_82BD8B18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD8BE4;
	sub_82BC5448(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82bd8c58
	if (ctx.cr6.eq) goto loc_82BD8C58;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82bd8c58
	if (!ctx.cr6.eq) goto loc_82BD8C58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BD8C00;
	sub_82BC59D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bd8c44
	if (!ctx.cr6.eq) goto loc_82BD8C44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830014a8
	ctx.lr = 0x82BD8C14;
	sub_830014A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82cba2f8
	ctx.lr = 0x82BD8C20;
	sub_82CBA2F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BD8C30;
	sub_8219CDA8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r30,r9,1
	ctx.r30.u64 = ctx.r9.u64 ^ 1;
	// b 0x82bd8d64
	goto loc_82BD8D64;
loc_82BD8C44:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd8990
	ctx.lr = 0x82BD8C50;
	sub_82BD8990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bd8d64
	goto loc_82BD8D64;
loc_82BD8C58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD8C64;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd8cb4
	if (ctx.cr6.eq) goto loc_82BD8CB4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD8C7C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd8c8c
	if (!ctx.cr6.eq) goto loc_82BD8C8C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x82bd8ccc
	goto loc_82BD8CCC;
loc_82BD8C8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd8ca8
	if (ctx.cr6.lt) goto loc_82BD8CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD8CA8;
	sub_8227B8B8(ctx, base);
loc_82BD8CA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD8CB4;
	sub_82BC5448(ctx, base);
loc_82BD8CB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bd8ccc
	if (ctx.cr0.eq) goto loc_82BD8CCC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x82bd8cdc
	if (ctx.cr6.eq) goto loc_82BD8CDC;
loc_82BD8CCC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD8CDC;
	sub_82BC67F0(ctx, base);
loc_82BD8CDC:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82bd8d50
	if (ctx.cr6.eq) goto loc_82BD8D50;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x82bd8d3c
	if (ctx.cr6.eq) goto loc_82BD8D3C;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x82bd8d74
	if (!ctx.cr6.eq) goto loc_82BD8D74;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830011f8
	ctx.lr = 0x82BD8D0C;
	sub_830011F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bd8d34
	if (!ctx.cr6.eq) goto loc_82BD8D34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bd8d60
	goto loc_82BD8D60;
loc_82BD8D34:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// b 0x82bd8d64
	goto loc_82BD8D64;
loc_82BD8D3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd8828
	ctx.lr = 0x82BD8D48;
	sub_82BD8828(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bd8d64
	goto loc_82BD8D64;
loc_82BD8D50:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd8990
	ctx.lr = 0x82BD8D60;
	sub_82BD8990(ctx, base);
loc_82BD8D60:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82BD8D64:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82bd8bcc
	if (!ctx.cr6.eq) goto loc_82BD8BCC;
	// b 0x82bd8b18
	goto loc_82BD8B18;
loc_82BD8D74:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-4404
	ctx.r5.s64 = ctx.r11.s64 + -4404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BD8D88;
	sub_82BC67F0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_82BD8D90:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82bd8db4
	if (!ctx.cr6.eq) goto loc_82BD8DB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BD8DB4:
	// subf r3,r22,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r22.s64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82BD8DC0"))) PPC_WEAK_FUNC(sub_82BD8DC0);
PPC_FUNC_IMPL(__imp__sub_82BD8DC0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd83b0
	ctx.lr = 0x82BD8DDC;
	sub_82BD83B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bd8ac0
	ctx.lr = 0x82BD8DEC;
	sub_82BD8AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD8E00"))) PPC_WEAK_FUNC(sub_82BD8E00);
PPC_FUNC_IMPL(__imp__sub_82BD8E00) {
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
	// bl 0x82bd7d70
	ctx.lr = 0x82BD8E18;
	sub_82BD7D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82bd8ac0
	ctx.lr = 0x82BD8E28;
	sub_82BD8AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82BD8E3C"))) PPC_WEAK_FUNC(sub_82BD8E3C);
PPC_FUNC_IMPL(__imp__sub_82BD8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8E40"))) PPC_WEAK_FUNC(sub_82BD8E40);
PPC_FUNC_IMPL(__imp__sub_82BD8E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD8E48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822af338
	ctx.lr = 0x82BD8E58;
	sub_822AF338(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd8e74
	if (!ctx.cr6.eq) goto loc_82BD8E74;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4388
	ctx.r4.s64 = ctx.r11.s64 + -4388;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD8E74;
	sub_82BC6A18(ctx, base);
loc_82BD8E74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd8828
	ctx.lr = 0x82BD8E80;
	sub_82BD8828(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83001448
	ctx.lr = 0x82BD8E8C;
	sub_83001448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd8ebc
	if (ctx.cr6.eq) goto loc_82BD8EBC;
	// bl 0x82cab770
	ctx.lr = 0x82BD8E98;
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83000f30
	ctx.lr = 0x82BD8EA0;
	sub_83000F30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD8EB4;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD8EBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bd8ed0
	if (ctx.cr6.eq) goto loc_82BD8ED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD8ED0:
	// li r4,-10004
	ctx.r4.s64 = -10004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BD8EDC;
	sub_82BC5A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd8f70
	if (ctx.cr6.eq) goto loc_82BD8F70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bd8f1c
	if (!ctx.cr6.lt) goto loc_82BD8F1C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD8EF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bd8ef8
	if (ctx.cr6.lt) goto loc_82BD8EF8;
loc_82BD8F1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82bd8f44
	if (ctx.cr6.lt) goto loc_82BD8F44;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// b 0x82bd8f4c
	goto loc_82BD8F4C;
loc_82BD8F44:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BD8F4C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bd7f00
	ctx.lr = 0x82BD8F70;
	sub_82BD7F00(ctx, base);
loc_82BD8F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD8F7C"))) PPC_WEAK_FUNC(sub_82BD8F7C);
PPC_FUNC_IMPL(__imp__sub_82BD8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD8F80"))) PPC_WEAK_FUNC(sub_82BD8F80);
PPC_FUNC_IMPL(__imp__sub_82BD8F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BD8F88;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// addic. r27,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r27.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82bd9060
	if (ctx.cr0.eq) goto loc_82BD9060;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r10,1744
	ctx.r25.s64 = ctx.r10.s64 + 1744;
	// lfs f31,-27468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r9,1876
	ctx.r26.s64 = ctx.r9.s64 + 1876;
	// addi r23,r11,3920
	ctx.r23.s64 = ctx.r11.s64 + 3920;
loc_82BD8FD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// bl 0x82bc5448
	ctx.lr = 0x82BD8FE8;
	sub_82BC5448(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82bd907c
	if (ctx.cr6.eq) goto loc_82BD907C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82bd907c
	if (!ctx.cr6.eq) goto loc_82BD907C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bd9050
	if (ctx.cr6.eq) goto loc_82BD9050;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BD900C;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd9030
	if (ctx.cr6.eq) goto loc_82BD9030;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD9020;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd9030
	if (!ctx.cr6.eq) goto loc_82BD9030;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82bd9034
	goto loc_82BD9034;
loc_82BD9030:
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82BD9034:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ca7120
	ctx.lr = 0x82BD9048;
	sub_82CA7120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82bd90d0
	if (ctx.cr6.gt) goto loc_82BD90D0;
loc_82BD9050:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BD9054:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82bd8fd8
	if (!ctx.cr6.eq) goto loc_82BD8FD8;
loc_82BD9060:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD9070;
	sub_82BD7AA8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82BD907C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc5a88
	ctx.lr = 0x82BD908C;
	sub_82BC5A88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd90a8
	if (!ctx.cr6.eq) goto loc_82BD90A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD90A8;
	sub_82BC68F0(ctx, base);
loc_82BD90A8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bd9050
	if (ctx.cr6.eq) goto loc_82BD9050;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca4d60
	ctx.lr = 0x82BD90C8;
	sub_82CA4D60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bd9050
	if (!ctx.cr6.eq) goto loc_82BD9050;
loc_82BD90D0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82bd9054
	goto loc_82BD9054;
}

__attribute__((alias("__imp__sub_82BD90D8"))) PPC_WEAK_FUNC(sub_82BD90D8);
PPC_FUNC_IMPL(__imp__sub_82BD90D8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd83b0
	ctx.lr = 0x82BD90F4;
	sub_82BD83B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82bd8f80
	ctx.lr = 0x82BD9104;
	sub_82BD8F80(ctx, base);
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

__attribute__((alias("__imp__sub_82BD9118"))) PPC_WEAK_FUNC(sub_82BD9118);
PPC_FUNC_IMPL(__imp__sub_82BD9118) {
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
	// bl 0x82bd7d70
	ctx.lr = 0x82BD9130;
	sub_82BD7D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82bd8f80
	ctx.lr = 0x82BD9140;
	sub_82BD8F80(ctx, base);
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

__attribute__((alias("__imp__sub_82BD9154"))) PPC_WEAK_FUNC(sub_82BD9154);
PPC_FUNC_IMPL(__imp__sub_82BD9154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9158"))) PPC_WEAK_FUNC(sub_82BD9158);
PPC_FUNC_IMPL(__imp__sub_82BD9158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD9160;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd7d70
	ctx.lr = 0x82BD916C;
	sub_82BD7D70(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r30,r11,568
	ctx.r30.s64 = ctx.r11.s64 + 568;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// addi r5,r10,-4596
	ctx.r5.s64 = ctx.r10.s64 + -4596;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6af8
	ctx.lr = 0x82BD9190;
	sub_82BC6AF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd91c4
	if (!ctx.cr6.lt) goto loc_82BD91C4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd91c4
	if (ctx.cr6.eq) goto loc_82BD91C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd91cc
	if (ctx.cr6.gt) goto loc_82BD91CC;
loc_82BD91C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bd91dc
	goto loc_82BD91DC;
loc_82BD91CC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD91D8;
	sub_82BC6F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD91DC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82ca5338
	ctx.lr = 0x82BD91EC;
	sub_82CA5338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd926c
	if (ctx.cr6.eq) goto loc_82BD926C;
	// bl 0x82cab770
	ctx.lr = 0x82BD91F8;
	sub_82CAB770(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x83000f30
	ctx.lr = 0x82BD921C;
	sub_83000F30(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,-6332
	ctx.r4.s64 = ctx.r8.s64 + -6332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD9230;
	sub_82BC5C08(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,3
	ctx.r6.s64 = 3;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,3
	ctx.r3.s64 = 3;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD926C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca5670
	ctx.lr = 0x82BD9274;
	sub_82CA5670(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD92B0"))) PPC_WEAK_FUNC(sub_82BD92B0);
PPC_FUNC_IMPL(__imp__sub_82BD92B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD92B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd7d70
	ctx.lr = 0x82BD92C4;
	sub_82BD7D70(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,596
	ctx.r30.s64 = ctx.r11.s64 + 596;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6af8
	ctx.lr = 0x82BD92E4;
	sub_82BC6AF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd9318
	if (!ctx.cr6.lt) goto loc_82BD9318;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd9318
	if (ctx.cr6.eq) goto loc_82BD9318;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd9320
	if (ctx.cr6.gt) goto loc_82BD9320;
loc_82BD9318:
	// li r6,512
	ctx.r6.s64 = 512;
	// b 0x82bd9330
	goto loc_82BD9330;
loc_82BD9320:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BD932C;
	sub_82BC6F00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82BD9330:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83001260
	ctx.lr = 0x82BD9344;
	sub_83001260(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD9358;
	sub_82BD7AA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD9360"))) PPC_WEAK_FUNC(sub_82BD9360);
PPC_FUNC_IMPL(__imp__sub_82BD9360) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bd83b0
	ctx.lr = 0x82BD937C;
	sub_82BD83B0(ctx, base);
	// bl 0x82ca5160
	ctx.lr = 0x82BD9380;
	sub_82CA5160(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD9394;
	sub_82BD7AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD93A8"))) PPC_WEAK_FUNC(sub_82BD93A8);
PPC_FUNC_IMPL(__imp__sub_82BD93A8) {
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
	// bl 0x82bd7d70
	ctx.lr = 0x82BD93C0;
	sub_82BD7D70(ctx, base);
	// bl 0x82ca5160
	ctx.lr = 0x82BD93C4;
	sub_82CA5160(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82bd7aa8
	ctx.lr = 0x82BD93D8;
	sub_82BD7AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82BD93EC"))) PPC_WEAK_FUNC(sub_82BD93EC);
PPC_FUNC_IMPL(__imp__sub_82BD93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD93F0"))) PPC_WEAK_FUNC(sub_82BD93F0);
PPC_FUNC_IMPL(__imp__sub_82BD93F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD93F8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-4576
	ctx.r4.s64 = ctx.r11.s64 + -4576;
	// bl 0x82bc6c30
	ctx.lr = 0x82BD940C;
	sub_82BC6C30(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r10,-9496
	ctx.r5.s64 = ctx.r10.s64 + -9496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9440;
	sub_82BC5EB0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,720
	ctx.r29.s64 = ctx.r11.s64 + 720;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd9488
	if (ctx.cr6.eq) goto loc_82BD9488;
loc_82BD9458:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD9468;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9478;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bd9458
	if (!ctx.cr6.eq) goto loc_82BD9458;
loc_82BD9488:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BD9494;
	sub_82BC55B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD94A0;
	sub_82BC5CD8(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc56f8
	ctx.lr = 0x82BD94AC;
	sub_82BC56F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// addi r4,r11,-4740
	ctx.r4.s64 = ctx.r11.s64 + -4740;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BD94C4;
	sub_82BC7060(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD94C8;
	sub_82240578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD94D4;
	sub_82BD7DD8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82bc5f48
	ctx.lr = 0x82BD950C;
	sub_82BC5F48(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r5,-4364
	ctx.r5.s64 = ctx.r5.s64 + -4364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9520;
	sub_82BC5EB0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD9524;
	sub_82240578(ctx, base);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD9530;
	sub_82BD7DD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5f48
	ctx.lr = 0x82BD9568;
	sub_82BC5F48(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r6,-4356
	ctx.r5.s64 = ctx.r6.s64 + -4356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD957C;
	sub_82BC5EB0(ctx, base);
	// bl 0x82240578
	ctx.lr = 0x82BD9580;
	sub_82240578(ctx, base);
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd7dd8
	ctx.lr = 0x82BD958C;
	sub_82BD7DD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r10,-4348
	ctx.r5.s64 = ctx.r10.s64 + -4348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD95A8;
	sub_82BC5EB0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r9,-4636
	ctx.r5.s64 = ctx.r9.s64 + -4636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BD95BC;
	sub_821E1408(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD95CC;
	sub_82BC5CD8(ctx, base);
	// lis r8,-32067
	ctx.r8.s64 = -2101542912;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,32320
	ctx.r4.s64 = ctx.r8.s64 + 32320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD95E0;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r30,r7,-4516
	ctx.r30.s64 = ctx.r7.s64 + -4516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD95F8;
	sub_82BC5EB0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c06c0
	ctx.lr = 0x82BD9604;
	sub_822C06C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32067
	ctx.r6.s64 = -2101542912;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r4,r6,32408
	ctx.r4.s64 = ctx.r6.s64 + 32408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BD9624;
	sub_8227B7E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9634;
	sub_82BC5EB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD9640"))) PPC_WEAK_FUNC(sub_82BD9640);
PPC_FUNC_IMPL(__imp__sub_82BD9640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD9648;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82cab770
	ctx.lr = 0x82BD965C;
	sub_82CAB770(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bd9690
	if (ctx.cr6.eq) goto loc_82BD9690;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82BD9690:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x83000f30
	ctx.lr = 0x82BD96B0;
	sub_83000F30(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r8,-4584
	ctx.r4.s64 = ctx.r8.s64 + -4584;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c08
	ctx.lr = 0x82BD96C8;
	sub_82BC5C08(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,3
	ctx.r6.s64 = 3;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,3
	ctx.r3.s64 = 3;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD9704"))) PPC_WEAK_FUNC(sub_82BD9704);
PPC_FUNC_IMPL(__imp__sub_82BD9704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9708"))) PPC_WEAK_FUNC(sub_82BD9708);
PPC_FUNC_IMPL(__imp__sub_82BD9708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9738"))) PPC_WEAK_FUNC(sub_82BD9738);
PPC_FUNC_IMPL(__imp__sub_82BD9738) {
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
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd976c
	if (ctx.cr6.lt) goto loc_82BD976C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD976C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd97c0
	if (ctx.cr6.eq) goto loc_82BD97C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD9780;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd9790
	if (!ctx.cr6.eq) goto loc_82BD9790;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd97cc
	goto loc_82BD97CC;
loc_82BD9790:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd97ac
	if (ctx.cr6.lt) goto loc_82BD97AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD97AC;
	sub_8227B8B8(ctx, base);
loc_82BD97AC:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd97c0
	if (ctx.cr6.lt) goto loc_82BD97C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD97C0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd97e4
	if (!ctx.cr0.eq) goto loc_82BD97E4;
loc_82BD97CC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD97E4;
	sub_82BC68F0(ctx, base);
loc_82BD97E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83001df8
	ctx.lr = 0x82BD97EC;
	sub_83001DF8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82bd9640
	ctx.lr = 0x82BD9800;
	sub_82BD9640(ctx, base);
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

__attribute__((alias("__imp__sub_82BD9818"))) PPC_WEAK_FUNC(sub_82BD9818);
PPC_FUNC_IMPL(__imp__sub_82BD9818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BD9820;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd9844
	if (ctx.cr6.lt) goto loc_82BD9844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD9844:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r28,r11,1744
	ctx.r28.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bd98a0
	if (ctx.cr6.eq) goto loc_82BD98A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD9860;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd9870
	if (!ctx.cr6.eq) goto loc_82BD9870;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82bd98ac
	goto loc_82BD98AC;
loc_82BD9870:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd988c
	if (ctx.cr6.lt) goto loc_82BD988C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD988C;
	sub_8227B8B8(ctx, base);
loc_82BD988C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bd98a0
	if (ctx.cr6.lt) goto loc_82BD98A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD98A0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82bd98bc
	if (!ctx.cr0.eq) goto loc_82BD98BC;
loc_82BD98AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD98BC;
	sub_82BC68F0(ctx, base);
loc_82BD98BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd98d4
	if (ctx.cr6.lt) goto loc_82BD98D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD98D4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bd992c
	if (ctx.cr6.eq) goto loc_82BD992C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BD98E8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bd98f8
	if (!ctx.cr6.eq) goto loc_82BD98F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bd9938
	goto loc_82BD9938;
loc_82BD98F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bd9914
	if (ctx.cr6.lt) goto loc_82BD9914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BD9914;
	sub_8227B8B8(ctx, base);
loc_82BD9914:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd992c
	if (ctx.cr6.lt) goto loc_82BD992C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BD992C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bd9948
	if (!ctx.cr0.eq) goto loc_82BD9948;
loc_82BD9938:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BD9948;
	sub_82BC68F0(ctx, base);
loc_82BD9948:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83001818
	ctx.lr = 0x82BD9954;
	sub_83001818(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82bd9640
	ctx.lr = 0x82BD9968;
	sub_82BD9640(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82BD9970"))) PPC_WEAK_FUNC(sub_82BD9970);
PPC_FUNC_IMPL(__imp__sub_82BD9970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83000a18
	ctx.lr = 0x82BD998C;
	sub_83000A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bd99b8
	if (!ctx.cr6.eq) goto loc_82BD99B8;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4216
	ctx.r4.s64 = ctx.r11.s64 + -4216;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD99A4;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BD99B8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BD99C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bd99c0
	if (!ctx.cr6.eq) goto loc_82BD99C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BD99E8;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9A00"))) PPC_WEAK_FUNC(sub_82BD9A00);
PPC_FUNC_IMPL(__imp__sub_82BD9A00) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9A24"))) PPC_WEAK_FUNC(sub_82BD9A24);
PPC_FUNC_IMPL(__imp__sub_82BD9A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9A28"))) PPC_WEAK_FUNC(sub_82BD9A28);
PPC_FUNC_IMPL(__imp__sub_82BD9A28) {
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
	// bl 0x821882b0
	ctx.lr = 0x82BD9A40;
	sub_821882B0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r8,3
	ctx.r8.s64 = 3;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-27348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27348);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BD9A94"))) PPC_WEAK_FUNC(sub_82BD9A94);
PPC_FUNC_IMPL(__imp__sub_82BD9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9A98"))) PPC_WEAK_FUNC(sub_82BD9A98);
PPC_FUNC_IMPL(__imp__sub_82BD9A98) {
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
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9AE0;
	sub_82BC5EB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9AF0"))) PPC_WEAK_FUNC(sub_82BD9AF0);
PPC_FUNC_IMPL(__imp__sub_82BD9AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD9AF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BD9B14;
	sub_821E1408(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bd9b38
	if (ctx.cr6.eq) goto loc_82BD9B38;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82bcbd48
	ctx.lr = 0x82BD9B30;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bd9b58
	if (ctx.cr6.eq) goto loc_82BD9B58;
loc_82BD9B38:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BD9B44;
	sub_82BC59D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD9B58:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82bd9b7c
	if (!ctx.cr6.lt) goto loc_82BD9B7C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4176
	ctx.r4.s64 = ctx.r11.s64 + -4176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6a18
	ctx.lr = 0x82BD9B74;
	sub_82BC6A18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD9B7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD9B94"))) PPC_WEAK_FUNC(sub_82BD9B94);
PPC_FUNC_IMPL(__imp__sub_82BD9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9B98"))) PPC_WEAK_FUNC(sub_82BD9B98);
PPC_FUNC_IMPL(__imp__sub_82BD9B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD9BA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12872
	ctx.r5.s64 = ctx.r11.s64 + 12872;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BD9BBC;
	sub_82BC6E30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd9bf0
	if (!ctx.cr6.lt) goto loc_82BD9BF0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bd9bf0
	if (ctx.cr6.eq) goto loc_82BD9BF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bd9c00
	if (ctx.cr6.gt) goto loc_82BD9C00;
loc_82BD9BF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83000e70
	ctx.lr = 0x82BD9BF8;
	sub_83000E70(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// b 0x82bd9c1c
	goto loc_82BD9C1C;
loc_82BD9C00:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BD9C0C;
	sub_821885C0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82BD9C1C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x82bd9c38
	if (!ctx.cr6.eq) goto loc_82BD9C38;
	// bl 0x83001d98
	ctx.lr = 0x82BD9C30;
	sub_83001D98(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82bd9c3c
	goto loc_82BD9C3C;
loc_82BD9C38:
	// bl 0x830021b8
	ctx.lr = 0x82BD9C3C;
	sub_830021B8(ctx, base);
loc_82BD9C3C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bd9c6c
	if (!ctx.cr6.eq) goto loc_82BD9C6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD9C6C:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-4140
	ctx.r10.s64 = ctx.r10.s64 + -4140;
loc_82BD9C78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bd9c9c
	if (ctx.cr6.eq) goto loc_82BD9C9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bd9c78
	if (ctx.cr6.eq) goto loc_82BD9C78;
loc_82BD9C9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bd9db8
	if (!ctx.cr6.eq) goto loc_82BD9DB8;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BD9CB4;
	sub_82BC5CD8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-4136
	ctx.r4.s64 = ctx.r11.s64 + -4136;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9CC8;
	sub_82BD9A98(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r10,10152
	ctx.r4.s64 = ctx.r10.s64 + 10152;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9CDC;
	sub_82BD9A98(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r9,-4132
	ctx.r4.s64 = ctx.r9.s64 + -4132;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9CF0;
	sub_82BD9A98(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r8,-4124
	ctx.r4.s64 = ctx.r8.s64 + -4124;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9D04;
	sub_82BD9A98(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r7,-4120
	ctx.r4.s64 = ctx.r7.s64 + -4120;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9D1C;
	sub_82BD9A98(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-4112
	ctx.r4.s64 = ctx.r6.s64 + -4112;
	// addi r5,r11,1900
	ctx.r5.s64 = ctx.r11.s64 + 1900;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9D34;
	sub_82BD9A98(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-4104
	ctx.r4.s64 = ctx.r5.s64 + -4104;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9D4C;
	sub_82BD9A98(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-4096
	ctx.r4.s64 = ctx.r4.s64 + -4096;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82bd9a98
	ctx.lr = 0x82BD9D64;
	sub_82BD9A98(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82bd9e98
	if (ctx.cr6.lt) goto loc_82BD9E98;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// addi r5,r7,-4088
	ctx.r5.s64 = ctx.r7.s64 + -4088;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BD9DAC;
	sub_82BC5EB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BD9DB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bd9e84
	if (ctx.cr6.eq) goto loc_82BD9E84;
loc_82BD9DE8:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x82bd9e30
	if (!ctx.cr6.eq) goto loc_82BD9E30;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bd9e30
	if (ctx.cr6.eq) goto loc_82BD9E30;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82cb7d80
	ctx.lr = 0x82BD9E1C;
	sub_82CB7D80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7670
	ctx.lr = 0x82BD9E2C;
	sub_82BC7670(ctx, base);
	// b 0x82bd9e70
	goto loc_82BD9E70;
loc_82BD9E30:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bd9e58
	if (ctx.cr6.lt) goto loc_82BD9E58;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD9E48;
	sub_82BC7568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bd9e58
	if (ctx.cr6.eq) goto loc_82BD9E58;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc75d8
	ctx.lr = 0x82BD9E58;
	sub_82BC75D8(ctx, base);
loc_82BD9E58:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82BD9E70:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bd9de8
	if (!ctx.cr6.eq) goto loc_82BD9DE8;
loc_82BD9E84:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bc7568
	ctx.lr = 0x82BD9E8C;
	sub_82BC7568(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82bc6490
	ctx.lr = 0x82BD9E98;
	sub_82BC6490(ctx, base);
loc_82BD9E98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BD9EA4"))) PPC_WEAK_FUNC(sub_82BD9EA4);
PPC_FUNC_IMPL(__imp__sub_82BD9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BD9EA8"))) PPC_WEAK_FUNC(sub_82BD9EA8);
PPC_FUNC_IMPL(__imp__sub_82BD9EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BD9EB0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd9ee8
	if (!ctx.cr6.lt) goto loc_82BD9EE8;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r30,r9,1876
	ctx.r30.s64 = ctx.r9.s64 + 1876;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd9ee8
	if (ctx.cr6.eq) goto loc_82BD9EE8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82bd9ef4
	if (ctx.cr6.gt) goto loc_82BD9EF4;
loc_82BD9EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83000e70
	ctx.lr = 0x82BD9EF0;
	sub_83000E70(ctx, base);
	// b 0x82bda068
	goto loc_82BDA068;
loc_82BD9EF4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bd9f10
	if (!ctx.cr6.lt) goto loc_82BD9F10;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bd9f10
	if (ctx.cr6.eq) goto loc_82BD9F10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bd9f28
	if (ctx.cr6.eq) goto loc_82BD9F28;
loc_82BD9F10:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82bc68f0
	ctx.lr = 0x82BD9F28;
	sub_82BC68F0(ctx, base);
loc_82BD9F28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bd9f64
	if (!ctx.cr6.lt) goto loc_82BD9F64;
loc_82BD9F3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bd9f3c
	if (ctx.cr6.lt) goto loc_82BD9F3C;
loc_82BD9F64:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-4136
	ctx.r4.s64 = ctx.r10.s64 + -4136;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BD9F84;
	sub_82BD9AF0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,10152
	ctx.r4.s64 = ctx.r8.s64 + 10152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BD9F9C;
	sub_82BD9AF0(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r7,-4132
	ctx.r4.s64 = ctx.r7.s64 + -4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BD9FB4;
	sub_82BD9AF0(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-4124
	ctx.r4.s64 = ctx.r6.s64 + -4124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BD9FCC;
	sub_82BD9AF0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-4120
	ctx.r4.s64 = ctx.r4.s64 + -4120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BD9FE4;
	sub_82BD9AF0(ctx, base);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-4112
	ctx.r4.s64 = ctx.r11.s64 + -4112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd9af0
	ctx.lr = 0x82BDA000;
	sub_82BD9AF0(ctx, base);
	// addi r10,r3,-1900
	ctx.r10.s64 = ctx.r3.s64 + -1900;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r9,-4088
	ctx.r5.s64 = ctx.r9.s64 + -4088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BDA01C;
	sub_821E1408(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bda040
	if (ctx.cr6.eq) goto loc_82BDA040;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bda040
	if (!ctx.cr6.eq) goto loc_82BDA040;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82bda050
	goto loc_82BDA050;
loc_82BDA040:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BDA04C;
	sub_82BC5A30(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BDA050:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83001b08
	ctx.lr = 0x82BDA068;
	sub_83001B08(ctx, base);
loc_82BDA068:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82bda094
	if (!ctx.cr6.eq) goto loc_82BDA094;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BDA094:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,3
	ctx.r10.s64 = 3;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BDA0C0"))) PPC_WEAK_FUNC(sub_82BDA0C0);
PPC_FUNC_IMPL(__imp__sub_82BDA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bda108
	if (!ctx.cr6.lt) goto loc_82BDA108;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bda108
	if (ctx.cr6.eq) goto loc_82BDA108;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bda114
	if (ctx.cr6.gt) goto loc_82BDA114;
loc_82BDA108:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f31,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82bda124
	goto loc_82BDA124;
loc_82BDA114:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BDA120;
	sub_821885C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82BDA124:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BDA130;
	sub_821885C0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// fctidz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x83002218
	ctx.lr = 0x82BDA14C;
	sub_83002218(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BDA188"))) PPC_WEAK_FUNC(sub_82BDA188);
PPC_FUNC_IMPL(__imp__sub_82BDA188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BDA190;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6e30
	ctx.lr = 0x82BDA1A8;
	sub_82BC6E30(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,412
	ctx.r30.s64 = ctx.r11.s64 + 412;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r30,24
	ctx.r6.s64 = ctx.r30.s64 + 24;
	// addi r5,r10,-11820
	ctx.r5.s64 = ctx.r10.s64 + -11820;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6af8
	ctx.lr = 0x82BDA1CC;
	sub_82BC6AF8(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82fffb68
	ctx.lr = 0x82BDA1DC;
	sub_82FFFB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bda20c
	if (!ctx.cr6.eq) goto loc_82BDA20C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82BDA20C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BDA210:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bda210
	if (!ctx.cr6.eq) goto loc_82BDA210;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BDA234;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82BDA240"))) PPC_WEAK_FUNC(sub_82BDA240);
PPC_FUNC_IMPL(__imp__sub_82BDA240) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bda278
	if (!ctx.cr6.lt) goto loc_82BDA278;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bda278
	if (ctx.cr6.eq) goto loc_82BDA278;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82bda280
	if (ctx.cr6.gt) goto loc_82BDA280;
loc_82BDA278:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bda288
	goto loc_82BDA288;
loc_82BDA280:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bc6f00
	ctx.lr = 0x82BDA288;
	sub_82BC6F00(ctx, base);
loc_82BDA288:
	// bl 0x82ca9798
	ctx.lr = 0x82BDA28C;
	sub_82CA9798(ctx, base);
}

__attribute__((alias("__imp__sub_82BDA28C"))) PPC_WEAK_FUNC(sub_82BDA28C);
PPC_FUNC_IMPL(__imp__sub_82BDA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

