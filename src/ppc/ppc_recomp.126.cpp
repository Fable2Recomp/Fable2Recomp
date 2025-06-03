#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp____savefpr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -144, f14.u64);
	// stfd f15,-136(r12)
	PPC_STORE_U64(r12.u32 + -136, f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_14) {
	__imp____savefpr_14(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -136, f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_15) {
	__imp____savefpr_15(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_16) {
	__imp____savefpr_16(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_17) {
	__imp____savefpr_17(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_18) {
	__imp____savefpr_18(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_19) {
	__imp____savefpr_19(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_20) {
	__imp____savefpr_20(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_21) {
	__imp____savefpr_21(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_22) {
	__imp____savefpr_22(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_23) {
	__imp____savefpr_23(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_24) {
	__imp____savefpr_24(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_25) {
	__imp____savefpr_25(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_26) {
	__imp____savefpr_26(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_27) {
	__imp____savefpr_27(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_28) {
	__imp____savefpr_28(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_29) {
	__imp____savefpr_29(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_30) {
	__imp____savefpr_30(ctx, base);
}

PPC_FUNC_IMPL(__imp____savefpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r12.u32 + -8, f31.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(__savefpr_31) {
	__imp____savefpr_31(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(r12.u32 + -144);
	// lfd f15,-136(r12)
	f15.u64 = PPC_LOAD_U64(r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_14) {
	__imp____restfpr_14(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_15) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	f15.u64 = PPC_LOAD_U64(r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_15) {
	__imp____restfpr_15(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_16) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	f16.u64 = PPC_LOAD_U64(r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_16) {
	__imp____restfpr_16(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_17) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	f17.u64 = PPC_LOAD_U64(r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_17) {
	__imp____restfpr_17(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	f18.u64 = PPC_LOAD_U64(r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_18) {
	__imp____restfpr_18(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_19) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	f19.u64 = PPC_LOAD_U64(r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_19) {
	__imp____restfpr_19(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	f20.u64 = PPC_LOAD_U64(r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_20) {
	__imp____restfpr_20(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_21) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	f21.u64 = PPC_LOAD_U64(r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_21) {
	__imp____restfpr_21(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_22) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	f22.u64 = PPC_LOAD_U64(r12.u32 + -80);
	// lfd f23,-72(r12)
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_22) {
	__imp____restfpr_22(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_23) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	f23.u64 = PPC_LOAD_U64(r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_23) {
	__imp____restfpr_23(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	f24.u64 = PPC_LOAD_U64(r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_24) {
	__imp____restfpr_24(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_25) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	f25.u64 = PPC_LOAD_U64(r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_25) {
	__imp____restfpr_25(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_26) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	f26.u64 = PPC_LOAD_U64(r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_26) {
	__imp____restfpr_26(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_27) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	f27.u64 = PPC_LOAD_U64(r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_27) {
	__imp____restfpr_27(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	f28.u64 = PPC_LOAD_U64(r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_28) {
	__imp____restfpr_28(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_29) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_29) {
	__imp____restfpr_29(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_30) {
	__imp____restfpr_30(ctx, base);
}

PPC_FUNC_IMPL(__imp____restfpr_31) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister f31{};
	// lfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r12.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(__restfpr_31) {
	__imp____restfpr_31(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// ori r29,r11,65279
	r29.u64 = r11.u64 | 65279;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x82ca7608
	if (!cr6.eq) goto loc_82CA7608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82cacb78
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82ca75f4
	if (!cr0.gt) goto loc_82CA75F4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82ca75e0
	if (!cr6.gt) goto loc_82CA75E0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82ca75f4
	if (!cr6.eq) goto loc_82CA75F4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82cae008
	sub_82CAE008(ctx, base);
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA75E0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA75F4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7608:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x82ca75e0
	if (cr6.eq) goto loc_82CA75E0;
	// fneg f13,f31
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// li r30,-1
	r30.s64 = -1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// blt cr6,0x82ca7630
	if (cr6.lt) goto loc_82CA7630;
	// li r30,1
	r30.s64 = 1;
loc_82CA7630:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f30,3248(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// addi r11,r11,3832
	r11.s64 = r11.s64 + 3832;
	// ble cr6,0x82ca76e4
	if (!cr6.gt) goto loc_82CA76E4;
	// lfd f0,8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82ca76b0
	if (!cr6.gt) goto loc_82CA76B0;
	// lfd f0,16(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82ca7674
	if (!cr6.gt) goto loc_82CA7674;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f0,-3216(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// fmul f2,f0,f31
	ctx.f2.f64 = f0.f64 * f31.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	sub_82CA5C18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x82ca76a4
	if (!cr6.gt) goto loc_82CA76A4;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA76A4:
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x82ca76d4
	goto loc_82CA76D4;
loc_82CA76B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	sub_82CA5C18(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// fdiv f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64 / ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3368);
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * f0.f64;
loc_82CA76D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82ca778c
	if (!cr6.lt) goto loc_82CA778C;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	f30.u64 = f30.u64 ^ 0x8000000000000000;
	// b 0x82ca778c
	goto loc_82CA778C;
loc_82CA76E4:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82ca7734
	if (!cr6.lt) goto loc_82CA7734;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfd f30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f30.u64);
	// lhz r11,88(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm. r11,r11,0,17,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca778c
	if (!cr0.eq) goto loc_82CA778C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// clrlwi. r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca771c
	if (!cr0.eq) goto loc_82CA771C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca778c
	if (cr6.eq) goto loc_82CA778C;
loc_82CA771C:
	// li r4,1536
	ctx.r4.s64 = 1536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82cacb40
	sub_82CACB40(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x82ca77b0
	goto loc_82CA77B0;
loc_82CA7734:
	// fmul f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f31.f64 * f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f0,3944(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3944);
	// lfd f12,3936(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3936);
	// lfd f11,3928(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3928);
	// lfd f9,3920(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 3920);
	// lfd f8,3912(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 3912);
	// fnmsub f0,f7,f0,f13
	f0.f64 = -(ctx.f7.f64 * f0.f64 - ctx.f13.f64);
	// fsub f13,f7,f12
	ctx.f13.f64 = ctx.f7.f64 - ctx.f12.f64;
	// fmsub f0,f0,f7,f11
	f0.f64 = f0.f64 * ctx.f7.f64 - ctx.f11.f64;
	// fmadd f13,f13,f7,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 + ctx.f10.f64;
	// fmsub f0,f0,f7,f9
	f0.f64 = f0.f64 * ctx.f7.f64 - ctx.f9.f64;
	// fmsub f13,f13,f7,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fmadd f0,f0,f7,f30
	f0.f64 = f0.f64 * ctx.f7.f64 + f30.f64;
	// fmul f30,f0,f31
	f30.f64 = f0.f64 * f31.f64;
loc_82CA778C:
	// rlwinm. r11,r31,0,28,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca77a8
	if (cr0.eq) goto loc_82CA77A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x82ca77c0
	goto loc_82CA77C0;
loc_82CA77A8:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82CA77B0:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82cae110
	sub_82CAE110(ctx, base);
loc_82CA77C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CA7568) {
	__imp__sub_82CA7568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA77D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,248
	ctx.r3.s64 = 248;
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f31.u64);
	// ori r30,r11,65279
	r30.u64 = r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lhz r11,144(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x82ca787c
	if (!cr6.eq) goto loc_82CA787C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82cacb78
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82ca7868
	if (!cr0.gt) goto loc_82CA7868;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82ca7850
	if (!cr6.gt) goto loc_82CA7850;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82ca7868
	if (!cr6.eq) goto loc_82CA7868;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82cae008
	sub_82CAE008(ctx, base);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7850:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f1,-3216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7868:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA787C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82ca78a4
	if (!cr6.eq) goto loc_82CA78A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3248(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA78A4:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,3848
	r11.s64 = r11.s64 + 3848;
	// lfd f0,-8(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82ca7918
	if (!cr6.gt) goto loc_82CA7918;
	// lfd f0,0(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82ca78dc
	if (!cr6.gt) goto loc_82CA78DC;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,-3216(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA78DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	sub_82CA5C18(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	cr6.compare<int32_t>(ctx.r4.s32, 1024, xer);
	// ble cr6,0x82ca790c
	if (!cr6.gt) goto loc_82CA790C;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82ca7968
	goto loc_82CA7968;
loc_82CA790C:
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x82ca7944
	goto loc_82CA7944;
loc_82CA7918:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca5c18
	sub_82CA5C18(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x821fe868
	sub_821FE868(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fdiv f0,f0,f1
	f0.f64 = f0.f64 / ctx.f1.f64;
	// lfd f13,3368(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// fadd f0,f0,f1
	f0.f64 = f0.f64 + ctx.f1.f64;
	// fmul f30,f0,f13
	f30.f64 = f0.f64 * ctx.f13.f64;
loc_82CA7944:
	// rlwinm. r11,r31,0,28,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca7960
	if (cr0.eq) goto loc_82CA7960;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x82ca7978
	goto loc_82CA7978;
loc_82CA7960:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82CA7968:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82cae110
	sub_82CAE110(ctx, base);
loc_82CA7978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA77D0) {
	__imp__sub_82CA77D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7998) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA7998) {
	__imp__sub_82CA7998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA79C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(144) );
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA79C8) {
	__imp__sub_82CA79C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA79F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA79F0) {
	__imp__sub_82CA79F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7A10) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA7A10) {
	__imp__sub_82CA7A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// bl 0x82cb4650
	sub_82CB4650(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca7a80
	if (cr6.eq) goto loc_82CA7A80;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_82CA7A58:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ca7a74
	if (!cr6.gt) goto loc_82CA7A74;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ca7aa4
	if (!cr6.gt) goto loc_82CA7AA4;
loc_82CA7A74:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x82ca7a58
	if (!cr0.eq) goto loc_82CA7A58;
loc_82CA7A80:
	// li r11,0
	r11.s64 = 0;
loc_82CA7A84:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA7AA4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82ca7a84
	goto loc_82CA7A84;
}

PPC_WEAK_FUNC(sub_82CA7A18) {
	__imp__sub_82CA7A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca7ae4
	if (cr6.eq) goto loc_82CA7AE4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca7ae4
	if (cr6.eq) goto loc_82CA7AE4;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82ca7ae8
	goto loc_82CA7AE8;
loc_82CA7AE4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82CA7AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82cb4650
	sub_82CB4650(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca7b38
	if (cr6.eq) goto loc_82CA7B38;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r10,20
	r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_82CA7B10:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ca7b2c
	if (!cr6.gt) goto loc_82CA7B2C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ca7b4c
	if (!cr6.gt) goto loc_82CA7B4C;
loc_82CA7B2C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x82ca7b10
	if (!cr0.eq) goto loc_82CA7B10;
loc_82CA7B38:
	// li r11,0
	r11.s64 = 0;
loc_82CA7B3C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca7b54
	if (!cr6.eq) goto loc_82CA7B54;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82ca7b5c
	goto loc_82CA7B5C;
loc_82CA7B4C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82ca7b3c
	goto loc_82CA7B3C;
loc_82CA7B54:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
loc_82CA7B5C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cb48a0
	sub_82CB48A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CA7AB0) {
	__imp__sub_82CA7AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca7ba0
	if (cr6.eq) goto loc_82CA7BA0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca7ba0
	if (cr6.eq) goto loc_82CA7BA0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_82CA7BA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cb5580
	sub_82CB5580(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA7B78) {
	__imp__sub_82CA7B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82cb5580
	sub_82CB5580(ctx, base);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CA7BB0) {
	__imp__sub_82CA7BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(116) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CA7C30) {
	__imp__sub_82CA7C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(156) );
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(148) );
	// bl 0x82ca7bb0
	sub_82CA7BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA7CA8) {
	__imp__sub_82CA7CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(0) );
	// li r24,0
	r24.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x82cb4650
	sub_82CB4650(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca7d34
	if (!cr6.eq) goto loc_82CA7D34;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CA7D34:
	// li r11,-1
	r11.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// beq cr6,0x82ca7d80
	if (cr6.eq) goto loc_82CA7D80;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r30,20
	r11.s64 = r30.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
loc_82CA7D5C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// ble cr6,0x82ca7d74
	if (!cr6.gt) goto loc_82CA7D74;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// ble cr6,0x82ca7d80
	if (!cr6.gt) goto loc_82CA7D80;
loc_82CA7D74:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x82ca7d5c
	if (!cr0.eq) goto loc_82CA7D5C;
loc_82CA7D80:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ca7d98
	if (cr6.eq) goto loc_82CA7D98;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r9,20
	r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	r28.s64 = r11.s64 + -20;
loc_82CA7D98:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca7e24
	if (cr6.eq) goto loc_82CA7E24;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82CA7DA8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq cr6,0x82ca7dd8
	if (cr6.eq) goto loc_82CA7DD8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(4) );
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x82ca7e08
	if (!cr6.gt) goto loc_82CA7E08;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bgt cr6,0x82ca7e08
	if (cr6.gt) goto loc_82CA7E08;
loc_82CA7DD8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(r25.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ca7e08
	if (cr6.lt) goto loc_82CA7E08;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x82ca7e08
	if (cr6.gt) goto loc_82CA7E08;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ca7e00
	if (!cr6.eq) goto loc_82CA7E00;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_82CA7E00:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82CA7E08:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// blt cr6,0x82ca7da8
	if (cr6.lt) goto loc_82CA7DA8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ca7e34
	if (!cr6.eq) goto loc_82CA7E34;
loc_82CA7E24:
	// stw r24,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// b 0x82ca7e40
	goto loc_82CA7E40;
loc_82CA7E34:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82CA7E40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CA7CF0) {
	__imp__sub_82CA7CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7E48) {
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
	// lis r11,-8083
	r11.s64 = -529727488;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,29539
	r11.u64 = r11.u64 | 29539;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ca7ec4
	if (!cr6.eq) goto loc_82CA7EC4;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82ca7ec4
	if (!cr6.eq) goto loc_82CA7EC4;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ca7eb0
	if (cr6.eq) goto loc_82CA7EB0;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ca7eb0
	if (cr6.eq) goto loc_82CA7EB0;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ca7ec4
	if (!cr6.eq) goto loc_82CA7EC4;
loc_82CA7EB0:
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(24) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(28) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82ca7ecc
	goto loc_82CA7ECC;
loc_82CA7EC4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CA7ECC:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA7E48) {
	__imp__sub_82CA7E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7F00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// b 0x82ca7f30
	goto loc_82CA7F30;
loc_82CA7F20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x82ca7f50
	if (cr6.eq) goto loc_82CA7F50;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82CA7F30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca7f20
	if (!cr6.eq) goto loc_82CA7F20;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CA7F3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA7F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca7f3c
	goto loc_82CA7F3C;
}

PPC_WEAK_FUNC(sub_82CA7F00) {
	__imp__sub_82CA7F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA7F58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca7f84
	if (cr6.eq) goto loc_82CA7F84;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca7f88
	if (!cr6.eq) goto loc_82CA7F88;
loc_82CA7F84:
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CA7F88:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ca7fa8
	if (!cr6.eq) goto loc_82CA7FA8;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// b 0x82ca7fe4
	goto loc_82CA7FE4;
loc_82CA7FA8:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(148) );
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca7fe0
	if (cr6.eq) goto loc_82CA7FE0;
loc_82CA7FC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ca7ff8
	if (cr6.eq) goto loc_82CA7FF8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ca7fc0
	if (!cr6.eq) goto loc_82CA7FC0;
loc_82CA7FE0:
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CA7FE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA7FF8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// b 0x82ca7fe4
	goto loc_82CA7FE4;
}

PPC_WEAK_FUNC(sub_82CA7F58) {
	__imp__sub_82CA7F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8038:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r27.u32);
	// blt 0x82ca8060
	if (cr0.lt) goto loc_82CA8060;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca8038
	goto loc_82CA8038;
loc_82CA8060:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CA8010) {
	__imp__sub_82CA8010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8074) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lis r11,-8083
	r11.s64 = -529727488;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// ori r11,r11,29539
	r11.u64 = r11.u64 | 29539;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82ca80c4
	if (cr6.eq) goto loc_82CA80C4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca80cc
	goto loc_82CA80CC;
loc_82CA80C4:
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA80CC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8074) {
	__imp__sub_82CA8074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA80E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// mullw r11,r30,r28
	r11.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// add r29,r11,r3
	r29.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r27.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
loc_82CA8124:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// blt 0x82ca814c
	if (cr0.lt) goto loc_82CA814C;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ca8124
	goto loc_82CA8124;
loc_82CA814C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca81a0
	sub_82CA81A0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CA80E8) {
	__imp__sub_82CA80E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,188(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(188) );
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r28,180(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r29,164(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// b 0x82ca81c4
	goto loc_82CA81C4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA81C4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca81e4
	if (!cr6.eq) goto loc_82CA81E4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca8010
	sub_82CA8010(ctx, base);
loc_82CA81E4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-48) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8168) {
	__imp__sub_82CA8168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA81A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// std r27,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r27.u64);
	// mflr r12
	// stw r12,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca81e4
	if (!cr6.eq) goto loc_82CA81E4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ca8010
	sub_82CA8010(ctx, base);
loc_82CA81E4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r27,-40(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lwz r12,-48(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-48) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA81A0) {
	__imp__sub_82CA81A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// li r28,0
	r28.s64 = 0;
	// stw r7,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82CA8248:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// bge cr6,0x82ca8274
	if (!cr6.lt) goto loc_82CA8274;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82ca8248
	goto loc_82CA8248;
loc_82CA8274:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca82c0
	sub_82CA82C0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CA8210) {
	__imp__sub_82CA8210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,172(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// b 0x82ca82e0
	goto loc_82CA82E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA82E0:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca8300
	if (!cr6.eq) goto loc_82CA8300;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8010
	sub_82CA8010(ctx, base);
loc_82CA8300:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-40) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8290) {
	__imp__sub_82CA8290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA82C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r29,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r29.u64);
	// std r28,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r28.u64);
	// mflr r12
	// stw r12,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca8300
	if (!cr6.eq) goto loc_82CA8300;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8010
	sub_82CA8010(ctx, base);
loc_82CA8300:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r29,-24(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r28,-32(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r12,-40(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-40) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA82C0) {
	__imp__sub_82CA82C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca8364
	if (!cr6.eq) goto loc_82CA8364;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca83f8
	goto loc_82CA83F8;
loc_82CA8364:
	// li r30,0
	r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// bl 0x82cbd660
	sub_82CBD660(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,10
	r11.s64 = 10;
	// lhz r5,90(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// divw r9,r5,r11
	ctx.r9.s32 = ctx.r5.s32 / r11.s32;
	// stb r10,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r10.u8);
	// divw r10,r6,r11
	ctx.r10.s32 = ctx.r6.s32 / r11.s32;
	// divw r8,r4,r11
	ctx.r8.s32 = ctx.r4.s32 / r11.s32;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// mulli r3,r10,10
	ctx.r3.s64 = ctx.r10.s64 * 10;
	// mulli r30,r9,10
	r30.s64 = ctx.r9.s64 * 10;
	// mulli r29,r8,10
	r29.s64 = ctx.r8.s64 * 10;
	// divw r9,r6,r11
	ctx.r9.s32 = ctx.r6.s32 / r11.s32;
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// divw r7,r5,r11
	ctx.r7.s32 = ctx.r5.s32 / r11.s32;
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / r11.s32;
	// subf r6,r30,r5
	ctx.r6.s64 = ctx.r5.s64 - r30.s64;
	// subf r11,r29,r4
	r11.s64 = ctx.r4.s64 - r29.s64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// stb r8,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r8.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r7,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r7.u8);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r6,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r6.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
loc_82CA83F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CA8320) {
	__imp__sub_82CA8320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca8444
	if (!cr6.eq) goto loc_82CA8444;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca844c
	if (!cr6.eq) goto loc_82CA844C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca8454
	if (!cr6.eq) goto loc_82CA8454;
loc_82CA842C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CA8444:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca8454
	if (cr6.eq) goto loc_82CA8454;
loc_82CA844C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ca8480
	if (!cr6.eq) goto loc_82CA8480;
loc_82CA8454:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA8480:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca8494
	if (!cr6.eq) goto loc_82CA8494;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// b 0x82ca842c
	goto loc_82CA842C;
loc_82CA8494:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca84d0
	if (!cr6.eq) goto loc_82CA84D0;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CA84AC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA84D0:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82ca8508
	if (!cr6.eq) goto loc_82CA8508;
loc_82CA84E4:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x82ca853c
	if (cr0.eq) goto loc_82CA853C;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ca84e4
	if (!cr0.eq) goto loc_82CA84E4;
	// b 0x82ca853c
	goto loc_82CA853C;
loc_82CA8508:
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x82ca8530
	if (cr0.eq) goto loc_82CA8530;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ca8530
	if (cr0.eq) goto loc_82CA8530;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82ca8508
	if (!cr0.eq) goto loc_82CA8508;
loc_82CA8530:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ca853c
	if (!cr6.eq) goto loc_82CA853C;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
loc_82CA853C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ca842c
	if (!cr6.eq) goto loc_82CA842C;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82ca8560
	if (!cr6.eq) goto loc_82CA8560;
	// rlwinm r11,r4,1,0,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,80
	ctx.r3.s64 = 80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r8,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r8.u16);
	// b 0x82ca8430
	goto loc_82CA8430;
loc_82CA8560:
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82ca84ac
	goto loc_82CA84AC;
}

PPC_WEAK_FUNC(sub_82CA8400) {
	__imp__sub_82CA8400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ca8598
	if (!cr6.eq) goto loc_82CA8598;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// b 0x82ca8624
	goto loc_82CA8624;
loc_82CA8598:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca85ac
	if (!cr6.eq) goto loc_82CA85AC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// b 0x82ca8620
	goto loc_82CA8620;
loc_82CA85AC:
	// li r29,-4096
	r29.s64 = -4096;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bgt cr6,0x82ca8608
	if (cr6.gt) goto loc_82CA8608;
	// lis r27,-31949
	r27.s64 = -2093809664;
loc_82CA85BC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca85c8
	if (!cr6.eq) goto loc_82CA85C8;
	// li r31,1
	r31.s64 = 1;
loc_82CA85C8:
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82cbfc80
	sub_82CBFC80(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82ca8658
	if (!cr0.eq) goto loc_82CA8658;
	// lwz r11,26932(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(26932) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca8644
	if (cr6.eq) goto loc_82CA8644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cacc10
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ca862c
	if (cr0.eq) goto loc_82CA862C;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x82ca85bc
	if (!cr6.gt) goto loc_82CA85BC;
loc_82CA8608:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cacc10
	sub_82CACC10(ctx, base);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CA8620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82CA862C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82cab700
	sub_82CAB700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82ca8620
	goto loc_82CA8620;
loc_82CA8644:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// bl 0x82cab700
	sub_82CAB700(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82CA8658:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82ca8624
	goto loc_82CA8624;
}

PPC_WEAK_FUNC(sub_82CA8570) {
	__imp__sub_82CA8570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ca86bc
	if (cr6.eq) goto loc_82CA86BC;
	// li r11,-4096
	r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	r11.u32 = r11.u32 / ctx.r4.u32;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82ca86bc
	if (!cr6.lt) goto loc_82CA86BC;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca8704
	goto loc_82CA8704;
loc_82CA86BC:
	// mullw r30,r4,r5
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca86d4
	if (cr6.eq) goto loc_82CA86D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caacd0
	sub_82CAACD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82CA86D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca8570
	sub_82CA8570(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ca8700
	if (cr0.eq) goto loc_82CA8700;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x82ca8700
	if (!cr6.lt) goto loc_82CA8700;
	// subf r5,r29,r30
	ctx.r5.s64 = r30.s64 - r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CA8700:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82CA8704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CA8660) {
	__imp__sub_82CA8660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8710) {
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
	// lis r31,-31921
	r31.s64 = -2091974656;
	// lwz r3,29908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(29908) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ca873c
	if (!cr6.eq) goto loc_82CA873C;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82ca8748
	goto loc_82CA8748;
loc_82CA873C:
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x82ca874c
	if (!cr6.lt) goto loc_82CA874C;
	// li r3,20
	ctx.r3.s64 = 20;
loc_82CA8748:
	// stw r3,29908(r31)
	PPC_STORE_U32(r31.u32 + 29908, ctx.r3.u32);
loc_82CA874C:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// lis r30,-31921
	r30.s64 = -2091974656;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,29904(r30)
	PPC_STORE_U32(r30.u32 + 29904, ctx.r3.u32);
	// bne 0x82ca878c
	if (!cr0.eq) goto loc_82CA878C;
	// li r11,20
	r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,29908(r31)
	PPC_STORE_U32(r31.u32 + 29908, r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// stw r3,29904(r30)
	PPC_STORE_U32(r30.u32 + 29904, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ca878c
	if (!cr0.eq) goto loc_82CA878C;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x82ca8818
	goto loc_82CA8818;
loc_82CA878C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4880
	ctx.r9.s64 = r11.s64 + -4880;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82ca87a4
	goto loc_82CA87A4;
loc_82CA87A0:
	// lwz r3,29904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(29904) );
loc_82CA87A4:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r8,r9,640
	ctx.r8.s64 = ctx.r9.s64 + 640;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ca87a0
	if (cr6.lt) goto loc_82CA87A0;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r7,r10,29632
	ctx.r7.s64 = ctx.r10.s64 + 29632;
loc_82CA87CC:
	// srawi r10,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = r11.s32 >> 5;
	// rlwinm r6,r11,6,21,25
	ctx.r6.u64 = rotl64(r11.u32 | (r11.u64 << 32), 6) & 0x7C0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82ca87f8
	if (cr6.eq) goto loc_82CA87F8;
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82ca87f8
	if (cr6.eq) goto loc_82CA87F8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ca8800
	if (!cr6.eq) goto loc_82CA8800;
loc_82CA87F8:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82CA8800:
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ca87cc
	if (cr6.lt) goto loc_82CA87CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CA8818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8710) {
	__imp__sub_82CA8710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82ca5258
	sub_82CA5258(ctx, base);
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lbz r11,26844(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 26844);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ca8854
	if (cr0.eq) goto loc_82CA8854;
	// bl 0x82cb5870
	sub_82CB5870(ctx, base);
loc_82CA8854:
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r3,29904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29904) );
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8830) {
	__imp__sub_82CA8830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8870) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4880
	r11.s64 = r11.s64 + -4880;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82ca88c0
	if (cr6.lt) goto loc_82CA88C0;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ca88c0
	if (cr6.gt) goto loc_82CA88C0;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82ca88c8
	goto loc_82CA88C8;
loc_82CA88C0:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CA88C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8870) {
	__imp__sub_82CA8870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA88E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x82ca8914
	if (!cr6.lt) goto loc_82CA8914;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82ca891c
	goto loc_82CA891C;
loc_82CA8914:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82CA891C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA88E0) {
	__imp__sub_82CA88E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-4880
	r11.s64 = r11.s64 + -4880;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82ca8968
	if (cr6.lt) goto loc_82CA8968;
	// addi r10,r11,608
	ctx.r10.s64 = r11.s64 + 608;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ca8968
	if (cr6.gt) goto loc_82CA8968;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
loc_82CA8968:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA8930) {
	__imp__sub_82CA8930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x82ca898c
	if (!cr6.lt) goto loc_82CA898C;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
loc_82CA898C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA8970) {
	__imp__sub_82CA8970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA89A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca89fc
	if (!cr6.eq) goto loc_82CA89FC;
loc_82CA89D0:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82ca8b68
	goto loc_82CA8B68;
loc_82CA89FC:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca89d0
	if (cr6.eq) goto loc_82CA89D0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca8ae4
	if (!cr0.eq) goto loc_82CA8AE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca8a74
	if (cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82ca8a74
	if (cr6.eq) goto loc_82CA8A74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	r29.s64 = r11.s64 + 29632;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r28,r9,-2648
	r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca8a88
	goto loc_82CA8A88;
loc_82CA8A74:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// addi r28,r10,-2648
	r28.s64 = ctx.r10.s64 + -2648;
	// addi r29,r11,29632
	r29.s64 = r11.s64 + 29632;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CA8A88:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca89d0
	if (!cr0.eq) goto loc_82CA89D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca8ad8
	if (cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82ca8ad8
	if (cr6.eq) goto loc_82CA8AD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_82CA8AD8:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca89d0
	if (!cr0.eq) goto loc_82CA89D0;
loc_82CA8AE4:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82CA8AE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca8ae8
	if (!cr6.eq) goto loc_82CA8AE8;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r29,r11,0
	r29.u64 = rotl32(r11.u32, 0);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cab4e0
	sub_82CAB4E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca4af0
	sub_82CA4AF0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cab5b8
	sub_82CAB5B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82ca8b90
	sub_82CA8B90(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
loc_82CA8B68:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CA89A0) {
	__imp__sub_82CA89A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(172) );
	// b 0x82ca8ba8
	goto loc_82CA8BA8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA8BA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8B70) {
	__imp__sub_82CA8B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8B90) {
	__imp__sub_82CA8B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,32
	r11.s64 = 32;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82CA8BDC:
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82ca8bdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA8BDC;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82ca8c10
	goto loc_82CA8C10;
loc_82CA8BF0:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r7,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stbx r6,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u8);
loc_82CA8C10:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ca8bf0
	if (!cr0.eq) goto loc_82CA8BF0;
	// b 0x82ca8c40
	goto loc_82CA8C40;
loc_82CA8C20:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// slw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82CA8C40:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ca8c20
	if (!cr0.eq) goto loc_82CA8C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8BC8) {
	__imp__sub_82CA8BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// ori r28,r10,65279
	r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-4240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4240) );
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lhz r11,160(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x82ca8d38
	if (!cr6.eq) goto loc_82CA8D38;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3208(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3208);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// bl 0x82cacb78
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82ca8d10
	if (!cr0.gt) goto loc_82CA8D10;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82ca8cf4
	if (!cr6.gt) goto loc_82CA8CF4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82ca8d10
	if (!cr6.eq) goto loc_82CA8D10;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82cae008
	sub_82CAE008(ctx, base);
	// b 0x82ca8d7c
	goto loc_82CA8D7C;
loc_82CA8CF4:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f31.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,3376(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// bl 0x82ca3d78
	sub_82CA3D78(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x82ca8d6c
	goto loc_82CA8D6C;
loc_82CA8D10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,3248(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f2.u64);
	// bl 0x82cae110
	sub_82CAE110(ctx, base);
	// b 0x82ca8d7c
	goto loc_82CA8D7C;
loc_82CA8D38:
	// bl 0x82cb0dc0
	sub_82CB0DC0(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 - ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfd f1,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x82ca8d6c
	if (!cr6.eq) goto loc_82CA8D6C;
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// lfd f31,80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82CA8D6C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CA8D7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CA8C58) {
	__imp__sub_82CA8C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8D88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,3376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fabs f0,f30
	f0.u64 = f30.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// bne cr6,0x82ca8db8
	if (!cr6.eq) goto loc_82CA8DB8;
	// b 0x82ca8e70
	goto loc_82CA8E70;
loc_82CA8DB8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,4000
	r11.s64 = r11.s64 + 4000;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca8e18
	if (!cr6.gt) goto loc_82CA8E18;
	// lfd f13,-40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -40);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82ca8de4
	if (!cr6.gt) goto loc_82CA8DE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// b 0x82ca8e68
	goto loc_82CA8E68;
loc_82CA8DE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f31,3552(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 3552);
	// fmul f1,f0,f31
	ctx.f1.f64 = f0.f64 * f31.f64;
	// bl 0x821fde30
	sub_821FDE30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + f0.f64;
	// lfd f13,3368(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3368);
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	f0.f64 = ctx.f13.f64 - f0.f64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// b 0x82ca8e68
	goto loc_82CA8E68;
loc_82CA8E18:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f0.f64 * f0.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f12,-16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f11,16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f9,8(r11)
	ctx.f9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lfd f13,4040(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4040);
	// lfd f10,4032(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4032);
	// lfd f7,3248(r8)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3248);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -(ctx.f6.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64 - ctx.f10.f64;
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
loc_82CA8E68:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = f30.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
loc_82CA8E70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8D88) {
	__imp__sub_82CA8D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stfd f31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f31.u64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ca8ee4
	if (!cr6.eq) goto loc_82CA8EE4;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8EE4:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// li r3,248
	ctx.r3.s64 = 248;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lhz r11,128(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r11,r11,0,17,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x82ca8f74
	if (!cr6.eq) goto loc_82CA8F74;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82cacb78
	sub_82CACB78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82ca8f64
	if (!cr0.gt) goto loc_82CA8F64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82ca8f44
	if (!cr6.gt) goto loc_82CA8F44;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82ca8f64
	if (!cr6.eq) goto loc_82CA8F64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82cae008
	sub_82CAE008(ctx, base);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8F44:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f2,-3208(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -3208);
loc_82CA8F4C:
	// li r3,8
	ctx.r3.s64 = 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82cae110
	sub_82CAE110(ctx, base);
	// b 0x82ca8f94
	goto loc_82CA8F94;
loc_82CA8F64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,3248(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3248);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x82ca8f4c
	goto loc_82CA8F4C;
loc_82CA8F74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821fe890
	sub_821FE890(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CA8F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA8E88) {
	__imp__sub_82CA8E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA8FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82ca901c
	if (!cr6.eq) goto loc_82CA901C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82ca901c
	if (cr6.eq) goto loc_82CA901C;
loc_82CA8FF0:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CA9014:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca91f8
	goto loc_82CA91F8;
loc_82CA901C:
	// cntlzw r11,r23
	r11.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca8ff0
	if (cr6.eq) goto loc_82CA8FF0;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ca8ff0
	if (cr6.eq) goto loc_82CA8FF0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82ca9014
	if (cr6.eq) goto loc_82CA9014;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca9164
	if (!cr0.eq) goto loc_82CA9164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca90c8
	if (cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82ca90c8
	if (cr6.eq) goto loc_82CA90C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,29632
	r29.s64 = r11.s64 + 29632;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r28,r9,-2648
	r28.s64 = ctx.r9.s64 + -2648;
	// b 0x82ca90dc
	goto loc_82CA90DC;
loc_82CA90C8:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// addi r28,r11,-2648
	r28.s64 = r11.s64 + -2648;
	// addi r29,r10,29632
	r29.s64 = ctx.r10.s64 + 29632;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CA90DC:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ca9138
	if (!cr0.eq) goto loc_82CA9138;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ca912c
	if (cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82ca912c
	if (cr6.eq) goto loc_82CA912C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// rlwinm r11,r3,6,21,25
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_82CA912C:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca9164
	if (cr0.eq) goto loc_82CA9164;
loc_82CA9138:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_82CA9164:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca91e8
	if (cr6.eq) goto loc_82CA91E8;
loc_82CA916C:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// stw r23,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r23.u32);
	// beq 0x82ca91e0
	if (cr0.eq) goto loc_82CA91E0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// blt 0x82ca919c
	if (cr0.lt) goto loc_82CA919C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x82ca91a4
	goto loc_82CA91A4;
loc_82CA919C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
loc_82CA91A4:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca91c0
	if (!cr6.eq) goto loc_82CA91C0;
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// bne cr6,0x82ca91e0
	if (!cr6.eq) goto loc_82CA91E0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x82ca91e8
	goto loc_82CA91E8;
loc_82CA91C0:
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// beq cr6,0x82ca91e0
	if (cr6.eq) goto loc_82CA91E0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca916c
	goto loc_82CA916C;
loc_82CA91E0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
loc_82CA91E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x82ca9220
	sub_82CA9220(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CA91F8:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82CA8FB8) {
	__imp__sub_82CA8FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// b 0x82ca9238
	goto loc_82CA9238;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA9238:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9200) {
	__imp__sub_82CA9200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9220) {
	__imp__sub_82CA9220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r0{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
	PPCVRegister v73{};
	PPCVRegister v74{};
	PPCVRegister v75{};
	PPCVRegister v76{};
	PPCVRegister v77{};
	PPCVRegister v78{};
	PPCVRegister v79{};
	PPCVRegister v80{};
	PPCVRegister v81{};
	PPCVRegister v82{};
	PPCVRegister v83{};
	PPCVRegister v84{};
	PPCVRegister v85{};
	PPCVRegister v86{};
	PPCVRegister v87{};
	PPCVRegister v88{};
	PPCVRegister v89{};
	PPCVRegister v90{};
	PPCVRegister v91{};
	PPCVRegister v92{};
	PPCVRegister v93{};
	PPCVRegister v94{};
	PPCVRegister v95{};
	PPCVRegister v96{};
	PPCVRegister v97{};
	PPCVRegister v98{};
	PPCVRegister v99{};
	PPCVRegister v100{};
	PPCVRegister v101{};
	PPCVRegister v102{};
	PPCVRegister v103{};
	PPCVRegister v104{};
	PPCVRegister v105{};
	PPCVRegister v106{};
	PPCVRegister v107{};
	PPCVRegister v108{};
	PPCVRegister v109{};
	PPCVRegister v110{};
	PPCVRegister v111{};
	PPCVRegister v112{};
	PPCVRegister v113{};
	PPCVRegister v114{};
	PPCVRegister v115{};
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r0
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	PPC_STORE_U32(ctx.r1.u32 + 8, r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r0,312(r3)
	r0.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(312) );
	// cmpwi cr1,r0,0
	cr1.compare<int32_t>(r0.s32, 0, xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x82ca928c
	if (!cr0.eq) goto loc_82CA928C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82CA928C:
	// bne cr1,0x82ca954c
	if (!cr1.eq) goto loc_82CA954C;
	// lwz r3,308(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(308) );
	// lwz r4,144(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(144) );
	// bl 0x82cb5b20
	sub_82CB5B20(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	f15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	f16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	f17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	f18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	f19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	f20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	f21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	f22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	f23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	f24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	f27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	f29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	r15.u64 = PPC_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	r16.u64 = PPC_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	r17.u64 = PPC_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	r18.u64 = PPC_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	r19.u64 = PPC_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	r20.u64 = PPC_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	r21.u64 = PPC_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	r22.u64 = PPC_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	r23.u64 = PPC_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	r24.u64 = PPC_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	r27.u64 = PPC_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	r30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	r31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	simd::store_shuffled(v64, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	simd::store_shuffled(v65, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	simd::store_shuffled(v66, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	simd::store_shuffled(v67, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	simd::store_shuffled(v68, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	simd::store_shuffled(v69, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	simd::store_shuffled(v70, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	simd::store_shuffled(v71, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	simd::store_shuffled(v72, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	simd::store_shuffled(v73, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	simd::store_shuffled(v74, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	simd::store_shuffled(v75, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	simd::store_shuffled(v76, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	simd::store_shuffled(v77, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	simd::store_shuffled(v78, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	simd::store_shuffled(v79, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	simd::store_shuffled(v80, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	simd::store_shuffled(v81, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	simd::store_shuffled(v82, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	simd::store_shuffled(v83, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	simd::store_shuffled(v84, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	simd::store_shuffled(v85, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	simd::store_shuffled(v86, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	simd::store_shuffled(v87, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	simd::store_shuffled(v88, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	simd::store_shuffled(v89, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	simd::store_shuffled(v90, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	simd::store_shuffled(v91, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	simd::store_shuffled(v92, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	simd::store_shuffled(v93, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	simd::store_shuffled(v94, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	simd::store_shuffled(v95, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	simd::store_shuffled(v96, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	simd::store_shuffled(v97, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	simd::store_shuffled(v98, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	simd::store_shuffled(v99, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	simd::store_shuffled(v100, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	simd::store_shuffled(v101, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	simd::store_shuffled(v102, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	simd::store_shuffled(v103, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	simd::store_shuffled(v104, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	simd::store_shuffled(v105, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	simd::store_shuffled(v106, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	simd::store_shuffled(v107, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	simd::store_shuffled(v108, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	simd::store_shuffled(v109, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	simd::store_shuffled(v110, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	simd::store_shuffled(v111, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	simd::store_shuffled(v112, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	simd::store_shuffled(v113, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	simd::store_shuffled(v114, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	simd::store_shuffled(v115, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	simd::store_shuffled(v116, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	simd::store_shuffled(v117, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	simd::store_shuffled(v118, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	simd::store_shuffled(v119, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	simd::store_shuffled(v120, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	simd::store_shuffled(v121, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	simd::store_shuffled(v122, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	simd::store_shuffled(v123, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	simd::store_shuffled(v124, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r5,308(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(308) );
	// lwz r4,304(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(304) );
	// mtlr r5
	// ld r1,144(r7)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	cr5.so = (ctx.r4.u32 & 0x100) != 0;
	cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	cr6.so = (ctx.r4.u32 & 0x10) != 0;
	cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_82CA954C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// bl 0x82cb5b20
	sub_82CB5B20(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(4) );
	// bl 0x832b25bc
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	r0.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(8) );
	// mtlr r0
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9260) {
	__imp__sub_82CA9260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cacb00
	sub_82CACB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,-4224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4224) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9578) {
	__imp__sub_82CA9578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA95C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b25cc
	__imp__KeBugCheck(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA95C0) {
	__imp__sub_82CA95C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA95C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82caff48
	sub_82CAFF48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA95C8) {
	__imp__sub_82CA95C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA95D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82cafde8
	sub_82CAFDE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA95D0) {
	__imp__sub_82CA95D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA95D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82ca9610
	goto loc_82CA9610;
loc_82CA95F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca960c
	if (cr6.eq) goto loc_82CA960C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA960C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82CA9610:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82ca95f8
	if (cr6.lt) goto loc_82CA95F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA95D8) {
	__imp__sub_82CA95D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26852(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26852) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82ca9710
	if (cr6.eq) goto loc_82CA9710;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,26848(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(26848) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ca9688
	if (!cr6.eq) goto loc_82CA9688;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	__imp__KeBugCheck(ctx, base);
loc_82CA9688:
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r11,1
	r11.s64 = 1;
	// stw r11,26848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26848, r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r28,26844(r8)
	PPC_STORE_U8(ctx.r8.u32 + 26844, r28.u8);
	// bne cr6,0x82ca96fc
	if (!cr6.eq) goto loc_82CA96FC;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lwz r30,29892(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29892) );
	// lwz r29,29896(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(29896) );
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x82ca96e8
	if (cr0.eq) goto loc_82CA96E8;
loc_82CA96BC:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82ca96e8
	if (cr6.lt) goto loc_82CA96E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ca96e0
	if (cr6.eq) goto loc_82CA96E0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CA96E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ca96bc
	goto loc_82CA96BC;
loc_82CA96E8:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24052
	ctx.r4.s64 = r11.s64 + 24052;
	// addi r3,r10,24040
	ctx.r3.s64 = ctx.r10.s64 + 24040;
	// bl 0x82ca95d8
	sub_82CA95D8(ctx, base);
loc_82CA96FC:
	// lis r11,-31955
	r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,24060
	ctx.r4.s64 = r11.s64 + 24060;
	// addi r3,r10,24056
	ctx.r3.s64 = ctx.r10.s64 + 24056;
	// bl 0x82ca95d8
	sub_82CA95D8(ctx, base);
loc_82CA9710:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82ca9758
	sub_82CA9758(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca9730
	if (!cr6.eq) goto loc_82CA9730;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b25cc
	__imp__KeBugCheck(ctx, base);
loc_82CA9730:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CA9638) {
	__imp__sub_82CA9638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// b 0x82ca9770
	goto loc_82CA9770;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CA9770:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82ca9780
	if (cr6.eq) goto loc_82CA9780;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
loc_82CA9780:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9738) {
	__imp__sub_82CA9738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82ca9780
	if (cr6.eq) goto loc_82CA9780;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
loc_82CA9780:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9758) {
	__imp__sub_82CA9758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9798) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA9798) {
	__imp__sub_82CA9798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA97A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA97A8) {
	__imp__sub_82CA97A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA97B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ca9638
	sub_82CA9638(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA97B8) {
	__imp__sub_82CA97B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA97C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cacc00
	sub_82CACC00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb5b38
	sub_82CB5B38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab620
	sub_82CAB620(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cacb30
	sub_82CACB30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829ce870
	sub_829CE870(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb5850
	sub_82CB5850(ctx, base);
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,-26712
	r11.s64 = r11.s64 + -26712;
	// stw r11,-4224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4224, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA97C8) {
	__imp__sub_82CA97C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca9850
	if (cr6.eq) goto loc_82CA9850;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82CA9850:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ca9888
	if (!cr6.eq) goto loc_82CA9888;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// b 0x82ca99b4
	goto loc_82CA99B4;
loc_82CA9888:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r30,r11,-3224
	r30.s64 = r11.s64 + -3224;
	// lwz r11,-3224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3224) );
loc_82CA9894:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x82ca98b8
	if (!cr6.gt) goto loc_82CA98B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82cb03d8
	sub_82CB03D8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82ca98cc
	goto loc_82CA98CC;
loc_82CA98B8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(200) );
	// rotlwi r10,r10,1
	ctx.r10.u64 = rotl32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_82CA98CC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca98dc
	if (cr6.eq) goto loc_82CA98DC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82ca9894
	goto loc_82CA9894;
loc_82CA98DC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82CA98E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca98e0
	if (!cr6.eq) goto loc_82CA98E0;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = rotl32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb0320
	sub_82CB0320(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca9928
	if (cr6.eq) goto loc_82CA9928;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82CA9928:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// andi. r10,r11,576
	ctx.r10.u64 = r11.u64 & 576;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ca9950
	if (cr0.eq) goto loc_82CA9950;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// beq cr6,0x82ca99b0
	if (cr6.eq) goto loc_82CA99B0;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82ca99b0
	goto loc_82CA99B0;
loc_82CA9950:
	// andi. r10,r11,129
	ctx.r10.u64 = r11.u64 & 129;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ca9980
	if (cr0.eq) goto loc_82CA9980;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// bne cr6,0x82ca9978
	if (!cr6.eq) goto loc_82CA9978;
	// lfd f0,4048(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 4048);
	// fneg f31,f0
	f31.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82ca999c
	goto loc_82CA999C;
loc_82CA9978:
	// lfd f31,4048(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 4048);
	// b 0x82ca999c
	goto loc_82CA999C;
loc_82CA9980:
	// rlwinm. r11,r11,0,23,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca99ac
	if (cr0.eq) goto loc_82CA99AC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,16(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f31,3376(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82ca99ac
	if (!cr6.eq) goto loc_82CA99AC;
loc_82CA999C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82ca99b0
	goto loc_82CA99B0;
loc_82CA99AC:
	// lfd f31,16(r3)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82CA99B0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CA99B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CA9828) {
	__imp__sub_82CA9828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA99C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ca9828
	sub_82CA9828(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA99C0) {
	__imp__sub_82CA99C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA99C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CA99CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca99cc
	if (!cr6.eq) goto loc_82CA99CC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82ca9a00
	goto loc_82CA9A00;
loc_82CA99E4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// beqlr 
	if (cr0.eq) return;
loc_82CA9A00:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ca99e4
	if (!cr6.eq) goto loc_82CA99E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA99C8) {
	__imp__sub_82CA99C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// b 0x82ca9a2c
	goto loc_82CA9A2C;
loc_82CA9A1C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca9a3c
	if (cr6.eq) goto loc_82CA9A3C;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_82CA9A2C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ca9a1c
	if (cr0.eq) goto loc_82CA9A1C;
loc_82CA9A3C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82ca9a4c
	if (!cr6.lt) goto loc_82CA9A4C;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82ca9a54
	goto loc_82CA9A54;
loc_82CA9A4C:
	// ble cr6,0x82ca9a54
	if (!cr6.gt) goto loc_82CA9A54;
	// li r11,1
	r11.s64 = 1;
loc_82CA9A54:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9A18) {
	__imp__sub_82CA9A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ca9a94
	if (cr6.eq) goto loc_82CA9A94;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca9c28
	if (cr6.eq) goto loc_82CA9C28;
loc_82CA9A94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ca9ac4
	if (!cr6.eq) goto loc_82CA9AC4;
loc_82CA9A9C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// b 0x82ca9c24
	goto loc_82CA9C24;
loc_82CA9AC4:
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82ca9a9c
	if (cr6.gt) goto loc_82CA9A9C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ca9ccc
	if (cr6.eq) goto loc_82CA9CCC;
	// lis r27,-31953
	r27.s64 = -2094071808;
	// lwz r9,-3224(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-3224) );
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca9b28
	if (!cr6.eq) goto loc_82CA9B28;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca9c28
	if (cr6.eq) goto loc_82CA9C28;
loc_82CA9AF8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bgt cr6,0x82ca9c14
	if (cr6.gt) goto loc_82CA9C14;
	// stbx r11,r3,r28
	PPC_STORE_U8(ctx.r3.u32 + r28.u32, r11.u8);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// beq 0x82ca9c28
	if (cr0.eq) goto loc_82CA9C28;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// blt cr6,0x82ca9af8
	if (cr6.lt) goto loc_82CA9AF8;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9B28:
	// lwz r11,172(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(172) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ca9bc8
	if (!cr6.eq) goto loc_82CA9BC8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ca9b7c
	if (cr6.eq) goto loc_82CA9B7C;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82CA9B44:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82ca9b5c
	if (cr0.eq) goto loc_82CA9B5C;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82ca9b44
	if (!cr0.eq) goto loc_82CA9B44;
loc_82CA9B5C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ca9b7c
	if (cr6.eq) goto loc_82CA9B7C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ca9b7c
	if (!cr0.eq) goto loc_82CA9B7C;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82CA9B7C:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca9c14
	if (cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca9c14
	if (!cr6.eq) goto loc_82CA9C14;
	// add r11,r3,r28
	r11.u64 = ctx.r3.u64 + r28.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ca9c28
	if (!cr6.eq) goto loc_82CA9C28;
	// b 0x82ca9d24
	goto loc_82CA9D24;
loc_82CA9BC8:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca9c14
	if (!cr6.eq) goto loc_82CA9C14;
	// beq 0x82ca9c08
	if (cr0.eq) goto loc_82CA9C08;
	// addi r3,r31,-1
	ctx.r3.s64 = r31.s64 + -1;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9C08:
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// beq cr6,0x82ca9cbc
	if (cr6.eq) goto loc_82CA9CBC;
loc_82CA9C14:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CA9C24:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CA9C28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	return;
loc_82CA9C30:
	// lwz r11,-3224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-3224) );
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ca9c14
	if (cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca9c14
	if (!cr6.eq) goto loc_82CA9C14;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ca9c14
	if (cr6.lt) goto loc_82CA9C14;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x82ca9c14
	if (cr6.gt) goto loc_82CA9C14;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bgt cr6,0x82ca9cc4
	if (cr6.gt) goto loc_82CA9CC4;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ca9cb8
	if (!cr6.gt) goto loc_82CA9CB8;
loc_82CA9C94:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, ctx.r10.u8);
	// beq 0x82ca9cc4
	if (cr0.eq) goto loc_82CA9CC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ca9c94
	if (cr6.lt) goto loc_82CA9C94;
loc_82CA9CB8:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_82CA9CBC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82ca9c30
	if (cr6.lt) goto loc_82CA9C30;
loc_82CA9CC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9CCC:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-3224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3224) );
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ca9cec
	if (!cr6.eq) goto loc_82CA9CEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ab30
	sub_8217AB30(ctx, base);
	// b 0x82ca9c28
	goto loc_82CA9C28;
loc_82CA9CEC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cbd5a0
	sub_82CBD5A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ca9c14
	if (cr0.eq) goto loc_82CA9C14;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ca9c14
	if (!cr6.eq) goto loc_82CA9C14;
loc_82CA9D24:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x82ca9c28
	goto loc_82CA9C28;
}

PPC_WEAK_FUNC(sub_82CA9A60) {
	__imp__sub_82CA9A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9D30) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ca9a60
	sub_82CA9A60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA9D30) {
	__imp__sub_82CA9D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r27,r28
	r27.u64 = r28.u64;
	// beq cr6,0x82ca9dc4
	if (cr6.eq) goto loc_82CA9DC4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca9dcc
	if (cr6.eq) goto loc_82CA9DCC;
loc_82CA9D70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca9d7c
	if (cr6.eq) goto loc_82CA9D7C;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
loc_82CA9D7C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca9d88
	if (cr6.eq) goto loc_82CA9D88;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
loc_82CA9D88:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x82ca9d98
	if (cr6.gt) goto loc_82CA9D98;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82CA9D98:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca9a60
	sub_82CA9A60(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ca9df8
	if (!cr6.eq) goto loc_82CA9DF8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca9db8
	if (cr6.eq) goto loc_82CA9DB8;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
loc_82CA9DB8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9DC4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ca9d70
	if (cr6.eq) goto loc_82CA9D70;
loc_82CA9DCC:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9DF8:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ca9e5c
	if (cr6.eq) goto loc_82CA9E5C;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x82ca9e54
	if (!cr6.gt) goto loc_82CA9E54;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82ca9e4c
	if (cr6.eq) goto loc_82CA9E4C;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// bgt cr6,0x82ca9e4c
	if (cr6.gt) goto loc_82CA9E4C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82ca9e6c
	goto loc_82CA9E6C;
loc_82CA9E4C:
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r27,80
	r27.s64 = 80;
loc_82CA9E54:
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// stb r28,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, r28.u8);
loc_82CA9E5C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ca9e68
	if (cr6.eq) goto loc_82CA9E68;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82CA9E68:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82CA9E6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CA9D38) {
	__imp__sub_82CA9D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9E78) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ca9d38
	sub_82CA9D38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CA9E78) {
	__imp__sub_82CA9E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r12,r3
	r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_82CA9E9C:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x82ca9e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA9E9C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9E80) {
	__imp__sub_82CA9E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9E84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// neg r11,r12
	r11.s64 = -r12.s64;
	// addi r0,r11,4095
	r0.s64 = r11.s64 + 4095;
	// srawi. r0,r0,12
	xer.ca = (r0.s32 < 0) & ((r0.u32 & 0xFFF) != 0);
	r0.s64 = r0.s32 >> 12;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// mr r11,r1
	r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
loc_82CA9E9C:
	// lwzu r0,-4096(r11)
	ea = -4096 + r11.u32;
	r0.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// bdnz 0x82ca9e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CA9E9C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CA9E84) {
	__imp__sub_82CA9E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CA9EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ca9ed0
	if (cr6.eq) goto loc_82CA9ED0;
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
loc_82CA9ED0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82ca9f04
	if (!cr6.eq) goto loc_82CA9F04;
loc_82CA9ED8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caa174
	goto loc_82CAA174;
loc_82CA9F04:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82ca9f1c
	if (cr6.eq) goto loc_82CA9F1C;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// blt cr6,0x82ca9ed8
	if (cr6.lt) goto loc_82CA9ED8;
	// cmpwi cr6,r27,36
	cr6.compare<int32_t>(r27.s32, 36, xer);
	// bgt cr6,0x82ca9ed8
	if (cr6.gt) goto loc_82CA9ED8;
loc_82CA9F1C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lbz r31,0(r26)
	r31.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r26,1
	r29.s64 = r26.s64 + 1;
	// addi r30,r11,-3224
	r30.s64 = r11.s64 + -3224;
	// lwz r10,-3224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3224) );
loc_82CA9F34:
	// lwz r11,172(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(172) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82ca9f58
	if (!cr6.gt) goto loc_82CA9F58;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x82cb03d8
	sub_82CB03D8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// b 0x82ca9f68
	goto loc_82CA9F68;
loc_82CA9F58:
	// lwz r11,200(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(200) );
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
loc_82CA9F68:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ca9f7c
	if (cr6.eq) goto loc_82CA9F7C;
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82ca9f34
	goto loc_82CA9F34;
loc_82CA9F7C:
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x82ca9f90
	if (!cr6.eq) goto loc_82CA9F90;
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
	// b 0x82ca9f98
	goto loc_82CA9F98;
loc_82CA9F90:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// bne cr6,0x82ca9fa0
	if (!cr6.eq) goto loc_82CA9FA0;
loc_82CA9F98:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82CA9FA0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82ca9fe0
	if (!cr6.eq) goto loc_82CA9FE0;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x82ca9fbc
	if (cr6.eq) goto loc_82CA9FBC;
	// li r27,10
	r27.s64 = 10;
	// b 0x82caa018
	goto loc_82CAA018;
loc_82CA9FBC:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82ca9fdc
	if (cr6.eq) goto loc_82CA9FDC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82ca9fdc
	if (cr6.eq) goto loc_82CA9FDC;
	// li r27,8
	r27.s64 = 8;
	// b 0x82caa018
	goto loc_82CAA018;
loc_82CA9FDC:
	// li r27,16
	r27.s64 = 16;
loc_82CA9FE0:
	// cmpwi cr6,r27,16
	cr6.compare<int32_t>(r27.s32, 16, xer);
	// bne cr6,0x82caa018
	if (!cr6.eq) goto loc_82CAA018;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x82caa018
	if (!cr6.eq) goto loc_82CAA018;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82caa00c
	if (cr6.eq) goto loc_82CAA00C;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x82caa018
	if (!cr6.eq) goto loc_82CAA018;
loc_82CAA00C:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lbz r31,1(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82CAA018:
	// extsw r9,r27
	ctx.r9.s64 = r27.s32;
	// lwz r7,200(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(200) );
	// li r11,-1
	r11.s64 = -1;
	// tdllei r9,0
	// divdu r8,r11,r9
	ctx.r8.u64 = r11.u64 / ctx.r9.u64;
loc_82CAA02C:
	// rlwinm r11,r31,1,23,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r7
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r7.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82caa048
	if (cr0.eq) goto loc_82CAA048;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x82caa070
	goto loc_82CAA070;
loc_82CAA048:
	// andi. r11,r11,259
	r11.u64 = r11.u64 & 259;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caa0b4
	if (cr0.eq) goto loc_82CAA0B4;
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82caa06c
	if (cr6.lt) goto loc_82CAA06C;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82caa06c
	if (cr6.gt) goto loc_82CAA06C;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_82CAA06C:
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
loc_82CAA070:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82caa0b4
	if (!cr6.lt) goto loc_82CAA0B4;
	// ori r25,r25,8
	r25.u64 = r25.u64 | 8;
	// cmpld cr6,r28,r8
	cr6.compare<uint64_t>(r28.u64, ctx.r8.u64, xer);
	// blt cr6,0x82caa0d4
	if (cr6.lt) goto loc_82CAA0D4;
	// bne cr6,0x82caa0a8
	if (!cr6.eq) goto loc_82CAA0A8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r6,r11,32
	ctx.r6.u64 = r11.u64 & 0xFFFFFFFF;
	// divdu r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 / ctx.r9.u64;
	// tdllei r9,0
	// mulld r5,r5,r9
	ctx.r5.s64 = ctx.r5.s64 * ctx.r9.s64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpld cr6,r6,r10
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r10.u64, xer);
	// ble cr6,0x82caa0d4
	if (!cr6.gt) goto loc_82CAA0D4;
loc_82CAA0A8:
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82caa0e0
	if (!cr6.eq) goto loc_82CAA0E0;
loc_82CAA0B4:
	// rlwinm. r11,r25,0,28,28
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne 0x82caa0ec
	if (!cr0.eq) goto loc_82CAA0EC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caa0cc
	if (cr6.eq) goto loc_82CAA0CC;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82CAA0CC:
	// li r28,0
	r28.s64 = 0;
	// b 0x82caa158
	goto loc_82CAA158;
loc_82CAA0D4:
	// mulld r10,r9,r28
	ctx.r10.s64 = ctx.r9.s64 * r28.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
loc_82CAA0E0:
	// lbz r31,0(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82caa02c
	goto loc_82CAA02C;
loc_82CAA0EC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrldi r31,r10,1
	r31.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r30,r9,63,63
	r30.u64 = rotl64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// bne 0x82caa12c
	if (!cr0.eq) goto loc_82CAA12C;
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caa158
	if (!cr0.eq) goto loc_82CAA158;
	// rlwinm. r11,r25,0,30,30
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caa11c
	if (cr0.eq) goto loc_82CAA11C;
	// cmpld cr6,r28,r30
	cr6.compare<uint64_t>(r28.u64, r30.u64, xer);
	// bgt cr6,0x82caa12c
	if (cr6.gt) goto loc_82CAA12C;
loc_82CAA11C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82caa158
	if (!cr6.eq) goto loc_82CAA158;
	// cmpld cr6,r28,r31
	cr6.compare<uint64_t>(r28.u64, r31.u64, xer);
	// ble cr6,0x82caa158
	if (!cr6.gt) goto loc_82CAA158;
loc_82CAA12C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// clrlwi. r10,r25,31
	ctx.r10.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x82caa148
	if (cr0.eq) goto loc_82CAA148;
	// li r28,-1
	r28.s64 = -1;
	// b 0x82caa158
	goto loc_82CAA158;
loc_82CAA148:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r30
	r28.u64 = r30.u64;
	// bne 0x82caa158
	if (!cr0.eq) goto loc_82CAA158;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82CAA158:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caa164
	if (cr6.eq) goto loc_82CAA164;
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
loc_82CAA164:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caa170
	if (cr0.eq) goto loc_82CAA170;
	// neg r28,r28
	r28.s64 = -r28.s64;
loc_82CAA170:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82CAA174:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82CA9EA8) {
	__imp__sub_82CA9EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-3224
	ctx.r3.s64 = ctx.r10.s64 + -3224;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82ca9ea8
	sub_82CA9EA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAA180) {
	__imp__sub_82CAA180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-3224
	ctx.r3.s64 = ctx.r10.s64 + -3224;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82ca9ea8
	sub_82CA9EA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAA1A0) {
	__imp__sub_82CAA1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA1C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82caa208
	if (!cr6.eq) goto loc_82CAA208;
loc_82CAA1DC:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caa29c
	goto loc_82CAA29C;
loc_82CAA208:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa1dc
	if (cr6.eq) goto loc_82CAA1DC;
	// lis r11,32767
	r11.s64 = 2147418112;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82caccc0
	sub_82CACCC0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82caa264
	if (cr0.lt) goto loc_82CAA264;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82caa270
	goto loc_82CAA270;
loc_82CAA264:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CAA270:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82caa28c
	if (cr0.lt) goto loc_82CAA28C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// b 0x82caa298
	goto loc_82CAA298;
loc_82CAA28C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CAA298:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CAA29C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAA1C0) {
	__imp__sub_82CAA1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA2B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caa1c0
	sub_82CAA1C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAA2B8) {
	__imp__sub_82CAA2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32053
	r11.s64 = -2100625408;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13120
	ctx.r3.s64 = r11.s64 + -13120;
	// b 0x82ca6e08
	sub_82CA6E08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAA2C8) {
	__imp__sub_82CAA2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	// cmpw r3,r4
	cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beqlr- 
	if (cr0.eq) return;
	// bge+ 0x82caa2f0
	if (!cr0.lt) goto loc_82CAA2F0;
	// b 0x82ca2c60
	sub_82CA2C60(ctx, base);
	return;
loc_82CAA2F0:
	// addi r0,r5,1
	r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctr.u64 = r0.u64;
	// b 0x82caa318
	goto loc_82CAA318;
loc_82CAA304:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82CAA318:
	// andi. r0,r3,3
	r0.u64 = ctx.r3.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bdnzf eq,0x82caa304
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_82CAA304;
	// rlwinm. r0,r5,30,2,31
	r0.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// beq- 0x82caa348
	if (cr0.eq) goto loc_82CAA348;
	// mtctr r0
	ctr.u64 = r0.u64;
	// andi. r0,r4,3
	r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// bne- 0x82caa36c
	if (!cr0.eq) goto loc_82CAA36C;
loc_82CAA334:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(-4) );
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x82caa334
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAA334;
loc_82CAA348:
	// andi. r0,r5,3
	r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_82CAA354:
	// lbz r0,-1(r4)
	r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x82caa354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAA354;
	// blr 
	return;
loc_82CAA36C:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (rotl32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (rotl32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (rotl32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x82caa36c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAA36C;
	// b 0x82caa348
	goto loc_82CAA348;
}

PPC_WEAK_FUNC(sub_82CAA2E0) {
	__imp__sub_82CAA2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r18,292(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(292) );
	// li r20,0
	r20.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r17,r20
	r17.u64 = r20.u64;
	// beq cr6,0x82caa4a8
	if (cr6.eq) goto loc_82CAA4A8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82caa3f4
	if (!cr6.eq) goto loc_82CAA3F4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82caa4a8
	if (!cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa3fc
	goto loc_82CAA3FC;
loc_82CAA3F4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82caa4a8
	if (cr6.eq) goto loc_82CAA4A8;
loc_82CAA3FC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82caa410
	if (!cr6.eq) goto loc_82CAA410;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x82caa4a8
	if (!cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa418
	goto loc_82CAA418;
loc_82CAA410:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82caa4a8
	if (cr6.eq) goto loc_82CAA4A8;
loc_82CAA418:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82caa42c
	if (!cr6.eq) goto loc_82CAA42C;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82caa4a8
	if (!cr6.eq) goto loc_82CAA4A8;
	// b 0x82caa434
	goto loc_82CAA434;
loc_82CAA42C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82caa4a8
	if (cr6.eq) goto loc_82CAA4A8;
loc_82CAA434:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x82caa4a0
	if (!cr6.eq) goto loc_82CAA4A0;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x82caa4a8
	if (!cr6.eq) goto loc_82CAA4A8;
loc_82CAA444:
	// li r11,1
	r11.s64 = 1;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82CAA44C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82caa464
	if (cr6.eq) goto loc_82CAA464;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82caa44c
	if (!cr0.eq) goto loc_82CAA44C;
loc_82CAA464:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// bne cr6,0x82caa4b0
	if (!cr6.eq) goto loc_82CAA4B0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82caa498
	if (cr6.eq) goto loc_82CAA498;
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(r21.u32, 3, xer);
	// blt cr6,0x82caa5dc
	if (cr6.lt) goto loc_82CAA5DC;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5c28
	sub_82CB5C28(ctx, base);
loc_82CAA498:
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// b 0x82caa4bc
	goto loc_82CAA4BC;
loc_82CAA4A0:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x82caa444
	if (!cr6.eq) goto loc_82CAA444;
loc_82CAA4A8:
	// li r17,1
	r17.s64 = 1;
	// b 0x82caa5dc
	goto loc_82CAA5DC;
loc_82CAA4B0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82caa4bc
	if (cr6.eq) goto loc_82CAA4BC;
	// stb r20,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r20.u8);
loc_82CAA4BC:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82caa560
	if (cr6.eq) goto loc_82CAA560;
loc_82CAA4D4:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x831fd318
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caa4f0
	if (cr0.eq) goto loc_82CAA4F0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82caa51c
	goto loc_82CAA51C;
loc_82CAA4F0:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// beq cr6,0x82caa518
	if (cr6.eq) goto loc_82CAA518;
	// cmpwi cr6,r11,92
	cr6.compare<int32_t>(r11.s32, 92, xer);
	// beq cr6,0x82caa518
	if (cr6.eq) goto loc_82CAA518;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// bne cr6,0x82caa51c
	if (!cr6.eq) goto loc_82CAA51C;
	// mr r28,r29
	r28.u64 = r29.u64;
	// b 0x82caa51c
	goto loc_82CAA51C;
loc_82CAA518:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
loc_82CAA51C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caa4d4
	if (!cr6.eq) goto loc_82CAA4D4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82caa560
	if (cr6.eq) goto loc_82CAA560;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82caa558
	if (cr6.eq) goto loc_82CAA558;
	// subf r6,r30,r31
	ctx.r6.s64 = r31.s64 - r30.s64;
	// cmplw cr6,r22,r6
	cr6.compare<uint32_t>(r22.u32, ctx.r6.u32, xer);
	// ble cr6,0x82caa5dc
	if (!cr6.gt) goto loc_82CAA5DC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82cb5c28
	sub_82CB5C28(ctx, base);
loc_82CAA558:
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82caa56c
	goto loc_82CAA56C;
loc_82CAA560:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82caa56c
	if (cr6.eq) goto loc_82CAA56C;
	// stb r20,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r20.u8);
loc_82CAA56C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82caa5c8
	if (cr6.eq) goto loc_82CAA5C8;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// blt cr6,0x82caa5c8
	if (cr6.lt) goto loc_82CAA5C8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caa5a0
	if (cr6.eq) goto loc_82CAA5A0;
	// subf r6,r30,r28
	ctx.r6.s64 = r28.s64 - r30.s64;
	// cmplw cr6,r23,r6
	cr6.compare<uint32_t>(r23.u32, ctx.r6.u32, xer);
	// ble cr6,0x82caa5dc
	if (!cr6.gt) goto loc_82CAA5DC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82cb5c28
	sub_82CB5C28(ctx, base);
loc_82CAA5A0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82caa69c
	if (cr6.eq) goto loc_82CAA69C;
	// subf r6,r28,r29
	ctx.r6.s64 = r29.s64 - r28.s64;
	// cmplw cr6,r18,r6
	cr6.compare<uint32_t>(r18.u32, ctx.r6.u32, xer);
	// ble cr6,0x82caa5dc
	if (!cr6.gt) goto loc_82CAA5DC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82cb5c28
	sub_82CB5C28(ctx, base);
	// b 0x82caa69c
	goto loc_82CAA69C;
loc_82CAA5C8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caa690
	if (cr6.eq) goto loc_82CAA690;
	// subf r6,r30,r29
	ctx.r6.s64 = r29.s64 - r30.s64;
	// cmplw cr6,r23,r6
	cr6.compare<uint32_t>(r23.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82caa680
	if (cr6.gt) goto loc_82CAA680;
loc_82CAA5DC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82caa5f0
	if (cr6.eq) goto loc_82CAA5F0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82caa5f0
	if (cr6.eq) goto loc_82CAA5F0;
	// stb r20,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r20.u8);
loc_82CAA5F0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82caa604
	if (cr6.eq) goto loc_82CAA604;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82caa604
	if (cr6.eq) goto loc_82CAA604;
	// stb r20,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r20.u8);
loc_82CAA604:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caa618
	if (cr6.eq) goto loc_82CAA618;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82caa618
	if (cr6.eq) goto loc_82CAA618;
	// stb r20,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r20.u8);
loc_82CAA618:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82caa62c
	if (cr6.eq) goto loc_82CAA62C;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82caa62c
	if (cr6.eq) goto loc_82CAA62C;
	// stb r20,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r20.u8);
loc_82CAA62C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82caa660
	if (!cr6.eq) goto loc_82CAA660;
loc_82CAA634:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82caa6a0
	goto loc_82CAA6A0;
loc_82CAA660:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82caa634
	if (!cr6.eq) goto loc_82CAA634;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82caa6a0
	goto loc_82CAA6A0;
loc_82CAA680:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82cb5c28
	sub_82CB5C28(ctx, base);
loc_82CAA690:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82caa69c
	if (cr6.eq) goto loc_82CAA69C;
	// stb r20,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r20.u8);
loc_82CAA69C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAA6A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82CAA3A0) {
	__imp__sub_82CAA3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// subfic r11,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	r11.s64 = 0 - ctx.r7.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r6.s64;
	// rlwinm r11,r11,0,23,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// subfe r31,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r7,r11,0,23,23
	ctx.r7.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// clrlwi r5,r31,30
	ctx.r5.u64 = r31.u32 & 0x3;
	// bl 0x82caa3a0
	sub_82CAA3A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAA6A8) {
	__imp__sub_82CAA6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA710) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cb5c30
	sub_82CB5C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAA710) {
	__imp__sub_82CAA710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caa74c
	if (!cr6.eq) goto loc_82CAA74C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82caa794
	if (cr6.eq) goto loc_82CAA794;
loc_82CAA74C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1650
	sub_82CC1650(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caa794
	if (cr0.eq) goto loc_82CAA794;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc1290
	sub_82CC1290(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caa794
	if (cr0.eq) goto loc_82CAA794;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lhz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// bl 0x82cb5e10
	sub_82CB5E10(ctx, base);
	// b 0x82caa798
	goto loc_82CAA798;
loc_82CAA794:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CAA798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAA728) {
	__imp__sub_82CAA728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA7A8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82caa7f4
	if (!cr6.eq) goto loc_82CAA7F4;
loc_82CAA7C8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAA7EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caa8d0
	goto loc_82CAA8D0;
loc_82CAA7F4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caa7c8
	if (cr6.eq) goto loc_82CAA7C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0c10
	sub_82CC0C10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82caa85c
	if (!cr6.eq) goto loc_82CAA85C;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82caa834
	if (cr6.lt) goto loc_82CAA834;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x82caa850
	if (!cr6.gt) goto loc_82CAA850;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82caa844
	if (cr6.eq) goto loc_82CAA844;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x82caa850
	if (cr6.eq) goto loc_82CAA850;
loc_82CAA834:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
loc_82CAA83C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82caa7ec
	goto loc_82CAA7EC;
loc_82CAA844:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// b 0x82caa83c
	goto loc_82CAA83C;
loc_82CAA850:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// b 0x82caa83c
	goto loc_82CAA83C;
loc_82CAA85C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82caa86c
	if (!cr6.eq) goto loc_82CAA86C;
	// li r11,0
	r11.s64 = 0;
loc_82CAA86C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r3.u64);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// std r3,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r3.u64);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caa8cc
	if (cr0.eq) goto loc_82CAA8CC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CAA8CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CAA8D0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAA7A8) {
	__imp__sub_82CAA7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAA8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82caa930
	if (!cr6.eq) goto loc_82CAA930;
loc_82CAA904:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAA928:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caaa08
	goto loc_82CAAA08;
loc_82CAA930:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82caa904
	if (cr6.eq) goto loc_82CAA904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cc0bb8
	sub_82CC0BB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caa994
	if (!cr0.eq) goto loc_82CAA994;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82caa96c
	if (cr6.lt) goto loc_82CAA96C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x82caa988
	if (!cr6.gt) goto loc_82CAA988;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82caa97c
	if (cr6.eq) goto loc_82CAA97C;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x82caa988
	if (cr6.eq) goto loc_82CAA988;
loc_82CAA96C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
loc_82CAA974:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82caa928
	goto loc_82CAA928;
loc_82CAA97C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// b 0x82caa974
	goto loc_82CAA974;
loc_82CAA988:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// b 0x82caa974
	goto loc_82CAA974;
loc_82CAA994:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x82caa9a4
	if (!cr6.eq) goto loc_82CAA9A4;
	// li r11,0
	r11.s64 = 0;
loc_82CAA9A4:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r3.u64);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82caa728
	sub_82CAA728(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// std r3,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r3.u64);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caaa04
	if (cr0.eq) goto loc_82CAAA04;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CAAA04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAA08:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAA8E8) {
	__imp__sub_82CAA8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caaa50
	if (!cr0.eq) goto loc_82CAAA50;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82caaa54
	goto loc_82CAAA54;
loc_82CAAA50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAA54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAA20) {
	__imp__sub_82CAAA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82caaab8
	if (cr0.eq) goto loc_82CAAAB8;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
loc_82CAAA7C:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82caaaa8
	if (cr6.eq) goto loc_82CAAAA8;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82CAAA90:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82caaab8
	if (cr6.eq) goto loc_82CAAAB8;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// lhz r11,0(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82caaa90
	if (!cr0.eq) goto loc_82CAAA90;
loc_82CAAAA8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82caaa7c
	if (!cr0.eq) goto loc_82CAAA7C;
loc_82CAAAB8:
	// subf r11,r3,r10
	r11.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi r3,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r3.s64 = r11.s32 >> 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAA68) {
	__imp__sub_82CAAA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82CAAAD4:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// beq 0x82caaaf4
	if (cr0.eq) goto loc_82CAAAF4;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82caaad4
	if (!cr0.eq) goto loc_82CAAAD4;
loc_82CAAAF4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CAAB14:
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x82caab14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAAB14;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAAC8) {
	__imp__sub_82CAAAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82caab3c
	goto loc_82CAAB3C;
loc_82CAAB34:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_82CAAB3C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82caab34
	if (!cr0.eq) goto loc_82CAAB34;
loc_82CAAB44:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82caab44
	if (!cr0.eq) goto loc_82CAAB44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAB28) {
	__imp__sub_82CAAB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82CAAB64:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82caab64
	if (!cr0.eq) goto loc_82CAAB64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAB60) {
	__imp__sub_82CAAB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82caab90
	if (!cr6.eq) goto loc_82CAAB90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CAAB90:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caabc0
	if (cr0.eq) goto loc_82CAABC0;
loc_82CAAB98:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82caabc0
	if (cr0.eq) goto loc_82CAABC0;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82caabc0
	if (!cr6.eq) goto loc_82CAABC0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x82caab98
	if (!cr0.eq) goto loc_82CAAB98;
loc_82CAABC0:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAB80) {
	__imp__sub_82CAAB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAABD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caac24
	if (!cr6.eq) goto loc_82CAAC24;
loc_82CAABF8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caaca8
	goto loc_82CAACA8;
loc_82CAAC24:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82caac34
	if (cr6.eq) goto loc_82CAAC34;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82caabf8
	if (cr6.eq) goto loc_82CAABF8;
loc_82CAAC34:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82caac4c
	if (cr6.gt) goto loc_82CAAC4C;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_82CAAC4C:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223f990
	sub_8223F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82caaca4
	if (cr6.eq) goto loc_82CAACA4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt 0x82caac98
	if (cr0.lt) goto loc_82CAAC98;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82caaca4
	goto loc_82CAACA4;
loc_82CAAC98:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CAACA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82CAACA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAABD0) {
	__imp__sub_82CAABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAACC0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82caabd0
	sub_82CAABD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAACC0) {
	__imp__sub_82CAACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAACD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82caad18
	if (!cr6.eq) goto loc_82CAAD18;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caad28
	goto loc_82CAAD28;
loc_82CAAD18:
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822397e0
	sub_822397E0(ctx, base);
loc_82CAAD28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAACD0) {
	__imp__sub_82CAACD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAD40) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,-4096
	r30.s64 = -4096;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82caad98
	if (cr6.eq) goto loc_82CAAD98;
	// divwu r11,r30,r3
	r11.u32 = r30.u32 / ctx.r3.u32;
	// twllei r3,0
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82caad98
	if (!cr6.lt) goto loc_82CAAD98;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAAD90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caae0c
	goto loc_82CAAE0C;
loc_82CAAD98:
	// mullw. r31,r3,r4
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82caada4
	if (!cr0.eq) goto loc_82CAADA4;
	// li r31,1
	r31.s64 = 1;
loc_82CAADA4:
	// lis r29,-31949
	r29.s64 = -2093809664;
loc_82CAADA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x82caadcc
	if (cr6.gt) goto loc_82CAADCC;
	// bl 0x82239798
	sub_82239798(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82238790
	sub_82238790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82caae0c
	if (!cr0.eq) goto loc_82CAAE0C;
loc_82CAADCC:
	// lwz r11,26932(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26932) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82caadfc
	if (cr6.eq) goto loc_82CAADFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cacc10
	sub_82CACC10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caada8
	if (!cr0.eq) goto loc_82CAADA8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82caad90
	if (cr6.eq) goto loc_82CAAD90;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82caad90
	goto loc_82CAAD90;
loc_82CAADFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82caae0c
	if (cr6.eq) goto loc_82CAAE0C;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82CAAE0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CAAD40) {
	__imp__sub_82CAAD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAE18) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82caad40
	sub_82CAAD40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82caae64
	if (!cr0.eq) goto loc_82CAAE64;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82caae64
	if (cr6.eq) goto loc_82CAAE64;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82caae64
	if (cr0.eq) goto loc_82CAAE64;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82CAAE64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAE18) {
	__imp__sub_82CAAE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAE80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caaecc
	if (!cr6.eq) goto loc_82CAAECC;
loc_82CAAE9C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82caaef8
	goto loc_82CAAEF8;
loc_82CAAECC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82caae9c
	if (cr6.eq) goto loc_82CAAE9C;
loc_82CAAED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82caaef8
	if (cr0.eq) goto loc_82CAAEF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82caaed4
	if (cr6.eq) goto loc_82CAAED4;
loc_82CAAEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAE80) {
	__imp__sub_82CAAE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAF08) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caae80
	sub_82CAAE80(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAAF08) {
	__imp__sub_82CAAF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAF10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca70c0
	sub_82CA70C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAAF10) {
	__imp__sub_82CAAF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82caaf5c
	if (!cr6.eq) goto loc_82CAAF5C;
loc_82CAAF2C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82caaf70
	goto loc_82CAAF70;
loc_82CAAF5C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82caaf2c
	if (cr6.eq) goto loc_82CAAF2C;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r5,r11,-3224
	ctx.r5.s64 = r11.s64 + -3224;
	// bl 0x82cb6108
	sub_82CB6108(ctx, base);
loc_82CAAF70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAAF18) {
	__imp__sub_82CAAF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAF80) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82caaf18
	sub_82CAAF18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAAF80) {
	__imp__sub_82CAAF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAAF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82caafec
	if (cr6.eq) goto loc_82CAAFEC;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82caafec
	if (cr6.eq) goto loc_82CAAFEC;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82caaff8
	if (!cr6.eq) goto loc_82CAAFF8;
loc_82CAAFC8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
loc_82CAAFD0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAAFEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAAFF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	return;
loc_82CAAFF8:
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82cab014
	if (cr6.eq) goto loc_82CAB014;
	// divwu r11,r31,r24
	r11.u32 = r31.u32 / r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x82cab044
	if (!cr6.gt) goto loc_82CAB044;
loc_82CAB014:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cab02c
	if (cr6.eq) goto loc_82CAB02C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CAB02C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82caafc8
	if (cr6.eq) goto loc_82CAAFC8;
	// divwu r11,r31,r24
	r11.u32 = r31.u32 / r24.u32;
	// twllei r24,0
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// bgt cr6,0x82caafc8
	if (cr6.gt) goto loc_82CAAFC8;
loc_82CAB044:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// mullw r23,r24,r22
	r23.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cab064
	if (cr0.eq) goto loc_82CAB064;
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// b 0x82cab068
	goto loc_82CAB068;
loc_82CAB064:
	// li r26,4096
	r26.s64 = 4096;
loc_82CAB068:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82cab1b0
	if (cr6.eq) goto loc_82CAB1B0;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
loc_82CAB078:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cab0e8
	if (cr0.eq) goto loc_82CAB0E8;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82cab0e8
	if (cr6.eq) goto loc_82CAB0E8;
	// blt cr6,0x82cab1dc
	if (cr6.lt) goto loc_82CAB1DC;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x82cab0a4
	if (!cr6.lt) goto loc_82CAB0A4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82CAB0A4:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82cab1b8
	if (cr6.gt) goto loc_82CAB1B8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca3730
	sub_82CA3730(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82cab1a8
	goto loc_82CAB1A8;
loc_82CAB0E8:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x82cab17c
	if (cr6.lt) goto loc_82CAB17C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cab130
	if (cr6.eq) goto loc_82CAB130;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// twllei r26,0
	// ble cr6,0x82cab11c
	if (!cr6.gt) goto loc_82CAB11C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// divwu r10,r11,r26
	ctx.r10.u32 = r11.u32 / r26.u32;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r30,r11,r25
	r30.s64 = r25.s64 - r11.s64;
	// b 0x82cab140
	goto loc_82CAB140;
loc_82CAB11C:
	// divwu r11,r31,r26
	r11.u32 = r31.u32 / r26.u32;
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r11,r31
	r30.s64 = r31.s64 - r11.s64;
	// b 0x82cab140
	goto loc_82CAB140;
loc_82CAB130:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bgt cr6,0x82cab140
	if (cr6.gt) goto loc_82CAB140;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82CAB140:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x82cab1b8
	if (cr6.gt) goto loc_82CAB1B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82cb67a8
	sub_82CB67A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cab1f8
	if (cr0.eq) goto loc_82CAB1F8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cab1dc
	if (cr6.eq) goto loc_82CAB1DC;
	// subf r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// subf r27,r3,r27
	r27.s64 = r27.s64 - ctx.r3.s64;
	// b 0x82cab1a8
	goto loc_82CAB1A8;
loc_82CAB17C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cab204
	if (cr6.eq) goto loc_82CAB204;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82cab1b8
	if (cr6.eq) goto loc_82CAB1B8;
	// stb r3,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r3.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_82CAB1A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cab078
	if (!cr6.eq) goto loc_82CAB078;
loc_82CAB1B0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x82caaff0
	goto loc_82CAAFF0;
loc_82CAB1B8:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cab1d0
	if (cr6.eq) goto loc_82CAB1D0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CAB1D0:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// b 0x82caafd0
	goto loc_82CAAFD0;
loc_82CAB1DC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_82CAB1E4:
	// subf r10,r31,r23
	ctx.r10.s64 = r23.s64 - r31.s64;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// twllei r24,0
	// divwu r3,r10,r24
	ctx.r3.u32 = ctx.r10.u32 / r24.u32;
	// b 0x82caaff0
	goto loc_82CAAFF0;
loc_82CAB1F8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// b 0x82cab1e4
	goto loc_82CAB1E4;
loc_82CAB204:
	// subf r11,r31,r23
	r11.s64 = r23.s64 - r31.s64;
	// twllei r24,0
	// divwu r3,r11,r24
	ctx.r3.u32 = r11.u32 / r24.u32;
	// b 0x82caaff0
	goto loc_82CAAFF0;
}

PPC_WEAK_FUNC(sub_82CAAF88) {
	__imp__sub_82CAAF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x82cab2a0
	if (cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82cab2a0
	if (cr6.eq) goto loc_82CAB2A0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82cab2ac
	if (!cr6.eq) goto loc_82CAB2AC;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82cab27c
	if (cr6.eq) goto loc_82CAB27C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CAB27C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAB2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAB2A4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c30
	return;
loc_82CAB2AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8870
	sub_82CA8870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caaf88
	sub_82CAAF88(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82cab308
	sub_82CAB308(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// b 0x82cab2a4
	goto loc_82CAB2A4;
}

PPC_WEAK_FUNC(sub_82CAB220) {
	__imp__sub_82CAB220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// b 0x82cab320
	goto loc_82CAB320;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAB320:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB2E8) {
	__imp__sub_82CAB2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8930
	sub_82CA8930(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB308) {
	__imp__sub_82CAB308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB340) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cab220
	sub_82CAB220(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAB340) {
	__imp__sub_82CAB340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cab3a0
	if (!cr6.eq) goto loc_82CAB3A0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cab3a0
	if (cr6.eq) goto loc_82CAB3A0;
loc_82CAB374:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cab3b4
	goto loc_82CAB3B4;
loc_82CAB3A0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cab3b0
	if (!cr6.eq) goto loc_82CAB3B0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cab374
	if (!cr6.eq) goto loc_82CAB374;
loc_82CAB3B0:
	// bl 0x822cd828
	sub_822CD828(ctx, base);
loc_82CAB3B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB358) {
	__imp__sub_82CAB358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB3C8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82cab358
	sub_82CAB358(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAB3C8) {
	__imp__sub_82CAB3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cab430
	if (cr6.eq) goto loc_82CAB430;
loc_82CAB3D8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82cab3f4
	if (cr6.lt) goto loc_82CAB3F4;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82cab3f4
	if (cr6.gt) goto loc_82CAB3F4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82CAB3F4:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82cab410
	if (cr6.lt) goto loc_82CAB410;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82cab410
	if (cr6.gt) goto loc_82CAB410;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82CAB410:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82cab428
	if (cr0.eq) goto loc_82CAB428;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cab428
	if (cr6.eq) goto loc_82CAB428;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82cab3d8
	if (cr6.eq) goto loc_82CAB3D8;
loc_82CAB428:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
loc_82CAB430:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB3D0) {
	__imp__sub_82CAB3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB438) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cab480
	if (!cr6.eq) goto loc_82CAB480;
loc_82CAB450:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82cab4c8
	goto loc_82CAB4C8;
loc_82CAB480:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cab450
	if (cr6.eq) goto loc_82CAB450;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r31,r11,65535
	r31.u64 = r11.u64 | 65535;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// ble cr6,0x82cab4c4
	if (!cr6.gt) goto loc_82CAB4C4;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cab4c8
	goto loc_82CAB4C8;
loc_82CAB4C4:
	// bl 0x82cab3d0
	sub_82CAB3D0(ctx, base);
loc_82CAB4C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB438) {
	__imp__sub_82CAB438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// bl 0x831fd318
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cab5ac
	if (cr0.eq) goto loc_82CAB5AC;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82cab518
	if (!cr6.eq) goto loc_82CAB518;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82cab52c
	goto loc_82CAB52C;
loc_82CAB518:
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82cab5ac
	if (!cr6.eq) goto loc_82CAB5AC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CAB52C:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,26836(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(26836) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,26836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26836, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cab5ac
	if (!cr0.eq) goto loc_82CAB5AC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// rlwinm r29,r10,2,0,29
	r29.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,26856
	r30.s64 = r11.s64 + 26856;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cab584
	if (!cr6.eq) goto loc_82CAB584;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r11,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r11.u32);
	// bne 0x82cab584
	if (!cr0.eq) goto loc_82CAB584;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// b 0x82cab588
	goto loc_82CAB588;
loc_82CAB584:
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_82CAB588:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// ori r11,r11,4354
	r11.u64 = r11.u64 | 4354;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82cab5b0
	goto loc_82CAB5B0;
loc_82CAB5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAB5B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAB4E0) {
	__imp__sub_82CAB4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cab608
	if (cr6.eq) goto loc_82CAB608;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,19,19
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cab608
	if (cr0.eq) goto loc_82CAB608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca4e68
	sub_82CA4E68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r11,0,24,22
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82CAB608:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB5B8) {
	__imp__sub_82CAB5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31921
	r11.s64 = -2091974656;
	// stw r3,29888(r11)
	PPC_STORE_U32(r11.u32 + 29888, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB620) {
	__imp__sub_82CAB620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29888(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29888) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cab658
	if (cr0.eq) goto loc_82CAB658;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cab664
	goto loc_82CAB664;
loc_82CAB658:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cb6a90
	sub_82CB6A90(ctx, base);
	// twi 31,r0,22
loc_82CAB664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB630) {
	__imp__sub_82CAB630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CAB6A4:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82cab6a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAB6A4;
	// lwz r10,2808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(2808) );
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,13
	r11.u64 = r11.u64 | 13;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82cbbe08
	sub_82CBBE08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cbbed0
	sub_82CBBED0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cab6f4
	if (!cr0.eq) goto loc_82CAB6F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cb6a90
	sub_82CB6A90(ctx, base);
loc_82CAB6F4:
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x832b25cc
	__imp__KeBugCheck(ctx, base);
}

PPC_WEAK_FUNC(sub_82CAB678) {
	__imp__sub_82CAB678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4208
	ctx.r9.s64 = ctx.r10.s64 + -4208;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82CAB710:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x82cab744
	if (cr6.eq) goto loc_82CAB744;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// blt cr6,0x82cab710
	if (cr6.lt) goto loc_82CAB710;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// blt cr6,0x82cab754
	if (cr6.lt) goto loc_82CAB754;
	// cmplwi cr6,r3,36
	cr6.compare<uint32_t>(ctx.r3.u32, 36, xer);
	// bgt cr6,0x82cab754
	if (cr6.gt) goto loc_82CAB754;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82CAB744:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82CAB754:
	// cmplwi cr6,r3,188
	cr6.compare<uint32_t>(ctx.r3.u32, 188, xer);
	// blt cr6,0x82cab768
	if (cr6.lt) goto loc_82CAB768;
	// cmplwi cr6,r3,202
	cr6.compare<uint32_t>(ctx.r3.u32, 202, xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!cr6.gt) return;
loc_82CAB768:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB700) {
	__imp__sub_82CAB700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cab794
	if (!cr0.eq) goto loc_82CAB794;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-3848
	ctx.r3.s64 = r11.s64 + -3848;
	// b 0x82cab798
	goto loc_82CAB798;
loc_82CAB794:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_82CAB798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB770) {
	__imp__sub_82CAB770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cab7cc
	if (!cr0.eq) goto loc_82CAB7CC;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r3,r11,-3844
	ctx.r3.s64 = r11.s64 + -3844;
	// b 0x82cab7d0
	goto loc_82CAB7D0;
loc_82CAB7CC:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_82CAB7D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB7A8) {
	__imp__sub_82CAB7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB7E0) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cab834
	if (!cr0.eq) goto loc_82CAB834;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82CAB818:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CAB820:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
loc_82CAB824:
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82cab9a8
	goto loc_82CAB9A8;
loc_82CAB834:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cab848
	if (cr0.eq) goto loc_82CAB848;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x82cab818
	goto loc_82CAB818;
loc_82CAB848:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82cab870
	if (cr0.eq) goto loc_82CAB870;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x82cab824
	if (cr0.eq) goto loc_82CAB824;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_82CAB870:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cab8cc
	if (!cr0.eq) goto loc_82CAB8CC;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82cab8b4
	if (cr6.eq) goto loc_82CAB8B4;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82cab8c4
	if (!cr6.eq) goto loc_82CAB8C4;
loc_82CAB8B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831fd318
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cab8cc
	if (!cr0.eq) goto loc_82CAB8CC;
loc_82CAB8C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb6d00
	sub_82CB6D00(ctx, base);
loc_82CAB8CC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cab980
	if (cr0.eq) goto loc_82CAB980;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// subf. r30,r4,r10
	r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble 0x82cab914
	if (!cr0.gt) goto loc_82CAB914;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82cab970
	goto loc_82CAB970;
loc_82CAB914:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82cab944
	if (cr6.eq) goto loc_82CAB944;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// beq cr6,0x82cab944
	if (cr6.eq) goto loc_82CAB944;
	// srawi r11,r29,5
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	r11.s64 = r29.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r29,6,21,25
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 6) & 0x7C0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cab94c
	goto loc_82CAB94C;
loc_82CAB944:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r11,r11,-2648
	r11.s64 = r11.s64 + -2648;
loc_82CAB94C:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cab970
	if (cr0.eq) goto loc_82CAB970;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cb6b70
	sub_82CB6B70(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x82cab820
	if (cr6.eq) goto loc_82CAB820;
loc_82CAB970:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x82cab998
	goto loc_82CAB998;
loc_82CAB980:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82caf9e0
	sub_82CAF9E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82CAB998:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bne cr6,0x82cab820
	if (!cr6.eq) goto loc_82CAB820;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(148) );
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82CAB9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CAB7E0) {
	__imp__sub_82CAB7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAB9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x821ee9e8
	sub_821EE9E8(ctx, base);
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x82cab9ec
	if (cr6.eq) goto loc_82CAB9EC;
loc_82CAB9D8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cab9d8
	if (!cr0.eq) goto loc_82CAB9D8;
loc_82CAB9EC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x821ee9e8
	sub_821EE9E8(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// bne cr6,0x82caba04
	if (!cr6.eq) goto loc_82CABA04;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_82CABA04:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lwz r11,-4912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4912) );
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
loc_82CABA20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82caba20
	if (!cr6.eq) goto loc_82CABA20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAB9B0) {
	__imp__sub_82CAB9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABA50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CABA50) {
	__imp__sub_82CABA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABA70) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cabaa8
	if (cr6.eq) goto loc_82CABAA8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cb6d88
	sub_82CB6D88(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// b 0x82cabab8
	goto loc_82CABAB8;
loc_82CABAA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb6e30
	sub_82CB6E30(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CABAB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CABA70) {
	__imp__sub_82CABA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABAD0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82caba70
	sub_82CABA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CABAD0) {
	__imp__sub_82CABAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABAD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cab9b0
	sub_82CAB9B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CABAD8) {
	__imp__sub_82CABAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABAE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8218d7d8
	sub_8218D7D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CABAE0) {
	__imp__sub_82CABAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82cabb3c
	if (!cr6.eq) goto loc_82CABB3C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cabd54
	goto loc_82CABD54;
loc_82CABB3C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82cabb70
	if (!cr6.eq) goto loc_82CABB70;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CABB4C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cabd54
	goto loc_82CABD54;
loc_82CABB70:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bgt cr6,0x82cabb80
	if (cr6.gt) goto loc_82CABB80;
	// li r11,0
	r11.s64 = 0;
loc_82CABB80:
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82cabb98
	if (cr6.gt) goto loc_82CABB98;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82cabb4c
	goto loc_82CABB4C;
loc_82CABB98:
	// extsb. r28,r8
	r28.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82cabbe8
	if (cr0.eq) goto loc_82CABBE8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// ble cr6,0x82cabbe8
	if (!cr6.gt) goto loc_82CABBE8;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82CABBC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cabbc0
	if (!cr6.eq) goto loc_82CABBC0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82CABBE8:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r26,45
	r26.s64 = 45;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// bne cr6,0x82cabc04
	if (!cr6.eq) goto loc_82CABC04;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
loc_82CABC04:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82cabc30
	if (!cr6.gt) goto loc_82CABC30;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r9,-4912(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-4912) );
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(0) );
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
loc_82CABC30:
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// bne cr6,0x82cabc50
	if (!cr6.eq) goto loc_82CABC50;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82cabc58
	goto loc_82CABC58;
loc_82CABC50:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
loc_82CABC58:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,4304
	ctx.r5.s64 = r11.s64 + 4304;
	// bl 0x82170cc8
	sub_82170CC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cabc88
	if (cr0.eq) goto loc_82CABC88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab678
	sub_82CAB678(ctx, base);
loc_82CABC88:
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82cabc9c
	if (cr6.eq) goto loc_82CABC9C;
	// li r11,69
	r11.s64 = 69;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82CABC9C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x82cabd28
	if (cr6.eq) goto loc_82CABD28;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(4) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82cabcc4
	if (!cr0.lt) goto loc_82CABCC4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stb r26,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r26.u8);
loc_82CABCC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// blt cr6,0x82cabcf0
	if (cr6.lt) goto loc_82CABCF0;
	// li r7,100
	ctx.r7.s64 = 100;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,100
	ctx.r8.s64 = ctx.r7.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_82CABCF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x82cabd1c
	if (cr6.lt) goto loc_82CABD1C;
	// li r7,10
	ctx.r7.s64 = 10;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// divw r9,r11,r7
	ctx.r9.s32 = r11.s32 / ctx.r7.s32;
	// divw r7,r11,r7
	ctx.r7.s32 = r11.s32 / ctx.r7.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_82CABD1C:
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
loc_82CABD28:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,27360(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27360) );
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cabd50
	if (cr0.eq) goto loc_82CABD50;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82cabd50
	if (!cr6.eq) goto loc_82CABD50;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82CABD50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CABD54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CABAE8) {
	__imp__sub_82CABAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CABD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	r28.s64 = 48;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// li r26,0
	r26.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x82cabd90
	if (!cr6.lt) goto loc_82CABD90;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82CABD90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cabdc4
	if (!cr6.eq) goto loc_82CABDC4;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABDC4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cabdf8
	if (!cr6.eq) goto loc_82CABDF8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82CABDD4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABDF8:
	// addi r11,r6,11
	r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x82cabe14
	if (cr6.gt) goto loc_82CABE14;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82cabdd4
	goto loc_82CABDD4;
loc_82CABE14:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	cr6.compare<uint64_t>(ctx.r10.u64, 4094, xer);
	// bne cr6,0x82cabebc
	if (!cr6.eq) goto loc_82CABEBC;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82cabe34
	if (!cr6.eq) goto loc_82CABE34;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82cabe38
	goto loc_82CABE38;
loc_82CABE34:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_82CABE38:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82171198
	sub_82171198(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cabe5c
	if (cr0.eq) goto loc_82CABE5C;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x82cac19c
	goto loc_82CAC19C;
loc_82CABE5C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82cabe70
	if (!cr6.eq) goto loc_82CABE70;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CABE70:
	// subfic r10,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r10.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r4,101
	ctx.r4.s64 = 101;
	// addi r11,r10,120
	r11.s64 = ctx.r10.s64 + 120;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x82ca70c0
	sub_82CA70C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cac198
	if (cr0.eq) goto loc_82CAC198;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r26,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x82cac198
	goto loc_82CAC198;
loc_82CABEBC:
	// clrldi r11,r11,63
	r11.u64 = r11.u64 & 0x1;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82cabed4
	if (cr6.eq) goto loc_82CABED4;
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CABED4:
	// subfic r10,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r10.s64 = 0 - r29.s64;
	// stb r28,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r28.u8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r9.s64 = 0 - r29.s64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r8,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// rlwinm r9,r9,0,20,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// bne cr6,0x82cabf40
	if (!cr6.eq) goto loc_82CABF40;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = rotl64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x82cabf38
	if (!cr6.eq) goto loc_82CABF38;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x82cabf4c
	goto loc_82CABF4C;
loc_82CABF38:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x82cabf4c
	goto loc_82CABF4C;
loc_82CABF40:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82CABF4C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82cabf64
	if (!cr6.eq) goto loc_82CABF64;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r26.u8);
	// b 0x82cabf78
	goto loc_82CABF78;
loc_82CABF64:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-4912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4912) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
loc_82CABF78:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	r11.u64 = rotl64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// ble cr6,0x82cac070
	if (!cr6.gt) goto loc_82CAC070;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = rotl64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_82CABF90:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82cabfe8
	if (!cr6.gt) goto loc_82CABFE8;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = rotl64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	cr6.compare<uint32_t>(ctx.r9.u32, 57, xer);
	// ble cr6,0x82cabfcc
	if (!cr6.gt) goto loc_82CABFCC;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_82CABFCC:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = rotl64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bge 0x82cabf90
	if (!cr0.lt) goto loc_82CABF90;
loc_82CABFE8:
	// extsh. r11,r7
	r11.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82cac070
	if (cr0.lt) goto loc_82CAC070;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	r11.u64 = rotl64(r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// ble cr6,0x82cac070
	if (!cr6.gt) goto loc_82CAC070;
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
loc_82CAC014:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x82cac02c
	if (cr6.eq) goto loc_82CAC02C;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bne cr6,0x82cac038
	if (!cr6.eq) goto loc_82CAC038;
loc_82CAC02C:
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82cac014
	goto loc_82CAC014;
loc_82CAC038:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cac064
	if (cr6.eq) goto loc_82CAC064;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bne cr6,0x82cac058
	if (!cr6.eq) goto loc_82CAC058;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x82cac05c
	goto loc_82CAC05C;
loc_82CAC058:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC05C:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cac070
	goto loc_82CAC070;
loc_82CAC064:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
loc_82CAC070:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82cac09c
	if (!cr6.gt) goto loc_82CAC09C;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82cac098
	if (cr0.eq) goto loc_82CAC098;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82CAC08C:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82cac08c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CAC08C;
loc_82CAC098:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82CAC09C:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cac0ac
	if (!cr6.eq) goto loc_82CAC0AC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82CAC0AC:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	r11.s64 = r11.s64 + 112;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	r11.u64 = rotl64(r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x82cac0e4
	if (cr6.lt) goto loc_82CAC0E4;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82cac0ec
	goto loc_82CAC0EC;
loc_82CAC0E4:
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_82CAC0EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	cr6.compare<int64_t>(r11.s64, 1000, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x82cac12c
	if (cr6.lt) goto loc_82CAC12C;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = ctx.r6.s64 * 1000;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cac134
	if (!cr6.eq) goto loc_82CAC134;
loc_82CAC12C:
	// cmpdi cr6,r11,100
	cr6.compare<int64_t>(r11.s64, 100, xer);
	// blt cr6,0x82cac158
	if (cr6.lt) goto loc_82CAC158;
loc_82CAC134:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// divd r6,r11,r9
	ctx.r6.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = ctx.r6.s64 * 100;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC158:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cac168
	if (!cr6.eq) goto loc_82CAC168;
	// cmpdi cr6,r11,10
	cr6.compare<int64_t>(r11.s64, 10, xer);
	// blt cr6,0x82cac18c
	if (cr6.lt) goto loc_82CAC18C;
loc_82CAC168:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = r11.s64 / ctx.r9.s64;
	// divd r7,r11,r9
	ctx.r7.s64 = r11.s64 / ctx.r9.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 * 10;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAC18C:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stb r26,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_82CAC198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC19C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CABD60) {
	__imp__sub_82CABD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bne cr6,0x82cac1f8
	if (!cr6.eq) goto loc_82CAC1F8;
loc_82CAC1CC:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82cac364
	goto loc_82CAC364;
loc_82CAC1F8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cac1cc
	if (cr6.eq) goto loc_82CAC1CC;
	// extsb. r26,r7
	r26.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r28,48
	r28.s64 = 48;
	// beq 0x82cac238
	if (cr0.eq) goto loc_82CAC238;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x82cac238
	if (!cr6.eq) goto loc_82CAC238;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	r11.s64 = r11.s64 + -45;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
loc_82CAC238:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x82cac250
	if (!cr6.eq) goto loc_82CAC250;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_82CAC250:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82cac298
	if (cr6.gt) goto loc_82CAC298;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82CAC260:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cac260
	if (!cr6.eq) goto loc_82CAC260;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x82cac29c
	goto loc_82CAC29C;
loc_82CAC298:
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
loc_82CAC29C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82cac360
	if (!cr6.gt) goto loc_82CAC360;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82CAC2A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cac2a8
	if (!cr6.eq) goto loc_82CAC2A8;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-4912(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4912) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82cac360
	if (!cr6.lt) goto loc_82CAC360;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82cac308
	if (cr6.eq) goto loc_82CAC308;
	// neg r27,r11
	r27.s64 = -r11.s64;
	// b 0x82cac318
	goto loc_82CAC318;
loc_82CAC308:
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82cac318
	if (cr6.lt) goto loc_82CAC318;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82CAC318:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82cac350
	if (cr6.eq) goto loc_82CAC350;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82CAC324:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cac324
	if (!cr6.eq) goto loc_82CAC324;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x82caa2e0
	sub_82CAA2E0(ctx, base);
loc_82CAC350:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca3190
	sub_82CA3190(ctx, base);
loc_82CAC360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CAC1A8) {
	__imp__sub_82CAC1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(r11.s32, 101, xer);
	// beq cr6,0x82cac3bc
	if (cr6.eq) goto loc_82CAC3BC;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x82cac3bc
	if (cr6.eq) goto loc_82CAC3BC;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// bne cr6,0x82cac39c
	if (!cr6.eq) goto loc_82CAC39C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82170f28
	sub_82170F28(ctx, base);
	return;
loc_82CAC39C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x82cac3b4
	if (cr6.eq) goto loc_82CAC3B4;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x82cac3b4
	if (cr6.eq) goto loc_82CAC3B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821712b0
	sub_821712B0(ctx, base);
	return;
loc_82CAC3B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82cabd60
	sub_82CABD60(ctx, base);
	return;
loc_82CAC3BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82171198
	sub_82171198(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAC370) {
	__imp__sub_82CAC370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b25dc
	__imp__KeTlsAlloc(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAC3C8) {
	__imp__sub_82CAC3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-3788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3788) );
	// bl 0x832b25ec
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC3D0) {
	__imp__sub_82CAC3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r3,-3792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3792) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC418) {
	__imp__sub_82CAC418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC428) {
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
	// lis r30,-31953
	r30.s64 = -2094071808;
	// lwz r3,-3788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3788) );
	// bl 0x832b25ec
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cac464
	if (!cr0.eq) goto loc_82CAC464;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,-3788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3788) );
	// lwz r4,26880(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26880) );
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x832b25fc
	__imp__KeTlsSetValue(ctx, base);
loc_82CAC464:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC428) {
	__imp__sub_82CAC428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26884) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82CAC480) {
	__imp__sub_82CAC480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r31,-31953
	r31.s64 = -2094071808;
	// li r30,-1
	r30.s64 = -1;
	// lwz r3,-3792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-3792) );
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cac4d0
	if (cr6.eq) goto loc_82CAC4D0;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,26888(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26888) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-3792(r31)
	PPC_STORE_U32(r31.u32 + -3792, r11.u32);
loc_82CAC4D0:
	// lis r31,-31953
	r31.s64 = -2094071808;
	// lwz r3,-3788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-3788) );
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cac4ec
	if (cr6.eq) goto loc_82CAC4EC;
	// bl 0x832b260c
	__imp__KeTlsFree(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-3788(r31)
	PPC_STORE_U32(r31.u32 + -3788, r11.u32);
loc_82CAC4EC:
	// bl 0x82cafd78
	sub_82CAFD78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC490) {
	__imp__sub_82CAC490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-3776
	r11.s64 = r11.s64 + -3776;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC508) {
	__imp__sub_82CAC508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// lis r30,-31953
	r30.s64 = -2094071808;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r31,-3792(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// bl 0x82cac428
	sub_82CAC428(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cac5ec
	if (!cr0.eq) goto loc_82CAC5EC;
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lwz r3,-3792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,26884(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26884) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cac5f8
	if (cr0.eq) goto loc_82CAC5F8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// lwz r3,-3792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// lwz r11,26884(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26884) );
	// beq 0x82cac5dc
	if (cr0.eq) goto loc_82CAC5DC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cac5d0
	if (cr0.eq) goto loc_82CAC5D0;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-3776
	r11.s64 = r11.s64 + -3776;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x8221ee38
	sub_8221EE38(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82cac5f8
	goto loc_82CAC5F8;
loc_82CAC5D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// b 0x82cac5f4
	goto loc_82CAC5F4;
loc_82CAC5DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cac5f8
	goto loc_82CAC5F8;
loc_82CAC5EC:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// bne cr6,0x82cac5f8
	if (!cr6.eq) goto loc_82CAC5F8;
loc_82CAC5F4:
	// li r31,0
	r31.s64 = 0;
loc_82CAC5F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cc0750
	sub_82CC0750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CAC520) {
	__imp__sub_82CAC520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cac634
	if (!cr0.eq) goto loc_82CAC634;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ca9578
	sub_82CA9578(ctx, base);
loc_82CAC634:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC610) {
	__imp__sub_82CAC610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC650) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cac6ec
	if (cr6.eq) goto loc_82CAC6EC;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac67c
	if (cr6.eq) goto loc_82CAC67C;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC67C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac68c
	if (cr6.eq) goto loc_82CAC68C;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC68C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac69c
	if (cr6.eq) goto loc_82CAC69C;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC69C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac6ac
	if (cr6.eq) goto loc_82CAC6AC;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC6AC:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac6bc
	if (cr6.eq) goto loc_82CAC6BC;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC6BC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cac6cc
	if (cr6.eq) goto loc_82CAC6CC;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC6CC:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r11,r11,-3776
	r11.s64 = r11.s64 + -3776;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82cac6e4
	if (cr6.eq) goto loc_82CAC6E4;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC6E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAC6EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAC650) {
	__imp__sub_82CAC650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31953
	r30.s64 = -2094071808;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-31953
	r29.s64 = -2094071808;
	// lwz r11,-3792(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82cac77c
	if (cr6.eq) goto loc_82CAC77C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cac75c
	if (!cr6.eq) goto loc_82CAC75C;
	// lwz r3,-3788(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-3788) );
	// bl 0x832b25ec
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cac75c
	if (cr0.eq) goto loc_82CAC75C;
	// lwz r3,-3788(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-3788) );
	// lwz r31,-3792(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// bl 0x832b25ec
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CAC75C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,-3792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,26884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26884) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cac650
	sub_82CAC650(ctx, base);
loc_82CAC77C:
	// lwz r3,-3788(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-3788) );
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cac790
	if (cr6.eq) goto loc_82CAC790;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b25fc
	__imp__KeTlsSetValue(ctx, base);
loc_82CAC790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAC700) {
	__imp__sub_82CAC700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r11,r11,-15416
	r11.s64 = r11.s64 + -15416;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r31,-31949
	r31.s64 = -2093809664;
	// stw r11,26876(r30)
	PPC_STORE_U32(r30.u32 + 26876, r11.u32);
	// lis r29,-31949
	r29.s64 = -2093809664;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r10,r10,9708
	ctx.r10.s64 = ctx.r10.s64 + 9708;
	// addi r9,r9,9724
	ctx.r9.s64 = ctx.r9.s64 + 9724;
	// addi r11,r8,9740
	r11.s64 = ctx.r8.s64 + 9740;
	// stw r10,26880(r31)
	PPC_STORE_U32(r31.u32 + 26880, ctx.r10.u32);
	// stw r9,26884(r29)
	PPC_STORE_U32(r29.u32 + 26884, ctx.r9.u32);
	// stw r11,26888(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26888, r11.u32);
	// bl 0x832b25dc
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-3788(r11)
	PPC_STORE_U32(r11.u32 + -3788, ctx.r3.u32);
	// beq cr6,0x82cac8bc
	if (cr6.eq) goto loc_82CAC8BC;
	// lwz r4,26880(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(26880) );
	// bl 0x832b25fc
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cac8bc
	if (cr0.eq) goto loc_82CAC8BC;
	// bl 0x82ca97c8
	sub_82CA97C8(ctx, base);
	// bl 0x82cafcf8
	sub_82CAFCF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cac8b8
	if (cr0.eq) goto loc_82CAC8B8;
	// lis r11,-32053
	r11.s64 = -2100625408;
	// lwz r10,26876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(26876) );
	// addi r3,r11,-14768
	ctx.r3.s64 = r11.s64 + -14768;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31953
	r30.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,-3792(r30)
	PPC_STORE_U32(r30.u32 + -3792, ctx.r3.u32);
	// beq cr6,0x82cac8b8
	if (cr6.eq) goto loc_82CAC8B8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cac8b8
	if (cr0.eq) goto loc_82CAC8B8;
	// lwz r3,-3792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-3792) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,26884(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(26884) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cac8b8
	if (cr0.eq) goto loc_82CAC8B8;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-3776
	r11.s64 = r11.s64 + -3776;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x8221ee38
	sub_8221EE38(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32054
	r11.s64 = -2100690944;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,26864
	ctx.r10.s64 = ctx.r10.s64 + 26864;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,13080
	r11.s64 = r11.s64 + 13080;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82cc1728
	sub_82CC1728(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cac8c0
	goto loc_82CAC8C0;
loc_82CAC8B8:
	// bl 0x82cac490
	sub_82CAC490(ctx, base);
loc_82CAC8BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAC8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAC798) {
	__imp__sub_82CAC798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAC8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82cac8f0
	if (!cr0.eq) goto loc_82CAC8F0;
loc_82CAC8E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cacab0
	goto loc_82CACAB0;
loc_82CAC8F0:
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r9,-3644(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-3644) );
loc_82CAC900:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82cac920
	if (cr6.eq) goto loc_82CAC920;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cac900
	if (cr6.lt) goto loc_82CAC900;
loc_82CAC920:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cac944
	if (!cr6.lt) goto loc_82CAC944;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82cac948
	if (cr6.eq) goto loc_82CAC948;
loc_82CAC944:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82CAC948:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cac8e8
	if (cr6.eq) goto loc_82CAC8E8;
	// lwz r28,8(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(8) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82cac8e8
	if (cr6.eq) goto loc_82CAC8E8;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(r28.u32, 5, xer);
	// bne cr6,0x82cac970
	if (!cr6.eq) goto loc_82CAC970;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// b 0x82cacab0
	goto loc_82CACAB0;
loc_82CAC970:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// beq cr6,0x82cacaac
	if (cr6.eq) goto loc_82CACAAC;
	// lwz r27,96(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(4) );
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x82caca9c
	if (!cr6.eq) goto loc_82CACA9C;
	// lis r6,-31953
	ctx.r6.s64 = -2094071808;
	// lis r7,-31953
	ctx.r7.s64 = -2094071808;
	// lwz r10,-3652(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(-3652) );
	// lwz r11,-3656(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(-3656) );
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cac9d4
	if (!cr6.lt) goto loc_82CAC9D4;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
loc_82CAC9AC:
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r9,-3652(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(-3652) );
	// lwz r8,-3656(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(-3656) );
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82cac9ac
	if (cr6.lt) goto loc_82CAC9AC;
loc_82CAC9D4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cac9f4
	if (!cr6.eq) goto loc_82CAC9F4;
	// li r11,131
	r11.s64 = 131;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CAC9F4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca0c
	if (!cr6.eq) goto loc_82CACA0C;
	// li r11,129
	r11.s64 = 129;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CACA0C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca24
	if (!cr6.eq) goto loc_82CACA24;
	// li r11,132
	r11.s64 = 132;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CACA24:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca3c
	if (!cr6.eq) goto loc_82CACA3C;
	// li r11,133
	r11.s64 = 133;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CACA3C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca54
	if (!cr6.eq) goto loc_82CACA54;
	// li r11,130
	r11.s64 = 130;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CACA54:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca6c
	if (!cr6.eq) goto loc_82CACA6C;
	// li r11,134
	r11.s64 = 134;
	// b 0x82caca80
	goto loc_82CACA80;
loc_82CACA6C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82caca84
	if (!cr6.eq) goto loc_82CACA84;
	// li r11,138
	r11.s64 = 138;
loc_82CACA80:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_82CACA84:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// b 0x82cacaa8
	goto loc_82CACAA8;
loc_82CACA9C:
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CACAA8:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
loc_82CACAAC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CACAB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CAC8C8) {
	__imp__sub_82CAC8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3640
	ctx.r9.s64 = ctx.r10.s64 + -3640;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82CACAC8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x82cacae4
	if (cr6.eq) goto loc_82CACAE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x82cacac8
	if (cr6.lt) goto loc_82CACAC8;
loc_82CACAE4:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82170010
	sub_82170010(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CACAB8) {
	__imp__sub_82CACAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACAFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACAFC) {
	__imp__sub_82CACAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACB00) {
	__imp__sub_82CACB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r3,26892(r11)
	PPC_STORE_U32(r11.u32 + 26892, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACB30) {
	__imp__sub_82CACB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// rlwinm r11,r11,28,21,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACB40) {
	__imp__sub_82CACB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,32752
	r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(16) );
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(20) );
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cacba0
	if (!cr6.eq) goto loc_82CACBA0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cacbbc
	if (!cr6.eq) goto loc_82CACBBC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CACBA0:
	// lis r11,-16
	r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82cacbbc
	if (!cr6.eq) goto loc_82CACBBC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cacbbc
	if (!cr6.eq) goto loc_82CACBBC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CACBBC:
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// bne cr6,0x82cacbd4
	if (!cr6.eq) goto loc_82CACBD4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CACBD4:
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x82cacbf4
	if (!cr6.eq) goto loc_82CACBF4;
	// clrlwi. r11,r10,13
	r11.u64 = ctx.r10.u32 & 0x7FFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cacbec
	if (!cr0.eq) goto loc_82CACBEC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cacbf4
	if (cr6.eq) goto loc_82CACBF4;
loc_82CACBEC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82CACBF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACB78) {
	__imp__sub_82CACB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r3,26928(r11)
	PPC_STORE_U32(r11.u32 + 26928, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACC00) {
	__imp__sub_82CACC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,26928(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(26928) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cacc40
	if (cr0.eq) goto loc_82CACC40;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82cacc44
	if (!cr0.eq) goto loc_82CACC44;
loc_82CACC40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CACC44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACC10) {
	__imp__sub_82CACC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cacc84
	if (cr0.eq) goto loc_82CACC84;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cacc9c
	if (cr6.eq) goto loc_82CACC9C;
loc_82CACC84:
	// bl 0x82cb7da0
	sub_82CB7DA0(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x82cacc9c
	if (!cr6.eq) goto loc_82CACC9C;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82cacca4
	goto loc_82CACCA4;
loc_82CACC9C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82CACCA4:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CACC58) {
	__imp__sub_82CACC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CACCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r14,r28
	r14.u64 = r28.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r17,r28
	r17.u64 = r28.u64;
	// mr r19,r28
	r19.u64 = r28.u64;
	// bne cr6,0x82cacd30
	if (!cr6.eq) goto loc_82CACD30;
loc_82CACD04:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cad804
	goto loc_82CAD804;
loc_82CACD30:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82cacd04
	if (cr6.eq) goto loc_82CACD04;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// beq cr6,0x82cad7d0
	if (cr6.eq) goto loc_82CAD7D0;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// beq cr6,0x82cad7d0
	if (cr6.eq) goto loc_82CAD7D0;
	// lhz r29,0(r15)
	r29.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// mr r22,r28
	r22.u64 = r28.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr. r8,r29
	ctx.r8.u64 = r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// beq 0x82cad7c8
	if (cr0.eq) goto loc_82CAD7C8;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lwz r16,100(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r27,100(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r18,r10,-3832
	r18.s64 = ctx.r10.s64 + -3832;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r10,r9,4080
	ctx.r10.s64 = ctx.r9.s64 + 4080;
	// addi r21,r11,-3224
	r21.s64 = r11.s64 + -3224;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82CACD9C:
	// addi r15,r15,2
	r15.s64 = r15.s64 + 2;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x82cad7c8
	if (cr6.lt) goto loc_82CAD7C8;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// blt cr6,0x82cacdc8
	if (cr6.lt) goto loc_82CACDC8;
	// cmplwi cr6,r8,120
	cr6.compare<uint32_t>(ctx.r8.u32, 120, xer);
	// bgt cr6,0x82cacdc8
	if (cr6.gt) goto loc_82CACDC8;
	// add r11,r8,r10
	r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r11,-32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -32);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// b 0x82cacdcc
	goto loc_82CACDCC;
loc_82CACDC8:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CACDCC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82cad7a8
	if (cr6.gt) goto loc_82CAD7A8;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,5752
	r12.s64 = r12.s64 + 5752;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,-12780
	r12.s64 = r12.s64 + -12780;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CACFC8;
	case 1:
		goto loc_82CACE14;
	case 2:
		goto loc_82CACE34;
	case 3:
		goto loc_82CACE84;
	case 4:
		goto loc_82CACEC0;
	case 5:
		goto loc_82CACEC8;
	case 6:
		goto loc_82CACF00;
	case 7:
		goto loc_82CACFE4;
	default:
		__builtin_unreachable();
	}
loc_82CACE14:
	// mr r16,r28
	r16.u64 = r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r14,r28
	r14.u64 = r28.u64;
	// mr r17,r28
	r17.u64 = r28.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// li r23,-1
	r23.s64 = -1;
	// mr r19,r28
	r19.u64 = r28.u64;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE34:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x82cace7c
	if (cr6.eq) goto loc_82CACE7C;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x82cace74
	if (cr6.eq) goto loc_82CACE74;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x82cace6c
	if (cr6.eq) goto loc_82CACE6C;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x82cace64
	if (cr6.eq) goto loc_82CACE64;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x82cad7a8
	if (!cr6.eq) goto loc_82CAD7A8;
	// ori r25,r25,8
	r25.u64 = r25.u64 | 8;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE64:
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE6C:
	// ori r25,r25,1
	r25.u64 = r25.u64 | 1;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE74:
	// ori r25,r25,128
	r25.u64 = r25.u64 | 128;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE7C:
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACE84:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x82caceb0
	if (!cr6.eq) goto loc_82CACEB0;
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r14,4(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bge cr6,0x82cad7a8
	if (!cr6.lt) goto loc_82CAD7A8;
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// neg r14,r14
	r14.s64 = -r14.s64;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACEB0:
	// mulli r11,r14,10
	r11.s64 = r14.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r14,r11,-48
	r14.s64 = r11.s64 + -48;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACEC0:
	// mr r23,r28
	r23.u64 = r28.u64;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACEC8:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x82cacef0
	if (!cr6.eq) goto loc_82CACEF0;
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r23,4(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cad7a8
	if (!cr6.lt) goto loc_82CAD7A8;
	// li r23,-1
	r23.s64 = -1;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACEF0:
	// mulli r11,r23,10
	r11.s64 = r23.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r23,r11,-48
	r23.s64 = r11.s64 + -48;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF00:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x82cacf50
	if (cr6.eq) goto loc_82CACF50;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x82cacf48
	if (cr6.eq) goto loc_82CACF48;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x82cacf28
	if (cr6.eq) goto loc_82CACF28;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x82cad7a8
	if (!cr6.eq) goto loc_82CAD7A8;
	// ori r25,r25,2048
	r25.u64 = r25.u64 | 2048;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF28:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bne cr6,0x82cacf40
	if (!cr6.eq) goto loc_82CACF40;
	// addi r15,r15,2
	r15.s64 = r15.s64 + 2;
	// ori r25,r25,4096
	r25.u64 = r25.u64 | 4096;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF40:
	// ori r25,r25,16
	r25.u64 = r25.u64 | 16;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF48:
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF50:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// bne cr6,0x82cacf74
	if (!cr6.eq) goto loc_82CACF74;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x82cacf74
	if (!cr6.eq) goto loc_82CACF74;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF74:
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(r11.u32, 51, xer);
	// bne cr6,0x82cacf94
	if (!cr6.eq) goto loc_82CACF94;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x82cacf94
	if (!cr6.eq) goto loc_82CACF94;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// rlwinm r25,r25,0,17,15
	r25.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACF94:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(r11.u32, 105, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
loc_82CACFC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cad7a8
	goto loc_82CAD7A8;
loc_82CACFE4:
	// addi r11,r8,-65
	r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// bgt cr6,0x82cad508
	if (cr6.gt) goto loc_82CAD508;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,5640
	r12.s64 = r12.s64 + 5640;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,-12264
	r12.s64 = r12.s64 + -12264;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CAD224;
	case 1:
		goto loc_82CAD508;
	case 2:
		goto loc_82CAD018;
	case 3:
		goto loc_82CAD508;
	case 4:
		goto loc_82CAD224;
	case 5:
		goto loc_82CAD508;
	case 6:
		goto loc_82CAD224;
	case 7:
		goto loc_82CAD508;
	case 8:
		goto loc_82CAD508;
	case 9:
		goto loc_82CAD508;
	case 10:
		goto loc_82CAD508;
	case 11:
		goto loc_82CAD508;
	case 12:
		goto loc_82CAD508;
	case 13:
		goto loc_82CAD508;
	case 14:
		goto loc_82CAD508;
	case 15:
		goto loc_82CAD508;
	case 16:
		goto loc_82CAD508;
	case 17:
		goto loc_82CAD508;
	case 18:
		goto loc_82CAD110;
	case 19:
		goto loc_82CAD508;
	case 20:
		goto loc_82CAD508;
	case 21:
		goto loc_82CAD508;
	case 22:
		goto loc_82CAD508;
	case 23:
		goto loc_82CAD368;
	case 24:
		goto loc_82CAD508;
	case 25:
		goto loc_82CAD090;
	case 26:
		goto loc_82CAD508;
	case 27:
		goto loc_82CAD508;
	case 28:
		goto loc_82CAD508;
	case 29:
		goto loc_82CAD508;
	case 30:
		goto loc_82CAD508;
	case 31:
		goto loc_82CAD508;
	case 32:
		goto loc_82CAD230;
	case 33:
		goto loc_82CAD508;
	case 34:
		goto loc_82CAD028;
	case 35:
		goto loc_82CAD358;
	case 36:
		goto loc_82CAD230;
	case 37:
		goto loc_82CAD230;
	case 38:
		goto loc_82CAD230;
	case 39:
		goto loc_82CAD508;
	case 40:
		goto loc_82CAD358;
	case 41:
		goto loc_82CAD508;
	case 42:
		goto loc_82CAD508;
	case 43:
		goto loc_82CAD508;
	case 44:
		goto loc_82CAD508;
	case 45:
		goto loc_82CAD1E8;
	case 46:
		goto loc_82CAD39C;
	case 47:
		goto loc_82CAD364;
	case 48:
		goto loc_82CAD508;
	case 49:
		goto loc_82CAD508;
	case 50:
		goto loc_82CAD120;
	case 51:
		goto loc_82CAD508;
	case 52:
		goto loc_82CAD35C;
	case 53:
		goto loc_82CAD508;
	case 54:
		goto loc_82CAD508;
	case 55:
		goto loc_82CAD370;
	default:
		__builtin_unreachable();
	}
loc_82CAD018:
	// andi. r11,r25,2096
	r11.u64 = r25.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cad028
	if (!cr0.eq) goto loc_82CAD028;
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
loc_82CAD028:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// li r26,1
	r26.s64 = 1;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r19,r26
	r19.u64 = r26.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// beq 0x82cad084
	if (cr0.eq) goto loc_82CAD084;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cad088
	if (!cr0.lt) goto loc_82CAD088;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// b 0x82cad088
	goto loc_82CAD088;
loc_82CAD084:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r11.u16);
loc_82CAD088:
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD090:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cad0e0
	if (cr6.eq) goto loc_82CAD0E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cad0e0
	if (cr6.eq) goto loc_82CAD0E0;
	// rlwinm. r9,r25,0,20,20
	ctx.r9.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// beq 0x82cad0d4
	if (cr0.eq) goto loc_82CAD0D4;
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r19,1
	r19.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r26,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r26.s64 = temp.s64;
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD0D4:
	// lha r26,0(r11)
	r26.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// mr r19,r28
	r19.u64 = r28.u64;
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD0E0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r27,4072(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4072) );
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82CAD0F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cad0f0
	if (!cr6.eq) goto loc_82CAD0F0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82CAD104:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r26,r11,0
	r26.u64 = rotl32(r11.u32, 0);
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD110:
	// andi. r11,r25,2096
	r11.u64 = r25.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cad120
	if (!cr0.eq) goto loc_82CAD120;
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
loc_82CAD120:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x82cad134
	if (!cr6.eq) goto loc_82CAD134;
	// lis r30,32767
	r30.s64 = 2147418112;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// b 0x82cad138
	goto loc_82CAD138;
loc_82CAD134:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82CAD138:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82cad1a8
	if (cr0.eq) goto loc_82CAD1A8;
	// bne cr6,0x82cad160
	if (!cr6.eq) goto loc_82CAD160;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r27,4072(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4072) );
loc_82CAD160:
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82cad508
	if (!cr6.gt) goto loc_82CAD508;
loc_82CAD170:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cad508
	if (cr0.eq) goto loc_82CAD508;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cad194
	if (cr0.eq) goto loc_82CAD194;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CAD194:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(r26.s32, r30.s32, xer);
	// blt cr6,0x82cad170
	if (cr6.lt) goto loc_82CAD170;
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD1A8:
	// bne cr6,0x82cad1b4
	if (!cr6.eq) goto loc_82CAD1B4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r27,4076(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4076) );
loc_82CAD1B4:
	// li r19,1
	r19.s64 = 1;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x82cad1d4
	goto loc_82CAD1D4;
loc_82CAD1C0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cad1dc
	if (cr0.eq) goto loc_82CAD1DC;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82CAD1D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82cad1c0
	if (!cr6.eq) goto loc_82CAD1C0;
loc_82CAD1DC:
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r26,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r26.s64 = r11.s32 >> 1;
	// b 0x82cad508
	goto loc_82CAD508;
loc_82CAD1E8:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ca2b88
	sub_82CA2B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cacd04
	if (cr0.eq) goto loc_82CACD04;
	// rlwinm. r11,r25,0,26,26
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad214
	if (cr0.eq) goto loc_82CAD214;
	// sth r22,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r22.u16);
	// b 0x82cad218
	goto loc_82CAD218;
loc_82CAD214:
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
loc_82CAD218:
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x82cad78c
	goto loc_82CAD78C;
loc_82CAD224:
	// addi r11,r8,32
	r11.s64 = ctx.r8.s64 + 32;
	// li r16,1
	r16.s64 = 1;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
loc_82CAD230:
	// ori r25,r25,64
	r25.u64 = r25.u64 | 64;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cad24c
	if (!cr6.lt) goto loc_82CAD24C;
	// li r23,6
	r23.s64 = 6;
	// b 0x82cad2a0
	goto loc_82CAD2A0;
loc_82CAD24C:
	// bne cr6,0x82cad264
	if (!cr6.eq) goto loc_82CAD264;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bne cr6,0x82cad2a0
	if (!cr6.eq) goto loc_82CAD2A0;
	// li r23,1
	r23.s64 = 1;
	// b 0x82cad2a0
	goto loc_82CAD2A0;
loc_82CAD264:
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(r23.s32, 512, xer);
	// ble cr6,0x82cad270
	if (!cr6.gt) goto loc_82CAD270;
	// li r23,512
	r23.s64 = 512;
loc_82CAD270:
	// cmpwi cr6,r23,163
	cr6.compare<int32_t>(r23.s32, 163, xer);
	// ble cr6,0x82cad2a0
	if (!cr6.gt) goto loc_82CAD2A0;
	// addi r31,r23,349
	r31.s64 = r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cad29c
	if (cr0.eq) goto loc_82CAD29C;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82cad2a0
	goto loc_82CAD2A0;
loc_82CAD29C:
	// li r23,163
	r23.s64 = 163;
loc_82CAD2A0:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + int32_t(24) );
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r31,r25,0,24,24
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cad300
	if (cr0.eq) goto loc_82CAD300;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82cad300
	if (!cr6.eq) goto loc_82CAD300;
	// lwz r11,36(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(36) );
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CAD300:
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bne cr6,0x82cad328
	if (!cr6.eq) goto loc_82CAD328;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82cad328
	if (!cr6.eq) goto loc_82CAD328;
	// lwz r11,32(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(32) );
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CAD328:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82cad33c
	if (!cr6.eq) goto loc_82CAD33C;
	// ori r25,r25,256
	r25.u64 = r25.u64 | 256;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82CAD33C:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82CAD340:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cad340
	if (!cr6.eq) goto loc_82CAD340;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// b 0x82cad104
	goto loc_82CAD104;
loc_82CAD358:
	// ori r25,r25,64
	r25.u64 = r25.u64 | 64;
loc_82CAD35C:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82cad3ac
	goto loc_82CAD3AC;
loc_82CAD364:
	// li r23,8
	r23.s64 = 8;
loc_82CAD368:
	// li r31,7
	r31.s64 = 7;
	// b 0x82cad374
	goto loc_82CAD374;
loc_82CAD370:
	// li r31,39
	r31.s64 = 39;
loc_82CAD374:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// rlwinm. r11,r25,0,24,24
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82cad3ac
	if (cr0.eq) goto loc_82CAD3AC;
	// addi r11,r31,81
	r11.s64 = r31.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r17,2
	r17.s64 = 2;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, r11.u16);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// b 0x82cad3ac
	goto loc_82CAD3AC;
loc_82CAD39C:
	// rlwinm. r11,r25,0,24,24
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82cad3ac
	if (cr0.eq) goto loc_82CAD3AC;
	// ori r25,r25,512
	r25.u64 = r25.u64 | 512;
loc_82CAD3AC:
	// rlwinm. r11,r25,0,16,16
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cad3bc
	if (!cr0.eq) goto loc_82CAD3BC;
	// rlwinm. r11,r25,0,19,19
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad3d0
	if (cr0.eq) goto loc_82CAD3D0;
loc_82CAD3BC:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// b 0x82cad420
	goto loc_82CAD420;
loc_82CAD3D0:
	// rlwinm. r11,r25,0,26,26
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad400
	if (cr0.eq) goto loc_82CAD400;
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// beq 0x82cad3f8
	if (cr0.eq) goto loc_82CAD3F8;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x82cad420
	goto loc_82CAD420;
loc_82CAD3F8:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x82cad420
	goto loc_82CAD420;
loc_82CAD400:
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// beq 0x82cad41c
	if (cr0.eq) goto loc_82CAD41C;
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// b 0x82cad420
	goto loc_82CAD420;
loc_82CAD41C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_82CAD420:
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cad438
	if (cr0.eq) goto loc_82CAD438;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x82cad438
	if (!cr6.lt) goto loc_82CAD438;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// ori r25,r25,256
	r25.u64 = r25.u64 | 256;
loc_82CAD438:
	// rlwinm. r10,r25,0,16,16
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cad44c
	if (!cr0.eq) goto loc_82CAD44C;
	// rlwinm. r10,r25,0,19,19
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cad44c
	if (!cr0.eq) goto loc_82CAD44C;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
loc_82CAD44C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cad45c
	if (!cr6.lt) goto loc_82CAD45C;
	// li r23,1
	r23.s64 = 1;
	// b 0x82cad46c
	goto loc_82CAD46C;
loc_82CAD45C:
	// rlwinm r25,r25,0,29,27
	r25.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(r23.s32, 512, xer);
	// ble cr6,0x82cad46c
	if (!cr6.gt) goto loc_82CAD46C;
	// li r23,512
	r23.s64 = 512;
loc_82CAD46C:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x82cad478
	if (!cr6.eq) goto loc_82CAD478;
	// mr r17,r28
	r17.u64 = r28.u64;
loc_82CAD478:
	// addi r9,r1,639
	ctx.r9.s64 = ctx.r1.s64 + 639;
loc_82CAD47C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// bgt cr6,0x82cad490
	if (cr6.gt) goto loc_82CAD490;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82cad4d0
	if (cr6.eq) goto loc_82CAD4D0;
loc_82CAD490:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	r11.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = rotl32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// ble cr6,0x82cad4c0
	if (!cr6.gt) goto loc_82CAD4C0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_82CAD4C0:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82cad47c
	goto loc_82CAD47C;
loc_82CAD4D0:
	// addi r11,r1,639
	r11.s64 = ctx.r1.s64 + 639;
	// rlwinm. r10,r25,0,22,22
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r26,r9,r11
	r26.s64 = r11.s64 - ctx.r9.s64;
	// addi r27,r9,1
	r27.s64 = ctx.r9.s64 + 1;
	// beq 0x82cad508
	if (cr0.eq) goto loc_82CAD508;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82cad4f8
	if (cr6.eq) goto loc_82CAD4F8;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x82cad508
	if (cr6.eq) goto loc_82CAD508;
loc_82CAD4F8:
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// li r11,48
	r11.s64 = 48;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_82CAD508:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cad78c
	if (!cr6.eq) goto loc_82CAD78C;
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad550
	if (cr0.eq) goto loc_82CAD550;
	// rlwinm. r11,r25,0,23,23
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad52c
	if (cr0.eq) goto loc_82CAD52C;
	// li r11,45
	r11.s64 = 45;
	// b 0x82cad548
	goto loc_82CAD548;
loc_82CAD52C:
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad53c
	if (cr0.eq) goto loc_82CAD53C;
	// li r11,43
	r11.s64 = 43;
	// b 0x82cad548
	goto loc_82CAD548;
loc_82CAD53C:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad550
	if (cr0.eq) goto loc_82CAD550;
	// li r11,32
	r11.s64 = 32;
loc_82CAD548:
	// li r17,1
	r17.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
loc_82CAD550:
	// subf r11,r26,r14
	r11.s64 = r14.s64 - r26.s64;
	// rlwinm. r10,r25,0,28,29
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r28,r17,r11
	r28.s64 = r11.s64 - r17.s64;
	// bne 0x82cad594
	if (!cr0.eq) goto loc_82CAD594;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cad594
	if (!cr6.gt) goto loc_82CAD594;
loc_82CAD56C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x82cad594
	if (cr6.eq) goto loc_82CAD594;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cad56c
	if (cr6.gt) goto loc_82CAD56C;
loc_82CAD594:
	// lwz r11,12(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// mr r30,r17
	r30.u64 = r17.u64;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad5c0
	if (cr0.eq) goto loc_82CAD5C0;
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cad5c0
	if (!cr6.eq) goto loc_82CAD5C0;
	// add r22,r22,r17
	r22.u64 = r22.u64 + r17.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// b 0x82cad618
	goto loc_82CAD618;
loc_82CAD5C0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x82cad618
	if (!cr6.gt) goto loc_82CAD618;
loc_82CAD5C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// bne cr6,0x82cad610
	if (!cr6.eq) goto loc_82CAD610;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x82cad618
	if (!cr6.eq) goto loc_82CAD618;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CAD610:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82cad5c8
	if (cr6.gt) goto loc_82CAD5C8;
loc_82CAD618:
	// rlwinm. r11,r25,0,28,28
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad65c
	if (cr0.eq) goto loc_82CAD65C;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cad65c
	if (!cr0.eq) goto loc_82CAD65C;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cad65c
	if (!cr6.gt) goto loc_82CAD65C;
loc_82CAD634:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x82cad65c
	if (cr6.eq) goto loc_82CAD65C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cad634
	if (cr6.gt) goto loc_82CAD634;
loc_82CAD65C:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// bne cr6,0x82cad6c4
	if (!cr6.eq) goto loc_82CAD6C4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82cad6c4
	if (!cr6.gt) goto loc_82CAD6C4;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82CAD674:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(0) );
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82cad6bc
	if (!cr0.gt) goto loc_82CAD6BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cad674
	if (cr6.gt) goto loc_82CAD674;
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cad748
	goto loc_82CAD748;
loc_82CAD6BC:
	// li r22,-1
	r22.s64 = -1;
	// b 0x82cad6e8
	goto loc_82CAD6E8;
loc_82CAD6C4:
	// lwz r11,12(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(12) );
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad6f0
	if (cr0.eq) goto loc_82CAD6F0;
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cad6f0
	if (!cr6.eq) goto loc_82CAD6F0;
	// add r22,r26,r22
	r22.u64 = r26.u64 + r22.u64;
loc_82CAD6E8:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// b 0x82cad748
	goto loc_82CAD748;
loc_82CAD6F0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82cad748
	if (!cr6.gt) goto loc_82CAD748;
loc_82CAD6F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// bne cr6,0x82cad740
	if (!cr6.eq) goto loc_82CAD740;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x82cad78c
	if (!cr6.eq) goto loc_82CAD78C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CAD740:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82cad6f8
	if (cr6.gt) goto loc_82CAD6F8;
loc_82CAD748:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x82cad78c
	if (cr6.lt) goto loc_82CAD78C;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad78c
	if (cr0.eq) goto loc_82CAD78C;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cad78c
	if (!cr6.gt) goto loc_82CAD78C;
loc_82CAD764:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x82cad78c
	if (cr6.eq) goto loc_82CAD78C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cad764
	if (cr6.gt) goto loc_82CAD764;
loc_82CAD78C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cad7a8
	if (cr6.eq) goto loc_82CAD7A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82CAD7A8:
	// lhz r29,0(r15)
	r29.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// mr. r8,r29
	ctx.r8.u64 = r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cad7c8
	if (cr0.eq) goto loc_82CAD7C8;
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// li r28,0
	r28.s64 = 0;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// b 0x82cacd9c
	goto loc_82CACD9C;
loc_82CAD7C8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x82cad804
	goto loc_82CAD804;
loc_82CAD7D0:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82cb81b8
	sub_82CB81B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82cad7f8
	if (!cr6.eq) goto loc_82CAD7F8;
	// li r31,511
	r31.s64 = 511;
	// sth r28,2174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2174, r28.u16);
loc_82CAD7F8:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82cc1798
	sub_82CC1798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82CAD804:
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82CACCC0) {
	__imp__sub_82CACCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAD810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rlwinm. r4,r5,0,27,27
	ctx.r4.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// beq 0x82cad870
	if (cr0.eq) goto loc_82CAD870;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,143
	r27.u64 = r27.u64 | 143;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82cad874
	goto loc_82CAD874;
loc_82CAD870:
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CAD874:
	// rlwinm. r11,r5,0,30,30
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad894
	if (cr0.eq) goto loc_82CAD894;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,147
	r27.u64 = r27.u64 | 147;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82CAD894:
	// clrlwi. r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad8b4
	if (cr0.eq) goto loc_82CAD8B4;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,145
	r27.u64 = r27.u64 | 145;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82CAD8B4:
	// rlwinm. r11,r5,0,29,29
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad8d4
	if (cr0.eq) goto loc_82CAD8D4;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,142
	r27.u64 = r27.u64 | 142;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82CAD8D4:
	// rlwinm. r11,r5,0,28,28
	r11.u64 = rotl64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad8f4
	if (cr0.eq) goto loc_82CAD8F4;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,144
	r27.u64 = r27.u64 | 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82CAD8F4:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwimi r9,r10,20,4,4
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 20) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwimi r9,r10,24,3,3
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 24) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwimi r9,r10,23,2,2
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 23) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwimi r9,r10,25,1,1
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 25) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// rlwimi r9,r10,28,0,0
	ctx.r9.u64 = (rotl32(ctx.r10.u32, 28) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82cae300
	sub_82CAE300(ctx, base);
	// rlwinm. r11,r3,0,2,2
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad988
	if (cr0.eq) goto loc_82CAD988;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82CAD988:
	// rlwinm. r11,r3,0,5,5
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad9a0
	if (cr0.eq) goto loc_82CAD9A0;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82CAD9A0:
	// rlwinm. r11,r3,0,3,3
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad9b8
	if (cr0.eq) goto loc_82CAD9B8;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82CAD9B8:
	// rlwinm. r11,r3,0,4,4
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad9d0
	if (cr0.eq) goto loc_82CAD9D0;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82CAD9D0:
	// rlwinm. r11,r3,0,6,6
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cad9e8
	if (cr0.eq) goto loc_82CAD9E8;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82CAD9E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r30,1
	r30.s64 = 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82cada3c
	if (cr6.lt) goto loc_82CADA3C;
	// beq cr6,0x82cada2c
	if (cr6.eq) goto loc_82CADA2C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82cada1c
	if (cr6.lt) goto loc_82CADA1C;
	// bne cr6,0x82cada4c
	if (!cr6.eq) goto loc_82CADA4C;
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwimi r10,r30,30,0,1
	ctx.r10.u64 = (rotl32(r30.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x82cada48
	goto loc_82CADA48;
loc_82CADA1C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwimi r10,r30,31,0,1
	ctx.r10.u64 = (rotl32(r30.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x82cada48
	goto loc_82CADA48;
loc_82CADA2C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// b 0x82cada48
	goto loc_82CADA48;
loc_82CADA3C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_82CADA48:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82CADA4C:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwimi r10,r30,27,2,4
	ctx.r10.u64 = (rotl32(r30.u32, 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// rlwimi r10,r28,15,5,16
	ctx.r10.u64 = (rotl32(r28.u32, 15) & 0x7FF8000) | (ctx.r10.u64 & 0xFFFFFFFFF8007FFF);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// beq cr6,0x82cadad0
	if (cr6.eq) goto loc_82CADAD0;
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// b 0x82cadb10
	goto loc_82CADB10;
loc_82CADAD0:
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (rotl32(r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// stfd f0,16(r11)
	PPC_STORE_U64(r11.u32 + 16, f0.u64);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(96) );
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (rotl32(r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lfd f0,0(r26)
	f0.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// stfd f0,80(r11)
	PPC_STORE_U64(r11.u32 + 80, f0.u64);
loc_82CADB10:
	// bl 0x82cb83f8
	sub_82CB83F8(ctx, base);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cc0d58
	sub_82CC0D58(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,4,4
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadb44
	if (cr0.eq) goto loc_82CADB44;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,25,23
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADB44:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,3,3
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadb5c
	if (cr0.eq) goto loc_82CADB5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,28,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADB5C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,2,2
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadb74
	if (cr0.eq) goto loc_82CADB74;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,26,24
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADB74:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadb8c
	if (cr0.eq) goto loc_82CADB8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,27,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADB8C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// rlwinm. r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadba4
	if (cr0.eq) goto loc_82CADBA4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,29,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADBA4:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// rlwinm r11,r11,2,30,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82cadbe8
	if (cr6.lt) goto loc_82CADBE8;
	// beq cr6,0x82cadbdc
	if (cr6.eq) goto loc_82CADBDC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82cadbd0
	if (cr6.lt) goto loc_82CADBD0;
	// bne cr6,0x82cadbf4
	if (!cr6.eq) goto loc_82CADBF4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwimi r11,r30,0,30,31
	r11.u64 = (rotl32(r30.u32, 0) & 0x3) | (r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82cadbf0
	goto loc_82CADBF0;
loc_82CADBD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwimi r11,r30,1,30,31
	r11.u64 = (rotl32(r30.u32, 1) & 0x3) | (r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82cadbf0
	goto loc_82CADBF0;
loc_82CADBDC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// b 0x82cadbf0
	goto loc_82CADBF0;
loc_82CADBE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,0,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_82CADBF0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CADBF4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82cadc08
	if (cr6.eq) goto loc_82CADC08;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x82cadc10
	goto loc_82CADC10;
loc_82CADC08:
	// lfd f0,80(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// stfd f0,0(r26)
	PPC_STORE_U64(r26.u32 + 0, f0.u64);
loc_82CADC10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CAD810) {
	__imp__sub_82CAD810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CADC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r29,0,28,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r28,r29,27
	r28.u64 = r29.u32 & 0x1F;
	// beq 0x82cadc58
	if (cr0.eq) goto loc_82CADC58;
	// rlwinm. r11,r27,0,24,24
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadc58
	if (cr0.eq) goto loc_82CADC58;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// bl 0x82cae334
	sub_82CAE334(ctx, base);
	// rlwinm r28,r28,0,29,27
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x82cade3c
	goto loc_82CADE3C;
loc_82CADC58:
	// rlwinm. r11,r29,0,29,29
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadc78
	if (cr0.eq) goto loc_82CADC78;
	// rlwinm. r11,r27,0,27,27
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadc78
	if (cr0.eq) goto loc_82CADC78;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// bl 0x82cae334
	sub_82CAE334(ctx, base);
	// rlwinm r28,r28,0,30,28
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x82cade3c
	goto loc_82CADE3C;
loc_82CADC78:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadd44
	if (cr0.eq) goto loc_82CADD44;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadd44
	if (cr0.eq) goto loc_82CADD44;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x82cae334
	sub_82CAE334(ctx, base);
	// clrlwi r11,r27,30
	r11.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82cadd0c
	if (cr6.lt) goto loc_82CADD0C;
	// beq cr6,0x82cadcec
	if (cr6.eq) goto loc_82CADCEC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82cadccc
	if (cr6.lt) goto loc_82CADCCC;
	// bne cr6,0x82cadd3c
	if (!cr6.eq) goto loc_82CADD3C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82cadd2c
	if (!cr6.gt) goto loc_82CADD2C;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3200(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3200);
	// b 0x82cadd38
	goto loc_82CADD38;
loc_82CADCCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82cadd20
	if (cr6.gt) goto loc_82CADD20;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3200(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3200);
	// b 0x82cadd34
	goto loc_82CADD34;
loc_82CADCEC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfd f0,-3200(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3200);
	// bgt cr6,0x82cadd38
	if (cr6.gt) goto loc_82CADD38;
	// b 0x82cadd34
	goto loc_82CADD34;
loc_82CADD0C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f0,3376(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82cadd2c
	if (!cr6.gt) goto loc_82CADD2C;
loc_82CADD20:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3216);
	// b 0x82cadd38
	goto loc_82CADD38;
loc_82CADD2C:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lfd f0,-3216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3216);
loc_82CADD34:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_82CADD38:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
loc_82CADD3C:
	// rlwinm r28,r28,0,0,30
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82cade3c
	goto loc_82CADE3C;
loc_82CADD44:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cade3c
	if (cr0.eq) goto loc_82CADE3C;
	// rlwinm. r11,r27,0,26,26
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cade3c
	if (cr0.eq) goto loc_82CADE3C;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x82cadd64
	if (cr0.eq) goto loc_82CADD64;
	// li r31,1
	r31.s64 = 1;
loc_82CADD64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lfd f31,3376(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x82cade24
	if (cr6.eq) goto loc_82CADE24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe890
	sub_821FE890(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r11,r11,-1536
	r11.s64 = r11.s64 + -1536;
	// cmpwi cr6,r11,-1074
	cr6.compare<int32_t>(r11.s32, -1074, xer);
	// bge cr6,0x82cadda0
	if (!cr6.lt) goto loc_82CADDA0;
	// fmul f0,f1,f31
	f0.f64 = ctx.f1.f64 * f31.f64;
	// li r31,1
	r31.s64 = 1;
	// b 0x82cade1c
	goto loc_82CADE1C;
loc_82CADDA0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x82caddb0
	if (cr6.lt) goto loc_82CADDB0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82CADDB0:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1021
	cr6.compare<int32_t>(r11.s32, -1021, xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bge cr6,0x82cade0c
	if (!cr6.lt) goto loc_82CADE0C;
	// subfic r9,r11,-1021
	xer.ca = r11.u32 <= 4294966275;
	ctx.r9.s64 = -1021 - r11.s64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CADDD4:
	// clrlwi. r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82cadde8
	if (cr0.eq) goto loc_82CADDE8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82cadde8
	if (!cr6.eq) goto loc_82CADDE8;
	// li r31,1
	r31.s64 = 1;
loc_82CADDE8:
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r11,r11,31,1,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x82caddf8
	if (cr0.eq) goto loc_82CADDF8;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_82CADDF8:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bne 0x82caddd4
	if (!cr0.eq) goto loc_82CADDD4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82CADE0C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82cade1c
	if (cr6.eq) goto loc_82CADE1C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_82CADE1C:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
	// b 0x82cade28
	goto loc_82CADE28;
loc_82CADE24:
	// li r31,1
	r31.s64 = 1;
loc_82CADE28:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82cade38
	if (cr6.eq) goto loc_82CADE38;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bl 0x82cae334
	sub_82CAE334(ctx, base);
loc_82CADE38:
	// rlwinm r28,r28,0,31,29
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CADE3C:
	// rlwinm. r11,r29,0,27,27
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cade58
	if (cr0.eq) goto loc_82CADE58;
	// rlwinm. r11,r27,0,28,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cade58
	if (cr0.eq) goto loc_82CADE58;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x82cae334
	sub_82CAE334(ctx, base);
	// rlwinm r28,r28,0,28,26
	r28.u64 = rotl64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82CADE58:
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CADC18) {
	__imp__sub_82CADC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CADE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82cade9c
	if (cr6.eq) goto loc_82CADE9C;
	// ble cr6,0x82cadea8
	if (!cr6.gt) goto loc_82CADEA8;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bgt cr6,0x82cadea8
	if (cr6.gt) goto loc_82CADEA8;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// b 0x82cadea4
	goto loc_82CADEA4;
loc_82CADE9C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,33
	r11.s64 = 33;
loc_82CADEA4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82CADEA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CADE70) {
	__imp__sub_82CADE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CADEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// rlwinm. r11,r3,0,26,26
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadec8
	if (cr0.eq) goto loc_82CADEC8;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82CADEC8:
	// rlwinm. r11,r3,0,28,28
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caded8
	if (cr0.eq) goto loc_82CADED8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CADED8:
	// rlwinm. r11,r3,0,29,29
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadee8
	if (cr0.eq) goto loc_82CADEE8;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CADEE8:
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cadef8
	if (cr0.eq) goto loc_82CADEF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CADEF8:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CADEB8) {
	__imp__sub_82CADEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CADF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f1,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// addi r11,r11,-3176
	r11.s64 = r11.s64 + -3176;
	// stfd f2,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// stfd f31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, f31.u64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82CADF3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cadfcc
	if (cr6.eq) goto loc_82CADFCC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82cadf3c
	if (cr6.lt) goto loc_82CADF3C;
	// li r11,0
	r11.s64 = 0;
loc_82CADF60:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x82cadfdc
	if (cr6.eq) goto loc_82CADFDC;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(176) );
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(180) );
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(184) );
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(188) );
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(192) );
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(196) );
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fd318
	sub_831FD318(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cadfc4
	if (!cr0.eq) goto loc_82CADFC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cade70
	sub_82CADE70(ctx, base);
loc_82CADFC4:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82cadfec
	goto loc_82CADFEC;
loc_82CADFCC:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82cadf60
	goto loc_82CADF60;
loc_82CADFDC:
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cade70
	sub_82CADE70(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CADFEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CADF00) {
	__imp__sub_82CADF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,-1564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1564) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cae054
	if (!cr6.eq) goto loc_82CAE054;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f2,3376(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// bl 0x82cadf00
	sub_82CADF00(ctx, base);
	// b 0x82cae078
	goto loc_82CAE078;
loc_82CAE054:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CAE078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE008) {
	__imp__sub_82CAE008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// fadd f31,f1,f2
	f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,-1564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1564) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cae0d4
	if (!cr6.eq) goto loc_82CAE0D4;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cadf00
	sub_82CADF00(ctx, base);
	// b 0x82cae0f8
	goto loc_82CAE0F8;
loc_82CAE0D4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82CAE0F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE090) {
	__imp__sub_82CAE090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f2,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stfd f31,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cadc18
	sub_82CADC18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cae180
	if (!cr0.eq) goto loc_82CAE180;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cad810
	sub_82CAD810(ctx, base);
	// lwz r30,292(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(292) );
loc_82CAE180:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cadeb8
	sub_82CADEB8(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-1564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1564) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cae1c0
	if (!cr6.eq) goto loc_82CAE1C0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cae1c0
	if (cr6.eq) goto loc_82CAE1C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f2,3376(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 3376);
	// bl 0x82cadf00
	sub_82CADF00(ctx, base);
	// b 0x82cae1d8
	goto loc_82CAE1D8;
loc_82CAE1C0:
	// bl 0x82cade70
	sub_82CADE70(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
loc_82CAE1D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAE110) {
	__imp__sub_82CAE110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfd f30,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, f30.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x82cadc18
	sub_82CADC18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cae268
	if (!cr0.eq) goto loc_82CAE268;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(144) );
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, f31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,5
	r11.u64 = r11.u32 & 0x7FFFFFF;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// oris r11,r11,34816
	r11.u64 = r11.u64 | 2281701376;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cad810
	sub_82CAD810(ctx, base);
	// lwz r30,300(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(300) );
loc_82CAE268:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cadeb8
	sub_82CADEB8(ctx, base);
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r11,-1564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-1564) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cae2a4
	if (!cr6.eq) goto loc_82CAE2A4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82cae2a4
	if (cr6.eq) goto loc_82CAE2A4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82cadf00
	sub_82CADF00(ctx, base);
	// b 0x82cae2bc
	goto loc_82CAE2BC;
loc_82CAE2A4:
	// bl 0x82cade70
	sub_82CADE70(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82cae2d0
	sub_82CAE2D0(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_82CAE2BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAE1E8) {
	__imp__sub_82CAE1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(f0.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE2D0) {
	__imp__sub_82CAE2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE300) {
	__imp__sub_82CAE300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE310) {
	__imp__sub_82CAE310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE334) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE334) {
	__imp__sub_82CAE334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE354) {
	PPC_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE354) {
	__imp__sub_82CAE354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE364) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister f0{};
	// mffs f0
	r0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-4) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE364) {
	__imp__sub_82CAE364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cae3a8
	if (cr0.eq) goto loc_82CAE3A8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cae3ec
	if (cr6.eq) goto loc_82CAE3EC;
loc_82CAE3A8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x82cae3d4
	if (cr0.lt) goto loc_82CAE3D4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82cae3dc
	goto loc_82CAE3DC;
loc_82CAE3D4:
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x82cab7e0
	sub_82CAB7E0(ctx, base);
loc_82CAE3DC:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82cae3ec
	if (!cr6.eq) goto loc_82CAE3EC;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82cae3f4
	goto loc_82CAE3F4;
loc_82CAE3EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82CAE3F4:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAE378) {
	__imp__sub_82CAE378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE410) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cae498
	if (cr0.eq) goto loc_82CAE498;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cae498
	if (!cr6.eq) goto loc_82CAE498;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82cae4a0
	goto loc_82CAE4A0;
loc_82CAE454:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82cae498
	if (!cr6.eq) goto loc_82CAE498;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x82cae4a0
	if (!cr6.eq) goto loc_82CAE4A0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
loc_82CAE498:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82cae454
	if (cr6.gt) goto loc_82CAE454;
loc_82CAE4A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CAE410) {
	__imp__sub_82CAE410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAE4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// bne cr6,0x82cae510
	if (!cr6.eq) goto loc_82CAE510;
loc_82CAE4E4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caf02c
	goto loc_82CAF02C;
loc_82CAE510:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cae5dc
	if (!cr0.eq) goto loc_82CAE5DC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,29632
	r30.s64 = r11.s64 + 29632;
	// addi r29,r10,-2648
	r29.s64 = ctx.r10.s64 + -2648;
	// beq cr6,0x82cae574
	if (cr6.eq) goto loc_82CAE574;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cae574
	if (cr6.eq) goto loc_82CAE574;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cae578
	goto loc_82CAE578;
loc_82CAE574:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CAE578:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cae4e4
	if (!cr0.eq) goto loc_82CAE4E4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cae5cc
	if (cr6.eq) goto loc_82CAE5CC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cae5cc
	if (cr6.eq) goto loc_82CAE5CC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cae5d0
	goto loc_82CAE5D0;
loc_82CAE5CC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CAE5D0:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cae4e4
	if (!cr0.eq) goto loc_82CAE4E4;
loc_82CAE5DC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82cae4e4
	if (cr6.eq) goto loc_82CAE4E4;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x82caeff8
	if (cr6.eq) goto loc_82CAEFF8;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x82caeff8
	if (cr6.eq) goto loc_82CAEFF8;
	// lbz r29,0(r18)
	r29.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// mr r24,r27
	r24.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r15,r27
	r15.u64 = r27.u64;
	// beq 0x82caeff0
	if (cr0.eq) goto loc_82CAEFF0;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r20,112(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lwz r28,112(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r14,-32255
	r14.s64 = -2113863680;
	// lis r19,-32255
	r19.s64 = -2113863680;
	// addi r22,r11,-3224
	r22.s64 = r11.s64 + -3224;
	// addi r21,r10,-3832
	r21.s64 = ctx.r10.s64 + -3832;
	// addi r17,r9,5824
	r17.s64 = ctx.r9.s64 + 5824;
loc_82CAE650:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82caefdc
	if (cr6.lt) goto loc_82CAEFDC;
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// blt cr6,0x82cae67c
	if (cr6.lt) goto loc_82CAE67C;
	// cmpwi cr6,r8,120
	cr6.compare<int32_t>(ctx.r8.s32, 120, xer);
	// bgt cr6,0x82cae67c
	if (cr6.gt) goto loc_82CAE67C;
	// add r11,r8,r17
	r11.u64 = ctx.r8.u64 + r17.u64;
	// lbz r11,-32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -32);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// b 0x82cae680
	goto loc_82CAE680;
loc_82CAE67C:
	// li r11,0
	r11.s64 = 0;
loc_82CAE680:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// mulli r11,r11,9
	r11.s64 = r11.s64 * 9;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r17
	r11.u64 = PPC_LOAD_U8(r11.u32 + r17.u32);
	// rlwinm r11,r11,28,4,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82cae4e4
	if (cr6.eq) goto loc_82CAE4E4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82caefc8
	if (cr6.gt) goto loc_82CAEFC8;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6032
	r12.s64 = r12.s64 + 6032;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,-6444
	r12.s64 = r12.s64 + -6444;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CAE8A0;
	case 1:
		goto loc_82CAE6D4;
	case 2:
		goto loc_82CAE6F4;
	case 3:
		goto loc_82CAE744;
	case 4:
		goto loc_82CAE790;
	case 5:
		goto loc_82CAE798;
	case 6:
		goto loc_82CAE7D0;
	case 7:
		goto loc_82CAE8F0;
	default:
		__builtin_unreachable();
	}
loc_82CAE6D4:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r20,r27
	r20.u64 = r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE6F4:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x82cae73c
	if (cr6.eq) goto loc_82CAE73C;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x82cae734
	if (cr6.eq) goto loc_82CAE734;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x82cae72c
	if (cr6.eq) goto loc_82CAE72C;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x82cae724
	if (cr6.eq) goto loc_82CAE724;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x82caefc8
	if (!cr6.eq) goto loc_82CAEFC8;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE724:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE72C:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE734:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE73C:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE744:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x82cae778
	if (!cr6.eq) goto loc_82CAE778;
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bge cr6,0x82caefc8
	if (!cr6.lt) goto loc_82CAEFC8;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// b 0x82cae788
	goto loc_82CAE788;
loc_82CAE778:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
loc_82CAE788:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE790:
	// li r25,0
	r25.s64 = 0;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE798:
	// cmpwi cr6,r8,42
	cr6.compare<int32_t>(ctx.r8.s32, 42, xer);
	// bne cr6,0x82cae7c0
	if (!cr6.eq) goto loc_82CAE7C0;
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x82caefc8
	if (!cr6.lt) goto loc_82CAEFC8;
	// li r25,-1
	r25.s64 = -1;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE7C0:
	// mulli r11,r25,10
	r11.s64 = r25.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	r25.s64 = r11.s64 + -48;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE7D0:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x82cae820
	if (cr6.eq) goto loc_82CAE820;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x82cae818
	if (cr6.eq) goto loc_82CAE818;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x82cae7f8
	if (cr6.eq) goto loc_82CAE7F8;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x82caefc8
	if (!cr6.eq) goto loc_82CAEFC8;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE7F8:
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bne cr6,0x82cae810
	if (!cr6.eq) goto loc_82CAE810;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE810:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE818:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE820:
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(r11.s32, 54, xer);
	// bne cr6,0x82cae848
	if (!cr6.eq) goto loc_82CAE848;
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x82cae848
	if (!cr6.eq) goto loc_82CAE848;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE848:
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(r11.s32, 51, xer);
	// bne cr6,0x82cae868
	if (!cr6.eq) goto loc_82CAE868;
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x82cae868
	if (!cr6.eq) goto loc_82CAE868;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE868:
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(r11.s32, 117, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_82CAE8A0:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// li r16,0
	r16.s64 = 0;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cae8d8
	if (cr0.eq) goto loc_82CAE8D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lbz r29,0(r18)
	r29.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82cae4e4
	if (cr0.eq) goto loc_82CAE4E4;
loc_82CAE8D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82caefc8
	goto loc_82CAEFC8;
loc_82CAE8F0:
	// addi r11,r8,-65
	r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// bgt cr6,0x82caedf4
	if (cr6.gt) goto loc_82CAEDF4;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,5920
	r12.s64 = r12.s64 + 5920;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,-5852
	r12.s64 = r12.s64 + -5852;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CAEB00;
	case 1:
		goto loc_82CAEDF4;
	case 2:
		goto loc_82CAE924;
	case 3:
		goto loc_82CAEDF4;
	case 4:
		goto loc_82CAEB00;
	case 5:
		goto loc_82CAEDF4;
	case 6:
		goto loc_82CAEB00;
	case 7:
		goto loc_82CAEDF4;
	case 8:
		goto loc_82CAEDF4;
	case 9:
		goto loc_82CAEDF4;
	case 10:
		goto loc_82CAEDF4;
	case 11:
		goto loc_82CAEDF4;
	case 12:
		goto loc_82CAEDF4;
	case 13:
		goto loc_82CAEDF4;
	case 14:
		goto loc_82CAEDF4;
	case 15:
		goto loc_82CAEDF4;
	case 16:
		goto loc_82CAEDF4;
	case 17:
		goto loc_82CAEDF4;
	case 18:
		goto loc_82CAEA0C;
	case 19:
		goto loc_82CAEDF4;
	case 20:
		goto loc_82CAEDF4;
	case 21:
		goto loc_82CAEDF4;
	case 22:
		goto loc_82CAEDF4;
	case 23:
		goto loc_82CAEC40;
	case 24:
		goto loc_82CAEDF4;
	case 25:
		goto loc_82CAE990;
	case 26:
		goto loc_82CAEDF4;
	case 27:
		goto loc_82CAEDF4;
	case 28:
		goto loc_82CAEDF4;
	case 29:
		goto loc_82CAEDF4;
	case 30:
		goto loc_82CAEDF4;
	case 31:
		goto loc_82CAEDF4;
	case 32:
		goto loc_82CAEB0C;
	case 33:
		goto loc_82CAEDF4;
	case 34:
		goto loc_82CAE934;
	case 35:
		goto loc_82CAEC30;
	case 36:
		goto loc_82CAEB0C;
	case 37:
		goto loc_82CAEB0C;
	case 38:
		goto loc_82CAEB0C;
	case 39:
		goto loc_82CAEDF4;
	case 40:
		goto loc_82CAEC30;
	case 41:
		goto loc_82CAEDF4;
	case 42:
		goto loc_82CAEDF4;
	case 43:
		goto loc_82CAEDF4;
	case 44:
		goto loc_82CAEDF4;
	case 45:
		goto loc_82CAEAC4;
	case 46:
		goto loc_82CAEC78;
	case 47:
		goto loc_82CAEC3C;
	case 48:
		goto loc_82CAEDF4;
	case 49:
		goto loc_82CAEDF4;
	case 50:
		goto loc_82CAEA1C;
	case 51:
		goto loc_82CAEDF4;
	case 52:
		goto loc_82CAEC34;
	case 53:
		goto loc_82CAEDF4;
	case 54:
		goto loc_82CAEDF4;
	case 55:
		goto loc_82CAEC48;
	default:
		__builtin_unreachable();
	}
loc_82CAE924:
	// andi. r11,r27,2096
	r11.u64 = r27.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cae934
	if (!cr0.eq) goto loc_82CAE934;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_82CAE934:
	// andi. r11,r27,2064
	r11.u64 = r27.u64 & 2064;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// beq 0x82cae974
	if (cr0.eq) goto loc_82CAE974;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82cb6a88
	sub_82CB6A88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cae984
	if (cr0.eq) goto loc_82CAE984;
	// li r11,1
	r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x82cae984
	goto loc_82CAE984;
loc_82CAE974:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
loc_82CAE984:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x82caedf4
	goto loc_82CAEDF4;
loc_82CAE990:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cae9e0
	if (cr6.eq) goto loc_82CAE9E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cae9e0
	if (cr6.eq) goto loc_82CAE9E0;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x82cae9d4
	if (cr0.eq) goto loc_82CAE9D4;
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r7,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r7.s64 = temp.s64;
	// b 0x82caedf0
	goto loc_82CAEDF0;
loc_82CAE9D4:
	// lha r7,0(r11)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x82caedf0
	goto loc_82CAEDF0;
loc_82CAE9E0:
	// lwz r28,4072(r19)
	r28.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4072) );
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82CAE9EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cae9ec
	if (!cr6.eq) goto loc_82CAE9EC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82CAEA00:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = rotl32(r11.u32, 0);
	// b 0x82caedf0
	goto loc_82CAEDF0;
loc_82CAEA0C:
	// andi. r11,r27,2096
	r11.u64 = r27.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caea1c
	if (!cr0.eq) goto loc_82CAEA1C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_82CAEA1C:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// bne cr6,0x82caea30
	if (!cr6.eq) goto loc_82CAEA30;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82caea34
	goto loc_82CAEA34;
loc_82CAEA30:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82CAEA34:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82caea90
	if (cr0.eq) goto loc_82CAEA90;
	// bne cr6,0x82caea5c
	if (!cr6.eq) goto loc_82CAEA5C;
	// lwz r28,4076(r14)
	r28.u64 = PPC_LOAD_U32(r14.u32 + int32_t(4076) );
loc_82CAEA5C:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82caea7c
	goto loc_82CAEA7C;
loc_82CAEA68:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82caea84
	if (cr0.eq) goto loc_82CAEA84;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82CAEA7C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82caea68
	if (!cr6.eq) goto loc_82CAEA68;
loc_82CAEA84:
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r7,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r7.s64 = r11.s32 >> 1;
	// b 0x82caedf0
	goto loc_82CAEDF0;
loc_82CAEA90:
	// bne cr6,0x82caea98
	if (!cr6.eq) goto loc_82CAEA98;
	// lwz r28,4072(r19)
	r28.u64 = PPC_LOAD_U32(r19.u32 + int32_t(4072) );
loc_82CAEA98:
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82caeab4
	goto loc_82CAEAB4;
loc_82CAEAA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82caeabc
	if (cr6.eq) goto loc_82CAEABC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82CAEAB4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82caeaa0
	if (!cr6.eq) goto loc_82CAEAA0;
loc_82CAEABC:
	// subf r7,r28,r11
	ctx.r7.s64 = r11.s64 - r28.s64;
	// b 0x82caedf0
	goto loc_82CAEDF0;
loc_82CAEAC4:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ca2b88
	sub_82CA2B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cae4e4
	if (cr0.eq) goto loc_82CAE4E4;
	// rlwinm. r11,r27,0,26,26
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caeaf0
	if (cr0.eq) goto loc_82CAEAF0;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x82caeaf4
	goto loc_82CAEAF4;
loc_82CAEAF0:
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_82CAEAF4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x82caefb4
	goto loc_82CAEFB4;
loc_82CAEB00:
	// addi r11,r8,32
	r11.s64 = ctx.r8.s64 + 32;
	// li r20,1
	r20.s64 = 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CAEB0C:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x82caeb28
	if (!cr6.lt) goto loc_82CAEB28;
	// li r25,6
	r25.s64 = 6;
	// b 0x82caeb78
	goto loc_82CAEB78;
loc_82CAEB28:
	// bne cr6,0x82caeb40
	if (!cr6.eq) goto loc_82CAEB40;
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(r11.s32, 103, xer);
	// bne cr6,0x82caeb78
	if (!cr6.eq) goto loc_82CAEB78;
	// li r25,1
	r25.s64 = 1;
	// b 0x82caeb78
	goto loc_82CAEB78;
loc_82CAEB40:
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(r25.s32, 512, xer);
	// ble cr6,0x82caeb4c
	if (!cr6.gt) goto loc_82CAEB4C;
	// li r25,512
	r25.s64 = 512;
loc_82CAEB4C:
	// cmpwi cr6,r25,163
	cr6.compare<int32_t>(r25.s32, 163, xer);
	// ble cr6,0x82caeb78
	if (!cr6.gt) goto loc_82CAEB78;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// beq 0x82caeb74
	if (cr0.eq) goto loc_82CAEB74;
	// mr r28,r15
	r28.u64 = r15.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82caeb78
	goto loc_82CAEB78;
loc_82CAEB74:
	// li r25,163
	r25.s64 = 163;
loc_82CAEB78:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + int32_t(24) );
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82caebdc
	if (cr0.eq) goto loc_82CAEBDC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x82caebdc
	if (!cr6.eq) goto loc_82CAEBDC;
	// lwz r11,36(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(36) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CAEBDC:
	// cmpwi cr6,r31,103
	cr6.compare<int32_t>(r31.s32, 103, xer);
	// bne cr6,0x82caec00
	if (!cr6.eq) goto loc_82CAEC00;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82caec00
	if (!cr6.eq) goto loc_82CAEC00;
	// lwz r11,32(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(32) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CAEC00:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82caec14
	if (!cr6.eq) goto loc_82CAEC14;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82CAEC14:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CAEC18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82caec18
	if (!cr6.eq) goto loc_82CAEC18;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// b 0x82caea00
	goto loc_82CAEA00;
loc_82CAEC30:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_82CAEC34:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82caec88
	goto loc_82CAEC88;
loc_82CAEC3C:
	// li r25,8
	r25.s64 = 8;
loc_82CAEC40:
	// li r11,7
	r11.s64 = 7;
	// b 0x82caec4c
	goto loc_82CAEC4C;
loc_82CAEC48:
	// li r11,39
	r11.s64 = 39;
loc_82CAEC4C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82caec88
	if (cr0.eq) goto loc_82CAEC88;
	// addi r11,r11,81
	r11.s64 = r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x82caec88
	goto loc_82CAEC88;
loc_82CAEC78:
	// rlwinm. r11,r27,0,24,24
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82caec88
	if (cr0.eq) goto loc_82CAEC88;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_82CAEC88:
	// rlwinm. r11,r27,0,16,16
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caec98
	if (!cr0.eq) goto loc_82CAEC98;
	// rlwinm. r11,r27,0,19,19
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caecac
	if (cr0.eq) goto loc_82CAECAC;
loc_82CAEC98:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// b 0x82caecfc
	goto loc_82CAECFC;
loc_82CAECAC:
	// rlwinm. r11,r27,0,26,26
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caecdc
	if (cr0.eq) goto loc_82CAECDC;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// beq 0x82caecd4
	if (cr0.eq) goto loc_82CAECD4;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x82caecfc
	goto loc_82CAECFC;
loc_82CAECD4:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x82caecfc
	goto loc_82CAECFC;
loc_82CAECDC:
	// rlwinm. r11,r27,0,25,25
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// beq 0x82caecf8
	if (cr0.eq) goto loc_82CAECF8;
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// b 0x82caecfc
	goto loc_82CAECFC;
loc_82CAECF8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_82CAECFC:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82caed14
	if (cr0.eq) goto loc_82CAED14;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x82caed14
	if (!cr6.lt) goto loc_82CAED14;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_82CAED14:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82caed28
	if (!cr0.eq) goto loc_82CAED28;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82caed28
	if (!cr0.eq) goto loc_82CAED28;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
loc_82CAED28:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x82caed38
	if (!cr6.lt) goto loc_82CAED38;
	// li r25,1
	r25.s64 = 1;
	// b 0x82caed48
	goto loc_82CAED48;
loc_82CAED38:
	// rlwinm r27,r27,0,29,27
	r27.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(r25.s32, 512, xer);
	// ble cr6,0x82caed48
	if (!cr6.gt) goto loc_82CAED48;
	// li r25,512
	r25.s64 = 512;
loc_82CAED48:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x82caed58
	if (!cr6.eq) goto loc_82CAED58;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82CAED58:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_82CAED5C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x82caed70
	if (cr6.gt) goto loc_82CAED70;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82caedb4
	if (cr6.eq) goto loc_82CAEDB4;
loc_82CAED70:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	r11.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = rotl32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// ble cr6,0x82caeda4
	if (!cr6.gt) goto loc_82CAEDA4;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82CAEDA4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82caed5c
	goto loc_82CAED5C;
loc_82CAEDB4:
	// addi r11,r1,655
	r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r7,r9,r11
	ctx.r7.s64 = r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq 0x82caedf4
	if (cr0.eq) goto loc_82CAEDF4;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82caede0
	if (cr6.eq) goto loc_82CAEDE0;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x82caedf4
	if (cr6.eq) goto loc_82CAEDF4;
loc_82CAEDE0:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// li r11,48
	r11.s64 = 48;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
loc_82CAEDF0:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_82CAEDF4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82caefb4
	if (!cr6.eq) goto loc_82CAEFB4;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caee44
	if (cr0.eq) goto loc_82CAEE44;
	// rlwinm. r11,r27,0,23,23
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caee18
	if (cr0.eq) goto loc_82CAEE18;
	// li r11,45
	r11.s64 = 45;
	// b 0x82caee24
	goto loc_82CAEE24;
loc_82CAEE18:
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caee34
	if (cr0.eq) goto loc_82CAEE34;
	// li r11,43
	r11.s64 = 43;
loc_82CAEE24:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x82caee48
	goto loc_82CAEE48;
loc_82CAEE34:
	// rlwinm. r11,r27,0,30,30
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caee44
	if (cr0.eq) goto loc_82CAEE44;
	// li r11,32
	r11.s64 = 32;
	// b 0x82caee24
	goto loc_82CAEE24;
loc_82CAEE44:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82CAEE48:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// bne 0x82caee90
	if (!cr0.eq) goto loc_82CAEE90;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82caee90
	if (!cr6.gt) goto loc_82CAEE90;
loc_82CAEE68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82caee90
	if (cr6.eq) goto loc_82CAEE90;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82caee68
	if (cr6.gt) goto loc_82CAEE68;
loc_82CAEE90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82cae410
	sub_82CAE410(ctx, base);
	// rlwinm. r11,r27,0,28,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caeee8
	if (cr0.eq) goto loc_82CAEEE8;
	// rlwinm. r11,r27,0,29,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caeee8
	if (!cr0.eq) goto loc_82CAEEE8;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82caeee8
	if (!cr6.gt) goto loc_82CAEEE8;
loc_82CAEEC0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82caeee8
	if (cr6.eq) goto loc_82CAEEE8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82caeec0
	if (cr6.gt) goto loc_82CAEEC0;
loc_82CAEEE8:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82caef5c
	if (cr6.eq) goto loc_82CAEF5C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82caef5c
	if (!cr6.gt) goto loc_82CAEF5C;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82CAEF04:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bl 0x82cb6a88
	sub_82CB6A88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caef50
	if (!cr0.eq) goto loc_82CAEF50;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82caef50
	if (cr6.eq) goto loc_82CAEF50;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82cae410
	sub_82CAE410(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82caef04
	if (!cr6.eq) goto loc_82CAEF04;
	// b 0x82caef6c
	goto loc_82CAEF6C;
loc_82CAEF50:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x82caef70
	goto loc_82CAEF70;
loc_82CAEF5C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cae410
	sub_82CAE410(ctx, base);
loc_82CAEF6C:
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CAEF70:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82caefb4
	if (cr6.lt) goto loc_82CAEFB4;
	// rlwinm. r11,r27,0,29,29
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caefb4
	if (cr0.eq) goto loc_82CAEFB4;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82caefb4
	if (!cr6.gt) goto loc_82CAEFB4;
loc_82CAEF8C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cae378
	sub_82CAE378(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x82caefb4
	if (cr6.eq) goto loc_82CAEFB4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82caef8c
	if (cr6.gt) goto loc_82CAEF8C;
loc_82CAEFB4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82caefc8
	if (cr6.eq) goto loc_82CAEFC8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_82CAEFC8:
	// lbz r29,0(r18)
	r29.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82caefdc
	if (cr0.eq) goto loc_82CAEFDC;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// b 0x82cae650
	goto loc_82CAE650;
loc_82CAEFDC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82caeff0
	if (cr6.eq) goto loc_82CAEFF0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82cae4e4
	if (!cr6.eq) goto loc_82CAE4E4;
loc_82CAEFF0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x82caf02c
	goto loc_82CAF02C;
loc_82CAEFF8:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82caacc0
	sub_82CAACC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82caf020
	if (!cr6.eq) goto loc_82CAF020;
	// li r31,511
	r31.s64 = 511;
	// stb r27,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, r27.u8);
loc_82CAF020:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82170010
	sub_82170010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82CAF02C:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82CAE4A8) {
	__imp__sub_82CAE4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r11,27392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27392) );
	// b 0x82caf064
	goto loc_82CAF064;
loc_82CAF060:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82CAF064:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x82caf060
	if (cr6.eq) goto loc_82CAF060;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// beq cr6,0x82caf0cc
	if (cr6.eq) goto loc_82CAF0CC;
	// cmpwi cr6,r10,114
	cr6.compare<int32_t>(ctx.r10.s32, 114, xer);
	// beq cr6,0x82caf0c0
	if (cr6.eq) goto loc_82CAF0C0;
	// cmpwi cr6,r10,119
	cr6.compare<int32_t>(ctx.r10.s32, 119, xer);
	// beq cr6,0x82caf0b8
	if (cr6.eq) goto loc_82CAF0B8;
loc_82CAF08C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAF0B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caf288
	goto loc_82CAF288;
loc_82CAF0B8:
	// li r10,769
	ctx.r10.s64 = 769;
	// b 0x82caf0d0
	goto loc_82CAF0D0;
loc_82CAF0C0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// ori r31,r11,1
	r31.u64 = r11.u64 | 1;
	// b 0x82caf0d4
	goto loc_82CAF0D4;
loc_82CAF0CC:
	// li r10,265
	ctx.r10.s64 = 265;
loc_82CAF0D0:
	// ori r31,r11,2
	r31.u64 = r11.u64 | 2;
loc_82CAF0D4:
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82caf210
	goto loc_82CAF210;
loc_82CAF0E4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82caf220
	if (cr6.eq) goto loc_82CAF220;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// bgt cr6,0x82caf184
	if (cr6.gt) goto loc_82CAF184;
	// beq cr6,0x82caf170
	if (cr6.eq) goto loc_82CAF170;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x82caf208
	if (cr6.eq) goto loc_82CAF208;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82caf154
	if (cr6.eq) goto loc_82CAF154;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x82caf1fc
	if (cr6.eq) goto loc_82CAF1FC;
	// cmpwi cr6,r11,68
	cr6.compare<int32_t>(r11.s32, 68, xer);
	// beq cr6,0x82caf144
	if (cr6.eq) goto loc_82CAF144;
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(r11.s32, 78, xer);
	// beq cr6,0x82caf13c
	if (cr6.eq) goto loc_82CAF13C;
	// cmpwi cr6,r11,82
	cr6.compare<int32_t>(r11.s32, 82, xer);
	// bne cr6,0x82caf08c
	if (!cr6.eq) goto loc_82CAF08C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82caf1fc
	if (!cr6.eq) goto loc_82CAF1FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF13C:
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF144:
	// rlwinm. r11,r10,0,25,25
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf1fc
	if (!cr0.eq) goto loc_82CAF1FC;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF154:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf1fc
	if (!cr0.eq) goto loc_82CAF1FC;
	// rlwinm r11,r10,0,0,30
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r4,r31,0,0,29
	ctx.r4.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// ori r31,r4,128
	r31.u64 = ctx.r4.u64 | 128;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF170:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82caf1fc
	if (!cr6.eq) goto loc_82CAF1FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF184:
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// beq cr6,0x82caf1f4
	if (cr6.eq) goto loc_82CAF1F4;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(r11.s32, 98, xer);
	// beq cr6,0x82caf1e4
	if (cr6.eq) goto loc_82CAF1E4;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x82caf1d0
	if (cr6.eq) goto loc_82CAF1D0;
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(r11.s32, 110, xer);
	// beq cr6,0x82caf1bc
	if (cr6.eq) goto loc_82CAF1BC;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// bne cr6,0x82caf08c
	if (!cr6.eq) goto loc_82CAF08C;
	// rlwinm. r11,r10,0,16,17
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf1fc
	if (!cr0.eq) goto loc_82CAF1FC;
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF1BC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82caf1fc
	if (!cr6.eq) goto loc_82CAF1FC;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r31,r31,0,18,16
	r31.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF1D0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82caf1fc
	if (!cr6.eq) goto loc_82CAF1FC;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF1E4:
	// rlwinm. r11,r10,0,16,17
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf1fc
	if (!cr0.eq) goto loc_82CAF1FC;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF1F4:
	// rlwinm. r11,r10,0,19,19
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf204
	if (cr0.eq) goto loc_82CAF204;
loc_82CAF1FC:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// b 0x82caf208
	goto loc_82CAF208;
loc_82CAF204:
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
loc_82CAF208:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
loc_82CAF210:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf0e4
	if (!cr0.eq) goto loc_82CAF0E4;
	// b 0x82caf220
	goto loc_82CAF220;
loc_82CAF21C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CAF220:
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x82caf21c
	if (cr6.eq) goto loc_82CAF21C;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caf08c
	if (!cr6.eq) goto loc_82CAF08C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb8ae8
	sub_82CB8AE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caf0b0
	if (!cr0.eq) goto loc_82CAF0B0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,26836(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(26836) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,26836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26836, r11.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r30.u32);
	// stw r9,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r9.u32);
loc_82CAF288:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAF038) {
	__imp__sub_82CAF038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lis r29,-31921
	r29.s64 = -2091974656;
	// lis r26,-31921
	r26.s64 = -2091974656;
loc_82CAF2CC:
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// lwz r11,29908(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(29908) );
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82caf3e0
	if (!cr6.lt) goto loc_82CAF3E0;
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// rlwinm r28,r30,2,0,29
	r28.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82caf374
	if (cr6.eq) goto loc_82CAF374;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82caf35c
	if (!cr0.eq) goto loc_82CAF35C;
	// rlwinm. r11,r11,0,16,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82caf35c
	if (!cr0.eq) goto loc_82CAF35C;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// ble cr6,0x82caf32c
	if (!cr6.gt) goto loc_82CAF32C;
	// cmpwi cr6,r30,20
	cr6.compare<int32_t>(r30.s32, 20, xer);
	// bge cr6,0x82caf32c
	if (!cr6.lt) goto loc_82CAF32C;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82cafe08
	sub_82CAFE08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caf3e0
	if (cr0.eq) goto loc_82CAF3E0;
loc_82CAF32C:
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82ca88e0
	sub_82CA88E0(ctx, base);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// andi. r10,r10,131
	ctx.r10.u64 = ctx.r10.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82caf368
	if (cr0.eq) goto loc_82CAF368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca8970
	sub_82CA8970(ctx, base);
loc_82CAF35C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82caf2cc
	goto loc_82CAF2CC;
loc_82CAF368:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82caf3dc
	goto loc_82CAF3DC;
loc_82CAF374:
	// li r3,60
	ctx.r3.s64 = 60;
	// rlwinm r30,r30,2,0,29
	r30.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82caf3e0
	if (cr6.eq) goto loc_82CAF3E0;
	// rotlwi r11,r10,0
	r11.u64 = rotl32(ctx.r10.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82cb5b78
	sub_82CB5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// bne 0x82caf3c8
	if (!cr0.eq) goto loc_82CAF3C8;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// stwx r25,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r25.u32);
	// b 0x82caf3e0
	goto loc_82CAF3E0;
loc_82CAF3C8:
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,29904(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(29904) );
	// lwzx r27,r30,r11
	r27.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
loc_82CAF3DC:
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_82CAF3E0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82caf40c
	if (cr6.eq) goto loc_82CAF40C;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// stw r25,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r25.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r25,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r25.u32);
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
loc_82CAF40C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82caf424
	sub_82CAF424(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CAF298) {
	__imp__sub_82CAF298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF424) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF424) {
	__imp__sub_82CAF424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r31.u64);
	// mflr r31
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x832b25bc
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	// ld r31,8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF450) {
	__imp__sub_82CAF450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,29632
	r29.s64 = r11.s64 + 29632;
	// beq cr6,0x82caf504
	if (cr6.eq) goto loc_82CAF504;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x82caf4b4
	if (!cr6.eq) goto loc_82CAF4B4;
	// lbz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 132);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82caf4c8
	if (!cr0.eq) goto loc_82CAF4C8;
loc_82CAF4B4:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bne cr6,0x82caf4e4
	if (!cr6.eq) goto loc_82CAF4E4;
	// lbz r11,68(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 68);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf4e4
	if (cr0.eq) goto loc_82CAF4E4;
loc_82CAF4C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x82caf504
	if (cr6.eq) goto loc_82CAF504;
loc_82CAF4E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// bl 0x82cbbf60
	sub_82CBBF60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caf504
	if (!cr0.eq) goto loc_82CAF504;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82caf508
	goto loc_82CAF508;
loc_82CAF504:
	// li r30,0
	r30.s64 = 0;
loc_82CAF508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cb8b90
	sub_82CB8B90(ctx, base);
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// rlwinm r10,r31,6,21,25
	ctx.r10.u64 = rotl64(r31.u32 | (r31.u64 << 32), 6) & 0x7C0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// beq cr6,0x82caf544
	if (cr6.eq) goto loc_82CAF544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240508
	sub_82240508(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caf548
	goto loc_82CAF548;
loc_82CAF544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CAF548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAF478) {
	__imp__sub_82CAF478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x82caf59c
	if (!cr6.eq) goto loc_82CAF59C;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82caf668
	goto loc_82CAF668;
loc_82CAF59C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82caf5b4
	if (cr6.lt) goto loc_82CAF5B4;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82caf5ec
	if (cr6.lt) goto loc_82CAF5EC;
loc_82CAF5B4:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caf668
	goto loc_82CAF668;
loc_82CAF5EC:
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r30,6,21,25
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf5b4
	if (cr0.eq) goto loc_82CAF5B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf644
	if (cr0.eq) goto loc_82CAF644;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf478
	sub_82CAF478(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x82caf658
	goto loc_82CAF658;
loc_82CAF644:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_82CAF658:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82caf690
	sub_82CAF690(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CAF668:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CAF558) {
	__imp__sub_82CAF558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// b 0x82caf6a8
	goto loc_82CAF6A8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAF6A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF670) {
	__imp__sub_82CAF670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF690) {
	__imp__sub_82CAF690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82caf708
	if (!cr6.eq) goto loc_82CAF708;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caf70c
	goto loc_82CAF70C;
loc_82CAF708:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
loc_82CAF70C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF6C8) {
	__imp__sub_82CAF6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82caf774
	if (cr0.eq) goto loc_82CAF774;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf774
	if (cr0.eq) goto loc_82CAF774;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// rlwinm r11,r11,0,29,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,22,20
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82CAF774:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAF720) {
	__imp__sub_82CAF720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r23,r21
	r23.u64 = r21.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// bne cr6,0x82caf7b8
	if (!cr6.eq) goto loc_82CAF7B8;
loc_82CAF7B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caf9cc
	goto loc_82CAF9CC;
loc_82CAF7B8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82caf7f4
	if (!cr6.eq) goto loc_82CAF7F4;
loc_82CAF7C0:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CAF7EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82caf9cc
	goto loc_82CAF9CC;
loc_82CAF7F4:
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r26,r11,2,0,29
	r26.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,29632
	r27.s64 = ctx.r10.s64 + 29632;
	// rlwinm r28,r3,6,21,25
	r28.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r26,r27
	r11.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// lbz r11,40(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	r11.u64 = rotl32(r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFF) != 0);
	r11.s64 = r11.s32 >> 25;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82caf830
	if (cr6.eq) goto loc_82CAF830;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82caf83c
	if (!cr6.eq) goto loc_82CAF83C;
loc_82CAF830:
	// not r11,r29
	r11.u64 = ~r29.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf7c0
	if (cr0.eq) goto loc_82CAF7C0;
loc_82CAF83C:
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf854
	if (cr0.eq) goto loc_82CAF854;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb6aa0
	sub_82CB6AA0(ctx, base);
loc_82CAF854:
	// lwzx r11,r26,r27
	r11.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82caf914
	if (cr0.eq) goto loc_82CAF914;
	// mr r25,r21
	r25.u64 = r21.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82caf988
	if (cr6.eq) goto loc_82CAF988;
loc_82CAF878:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// subf r9,r24,r30
	ctx.r9.s64 = r30.s64 - r24.s64;
loc_82CAF884:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x82caf8c8
	if (!cr6.lt) goto loc_82CAF8C8;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,10
	cr6.compare<uint32_t>(ctx.r8.u32, 10, xer);
	// bne cr6,0x82caf8b4
	if (!cr6.eq) goto loc_82CAF8B4;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CAF8B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// blt cr6,0x82caf884
	if (cr6.lt) goto loc_82CAF884;
loc_82CAF8C8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r31,r10,r11
	r31.s64 = r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// bl 0x82cc0760
	sub_82CC0760(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caf940
	if (cr0.eq) goto loc_82CAF940;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x82caf948
	if (cr6.lt) goto loc_82CAF948;
	// subf r11,r24,r30
	r11.s64 = r30.s64 - r24.s64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82caf878
	if (cr6.lt) goto loc_82CAF878;
	// b 0x82caf948
	goto loc_82CAF948;
loc_82CAF914:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82cc0760
	sub_82CC0760(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82caf940
	if (cr0.eq) goto loc_82CAF940;
	// lwz r23,80(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r25,r21
	r25.u64 = r21.u64;
	// b 0x82caf948
	goto loc_82CAF948;
loc_82CAF940:
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82CAF948:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82caf9c8
	if (!cr6.eq) goto loc_82CAF9C8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82caf988
	if (cr6.eq) goto loc_82CAF988;
	// cmplwi cr6,r25,5
	cr6.compare<uint32_t>(r25.u32, 5, xer);
	// bne cr6,0x82caf97c
	if (!cr6.eq) goto loc_82CAF97C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82caf7ec
	goto loc_82CAF7EC;
loc_82CAF97C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82240508
	sub_82240508(ctx, base);
	// b 0x82caf7ec
	goto loc_82CAF7EC;
loc_82CAF988:
	// lwzx r11,r26,r27
	r11.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82caf9a8
	if (cr0.eq) goto loc_82CAF9A8;
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// beq cr6,0x82caf7b0
	if (cr6.eq) goto loc_82CAF7B0;
loc_82CAF9A8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,28
	r11.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// b 0x82caf9cc
	goto loc_82CAF9CC;
loc_82CAF9C8:
	// subf r3,r22,r23
	ctx.r3.s64 = r23.s64 - r22.s64;
loc_82CAF9CC:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82CAF788) {
	__imp__sub_82CAF788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAF9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x82cafa2c
	if (!cr6.eq) goto loc_82CAFA2C;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cafb0c
	goto loc_82CAFB0C;
loc_82CAFA2C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82cafa44
	if (cr6.lt) goto loc_82CAFA44;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82cafa7c
	if (cr6.lt) goto loc_82CAFA7C;
loc_82CAFA44:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cafb0c
	goto loc_82CAFB0C;
loc_82CAFA7C:
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r30,6,21,25
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cafa44
	if (cr0.eq) goto loc_82CAFA44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cafadc
	if (cr0.eq) goto loc_82CAFADC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caf788
	sub_82CAF788(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x82cafafc
	goto loc_82CAFAFC;
loc_82CAFADC:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_82CAFAFC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cafb34
	sub_82CAFB34(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CAFB0C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CAF9E0) {
	__imp__sub_82CAF9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFB14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// b 0x82cafb4c
	goto loc_82CAFB4C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAFB4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFB14) {
	__imp__sub_82CAFB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFB34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFB34) {
	__imp__sub_82CAFB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// cmpwi cr6,r27,-2
	cr6.compare<int32_t>(r27.s32, -2, xer);
	// bne cr6,0x82cafbb0
	if (!cr6.eq) goto loc_82CAFBB0;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cafc98
	goto loc_82CAFC98;
loc_82CAFBB0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82cafbc8
	if (cr6.lt) goto loc_82CAFBC8;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82cafbf4
	if (cr6.lt) goto loc_82CAFBF4;
loc_82CAFBC8:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cafc98
	goto loc_82CAFC98;
loc_82CAFBF4:
	// srawi r11,r27,5
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1F) != 0);
	r11.s64 = r27.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r28,r11,2,0,29
	r28.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,29632
	r29.s64 = ctx.r10.s64 + 29632;
	// rlwinm r30,r27,6,21,25
	r30.u64 = rotl64(r27.u32 | (r27.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cafbc8
	if (cr0.eq) goto loc_82CAFBC8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cafc74
	if (cr0.eq) goto loc_82CAFC74;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// bl 0x82cc1130
	sub_82CC1130(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cafc5c
	if (!cr0.eq) goto loc_82CAFC5C;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82cafc60
	goto loc_82CAFC60;
loc_82CAFC5C:
	// li r30,0
	r30.s64 = 0;
loc_82CAFC60:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82cafc88
	if (cr6.eq) goto loc_82CAFC88;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82CAFC74:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_82CAFC88:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x82cafcc0
	sub_82CAFCC0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CAFC98:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CAFB78) {
	__imp__sub_82CAFB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(164) );
	// b 0x82cafcd8
	goto loc_82CAFCD8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAFCD8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFCA0) {
	__imp__sub_82CAFCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r27.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFCC0) {
	__imp__sub_82CAFCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFCF8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r30,r10,-2944
	r30.s64 = ctx.r10.s64 + -2944;
	// addi r28,r11,26936
	r28.s64 = r11.s64 + 26936;
	// mr r31,r30
	r31.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
loc_82CAFD1C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cafd44
	if (!cr6.eq) goto loc_82CAFD44;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = rotl32(r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bl 0x82cb5b78
	sub_82CB5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cafd64
	if (cr0.eq) goto loc_82CAFD64;
loc_82CAFD44:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,288
	r11.s64 = r30.s64 + 288;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82cafd1c
	if (cr6.lt) goto loc_82CAFD1C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CAFD5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82CAFD64:
	// rlwinm r11,r29,3,0,28
	r11.u64 = rotl64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x82cafd5c
	goto loc_82CAFD5C;
}

PPC_WEAK_FUNC(sub_82CAFCF8) {
	__imp__sub_82CAFCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r30,r11,-2944
	r30.s64 = r11.s64 + -2944;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82CAFD98:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cafdbc
	if (cr6.eq) goto loc_82CAFDBC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82cafdbc
	if (cr6.eq) goto loc_82CAFDBC;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CAFDBC:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,288
	r11.s64 = r30.s64 + 288;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82cafd98
	if (cr6.lt) goto loc_82CAFD98;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFD78) {
	__imp__sub_82CAFD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-2944
	r11.s64 = r11.s64 + -2944;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CAFDE8) {
	__imp__sub_82CAFDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82239798
	sub_82239798(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cafe44
	if (!cr0.eq) goto loc_82CAFE44;
	// bl 0x82cacb00
	sub_82CACB00(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82cacab8
	sub_82CACAB8(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82ca95c0
	sub_82CA95C0(ctx, base);
loc_82CAFE44:
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r29,r30,3,0,28
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-2944
	r30.s64 = r11.s64 + -2944;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cafe64
	if (cr6.eq) goto loc_82CAFE64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82cafef4
	goto loc_82CAFEF4;
loc_82CAFE64:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82cafe8c
	if (!cr0.eq) goto loc_82CAFE8C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cafef4
	goto loc_82CAFEF4;
loc_82CAFE8C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x82cafee0
	if (!cr6.eq) goto loc_82CAFEE0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82cb5b78
	sub_82CB5B78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cafed8
	if (!cr0.eq) goto loc_82CAFED8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x82cafee4
	goto loc_82CAFEE4;
loc_82CAFED8:
	// stwx r28,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r28.u32);
	// b 0x82cafee4
	goto loc_82CAFEE4;
loc_82CAFEE0:
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CAFEE4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x82caff18
	sub_82CAFF18(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CAFEF4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CAFE08) {
	__imp__sub_82CAFE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFEFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r30.u64);
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r30,r11,-2944
	r30.s64 = r11.s64 + -2944;
	// b 0x82caff28
	goto loc_82CAFF28;
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r30.u64);
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CAFF28:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r30,-8(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFEFC) {
	__imp__sub_82CAFEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r30.u64);
	// mflr r12
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// bl 0x832b226c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r30,-8(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-16) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFF18) {
	__imp__sub_82CAFF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFF48) {
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
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r31,r3,3,0,28
	r31.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-2944
	r30.s64 = r11.s64 + -2944;
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82caff88
	if (!cr6.eq) goto loc_82CAFF88;
	// bl 0x82cafe08
	sub_82CAFE08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82caff88
	if (!cr0.eq) goto loc_82CAFF88;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82ca9578
	sub_82CA9578(ctx, base);
loc_82CAFF88:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// bl 0x832b227c
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CAFF48) {
	__imp__sub_82CAFF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CAFFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82cb8c28
	sub_82CB8C28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82caffe4
	if (!cr6.eq) goto loc_82CAFFE4;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb0054
	goto loc_82CB0054;
loc_82CAFFE4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82cc0fc0
	sub_82CC0FC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82cb0008
	if (!cr6.eq) goto loc_82CB0008;
	// bl 0x82cc0758
	sub_82CC0758(ctx, base);
	// b 0x82cb000c
	goto loc_82CB000C;
loc_82CB0008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB000C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb0020
	if (cr6.eq) goto loc_82CB0020;
	// bl 0x82240508
	sub_82240508(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb0054
	goto loc_82CB0054;
loc_82CB0020:
	// srawi r11,r31,5
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	r11.s64 = r31.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,29632
	ctx.r10.s64 = ctx.r10.s64 + 29632;
	// rlwinm r11,r31,6,21,25
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 6) & 0x7C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_82CB0054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82CAFFA8) {
	__imp__sub_82CAFFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// bne cr6,0x82cb00b4
	if (!cr6.eq) goto loc_82CB00B4;
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82cb0194
	goto loc_82CB0194;
loc_82CB00B4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82cb00cc
	if (cr6.lt) goto loc_82CB00CC;
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lwz r11,29600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(29600) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82cb0104
	if (cr6.lt) goto loc_82CB0104;
loc_82CB00CC:
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb0194
	goto loc_82CB0194;
loc_82CB0104:
	// srawi r11,r30,5
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	r11.s64 = r30.s32 >> 5;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// rlwinm r27,r11,2,0,29
	r27.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,29632
	r28.s64 = ctx.r10.s64 + 29632;
	// rlwinm r29,r30,6,21,25
	r29.u64 = rotl64(r30.u32 | (r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb00cc
	if (cr0.eq) goto loc_82CB00CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8cf8
	sub_82CB8CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb0164
	if (cr0.eq) goto loc_82CB0164;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82caffa8
	sub_82CAFFA8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x82cb0184
	goto loc_82CB0184;
loc_82CB0164:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82cab7a8
	sub_82CAB7A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_82CB0184:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cb01bc
	sub_82CB01BC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
loc_82CB0194:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CB0068) {
	__imp__sub_82CB0068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB019C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// b 0x82cb01d4
	goto loc_82CB01D4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CB01D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB019C) {
	__imp__sub_82CB019C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB01BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb8df0
	sub_82CB8DF0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB01BC) {
	__imp__sub_82CB01BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB01F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cb0220
	if (!cr0.eq) goto loc_82CB0220;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb02ac
	goto loc_82CB02AC;
loc_82CB0220:
	// lis r8,-31921
	ctx.r8.s64 = -2091974656;
	// lis r7,-31921
	ctx.r7.s64 = -2091974656;
	// addi r6,r3,2048
	ctx.r6.s64 = ctx.r3.s64 + 2048;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,29632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29632, r11.u32);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// stw r10,29600(r7)
	PPC_STORE_U32(ctx.r7.u32 + 29600, ctx.r10.u32);
	// bge cr6,0x82cb0288
	if (!cr6.lt) goto loc_82CB0288;
	// li r10,10
	ctx.r10.s64 = 10;
loc_82CB024C:
	// li r11,-1
	r11.s64 = -1;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// stb r10,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// stb r10,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r10.u8);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r11,29632(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(29632) );
	// addi r7,r11,2048
	ctx.r7.s64 = r11.s64 + 2048;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// blt cr6,0x82cb024c
	if (cr6.lt) goto loc_82CB024C;
	// b 0x82cb0288
	goto loc_82CB0288;
loc_82CB0284:
	// lwz r11,29632(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(29632) );
loc_82CB0288:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r7,-2
	ctx.r7.s64 = -2;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// cmpwi cr6,r9,192
	cr6.compare<int32_t>(ctx.r9.s32, 192, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82cb0284
	if (cr6.lt) goto loc_82CB0284;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB02AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB01F8) {
	__imp__sub_82CB01F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB02C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31921
	r11.s64 = -2091974656;
	// addi r30,r11,29632
	r30.s64 = r11.s64 + 29632;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82CB02E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb02f8
	if (cr6.eq) goto loc_82CB02F8;
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB02F8:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82cb02e0
	if (cr6.lt) goto loc_82CB02E0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB02C0) {
	__imp__sub_82CB02C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x82cb0430
	sub_82CB0430(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,29,29
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb037c
	if (cr0.eq) goto loc_82CB037C;
	// li r30,512
	r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x82cb03b0
	goto loc_82CB03B0;
loc_82CB037C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cb9098
	sub_82CB9098(ctx, base);
	// rlwinm. r11,r31,0,30,30
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb0398
	if (!cr0.eq) goto loc_82CB0398;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cb039c
	if (!cr6.eq) goto loc_82CB039C;
loc_82CB0398:
	// li r30,128
	r30.s64 = 128;
loc_82CB039C:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb03ac
	if (!cr0.eq) goto loc_82CB03AC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cb03b0
	if (!cr6.eq) goto loc_82CB03B0;
loc_82CB03AC:
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
loc_82CB03B0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// std r10,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82CB0320) {
	__imp__sub_82CB0320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB03D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// blt cr6,0x82cb0404
	if (cr6.lt) goto loc_82CB0404;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bgt cr6,0x82cb0404
	if (cr6.gt) goto loc_82CB0404;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-3224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-3224) );
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(200) );
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_82CB0404:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB03D8) {
	__imp__sub_82CB03D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-3448
	r11.s64 = r11.s64 + -3448;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(200) );
	// lhzx r11,r10,r11
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// and r3,r11,r4
	ctx.r3.u64 = r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB0410) {
	__imp__sub_82CB0410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r18,r21
	r18.u64 = r21.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r21
	r11.u64 = r21.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb04ac
	if (!cr6.eq) goto loc_82CB04AC;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb0db0
	goto loc_82CB0DB0;
loc_82CB04AC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82CB04B0:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x82cb04d8
	if (cr6.eq) goto loc_82CB04D8;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x82cb04d8
	if (cr6.eq) goto loc_82CB04D8;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x82cb04d8
	if (cr6.eq) goto loc_82CB04D8;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x82cb04e0
	if (!cr6.eq) goto loc_82CB04E0;
loc_82CB04D8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82cb04b0
	goto loc_82CB04B0;
loc_82CB04E0:
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r20,r7,32768
	r20.u64 = ctx.r7.u64 | 32768;
	// lwz r7,-4912(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-4912) );
loc_82CB04F0:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x82cb0870
	if (cr6.gt) goto loc_82CB0870;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6176
	r12.s64 = r12.s64 + 6176;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = rotl64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,1320
	r12.s64 = r12.s64 + 1320;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CB0528;
	case 1:
		goto loc_82CB059C;
	case 2:
		goto loc_82CB061C;
	case 3:
		goto loc_82CB069C;
	case 4:
		goto loc_82CB070C;
	case 5:
		goto loc_82CB0780;
	case 6:
		goto loc_82CB07A0;
	case 7:
		goto loc_82CB0824;
	case 8:
		goto loc_82CB07E8;
	case 9:
		goto loc_82CB087C;
	case 10:
		goto loc_82CB0870;
	case 11:
		goto loc_82CB083C;
	default:
		__builtin_unreachable();
	}
loc_82CB0528:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb0548
	if (cr6.lt) goto loc_82CB0548;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb0548
	if (cr6.gt) goto loc_82CB0548;
loc_82CB053C:
	// li r11,3
	r11.s64 = 3;
loc_82CB0540:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0548:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cb0564
	if (!cr6.eq) goto loc_82CB0564;
loc_82CB055C:
	// li r11,5
	r11.s64 = 5;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0564:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82cb0590
	if (cr6.eq) goto loc_82CB0590;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82cb0584
	if (cr6.eq) goto loc_82CB0584;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x82cb081c
	if (!cr6.eq) goto loc_82CB081C;
loc_82CB057C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0584:
	// li r11,2
	r11.s64 = 2;
	// mr r18,r20
	r18.u64 = r20.u64;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0590:
	// li r11,2
	r11.s64 = 2;
	// mr r18,r21
	r18.u64 = r21.u64;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB059C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb05b4
	if (cr6.lt) goto loc_82CB05B4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x82cb053c
	if (!cr6.gt) goto loc_82CB053C;
loc_82CB05B4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cb05d0
	if (!cr6.eq) goto loc_82CB05D0;
loc_82CB05C8:
	// li r11,4
	r11.s64 = 4;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB05D0:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82cb0610
	if (cr6.eq) goto loc_82CB0610;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82cb0610
	if (cr6.eq) goto loc_82CB0610;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x82cb057c
	if (cr6.eq) goto loc_82CB057C;
loc_82CB05E8:
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// ble cr6,0x82cb081c
	if (!cr6.gt) goto loc_82CB081C;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// ble cr6,0x82cb0608
	if (!cr6.gt) goto loc_82CB0608;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// ble cr6,0x82cb081c
	if (!cr6.gt) goto loc_82CB081C;
	// cmpwi cr6,r11,101
	cr6.compare<int32_t>(r11.s32, 101, xer);
	// bgt cr6,0x82cb081c
	if (cr6.gt) goto loc_82CB081C;
loc_82CB0608:
	// li r11,6
	r11.s64 = 6;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0610:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// li r11,11
	r11.s64 = 11;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB061C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb0630
	if (cr6.lt) goto loc_82CB0630;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x82cb053c
	if (!cr6.gt) goto loc_82CB053C;
loc_82CB0630:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82cb055c
	if (cr6.eq) goto loc_82CB055C;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x82cb057c
	if (cr6.eq) goto loc_82CB057C;
loc_82CB064C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82CB0650:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82cb0d4c
	if (cr6.eq) goto loc_82CB0D4C;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// ble cr6,0x82cb0688
	if (!cr6.gt) goto loc_82CB0688;
	// lbz r11,151(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// blt cr6,0x82cb067c
	if (cr6.lt) goto loc_82CB067C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_82CB067C:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB0688:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cb0d38
	if (cr6.eq) goto loc_82CB0D38;
	// lbz r10,-1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// b 0x82cb08fc
	goto loc_82CB08FC;
loc_82CB069C:
	// li r30,1
	r30.s64 = 1;
	// b 0x82cb06d4
	goto loc_82CB06D4;
loc_82CB06A4:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb06e0
	if (cr6.gt) goto loc_82CB06E0;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x82cb06c8
	if (!cr6.lt) goto loc_82CB06C8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82cb06cc
	goto loc_82CB06CC;
loc_82CB06C8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB06CC:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CB06D4:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x82cb06a4
	if (!cr6.lt) goto loc_82CB06A4;
loc_82CB06E0:
	// lwz r22,0(r7)
	r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(0) );
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// lbz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82cb05c8
	if (cr6.eq) goto loc_82CB05C8;
loc_82CB06F8:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82cb0610
	if (cr6.eq) goto loc_82CB0610;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82cb0610
	if (cr6.eq) goto loc_82CB0610;
	// b 0x82cb05e8
	goto loc_82CB05E8;
loc_82CB070C:
	// li r30,1
	r30.s64 = 1;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82cb076c
	if (!cr6.eq) goto loc_82CB076C;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x82cb076c
	if (!cr6.eq) goto loc_82CB076C;
loc_82CB0728:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x82cb0728
	if (cr6.eq) goto loc_82CB0728;
	// b 0x82cb076c
	goto loc_82CB076C;
loc_82CB0740:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb0778
	if (cr6.gt) goto loc_82CB0778;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x82cb0764
	if (!cr6.lt) goto loc_82CB0764;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82CB0764:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CB076C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x82cb0740
	if (!cr6.lt) goto loc_82CB0740;
loc_82CB0778:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// b 0x82cb06f8
	goto loc_82CB06F8;
loc_82CB0780:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82cb064c
	if (cr6.lt) goto loc_82CB064C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb064c
	if (cr6.gt) goto loc_82CB064C;
	// li r11,4
	r11.s64 = 4;
	// b 0x82cb0540
	goto loc_82CB0540;
loc_82CB07A0:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb07c0
	if (cr6.lt) goto loc_82CB07C0;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb07c0
	if (cr6.gt) goto loc_82CB07C0;
loc_82CB07B8:
	// li r11,9
	r11.s64 = 9;
	// b 0x82cb0540
	goto loc_82CB0540;
loc_82CB07C0:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82cb07e0
	if (cr6.eq) goto loc_82CB07E0;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x82cb085c
	if (cr6.eq) goto loc_82CB085C;
loc_82CB07D0:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x82cb064c
	if (!cr6.eq) goto loc_82CB064C;
	// li r11,8
	r11.s64 = 8;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB07E0:
	// li r11,7
	r11.s64 = 7;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB07E8:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x82cb0808
	if (!cr6.eq) goto loc_82CB0808;
loc_82CB07F8:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x82cb07f8
	if (cr6.eq) goto loc_82CB07F8;
loc_82CB0808:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb081c
	if (cr6.lt) goto loc_82CB081C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x82cb07b8
	if (!cr6.gt) goto loc_82CB07B8;
loc_82CB081C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x82cb0650
	goto loc_82CB0650;
loc_82CB0824:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x82cb07d0
	if (cr6.lt) goto loc_82CB07D0;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x82cb07b8
	if (!cr6.gt) goto loc_82CB07B8;
	// b 0x82cb07d0
	goto loc_82CB07D0;
loc_82CB083C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb0868
	if (cr6.eq) goto loc_82CB0868;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x82cb07e0
	if (cr6.eq) goto loc_82CB07E0;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x82cb064c
	if (!cr6.eq) goto loc_82CB064C;
loc_82CB085C:
	// li r11,7
	r11.s64 = 7;
	// li r27,-1
	r27.s64 = -1;
	// b 0x82cb04f0
	goto loc_82CB04F0;
loc_82CB0868:
	// li r11,10
	r11.s64 = 10;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82CB0870:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x82cb04f0
	if (!cr6.eq) goto loc_82CB04F0;
	// b 0x82cb0650
	goto loc_82CB0650;
loc_82CB087C:
	// li r28,1
	r28.s64 = 1;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// b 0x82cb08ac
	goto loc_82CB08AC;
loc_82CB0888:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb08c0
	if (cr6.gt) goto loc_82CB08C0;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r11,-48
	ctx.r9.s64 = r11.s64 + -48;
	// cmpwi cr6,r9,5200
	cr6.compare<int32_t>(ctx.r9.s32, 5200, xer);
	// bgt cr6,0x82cb08bc
	if (cr6.gt) goto loc_82CB08BC;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82CB08AC:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x82cb0888
	if (!cr6.lt) goto loc_82CB0888;
	// b 0x82cb08c0
	goto loc_82CB08C0;
loc_82CB08BC:
	// li r9,5201
	ctx.r9.s64 = 5201;
loc_82CB08C0:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// b 0x82cb08e0
	goto loc_82CB08E0;
loc_82CB08CC:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x82cb081c
	if (cr6.gt) goto loc_82CB081C;
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
loc_82CB08E0:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x82cb08cc
	if (!cr6.lt) goto loc_82CB08CC;
	// b 0x82cb081c
	goto loc_82CB081C;
loc_82CB08EC:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82CB08FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb08ec
	if (cr6.eq) goto loc_82CB08EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82cb9e88
	sub_82CB9E88(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x82cb0920
	if (!cr6.lt) goto loc_82CB0920;
	// neg r29,r29
	r29.s64 = -r29.s64;
loc_82CB0920:
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82cb0930
	if (!cr6.eq) goto loc_82CB0930;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_82CB0930:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82cb093c
	if (!cr6.eq) goto loc_82CB093C;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
loc_82CB093C:
	// cmpwi cr6,r11,5200
	cr6.compare<int32_t>(r11.s32, 5200, xer);
	// bgt cr6,0x82cb0d64
	if (cr6.gt) goto loc_82CB0D64;
	// cmpwi cr6,r11,-5200
	cr6.compare<int32_t>(r11.s32, -5200, xer);
	// blt cr6,0x82cb0d7c
	if (cr6.lt) goto loc_82CB0D7C;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// mr r24,r11
	r24.u64 = r11.u64;
	// addi r10,r10,-1512
	ctx.r10.s64 = ctx.r10.s64 + -1512;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r25,r10,-96
	r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x82cb0d24
	if (cr6.eq) goto loc_82CB0D24;
	// bge cr6,0x82cb0978
	if (!cr6.lt) goto loc_82CB0978;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// neg r24,r11
	r24.s64 = -r11.s64;
	// addi r11,r10,-1160
	r11.s64 = ctx.r10.s64 + -1160;
	// addi r25,r11,-96
	r25.s64 = r11.s64 + -96;
loc_82CB0978:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x82cb0984
	if (!cr6.eq) goto loc_82CB0984;
	// sth r21,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r21.u16);
loc_82CB0984:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x82cb0d24
	if (cr6.eq) goto loc_82CB0D24;
	// lis r11,0
	r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r26,r11,65535
	r26.u64 = r11.u64 | 65535;
	// lis r22,-32768
	r22.s64 = -2147483648;
	// li r23,-32768
	r23.s64 = -32768;
	// ori r17,r10,32768
	r17.u64 = ctx.r10.u64 | 32768;
loc_82CB09A4:
	// clrlwi. r11,r24,29
	r11.u64 = r24.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r25,r25,84
	r25.s64 = r25.s64 + 84;
	// srawi r24,r24,3
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	r24.s64 = r24.s32 >> 3;
	// beq 0x82cb0d1c
	if (cr0.eq) goto loc_82CB0D1C;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// lhz r11,10(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// blt cr6,0x82cb09e4
	if (cr6.lt) goto loc_82CB09E4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lwz r11,118(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(118) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,118(r1)
	PPC_STORE_U32(ctx.r1.u32 + 118, r11.u32);
loc_82CB09E4:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r28,r21
	r28.u64 = r21.u64;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// clrlwi r11,r10,17
	r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// rlwinm r27,r8,0,16,16
	r27.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r29,r7,16
	r29.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x82cb0d04
	if (!cr6.lt) goto loc_82CB0D04;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x82cb0d04
	if (!cr6.lt) goto loc_82CB0D04;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	cr6.compare<uint32_t>(r11.u32, 49149, xer);
	// bgt cr6,0x82cb0d04
	if (cr6.gt) goto loc_82CB0D04;
	// cmplwi cr6,r11,16319
	cr6.compare<uint32_t>(r11.u32, 16319, xer);
	// bgt cr6,0x82cb0a48
	if (cr6.gt) goto loc_82CB0A48;
loc_82CB0A40:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// b 0x82cb0d14
	goto loc_82CB0D14;
loc_82CB0A48:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb0a84
	if (!cr6.eq) goto loc_82CB0A84;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bne 0x82cb0a84
	if (!cr0.eq) goto loc_82CB0A84;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb0a84
	if (!cr6.eq) goto loc_82CB0A84;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb0a84
	if (!cr6.eq) goto loc_82CB0A84;
	// sth r21,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r21.u16);
	// b 0x82cb0d1c
	goto loc_82CB0D1C;
loc_82CB0A84:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb0abc
	if (!cr6.eq) goto loc_82CB0ABC;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// bne 0x82cb0abc
	if (!cr0.eq) goto loc_82CB0ABC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb0abc
	if (!cr6.eq) goto loc_82CB0ABC;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb0a40
	if (cr6.eq) goto loc_82CB0A40;
loc_82CB0ABC:
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82CB0AC8:
	// rlwinm r11,r30,1,0,30
	r11.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82cb0b38
	if (!cr6.gt) goto loc_82CB0B38;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
loc_82CB0AE4:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(2) );
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82cb0b0c
	if (cr6.lt) goto loc_82CB0B0C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cb0b10
	if (!cr6.lt) goto loc_82CB0B10;
loc_82CB0B0C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82CB0B10:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cb0b28
	if (cr6.eq) goto loc_82CB0B28;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, r11.u16);
loc_82CB0B28:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x82cb0ae4
	if (cr0.gt) goto loc_82CB0AE4;
loc_82CB0B38:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bgt 0x82cb0ac8
	if (cr0.gt) goto loc_82CB0AC8;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-16382
	r11.s64 = r11.s64 + -16382;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// ble 0x82cb0bb0
	if (!cr0.gt) goto loc_82CB0BB0;
loc_82CB0B64:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82cb0bb0
	if (!cr0.eq) goto loc_82CB0BB0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = rotl64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// extsh. r5,r11
	ctx.r5.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bgt 0x82cb0b64
	if (cr0.gt) goto loc_82CB0B64;
loc_82CB0BB0:
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82cb0c50
	if (cr0.gt) goto loc_82CB0C50;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82cb0c50
	if (!cr0.lt) goto loc_82CB0C50;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CB0BD4:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb0be4
	if (cr0.eq) goto loc_82CB0BE4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82CB0BE4:
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// bne 0x82cb0bf4
	if (!cr0.eq) goto loc_82CB0BF4;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_82CB0BF4:
	// clrlwi. r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// bne 0x82cb0c04
	if (!cr0.eq) goto loc_82CB0C04;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_82CB0C04:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = rotl64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = rotl64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// blt 0x82cb0bd4
	if (cr0.lt) goto loc_82CB0BD4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82cb0c50
	if (cr6.eq) goto loc_82CB0C50;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
loc_82CB0C50:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x82cb0c70
	if (cr6.gt) goto loc_82CB0C70;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cb0cd0
	if (!cr6.eq) goto loc_82CB0CD0;
loc_82CB0C70:
	// lwz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(86) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cb0cc8
	if (!cr6.eq) goto loc_82CB0CC8;
	// lwz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(82) );
	// stw r21,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, r21.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cb0cbc
	if (!cr6.eq) goto loc_82CB0CBC;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r21,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, r21.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82cb0cb0
	if (!cr6.eq) goto loc_82CB0CB0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r20,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r20.u16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x82cb0cd0
	goto loc_82CB0CD0;
loc_82CB0CB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82cb0cd0
	goto loc_82CB0CD0;
loc_82CB0CBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x82cb0cd0
	goto loc_82CB0CD0;
loc_82CB0CC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_82CB0CD0:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// bge cr6,0x82cb0d04
	if (!cr6.lt) goto loc_82CB0D04;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	PPC_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	PPC_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// b 0x82cb0d1c
	goto loc_82CB0D1C;
loc_82CB0D04:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// clrlwi. r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb0d14
	if (!cr0.eq) goto loc_82CB0D14;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
loc_82CB0D14:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
loc_82CB0D1C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82cb09a4
	if (!cr6.eq) goto loc_82CB09A4;
loc_82CB0D24:
	// lhz r11,106(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(102) );
	// lwz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(98) );
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x82cb0d90
	goto loc_82CB0D90;
loc_82CB0D38:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// b 0x82cb0d90
	goto loc_82CB0D90;
loc_82CB0D4C:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r21,4
	r21.s64 = 4;
	// b 0x82cb0d90
	goto loc_82CB0D90;
loc_82CB0D64:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r21,2
	r21.s64 = 2;
	// b 0x82cb0d90
	goto loc_82CB0D90;
loc_82CB0D7C:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r21,1
	r21.s64 = 1;
loc_82CB0D90:
	// sth r11,10(r19)
	PPC_STORE_U16(r19.u32 + 10, r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r18,16
	r11.u64 = r18.u32 & 0xFFFF;
	// stw r8,6(r19)
	PPC_STORE_U32(r19.u32 + 6, ctx.r8.u32);
	// stw r9,2(r19)
	PPC_STORE_U32(r19.u32 + 2, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// sth r11,0(r19)
	PPC_STORE_U16(r19.u32 + 0, r11.u16);
loc_82CB0DB0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c0c
	return;
}

PPC_WEAK_FUNC(sub_82CB0430) {
	__imp__sub_82CB0430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0DC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCRegister r12{};
	// lis r12,-32255
	r12.s64 = -2113863680;
	// lfd f4,6192(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(r12.u32 + 6192);
	// lis r12,-32255
	r12.s64 = -2113863680;
	// lfd f5,6200(r12)
	ctx.f5.u64 = PPC_LOAD_U64(r12.u32 + 6200);
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x82cb0e00
	if (cr0.eq) goto loc_82CB0E00;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr0,f6,f5
	cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x82cb0e00
	if (!cr0.lt) goto loc_82CB0E00;
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x82cb0df8
	if (cr0.lt) goto loc_82CB0DF8;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x82cb0e00
	goto loc_82CB0E00;
loc_82CB0DF8:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_82CB0E00:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB0DC0) {
	__imp__sub_82CB0DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,27336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27336) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB0E08) {
	__imp__sub_82CB0E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB0E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// bgt cr6,0x82cb0efc
	if (cr6.gt) goto loc_82CB0EFC;
	// beq cr6,0x82cb0e78
	if (cr6.eq) goto loc_82CB0E78;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x82cb0e90
	if (cr6.eq) goto loc_82CB0E90;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x82cb0e78
	if (cr6.eq) goto loc_82CB0E78;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// beq cr6,0x82cb0f3c
	if (cr6.eq) goto loc_82CB0F3C;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x82cb0f14
	if (!cr6.eq) goto loc_82CB0F14;
loc_82CB0E78:
	// bl 0x82cac520
	sub_82CAC520(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// bne 0x82cb0ea0
	if (!cr0.eq) goto loc_82CB0EA0;
loc_82CB0E88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb10b8
	goto loc_82CB10B8;
loc_82CB0E90:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r30,r11,27328
	r30.s64 = r11.s64 + 27328;
	// lwz r11,27328(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(27328) );
	// b 0x82cb0f74
	goto loc_82CB0F74;
loc_82CB0EA0:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(92) );
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// lwz r8,-3644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-3644) );
loc_82CB0EB0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// beq cr6,0x82cb0ed0
	if (cr6.eq) goto loc_82CB0ED0;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82cb0eb0
	if (cr6.lt) goto loc_82CB0EB0;
loc_82CB0ED0:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cb0eec
	if (!cr6.lt) goto loc_82CB0EEC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82cb0ef0
	if (cr6.eq) goto loc_82CB0EF0;
loc_82CB0EEC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82CB0EF0:
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82cb0f7c
	goto loc_82CB0F7C;
loc_82CB0EFC:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(r29.s32, 15, xer);
	// beq cr6,0x82cb0f64
	if (cr6.eq) goto loc_82CB0F64;
	// cmpwi cr6,r29,21
	cr6.compare<int32_t>(r29.s32, 21, xer);
	// beq cr6,0x82cb0f50
	if (cr6.eq) goto loc_82CB0F50;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(r29.s32, 22, xer);
	// beq cr6,0x82cb0f3c
	if (cr6.eq) goto loc_82CB0F3C;
loc_82CB0F14:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// b 0x82cb0e88
	goto loc_82CB0E88;
loc_82CB0F3C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,27328
	r11.s64 = r11.s64 + 27328;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82cb0f74
	goto loc_82CB0F74;
loc_82CB0F50:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,27328
	r11.s64 = r11.s64 + 27328;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82cb0f74
	goto loc_82CB0F74;
loc_82CB0F64:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,27328
	r11.s64 = r11.s64 + 27328;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
loc_82CB0F74:
	// li r28,1
	r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
loc_82CB0F7C:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82cb10b4
	if (cr6.eq) goto loc_82CB10B4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb0f98
	if (!cr6.eq) goto loc_82CB0F98;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82ca97a8
	sub_82CA97A8(ctx, base);
loc_82CB0F98:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82cb0fa8
	if (cr6.eq) goto loc_82CB0FA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
loc_82CB0FA8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// beq cr6,0x82cb0fc8
	if (cr6.eq) goto loc_82CB0FC8;
	// cmpwi cr6,r29,11
	cr6.compare<int32_t>(r29.s32, 11, xer);
	// beq cr6,0x82cb0fc8
	if (cr6.eq) goto loc_82CB0FC8;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x82cb0fec
	if (!cr6.eq) goto loc_82CB0FEC;
loc_82CB0FC8:
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(96) );
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(r27.u32 + 96, r26.u32);
	// bne cr6,0x82cb103c
	if (!cr6.eq) goto loc_82CB103C;
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(100) );
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(r27.u32 + 100, ctx.r10.u32);
loc_82CB0FEC:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x82cb103c
	if (!cr6.eq) goto loc_82CB103C;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lis r7,-31953
	ctx.r7.s64 = -2094071808;
	// lwz r10,-3656(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-3656) );
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_82CB1008:
	// lwz r9,-3652(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(-3652) );
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82cb1040
	if (!cr6.lt) goto loc_82CB1040;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(92) );
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r10,-3656(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(-3656) );
	// b 0x82cb1008
	goto loc_82CB1008;
loc_82CB103C:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
loc_82CB1040:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cb10e0
	sub_82CB10E0(ctx, base);
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// bne cr6,0x82cb1074
	if (!cr6.eq) goto loc_82CB1074;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(100) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cb1084
	goto loc_82CB1084;
loc_82CB1074:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
loc_82CB1084:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x82cb109c
	if (cr6.eq) goto loc_82CB109C;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// beq cr6,0x82cb109c
	if (cr6.eq) goto loc_82CB109C;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bne cr6,0x82cb10b4
	if (!cr6.eq) goto loc_82CB10B4;
loc_82CB109C:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// stw r11,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r11.u32);
	// bne cr6,0x82cb10b4
	if (!cr6.eq) goto loc_82CB10B4;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// stw r11,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r11.u32);
loc_82CB10B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CB10B8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82CB0E20) {
	__imp__sub_82CB0E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB10C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// b 0x82cb10f8
	goto loc_82CB10F8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82CB10F8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82cb1108
	if (cr6.eq) goto loc_82CB1108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
loc_82CB1108:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB10C0) {
	__imp__sub_82CB10C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB10E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82cb1108
	if (cr6.eq) goto loc_82CB1108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
loc_82CB1108:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-24) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB10E0) {
	__imp__sub_82CB10E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// bge cr6,0x82cb113c
	if (!cr6.lt) goto loc_82CB113C;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// blr 
	return;
loc_82CB113C:
	// cmplwi cr6,r11,65296
	cr6.compare<uint32_t>(r11.u32, 65296, xer);
	// bge cr6,0x82cb12c4
	if (!cr6.lt) goto loc_82CB12C4;
	// cmplwi cr6,r11,1632
	cr6.compare<uint32_t>(r11.u32, 1632, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,1642
	cr6.compare<uint32_t>(r11.u32, 1642, xer);
	// bge cr6,0x82cb115c
	if (!cr6.lt) goto loc_82CB115C;
	// addi r3,r11,-1632
	ctx.r3.s64 = r11.s64 + -1632;
	// blr 
	return;
loc_82CB115C:
	// cmplwi cr6,r11,1776
	cr6.compare<uint32_t>(r11.u32, 1776, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,1786
	cr6.compare<uint32_t>(r11.u32, 1786, xer);
	// bge cr6,0x82cb1174
	if (!cr6.lt) goto loc_82CB1174;
	// addi r3,r11,-1776
	ctx.r3.s64 = r11.s64 + -1776;
	// blr 
	return;
loc_82CB1174:
	// cmplwi cr6,r11,2406
	cr6.compare<uint32_t>(r11.u32, 2406, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,2416
	cr6.compare<uint32_t>(r11.u32, 2416, xer);
	// bge cr6,0x82cb118c
	if (!cr6.lt) goto loc_82CB118C;
	// addi r3,r11,-2406
	ctx.r3.s64 = r11.s64 + -2406;
	// blr 
	return;
loc_82CB118C:
	// cmplwi cr6,r11,2534
	cr6.compare<uint32_t>(r11.u32, 2534, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,2544
	cr6.compare<uint32_t>(r11.u32, 2544, xer);
	// bge cr6,0x82cb11a4
	if (!cr6.lt) goto loc_82CB11A4;
	// addi r3,r11,-2534
	ctx.r3.s64 = r11.s64 + -2534;
	// blr 
	return;
loc_82CB11A4:
	// cmplwi cr6,r11,2662
	cr6.compare<uint32_t>(r11.u32, 2662, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,2672
	cr6.compare<uint32_t>(r11.u32, 2672, xer);
	// bge cr6,0x82cb11bc
	if (!cr6.lt) goto loc_82CB11BC;
	// addi r3,r11,-2662
	ctx.r3.s64 = r11.s64 + -2662;
	// blr 
	return;
loc_82CB11BC:
	// cmplwi cr6,r11,2790
	cr6.compare<uint32_t>(r11.u32, 2790, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,2800
	cr6.compare<uint32_t>(r11.u32, 2800, xer);
	// bge cr6,0x82cb11d4
	if (!cr6.lt) goto loc_82CB11D4;
	// addi r3,r11,-2790
	ctx.r3.s64 = r11.s64 + -2790;
	// blr 
	return;
loc_82CB11D4:
	// cmplwi cr6,r11,2918
	cr6.compare<uint32_t>(r11.u32, 2918, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,2928
	cr6.compare<uint32_t>(r11.u32, 2928, xer);
	// bge cr6,0x82cb11ec
	if (!cr6.lt) goto loc_82CB11EC;
	// addi r3,r11,-2918
	ctx.r3.s64 = r11.s64 + -2918;
	// blr 
	return;
loc_82CB11EC:
	// cmplwi cr6,r11,3174
	cr6.compare<uint32_t>(r11.u32, 3174, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3184
	cr6.compare<uint32_t>(r11.u32, 3184, xer);
	// bge cr6,0x82cb1204
	if (!cr6.lt) goto loc_82CB1204;
	// addi r3,r11,-3174
	ctx.r3.s64 = r11.s64 + -3174;
	// blr 
	return;
loc_82CB1204:
	// cmplwi cr6,r11,3302
	cr6.compare<uint32_t>(r11.u32, 3302, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3312
	cr6.compare<uint32_t>(r11.u32, 3312, xer);
	// bge cr6,0x82cb121c
	if (!cr6.lt) goto loc_82CB121C;
	// addi r3,r11,-3302
	ctx.r3.s64 = r11.s64 + -3302;
	// blr 
	return;
loc_82CB121C:
	// cmplwi cr6,r11,3430
	cr6.compare<uint32_t>(r11.u32, 3430, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3440
	cr6.compare<uint32_t>(r11.u32, 3440, xer);
	// bge cr6,0x82cb1234
	if (!cr6.lt) goto loc_82CB1234;
	// addi r3,r11,-3430
	ctx.r3.s64 = r11.s64 + -3430;
	// blr 
	return;
loc_82CB1234:
	// cmplwi cr6,r11,3664
	cr6.compare<uint32_t>(r11.u32, 3664, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3674
	cr6.compare<uint32_t>(r11.u32, 3674, xer);
	// bge cr6,0x82cb124c
	if (!cr6.lt) goto loc_82CB124C;
	// addi r3,r11,-3664
	ctx.r3.s64 = r11.s64 + -3664;
	// blr 
	return;
loc_82CB124C:
	// cmplwi cr6,r11,3792
	cr6.compare<uint32_t>(r11.u32, 3792, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3802
	cr6.compare<uint32_t>(r11.u32, 3802, xer);
	// bge cr6,0x82cb1264
	if (!cr6.lt) goto loc_82CB1264;
	// addi r3,r11,-3792
	ctx.r3.s64 = r11.s64 + -3792;
	// blr 
	return;
loc_82CB1264:
	// cmplwi cr6,r11,3872
	cr6.compare<uint32_t>(r11.u32, 3872, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,3882
	cr6.compare<uint32_t>(r11.u32, 3882, xer);
	// bge cr6,0x82cb127c
	if (!cr6.lt) goto loc_82CB127C;
	// addi r3,r11,-3872
	ctx.r3.s64 = r11.s64 + -3872;
	// blr 
	return;
loc_82CB127C:
	// cmplwi cr6,r11,4160
	cr6.compare<uint32_t>(r11.u32, 4160, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,4170
	cr6.compare<uint32_t>(r11.u32, 4170, xer);
	// bge cr6,0x82cb1294
	if (!cr6.lt) goto loc_82CB1294;
	// addi r3,r11,-4160
	ctx.r3.s64 = r11.s64 + -4160;
	// blr 
	return;
loc_82CB1294:
	// cmplwi cr6,r11,6112
	cr6.compare<uint32_t>(r11.u32, 6112, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,6122
	cr6.compare<uint32_t>(r11.u32, 6122, xer);
	// bge cr6,0x82cb12ac
	if (!cr6.lt) goto loc_82CB12AC;
	// addi r3,r11,-6112
	ctx.r3.s64 = r11.s64 + -6112;
	// blr 
	return;
loc_82CB12AC:
	// cmplwi cr6,r11,6160
	cr6.compare<uint32_t>(r11.u32, 6160, xer);
	// blt cr6,0x82cb12d8
	if (cr6.lt) goto loc_82CB12D8;
	// cmplwi cr6,r11,6170
	cr6.compare<uint32_t>(r11.u32, 6170, xer);
	// bge cr6,0x82cb12d8
	if (!cr6.lt) goto loc_82CB12D8;
	// addi r3,r11,-6160
	ctx.r3.s64 = r11.s64 + -6160;
	// blr 
	return;
loc_82CB12C4:
	// cmplwi cr6,r11,65306
	cr6.compare<uint32_t>(r11.u32, 65306, xer);
	// bge cr6,0x82cb12d8
	if (!cr6.lt) goto loc_82CB12D8;
	// addis r3,r11,-1
	ctx.r3.s64 = r11.s64 + -65536;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// blr 
	return;
loc_82CB12D8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB1120) {
	__imp__sub_82CB1120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB12E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x82cb1310
	if (cr6.eq) goto loc_82CB1310;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x82cb1310
	if (!cr6.lt) goto loc_82CB1310;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,-1568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1568) );
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// b 0x82cb1314
	goto loc_82CB1314;
loc_82CB1310:
	// li r11,0
	r11.s64 = 0;
loc_82CB1314:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB12E0) {
	__imp__sub_82CB12E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x82cb1358
	if (cr6.eq) goto loc_82CB1358;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x82cb1358
	if (!cr6.lt) goto loc_82CB1358;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,-1568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-1568) );
	// lhzx r11,r9,r11
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// and r3,r11,r8
	ctx.r3.u64 = r11.u64 & ctx.r8.u64;
	// blr 
	return;
loc_82CB1358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB1328) {
	__imp__sub_82CB1328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82caff48
	sub_82CAFF48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb13ec
	if (cr6.eq) goto loc_82CB13EC;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r9,r11,27344
	ctx.r9.s64 = r11.s64 + 27344;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
loc_82CB13AC:
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cb13dc
	if (cr6.eq) goto loc_82CB13DC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cb13d0
	if (cr6.eq) goto loc_82CB13D0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb13ac
	goto loc_82CB13AC;
loc_82CB13D0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CB13DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82CB13EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x82cb1410
	sub_82CB1410(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB1368) {
	__imp__sub_82CB1368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82cafde8
	sub_82CAFDE8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB1410) {
	__imp__sub_82CB1410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r14,r28
	r14.u64 = r28.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r17,r28
	r17.u64 = r28.u64;
	// mr r19,r28
	r19.u64 = r28.u64;
	// bne cr6,0x82cb14a8
	if (!cr6.eq) goto loc_82CB14A8;
loc_82CB147C:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb1f90
	goto loc_82CB1F90;
loc_82CB14A8:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82cb147c
	if (cr6.eq) goto loc_82CB147C;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x82cb1f5c
	if (cr6.eq) goto loc_82CB1F5C;
	// bl 0x82240578
	sub_82240578(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x82cb1f5c
	if (cr6.eq) goto loc_82CB1F5C;
	// lhz r29,0(r15)
	r29.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// mr r20,r28
	r20.u64 = r28.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr. r8,r29
	ctx.r8.u64 = r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// beq 0x82cb1f54
	if (cr0.eq) goto loc_82CB1F54;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lwz r16,100(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r27,100(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// addi r18,r10,-3832
	r18.s64 = ctx.r10.s64 + -3832;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// addi r10,r9,5824
	ctx.r10.s64 = ctx.r9.s64 + 5824;
	// addi r22,r11,-3224
	r22.s64 = r11.s64 + -3224;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82CB1514:
	// addi r15,r15,2
	r15.s64 = r15.s64 + 2;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// blt cr6,0x82cb1f44
	if (cr6.lt) goto loc_82CB1F44;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// blt cr6,0x82cb1540
	if (cr6.lt) goto loc_82CB1540;
	// cmplwi cr6,r8,120
	cr6.compare<uint32_t>(ctx.r8.u32, 120, xer);
	// bgt cr6,0x82cb1540
	if (cr6.gt) goto loc_82CB1540;
	// add r11,r8,r10
	r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r11,-32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -32);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// b 0x82cb1544
	goto loc_82CB1544;
loc_82CB1540:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82CB1544:
	// mulli r11,r11,9
	r11.s64 = r11.s64 * 9;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,28,4,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82cb147c
	if (cr6.eq) goto loc_82CB147C;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82cb1f24
	if (cr6.gt) goto loc_82CB1F24;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6320
	r12.s64 = r12.s64 + 6320;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,5520
	r12.s64 = r12.s64 + 5520;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CB1744;
	case 1:
		goto loc_82CB1590;
	case 2:
		goto loc_82CB15B0;
	case 3:
		goto loc_82CB1600;
	case 4:
		goto loc_82CB163C;
	case 5:
		goto loc_82CB1644;
	case 6:
		goto loc_82CB167C;
	case 7:
		goto loc_82CB1760;
	default:
		__builtin_unreachable();
	}
loc_82CB1590:
	// mr r16,r28
	r16.u64 = r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r14,r28
	r14.u64 = r28.u64;
	// mr r17,r28
	r17.u64 = r28.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// li r23,-1
	r23.s64 = -1;
	// mr r19,r28
	r19.u64 = r28.u64;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB15B0:
	// cmpwi cr6,r8,32
	cr6.compare<int32_t>(ctx.r8.s32, 32, xer);
	// beq cr6,0x82cb15f8
	if (cr6.eq) goto loc_82CB15F8;
	// cmpwi cr6,r8,35
	cr6.compare<int32_t>(ctx.r8.s32, 35, xer);
	// beq cr6,0x82cb15f0
	if (cr6.eq) goto loc_82CB15F0;
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x82cb15e8
	if (cr6.eq) goto loc_82CB15E8;
	// cmpwi cr6,r8,45
	cr6.compare<int32_t>(ctx.r8.s32, 45, xer);
	// beq cr6,0x82cb15e0
	if (cr6.eq) goto loc_82CB15E0;
	// cmpwi cr6,r8,48
	cr6.compare<int32_t>(ctx.r8.s32, 48, xer);
	// bne cr6,0x82cb1f24
	if (!cr6.eq) goto loc_82CB1F24;
	// ori r25,r25,8
	r25.u64 = r25.u64 | 8;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB15E0:
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB15E8:
	// ori r25,r25,1
	r25.u64 = r25.u64 | 1;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB15F0:
	// ori r25,r25,128
	r25.u64 = r25.u64 | 128;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB15F8:
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB1600:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x82cb162c
	if (!cr6.eq) goto loc_82CB162C;
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r14,4(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bge cr6,0x82cb1f24
	if (!cr6.lt) goto loc_82CB1F24;
	// ori r25,r25,4
	r25.u64 = r25.u64 | 4;
	// neg r14,r14
	r14.s64 = -r14.s64;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB162C:
	// mulli r11,r14,10
	r11.s64 = r14.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r14,r11,-48
	r14.s64 = r11.s64 + -48;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB163C:
	// mr r23,r28
	r23.u64 = r28.u64;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB1644:
	// cmplwi cr6,r8,42
	cr6.compare<uint32_t>(ctx.r8.u32, 42, xer);
	// bne cr6,0x82cb166c
	if (!cr6.eq) goto loc_82CB166C;
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r23,4(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cb1f24
	if (!cr6.lt) goto loc_82CB1F24;
	// li r23,-1
	r23.s64 = -1;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB166C:
	// mulli r11,r23,10
	r11.s64 = r23.s64 * 10;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r23,r11,-48
	r23.s64 = r11.s64 + -48;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB167C:
	// cmpwi cr6,r8,73
	cr6.compare<int32_t>(ctx.r8.s32, 73, xer);
	// beq cr6,0x82cb16cc
	if (cr6.eq) goto loc_82CB16CC;
	// cmpwi cr6,r8,104
	cr6.compare<int32_t>(ctx.r8.s32, 104, xer);
	// beq cr6,0x82cb16c4
	if (cr6.eq) goto loc_82CB16C4;
	// cmpwi cr6,r8,108
	cr6.compare<int32_t>(ctx.r8.s32, 108, xer);
	// beq cr6,0x82cb16a4
	if (cr6.eq) goto loc_82CB16A4;
	// cmpwi cr6,r8,119
	cr6.compare<int32_t>(ctx.r8.s32, 119, xer);
	// bne cr6,0x82cb1f24
	if (!cr6.eq) goto loc_82CB1F24;
	// ori r25,r25,2048
	r25.u64 = r25.u64 | 2048;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB16A4:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bne cr6,0x82cb16bc
	if (!cr6.eq) goto loc_82CB16BC;
	// addi r15,r15,2
	r15.s64 = r15.s64 + 2;
	// ori r25,r25,4096
	r25.u64 = r25.u64 | 4096;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB16BC:
	// ori r25,r25,16
	r25.u64 = r25.u64 | 16;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB16C4:
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB16CC:
	// lhz r11,0(r15)
	r11.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// bne cr6,0x82cb16f0
	if (!cr6.eq) goto loc_82CB16F0;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 2);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x82cb16f0
	if (!cr6.eq) goto loc_82CB16F0;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB16F0:
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(r11.u32, 51, xer);
	// bne cr6,0x82cb1710
	if (!cr6.eq) goto loc_82CB1710;
	// lhz r10,2(r15)
	ctx.r10.u64 = PPC_LOAD_U16(r15.u32 + 2);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x82cb1710
	if (!cr6.eq) goto loc_82CB1710;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// rlwinm r25,r25,0,17,15
	r25.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB1710:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(r11.u32, 105, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
loc_82CB1744:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cb1f24
	goto loc_82CB1F24;
loc_82CB1760:
	// addi r11,r8,-65
	r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// bgt cr6,0x82cb1c84
	if (cr6.gt) goto loc_82CB1C84;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6208
	r12.s64 = r12.s64 + 6208;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,6036
	r12.s64 = r12.s64 + 6036;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CB19A0;
	case 1:
		goto loc_82CB1C84;
	case 2:
		goto loc_82CB1794;
	case 3:
		goto loc_82CB1C84;
	case 4:
		goto loc_82CB19A0;
	case 5:
		goto loc_82CB1C84;
	case 6:
		goto loc_82CB19A0;
	case 7:
		goto loc_82CB1C84;
	case 8:
		goto loc_82CB1C84;
	case 9:
		goto loc_82CB1C84;
	case 10:
		goto loc_82CB1C84;
	case 11:
		goto loc_82CB1C84;
	case 12:
		goto loc_82CB1C84;
	case 13:
		goto loc_82CB1C84;
	case 14:
		goto loc_82CB1C84;
	case 15:
		goto loc_82CB1C84;
	case 16:
		goto loc_82CB1C84;
	case 17:
		goto loc_82CB1C84;
	case 18:
		goto loc_82CB188C;
	case 19:
		goto loc_82CB1C84;
	case 20:
		goto loc_82CB1C84;
	case 21:
		goto loc_82CB1C84;
	case 22:
		goto loc_82CB1C84;
	case 23:
		goto loc_82CB1AE4;
	case 24:
		goto loc_82CB1C84;
	case 25:
		goto loc_82CB180C;
	case 26:
		goto loc_82CB1C84;
	case 27:
		goto loc_82CB1C84;
	case 28:
		goto loc_82CB1C84;
	case 29:
		goto loc_82CB1C84;
	case 30:
		goto loc_82CB1C84;
	case 31:
		goto loc_82CB1C84;
	case 32:
		goto loc_82CB19AC;
	case 33:
		goto loc_82CB1C84;
	case 34:
		goto loc_82CB17A4;
	case 35:
		goto loc_82CB1AD4;
	case 36:
		goto loc_82CB19AC;
	case 37:
		goto loc_82CB19AC;
	case 38:
		goto loc_82CB19AC;
	case 39:
		goto loc_82CB1C84;
	case 40:
		goto loc_82CB1AD4;
	case 41:
		goto loc_82CB1C84;
	case 42:
		goto loc_82CB1C84;
	case 43:
		goto loc_82CB1C84;
	case 44:
		goto loc_82CB1C84;
	case 45:
		goto loc_82CB1964;
	case 46:
		goto loc_82CB1B18;
	case 47:
		goto loc_82CB1AE0;
	case 48:
		goto loc_82CB1C84;
	case 49:
		goto loc_82CB1C84;
	case 50:
		goto loc_82CB189C;
	case 51:
		goto loc_82CB1C84;
	case 52:
		goto loc_82CB1AD8;
	case 53:
		goto loc_82CB1C84;
	case 54:
		goto loc_82CB1C84;
	case 55:
		goto loc_82CB1AEC;
	default:
		__builtin_unreachable();
	}
loc_82CB1794:
	// andi. r11,r25,2096
	r11.u64 = r25.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb17a4
	if (!cr0.eq) goto loc_82CB17A4;
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
loc_82CB17A4:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// li r26,1
	r26.s64 = 1;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mr r19,r26
	r19.u64 = r26.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// beq 0x82cb1800
	if (cr0.eq) goto loc_82CB1800;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r28.u8);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82cb1804
	if (!cr0.lt) goto loc_82CB1804;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// b 0x82cb1804
	goto loc_82CB1804;
loc_82CB1800:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r11.u16);
loc_82CB1804:
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB180C:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb185c
	if (cr6.eq) goto loc_82CB185C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb185c
	if (cr6.eq) goto loc_82CB185C;
	// rlwinm. r9,r25,0,20,20
	ctx.r9.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// beq 0x82cb1850
	if (cr0.eq) goto loc_82CB1850;
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r19,1
	r19.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r26,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r26.s64 = temp.s64;
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB1850:
	// lha r26,0(r11)
	r26.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// mr r19,r28
	r19.u64 = r28.u64;
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB185C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r27,4072(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4072) );
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82CB186C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb186c
	if (!cr6.eq) goto loc_82CB186C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82CB1880:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r26,r11,0
	r26.u64 = rotl32(r11.u32, 0);
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB188C:
	// andi. r11,r25,2096
	r11.u64 = r25.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb189c
	if (!cr0.eq) goto loc_82CB189C;
	// ori r25,r25,32
	r25.u64 = r25.u64 | 32;
loc_82CB189C:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x82cb18b0
	if (!cr6.eq) goto loc_82CB18B0;
	// lis r30,32767
	r30.s64 = 2147418112;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// b 0x82cb18b4
	goto loc_82CB18B4;
loc_82CB18B0:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82CB18B4:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm. r10,r25,0,26,26
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82cb1924
	if (cr0.eq) goto loc_82CB1924;
	// bne cr6,0x82cb18dc
	if (!cr6.eq) goto loc_82CB18DC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r27,4072(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4072) );
loc_82CB18DC:
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82cb1c84
	if (!cr6.gt) goto loc_82CB1C84;
loc_82CB18EC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cb1c84
	if (cr0.eq) goto loc_82CB1C84;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb1910
	if (cr0.eq) goto loc_82CB1910;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82CB1910:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(r26.s32, r30.s32, xer);
	// blt cr6,0x82cb18ec
	if (cr6.lt) goto loc_82CB18EC;
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB1924:
	// bne cr6,0x82cb1930
	if (!cr6.eq) goto loc_82CB1930;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r27,4076(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4076) );
loc_82CB1930:
	// li r19,1
	r19.s64 = 1;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x82cb1950
	goto loc_82CB1950;
loc_82CB193C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82cb1958
	if (cr0.eq) goto loc_82CB1958;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82CB1950:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82cb193c
	if (!cr6.eq) goto loc_82CB193C;
loc_82CB1958:
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r26,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r26.s64 = r11.s32 >> 1;
	// b 0x82cb1c84
	goto loc_82CB1C84;
loc_82CB1964:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82ca2b88
	sub_82CA2B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb147c
	if (cr0.eq) goto loc_82CB147C;
	// rlwinm. r11,r25,0,26,26
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1990
	if (cr0.eq) goto loc_82CB1990;
	// sth r20,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r20.u16);
	// b 0x82cb1994
	goto loc_82CB1994;
loc_82CB1990:
	// stw r20,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r20.u32);
loc_82CB1994:
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x82cb1f08
	goto loc_82CB1F08;
loc_82CB19A0:
	// addi r11,r8,32
	r11.s64 = ctx.r8.s64 + 32;
	// li r16,1
	r16.s64 = 1;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
loc_82CB19AC:
	// ori r25,r25,64
	r25.u64 = r25.u64 | 64;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cb19c8
	if (!cr6.lt) goto loc_82CB19C8;
	// li r23,6
	r23.s64 = 6;
	// b 0x82cb1a1c
	goto loc_82CB1A1C;
loc_82CB19C8:
	// bne cr6,0x82cb19e0
	if (!cr6.eq) goto loc_82CB19E0;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bne cr6,0x82cb1a1c
	if (!cr6.eq) goto loc_82CB1A1C;
	// li r23,1
	r23.s64 = 1;
	// b 0x82cb1a1c
	goto loc_82CB1A1C;
loc_82CB19E0:
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(r23.s32, 512, xer);
	// ble cr6,0x82cb19ec
	if (!cr6.gt) goto loc_82CB19EC;
	// li r23,512
	r23.s64 = 512;
loc_82CB19EC:
	// cmpwi cr6,r23,163
	cr6.compare<int32_t>(r23.s32, 163, xer);
	// ble cr6,0x82cb1a1c
	if (!cr6.gt) goto loc_82CB1A1C;
	// addi r31,r23,349
	r31.s64 = r23.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca3c68
	sub_82CA3C68(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb1a18
	if (cr0.eq) goto loc_82CB1A18;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82cb1a1c
	goto loc_82CB1A1C;
loc_82CB1A18:
	// li r23,163
	r23.s64 = 163;
loc_82CB1A1C:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// lwz r10,24(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + int32_t(24) );
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r31,r25,0,24,24
	r31.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cb1a7c
	if (cr0.eq) goto loc_82CB1A7C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82cb1a7c
	if (!cr6.eq) goto loc_82CB1A7C;
	// lwz r11,36(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(36) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CB1A7C:
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bne cr6,0x82cb1aa4
	if (!cr6.eq) goto loc_82CB1AA4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82cb1aa4
	if (!cr6.eq) goto loc_82CB1AA4;
	// lwz r11,32(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(32) );
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CB1AA4:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82cb1ab8
	if (!cr6.eq) goto loc_82CB1AB8;
	// ori r25,r25,256
	r25.u64 = r25.u64 | 256;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82CB1AB8:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82CB1ABC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cb1abc
	if (!cr6.eq) goto loc_82CB1ABC;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// b 0x82cb1880
	goto loc_82CB1880;
loc_82CB1AD4:
	// ori r25,r25,64
	r25.u64 = r25.u64 | 64;
loc_82CB1AD8:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82cb1b28
	goto loc_82CB1B28;
loc_82CB1AE0:
	// li r23,8
	r23.s64 = 8;
loc_82CB1AE4:
	// li r31,7
	r31.s64 = 7;
	// b 0x82cb1af0
	goto loc_82CB1AF0;
loc_82CB1AEC:
	// li r31,39
	r31.s64 = 39;
loc_82CB1AF0:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// rlwinm. r11,r25,0,24,24
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82cb1b28
	if (cr0.eq) goto loc_82CB1B28;
	// addi r11,r31,81
	r11.s64 = r31.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r17,2
	r17.s64 = 2;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, r11.u16);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// b 0x82cb1b28
	goto loc_82CB1B28;
loc_82CB1B18:
	// rlwinm. r11,r25,0,24,24
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82cb1b28
	if (cr0.eq) goto loc_82CB1B28;
	// ori r25,r25,512
	r25.u64 = r25.u64 | 512;
loc_82CB1B28:
	// rlwinm. r11,r25,0,16,16
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb1b38
	if (!cr0.eq) goto loc_82CB1B38;
	// rlwinm. r11,r25,0,19,19
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1b4c
	if (cr0.eq) goto loc_82CB1B4C;
loc_82CB1B38:
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// b 0x82cb1b9c
	goto loc_82CB1B9C;
loc_82CB1B4C:
	// rlwinm. r11,r25,0,26,26
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1b7c
	if (cr0.eq) goto loc_82CB1B7C;
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// beq 0x82cb1b74
	if (cr0.eq) goto loc_82CB1B74;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x82cb1b9c
	goto loc_82CB1B9C;
loc_82CB1B74:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x82cb1b9c
	goto loc_82CB1B9C;
loc_82CB1B7C:
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r24,7
	r11.s64 = r24.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r24,r11,8
	r24.s64 = r11.s64 + 8;
	// beq 0x82cb1b98
	if (cr0.eq) goto loc_82CB1B98;
	// lwa r11,4(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// b 0x82cb1b9c
	goto loc_82CB1B9C;
loc_82CB1B98:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
loc_82CB1B9C:
	// rlwinm. r10,r25,0,25,25
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb1bb4
	if (cr0.eq) goto loc_82CB1BB4;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x82cb1bb4
	if (!cr6.lt) goto loc_82CB1BB4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// ori r25,r25,256
	r25.u64 = r25.u64 | 256;
loc_82CB1BB4:
	// rlwinm. r10,r25,0,16,16
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cb1bc8
	if (!cr0.eq) goto loc_82CB1BC8;
	// rlwinm. r10,r25,0,19,19
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82cb1bc8
	if (!cr0.eq) goto loc_82CB1BC8;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
loc_82CB1BC8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bge cr6,0x82cb1bd8
	if (!cr6.lt) goto loc_82CB1BD8;
	// li r23,1
	r23.s64 = 1;
	// b 0x82cb1be8
	goto loc_82CB1BE8;
loc_82CB1BD8:
	// rlwinm r25,r25,0,29,27
	r25.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r23,512
	cr6.compare<int32_t>(r23.s32, 512, xer);
	// ble cr6,0x82cb1be8
	if (!cr6.gt) goto loc_82CB1BE8;
	// li r23,512
	r23.s64 = 512;
loc_82CB1BE8:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x82cb1bf4
	if (!cr6.eq) goto loc_82CB1BF4;
	// mr r17,r28
	r17.u64 = r28.u64;
loc_82CB1BF4:
	// addi r9,r1,639
	ctx.r9.s64 = ctx.r1.s64 + 639;
loc_82CB1BF8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// bgt cr6,0x82cb1c0c
	if (cr6.gt) goto loc_82CB1C0C;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82cb1c4c
	if (cr6.eq) goto loc_82CB1C4C;
loc_82CB1C0C:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	r11.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = rotl32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// ble cr6,0x82cb1c3c
	if (!cr6.gt) goto loc_82CB1C3C;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_82CB1C3C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82cb1bf8
	goto loc_82CB1BF8;
loc_82CB1C4C:
	// addi r11,r1,639
	r11.s64 = ctx.r1.s64 + 639;
	// rlwinm. r10,r25,0,22,22
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r26,r9,r11
	r26.s64 = r11.s64 - ctx.r9.s64;
	// addi r27,r9,1
	r27.s64 = ctx.r9.s64 + 1;
	// beq 0x82cb1c84
	if (cr0.eq) goto loc_82CB1C84;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82cb1c74
	if (cr6.eq) goto loc_82CB1C74;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x82cb1c84
	if (cr6.eq) goto loc_82CB1C84;
loc_82CB1C74:
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// li r11,48
	r11.s64 = 48;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_82CB1C84:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb1f08
	if (!cr6.eq) goto loc_82CB1F08;
	// rlwinm. r11,r25,0,25,25
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1ccc
	if (cr0.eq) goto loc_82CB1CCC;
	// rlwinm. r11,r25,0,23,23
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1ca8
	if (cr0.eq) goto loc_82CB1CA8;
	// li r11,45
	r11.s64 = 45;
	// b 0x82cb1cc4
	goto loc_82CB1CC4;
loc_82CB1CA8:
	// clrlwi. r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1cb8
	if (cr0.eq) goto loc_82CB1CB8;
	// li r11,43
	r11.s64 = 43;
	// b 0x82cb1cc4
	goto loc_82CB1CC4;
loc_82CB1CB8:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1ccc
	if (cr0.eq) goto loc_82CB1CCC;
	// li r11,32
	r11.s64 = 32;
loc_82CB1CC4:
	// li r17,1
	r17.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
loc_82CB1CCC:
	// subf r11,r26,r14
	r11.s64 = r14.s64 - r26.s64;
	// rlwinm. r10,r25,0,28,29
	ctx.r10.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r28,r17,r11
	r28.s64 = r11.s64 - r17.s64;
	// bne 0x82cb1d10
	if (!cr0.eq) goto loc_82CB1D10;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cb1d10
	if (!cr6.gt) goto loc_82CB1D10;
loc_82CB1CE8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// beq cr6,0x82cb1d10
	if (cr6.eq) goto loc_82CB1D10;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cb1ce8
	if (cr6.gt) goto loc_82CB1CE8;
loc_82CB1D10:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// mr r30,r17
	r30.u64 = r17.u64;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1d3c
	if (cr0.eq) goto loc_82CB1D3C;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb1d3c
	if (!cr6.eq) goto loc_82CB1D3C;
	// add r20,r20,r17
	r20.u64 = r20.u64 + r17.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// b 0x82cb1d94
	goto loc_82CB1D94;
loc_82CB1D3C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// ble cr6,0x82cb1d94
	if (!cr6.gt) goto loc_82CB1D94;
loc_82CB1D44:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// bne cr6,0x82cb1d8c
	if (!cr6.eq) goto loc_82CB1D8C;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x82cb1d94
	if (!cr6.eq) goto loc_82CB1D94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CB1D8C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82cb1d44
	if (cr6.gt) goto loc_82CB1D44;
loc_82CB1D94:
	// rlwinm. r11,r25,0,28,28
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1dd8
	if (cr0.eq) goto loc_82CB1DD8;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb1dd8
	if (!cr0.eq) goto loc_82CB1DD8;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cb1dd8
	if (!cr6.gt) goto loc_82CB1DD8;
loc_82CB1DB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// beq cr6,0x82cb1dd8
	if (cr6.eq) goto loc_82CB1DD8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cb1db0
	if (cr6.gt) goto loc_82CB1DB0;
loc_82CB1DD8:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// bne cr6,0x82cb1e40
	if (!cr6.eq) goto loc_82CB1E40;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82cb1e40
	if (!cr6.gt) goto loc_82CB1E40;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82CB1DF0:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82cb1e38
	if (!cr0.gt) goto loc_82CB1E38;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cb1df0
	if (cr6.gt) goto loc_82CB1DF0;
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// b 0x82cb1ec4
	goto loc_82CB1EC4;
loc_82CB1E38:
	// li r20,-1
	r20.s64 = -1;
	// b 0x82cb1e64
	goto loc_82CB1E64;
loc_82CB1E40:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(12) );
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1e6c
	if (cr0.eq) goto loc_82CB1E6C;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb1e6c
	if (!cr6.eq) goto loc_82CB1E6C;
	// add r20,r26,r20
	r20.u64 = r26.u64 + r20.u64;
loc_82CB1E64:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// b 0x82cb1ec4
	goto loc_82CB1EC4;
loc_82CB1E6C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82cb1ec4
	if (!cr6.gt) goto loc_82CB1EC4;
loc_82CB1E74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// bne cr6,0x82cb1ebc
	if (!cr6.eq) goto loc_82CB1EBC;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x82cb1f08
	if (!cr6.eq) goto loc_82CB1F08;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CB1EBC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82cb1e74
	if (cr6.gt) goto loc_82CB1E74;
loc_82CB1EC4:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// blt cr6,0x82cb1f08
	if (cr6.lt) goto loc_82CB1F08;
	// rlwinm. r11,r25,0,29,29
	r11.u64 = rotl64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb1f08
	if (cr0.eq) goto loc_82CB1F08;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82cb1f08
	if (!cr6.gt) goto loc_82CB1F08;
loc_82CB1EE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x82cacc58
	sub_82CACC58(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// beq cr6,0x82cb1f08
	if (cr6.eq) goto loc_82CB1F08;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x82cb1ee0
	if (cr6.gt) goto loc_82CB1EE0;
loc_82CB1F08:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb1f24
	if (cr6.eq) goto loc_82CB1F24;
	// rotlwi r3,r11,0
	ctx.r3.u64 = rotl32(r11.u32, 0);
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82CB1F24:
	// lhz r29,0(r15)
	r29.u64 = PPC_LOAD_U16(r15.u32 + 0);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// mr. r8,r29
	ctx.r8.u64 = r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cb1f44
	if (cr0.eq) goto loc_82CB1F44;
	// lwz r31,108(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// li r28,0
	r28.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// b 0x82cb1514
	goto loc_82CB1514;
loc_82CB1F44:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82cb1f54
	if (cr6.eq) goto loc_82CB1F54;
	// cmpwi cr6,r7,7
	cr6.compare<int32_t>(ctx.r7.s32, 7, xer);
	// bne cr6,0x82cb147c
	if (!cr6.eq) goto loc_82CB147C;
loc_82CB1F54:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// b 0x82cb1f90
	goto loc_82CB1F90;
loc_82CB1F5C:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82cb81b8
	sub_82CB81B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82cb1f84
	if (!cr6.eq) goto loc_82CB1F84;
	// li r31,511
	r31.s64 = 511;
	// sth r28,2174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2174, r28.u16);
loc_82CB1F84:
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82cc1798
	sub_82CC1798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82CB1F90:
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82CB1438) {
	__imp__sub_82CB1438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB1F98) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82cb202c
	if (!cr6.eq) goto loc_82CB202C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82cb2008
	if (!cr6.eq) goto loc_82CB2008;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82caae18
	sub_82CAAE18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cb1fec
	if (!cr0.eq) goto loc_82CB1FEC;
loc_82CB1FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb2030
	goto loc_82CB2030;
loc_82CB1FEC:
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// b 0x82cb2020
	goto loc_82CB2020;
loc_82CB2008:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82ca8660
	sub_82CA8660(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb1fe4
	if (cr0.eq) goto loc_82CB1FE4;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82CB2020:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82CB202C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CB2030:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82CB1F98) {
	__imp__sub_82CB1F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB2038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// li r23,0
	r23.s64 = 0;
	// li r11,350
	r11.s64 = 350;
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r28.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// sth r23,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r23.u16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82cb20a4
	if (!cr6.eq) goto loc_82CB20A4;
loc_82CB2078:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CB209C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb3258
	goto loc_82CB3258;
loc_82CB20A4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cb2078
	if (cr6.eq) goto loc_82CB2078;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb2178
	if (!cr0.eq) goto loc_82CB2178;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,29632
	r30.s64 = r11.s64 + 29632;
	// addi r29,r10,-2648
	r29.s64 = ctx.r10.s64 + -2648;
	// beq cr6,0x82cb2110
	if (cr6.eq) goto loc_82CB2110;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb2110
	if (cr6.eq) goto loc_82CB2110;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb2114
	goto loc_82CB2114;
loc_82CB2110:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CB2114:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb2078
	if (!cr0.eq) goto loc_82CB2078;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb2168
	if (cr6.eq) goto loc_82CB2168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb2168
	if (cr6.eq) goto loc_82CB2168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb216c
	goto loc_82CB216C;
loc_82CB2168:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CB216C:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb2078
	if (!cr0.eq) goto loc_82CB2078;
loc_82CB2178:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r14,r23
	r14.u64 = r23.u64;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82cb3254
	if (cr0.eq) goto loc_82CB3254;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,-3224
	r11.s64 = r11.s64 + -3224;
	// addi r10,r10,-3832
	ctx.r10.s64 = ctx.r10.s64 + -3832;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82CB21AC:
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb222c
	if (cr0.eq) goto loc_82CB222C;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
loc_82CB21BC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb21e4
	if (cr0.lt) goto loc_82CB21E4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb21f0
	goto loc_82CB21F0;
loc_82CB21E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CB21F0:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82cb2214
	if (cr6.eq) goto loc_82CB2214;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb21bc
	if (!cr0.eq) goto loc_82CB21BC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB2214:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2214
	if (!cr0.eq) goto loc_82CB2214;
	// b 0x82cb31e8
	goto loc_82CB31E8;
loc_82CB222C:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x82cb3120
	if (!cr6.eq) goto loc_82CB3120;
	// li r27,0
	r27.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// mr r22,r27
	r22.u64 = r27.u64;
	// mr r18,r27
	r18.u64 = r27.u64;
	// mr r17,r27
	r17.u64 = r27.u64;
	// mr r16,r27
	r16.u64 = r27.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// mr r20,r27
	r20.u64 = r27.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82CB226C:
	// addi r11,r19,1
	r11.s64 = r19.s64 + 1;
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r11.u32);
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb229c
	if (cr0.eq) goto loc_82CB229C;
	// mulli r11,r16,10
	r11.s64 = r16.s64 * 10;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r16,r11,-48
	r16.s64 = r11.s64 + -48;
	// b 0x82cb23bc
	goto loc_82CB23BC;
loc_82CB229C:
	// cmpwi cr6,r31,78
	cr6.compare<int32_t>(r31.s32, 78, xer);
	// bgt cr6,0x82cb2354
	if (cr6.gt) goto loc_82CB2354;
	// beq cr6,0x82cb23bc
	if (cr6.eq) goto loc_82CB23BC;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(r31.s32, 42, xer);
	// beq cr6,0x82cb2348
	if (cr6.eq) goto loc_82CB2348;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(r31.s32, 70, xer);
	// beq cr6,0x82cb23bc
	if (cr6.eq) goto loc_82CB23BC;
	// cmpwi cr6,r31,73
	cr6.compare<int32_t>(r31.s32, 73, xer);
	// beq cr6,0x82cb22d0
	if (cr6.eq) goto loc_82CB22D0;
	// cmpwi cr6,r31,76
	cr6.compare<int32_t>(r31.s32, 76, xer);
	// bne cr6,0x82cb236c
	if (!cr6.eq) goto loc_82CB236C;
	// addi r11,r15,1
	r11.s64 = r15.s64 + 1;
	// b 0x82cb23b8
	goto loc_82CB23B8;
loc_82CB22D0:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bne cr6,0x82cb2304
	if (!cr6.eq) goto loc_82CB2304;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(r19.u32 + 2);
	// addi r11,r19,2
	r11.s64 = r19.s64 + 2;
	// cmplwi cr6,r9,52
	cr6.compare<uint32_t>(ctx.r9.u32, 52, xer);
	// bne cr6,0x82cb2304
	if (!cr6.eq) goto loc_82CB2304;
loc_82CB22F0:
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r27.u64);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_82CB22F8:
	// mr r19,r11
	r19.u64 = r11.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// b 0x82cb23c0
	goto loc_82CB23C0;
loc_82CB2304:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x82cb231c
	if (!cr6.eq) goto loc_82CB231C;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(r19.u32 + 2);
	// addi r11,r19,2
	r11.s64 = r19.s64 + 2;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// beq cr6,0x82cb22f8
	if (cr6.eq) goto loc_82CB22F8;
loc_82CB231C:
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// beq cr6,0x82cb23c0
	if (cr6.eq) goto loc_82CB23C0;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, xer);
	// beq cr6,0x82cb23c0
	if (cr6.eq) goto loc_82CB23C0;
	// cmplwi cr6,r10,111
	cr6.compare<uint32_t>(ctx.r10.u32, 111, xer);
	// beq cr6,0x82cb23c0
	if (cr6.eq) goto loc_82CB23C0;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x82cb23c0
	if (cr6.eq) goto loc_82CB23C0;
	// cmplwi cr6,r10,88
	cr6.compare<uint32_t>(ctx.r10.u32, 88, xer);
	// bne cr6,0x82cb2370
	if (!cr6.eq) goto loc_82CB2370;
	// b 0x82cb23c0
	goto loc_82CB23C0;
loc_82CB2348:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
	// b 0x82cb23bc
	goto loc_82CB23BC;
loc_82CB2354:
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(r31.s32, 104, xer);
	// beq cr6,0x82cb23ac
	if (cr6.eq) goto loc_82CB23AC;
	// cmpwi cr6,r31,108
	cr6.compare<int32_t>(r31.s32, 108, xer);
	// beq cr6,0x82cb237c
	if (cr6.eq) goto loc_82CB237C;
	// cmpwi cr6,r31,119
	cr6.compare<int32_t>(r31.s32, 119, xer);
	// beq cr6,0x82cb239c
	if (cr6.eq) goto loc_82CB239C;
loc_82CB236C:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB2370:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// extsb r30,r11
	r30.s64 = r11.s8;
	// b 0x82cb23c0
	goto loc_82CB23C0;
loc_82CB237C:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// addi r11,r19,1
	r11.s64 = r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// beq cr6,0x82cb22f0
	if (cr6.eq) goto loc_82CB22F0;
	// addi r11,r15,1
	r11.s64 = r15.s64 + 1;
	// extsb r15,r11
	r15.s64 = r11.s8;
	// b 0x82cb23a0
	goto loc_82CB23A0;
loc_82CB239C:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB23A0:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// extsb r28,r11
	r28.s64 = r11.s8;
	// b 0x82cb23c0
	goto loc_82CB23C0;
loc_82CB23AC:
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// addi r11,r15,-1
	r11.s64 = r15.s64 + -1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_82CB23B8:
	// extsb r15,r11
	r15.s64 = r11.s8;
loc_82CB23BC:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB23C0:
	// extsb. r11,r30
	r11.s64 = r30.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb226c
	if (cr0.eq) goto loc_82CB226C;
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bne 0x82cb23f8
	if (!cr0.eq) goto loc_82CB23F8;
	// lwz r11,732(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(732) );
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// rlwinm r11,r10,0,0,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x82cb23fc
	goto loc_82CB23FC;
loc_82CB23F8:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
loc_82CB23FC:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// bne 0x82cb2424
	if (!cr0.eq) goto loc_82CB2424;
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x82cb2420
	if (cr6.eq) goto loc_82CB2420;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// li r28,-1
	r28.s64 = -1;
	// bne cr6,0x82cb2424
	if (!cr6.eq) goto loc_82CB2424;
loc_82CB2420:
	// li r28,1
	r28.s64 = 1;
loc_82CB2424:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	r19.u64 = r11.u64 | 32;
	// cmpwi cr6,r19,110
	cr6.compare<int32_t>(r19.s32, 110, xer);
	// beq cr6,0x82cb24dc
	if (cr6.eq) goto loc_82CB24DC;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// beq cr6,0x82cb249c
	if (cr6.eq) goto loc_82CB249C;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// beq cr6,0x82cb249c
	if (cr6.eq) goto loc_82CB249C;
loc_82CB2448:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2470
	if (cr0.lt) goto loc_82CB2470;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb247c
	goto loc_82CB247C;
loc_82CB2470:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CB247C:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82cb2494
	if (cr6.eq) goto loc_82CB2494;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2448
	if (!cr0.eq) goto loc_82CB2448;
loc_82CB2494:
	// mr r23,r31
	r23.u64 = r31.u64;
	// b 0x82cb24d0
	goto loc_82CB24D0;
loc_82CB249C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb24c4
	if (cr0.lt) goto loc_82CB24C4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb24d0
	goto loc_82CB24D0;
loc_82CB24C4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB24D0:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb321c
	if (cr6.eq) goto loc_82CB321C;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB24DC:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb24ec
	if (cr6.eq) goto loc_82CB24EC;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3208
	if (cr6.eq) goto loc_82CB3208;
loc_82CB24EC:
	// addi r11,r19,-99
	r11.s64 = r19.s64 + -99;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// bgt cr6,0x82cb30d4
	if (cr6.gt) goto loc_82CB30D4;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6464
	r12.s64 = r12.s64 + 6464;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,9504
	r12.s64 = r12.s64 + 9504;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CB2520;
	case 1:
		goto loc_82CB29C0;
	case 2:
		goto loc_82CB2CFC;
	case 3:
		goto loc_82CB2CFC;
	case 4:
		goto loc_82CB2CFC;
	case 5:
		goto loc_82CB30D4;
	case 6:
		goto loc_82CB2860;
	case 7:
		goto loc_82CB30D4;
	case 8:
		goto loc_82CB30D4;
	case 9:
		goto loc_82CB30D4;
	case 10:
		goto loc_82CB30D4;
	case 11:
		goto loc_82CB2CAC;
	case 12:
		goto loc_82CB29C0;
	case 13:
		goto loc_82CB29BC;
	case 14:
		goto loc_82CB30D4;
	case 15:
		goto loc_82CB30D4;
	case 16:
		goto loc_82CB2530;
	case 17:
		goto loc_82CB30D4;
	case 18:
		goto loc_82CB29C0;
	case 19:
		goto loc_82CB30D4;
	case 20:
		goto loc_82CB30D4;
	case 21:
		goto loc_82CB2864;
	case 22:
		goto loc_82CB30D4;
	case 23:
		goto loc_82CB30D4;
	case 24:
		goto loc_82CB2540;
	default:
		__builtin_unreachable();
	}
loc_82CB2520:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82cb2530
	if (!cr6.eq) goto loc_82CB2530;
	// li r17,1
	r17.s64 = 1;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
loc_82CB2530:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82cb2684
	if (!cr0.gt) goto loc_82CB2684;
	// li r24,1
	r24.s64 = 1;
	// b 0x82cb2684
	goto loc_82CB2684;
loc_82CB2540:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82cb254c
	if (!cr0.gt) goto loc_82CB254C;
	// li r24,1
	r24.s64 = 1;
loc_82CB254C:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(r11.u32, 94, xer);
	// bne cr6,0x82cb2568
	if (!cr6.eq) goto loc_82CB2568;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	r25.s64 = -1;
loc_82CB2568:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
	// std r6,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r6.u64);
	// std r6,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r6.u64);
	// bne cr6,0x82cb25a4
	if (!cr6.eq) goto loc_82CB25A4;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x82cb25a4
	if (!cr6.eq) goto loc_82CB25A4;
	// li r11,32
	r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r11.u8);
loc_82CB25A4:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x82cb266c
	if (cr6.eq) goto loc_82CB266C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CB25B4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// bne cr6,0x82cb2640
	if (!cr6.eq) goto loc_82CB2640;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb2640
	if (cr0.eq) goto loc_82CB2640;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x82cb2640
	if (cr6.eq) goto loc_82CB2640;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cb25f4
	if (!cr6.lt) goto loc_82CB25F4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82cb25fc
	goto loc_82CB25FC;
loc_82CB25F4:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82CB25FC:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82cb2638
	if (cr6.gt) goto loc_82CB2638;
loc_82CB260C:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = r11.u32 & 0x7;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// slw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// stbx r4,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// ble cr6,0x82cb260c
	if (!cr6.gt) goto loc_82CB260C;
loc_82CB2638:
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// b 0x82cb2660
	goto loc_82CB2660;
loc_82CB2640:
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// slw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82CB2660:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x82cb25b4
	if (!cr6.eq) goto loc_82CB25B4;
loc_82CB266C:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// bne cr6,0x82cb2684
	if (!cr6.eq) goto loc_82CB2684;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_82CB2684:
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// beq cr6,0x82cb26a4
	if (cr6.eq) goto loc_82CB26A4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB26A4:
	// lwz r29,124(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
loc_82CB26A8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb26bc
	if (cr6.eq) goto loc_82CB26BC;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// beq cr6,0x82cb2814
	if (cr6.eq) goto loc_82CB2814;
loc_82CB26BC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb26e4
	if (cr0.lt) goto loc_82CB26E4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb26f0
	goto loc_82CB26F0;
loc_82CB26E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB26F0:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb27fc
	if (cr6.eq) goto loc_82CB27FC;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// beq cr6,0x82cb2754
	if (cr6.eq) goto loc_82CB2754;
	// cmpwi cr6,r19,115
	cr6.compare<int32_t>(r19.s32, 115, xer);
	// bne cr6,0x82cb2720
	if (!cr6.eq) goto loc_82CB2720;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(r23.s32, 9, xer);
	// blt cr6,0x82cb2718
	if (cr6.lt) goto loc_82CB2718;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// ble cr6,0x82cb27fc
	if (!cr6.gt) goto loc_82CB27FC;
loc_82CB2718:
	// cmpwi cr6,r23,32
	cr6.compare<int32_t>(r23.s32, 32, xer);
	// bne cr6,0x82cb2754
	if (!cr6.eq) goto loc_82CB2754;
loc_82CB2720:
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// bne cr6,0x82cb27fc
	if (!cr6.eq) goto loc_82CB27FC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r23,3
	xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7) != 0);
	r11.s64 = r23.s32 >> 3;
	// clrlwi r9,r23,29
	ctx.r9.u64 = r23.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	r11.s64 = r11.s8;
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb27fc
	if (cr0.eq) goto loc_82CB27FC;
loc_82CB2754:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb27f4
	if (!cr6.eq) goto loc_82CB27F4;
	// extsb. r11,r24
	r11.s64 = r24.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb27e0
	if (cr0.eq) goto loc_82CB27E0;
	// stb r23,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r23.u8);
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb27b0
	if (cr0.eq) goto loc_82CB27B0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb27a4
	if (cr0.lt) goto loc_82CB27A4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb27ac
	goto loc_82CB27AC;
loc_82CB27A4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
loc_82CB27AC:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_82CB27B0:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82cb27ec
	goto loc_82CB27EC;
loc_82CB27E0:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82CB27EC:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// b 0x82cb26a8
	goto loc_82CB26A8;
loc_82CB27F4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82cb26a8
	goto loc_82CB26A8;
loc_82CB27FC:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb2814
	if (cr6.eq) goto loc_82CB2814;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB2814:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82cb321c
	if (cr6.eq) goto loc_82CB321C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb3100
	if (!cr6.eq) goto loc_82CB3100;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82cb3100
	if (cr6.eq) goto loc_82CB3100;
	// extsb. r11,r24
	r11.s64 = r24.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// beq 0x82cb2854
	if (cr0.eq) goto loc_82CB2854;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB2854:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB2860:
	// li r19,100
	r19.s64 = 100;
loc_82CB2864:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x82cb2874
	if (!cr6.eq) goto loc_82CB2874;
	// li r20,1
	r20.s64 = 1;
	// b 0x82cb287c
	goto loc_82CB287C;
loc_82CB2874:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x82cb28c8
	if (!cr6.eq) goto loc_82CB28C8;
loc_82CB287C:
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// bne 0x82cb2894
	if (!cr0.eq) goto loc_82CB2894;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb2894
	if (cr6.eq) goto loc_82CB2894;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb28c8
	goto loc_82CB28C8;
loc_82CB2894:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb28bc
	if (cr0.lt) goto loc_82CB28BC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb28c8
	goto loc_82CB28C8;
loc_82CB28BC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB28C8:
	// cmpwi cr6,r23,48
	cr6.compare<int32_t>(r23.s32, 48, xer);
	// bne cr6,0x82cb2a24
	if (!cr6.eq) goto loc_82CB2A24;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb28f8
	if (cr0.lt) goto loc_82CB28F8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2904
	goto loc_82CB2904;
loc_82CB28F8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2904:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82cb2964
	if (cr6.eq) goto loc_82CB2964;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82cb2964
	if (cr6.eq) goto loc_82CB2964;
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x82cb2944
	if (cr6.eq) goto loc_82CB2944;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb293c
	if (cr6.eq) goto loc_82CB293C;
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// bne 0x82cb293c
	if (!cr0.eq) goto loc_82CB293C;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB293C:
	// li r19,111
	r19.s64 = 111;
	// b 0x82cb2a24
	goto loc_82CB2A24;
loc_82CB2944:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb295c
	if (cr6.eq) goto loc_82CB295C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB295C:
	// li r23,48
	r23.s64 = 48;
	// b 0x82cb2a24
	goto loc_82CB2A24;
loc_82CB2964:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb298c
	if (cr0.lt) goto loc_82CB298C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2998
	goto loc_82CB2998;
loc_82CB298C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2998:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb29b4
	if (cr6.eq) goto loc_82CB29B4;
	// addi r16,r16,-2
	r16.s64 = r16.s64 + -2;
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// bge cr6,0x82cb29b4
	if (!cr6.lt) goto loc_82CB29B4;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB29B4:
	// li r19,120
	r19.s64 = 120;
	// b 0x82cb2a24
	goto loc_82CB2A24;
loc_82CB29BC:
	// li r15,1
	r15.s64 = 1;
loc_82CB29C0:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x82cb29d0
	if (!cr6.eq) goto loc_82CB29D0;
	// li r20,1
	r20.s64 = 1;
	// b 0x82cb29d8
	goto loc_82CB29D8;
loc_82CB29D0:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x82cb2a24
	if (!cr6.eq) goto loc_82CB2A24;
loc_82CB29D8:
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// bne 0x82cb29f0
	if (!cr0.eq) goto loc_82CB29F0;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb29f0
	if (cr6.eq) goto loc_82CB29F0;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb2a24
	goto loc_82CB2A24;
loc_82CB29F0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2a18
	if (cr0.lt) goto loc_82CB2A18;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2a24
	goto loc_82CB2A24;
loc_82CB2A18:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2A24:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82cb2b6c
	if (cr6.eq) goto loc_82CB2B6C;
	// bne 0x82cb2b54
	if (!cr0.eq) goto loc_82CB2B54;
loc_82CB2A34:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x82cb2a80
	if (cr6.eq) goto loc_82CB2A80;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(r19.s32, 112, xer);
	// beq cr6,0x82cb2a80
	if (cr6.eq) goto loc_82CB2A80;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb2abc
	if (cr0.eq) goto loc_82CB2ABC;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(r19.s32, 111, xer);
	// bne cr6,0x82cb2a74
	if (!cr6.eq) goto loc_82CB2A74;
	// cmpwi cr6,r23,56
	cr6.compare<int32_t>(r23.s32, 56, xer);
	// bge cr6,0x82cb2abc
	if (!cr6.lt) goto loc_82CB2ABC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	r11.u64 = rotl64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_82CB2A6C:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x82cb2ac4
	goto loc_82CB2AC4;
loc_82CB2A74:
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// b 0x82cb2a6c
	goto loc_82CB2A6C;
loc_82CB2A80:
	// clrlwi r30,r23,24
	r30.u64 = r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6b30
	sub_82CA6B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb2abc
	if (cr0.eq) goto loc_82CB2ABC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	r11.u64 = rotl64(r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2ac4
	if (!cr0.eq) goto loc_82CB2AC4;
	// rlwinm r11,r23,0,27,25
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	r23.s64 = r11.s64 + -7;
	// b 0x82cb2ac4
	goto loc_82CB2AC4;
loc_82CB2ABC:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB2AC4:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb2b34
	if (!cr0.eq) goto loc_82CB2B34;
	// addi r11,r23,-48
	r11.s64 = r23.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// beq cr6,0x82cb2afc
	if (cr6.eq) goto loc_82CB2AFC;
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// bne 0x82cb2afc
	if (!cr0.eq) goto loc_82CB2AFC;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb2b4c
	goto loc_82CB2B4C;
loc_82CB2AFC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2b24
	if (cr0.lt) goto loc_82CB2B24;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2b4c
	goto loc_82CB2B4C;
loc_82CB2B24:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82cb2b4c
	goto loc_82CB2B4C;
loc_82CB2B34:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb2b4c
	if (cr6.eq) goto loc_82CB2B4C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB2B4C:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cb2a34
	if (cr0.eq) goto loc_82CB2A34;
loc_82CB2B54:
	// extsb. r11,r20
	r11.s64 = r20.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb2c7c
	if (cr0.eq) goto loc_82CB2C7C;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x82cb2c7c
	goto loc_82CB2C7C;
loc_82CB2B6C:
	// bne 0x82cb2c70
	if (!cr0.eq) goto loc_82CB2C70;
loc_82CB2B70:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x82cb2bb0
	if (cr6.eq) goto loc_82CB2BB0;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(r19.s32, 112, xer);
	// beq cr6,0x82cb2bb0
	if (cr6.eq) goto loc_82CB2BB0;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb2be4
	if (cr0.eq) goto loc_82CB2BE4;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(r19.s32, 111, xer);
	// bne cr6,0x82cb2ba8
	if (!cr6.eq) goto loc_82CB2BA8;
	// cmpwi cr6,r23,56
	cr6.compare<int32_t>(r23.s32, 56, xer);
	// bge cr6,0x82cb2be4
	if (!cr6.lt) goto loc_82CB2BE4;
	// rlwinm r22,r22,3,0,28
	r22.u64 = rotl64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82cb2bec
	goto loc_82CB2BEC;
loc_82CB2BA8:
	// mulli r22,r22,10
	r22.s64 = r22.s64 * 10;
	// b 0x82cb2bec
	goto loc_82CB2BEC;
loc_82CB2BB0:
	// clrlwi r30,r23,24
	r30.u64 = r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6b30
	sub_82CA6B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb2be4
	if (cr0.eq) goto loc_82CB2BE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r22,4,0,27
	r22.u64 = rotl64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2bec
	if (!cr0.eq) goto loc_82CB2BEC;
	// rlwinm r11,r23,0,27,25
	r11.u64 = rotl64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	r23.s64 = r11.s64 + -7;
	// b 0x82cb2bec
	goto loc_82CB2BEC;
loc_82CB2BE4:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB2BEC:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb2c50
	if (!cr0.eq) goto loc_82CB2C50;
	// add r11,r22,r23
	r11.u64 = r22.u64 + r23.u64;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r22,r11,-48
	r22.s64 = r11.s64 + -48;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb2c18
	if (cr6.eq) goto loc_82CB2C18;
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// bne 0x82cb2c18
	if (!cr0.eq) goto loc_82CB2C18;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb2c68
	goto loc_82CB2C68;
loc_82CB2C18:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2c40
	if (cr0.lt) goto loc_82CB2C40;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2c68
	goto loc_82CB2C68;
loc_82CB2C40:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82cb2c68
	goto loc_82CB2C68;
loc_82CB2C50:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb2c68
	if (cr6.eq) goto loc_82CB2C68;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB2C68:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cb2b70
	if (cr0.eq) goto loc_82CB2B70;
loc_82CB2C70:
	// extsb. r11,r20
	r11.s64 = r20.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb2c7c
	if (cr0.eq) goto loc_82CB2C7C;
	// neg r22,r22
	r22.s64 = -r22.s64;
loc_82CB2C7C:
	// cmpwi cr6,r19,70
	cr6.compare<int32_t>(r19.s32, 70, xer);
	// bne cr6,0x82cb2c88
	if (!cr6.eq) goto loc_82CB2C88;
	// li r18,0
	r18.s64 = 0;
loc_82CB2C88:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x82cb321c
	if (cr6.eq) goto loc_82CB321C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb3100
	if (!cr6.eq) goto loc_82CB3100;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// b 0x82cb2cc8
	goto loc_82CB2CC8;
loc_82CB2CAC:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// mr r22,r14
	r22.u64 = r14.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb3100
	if (!cr6.eq) goto loc_82CB3100;
	// bl 0x82ca2b88
	sub_82CA2B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3100
	if (cr0.eq) goto loc_82CB3100;
loc_82CB2CC8:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82cb2ce0
	if (cr6.eq) goto loc_82CB2CE0;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB2CE0:
	// extsb. r11,r15
	r11.s64 = r15.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// beq 0x82cb2cf4
	if (cr0.eq) goto loc_82CB2CF4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB2CF4:
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB2CFC:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x82cb2d1c
	if (!cr6.eq) goto loc_82CB2D1C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cb2d24
	goto loc_82CB2D24;
loc_82CB2D1C:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x82cb2d5c
	if (!cr6.eq) goto loc_82CB2D5C;
loc_82CB2D24:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2d50
	if (cr0.lt) goto loc_82CB2D50;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2d5c
	goto loc_82CB2D5C;
loc_82CB2D50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2D5C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82cb2ddc
	if (!cr6.eq) goto loc_82CB2DDC;
	// li r16,-1
	r16.s64 = -1;
	// b 0x82cb2ddc
	goto loc_82CB2DDC;
loc_82CB2D6C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// beq cr6,0x82cb2df0
	if (cr6.eq) goto loc_82CB2DF0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2dd0
	if (cr0.lt) goto loc_82CB2DD0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2ddc
	goto loc_82CB2DDC;
loc_82CB2DD0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2DDC:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2d6c
	if (!cr0.eq) goto loc_82CB2D6C;
loc_82CB2DF0:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// extsb r10,r23
	ctx.r10.s64 = r23.s8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(188) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cb2f08
	if (!cr6.eq) goto loc_82CB2F08;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// beq cr6,0x82cb2f08
	if (cr6.eq) goto loc_82CB2F08;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2e48
	if (cr0.lt) goto loc_82CB2E48;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2e54
	goto loc_82CB2E54;
loc_82CB2E48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2E54:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// b 0x82cb2ef4
	goto loc_82CB2EF4;
loc_82CB2E84:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// beq cr6,0x82cb2f08
	if (cr6.eq) goto loc_82CB2F08;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2ee8
	if (cr0.lt) goto loc_82CB2EE8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2ef4
	goto loc_82CB2EF4;
loc_82CB2EE8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2EF4:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2e84
	if (!cr0.eq) goto loc_82CB2E84;
loc_82CB2F08:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x82cb306c
	if (cr6.eq) goto loc_82CB306C;
	// cmpwi cr6,r23,101
	cr6.compare<int32_t>(r23.s32, 101, xer);
	// beq cr6,0x82cb2f20
	if (cr6.eq) goto loc_82CB2F20;
	// cmpwi cr6,r23,69
	cr6.compare<int32_t>(r23.s32, 69, xer);
	// bne cr6,0x82cb306c
	if (!cr6.eq) goto loc_82CB306C;
loc_82CB2F20:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// addi r29,r16,-1
	r29.s64 = r16.s64 + -1;
	// beq cr6,0x82cb306c
	if (cr6.eq) goto loc_82CB306C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb2f84
	if (cr0.lt) goto loc_82CB2F84;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb2f90
	goto loc_82CB2F90;
loc_82CB2F84:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB2F90:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x82cb2fcc
	if (!cr6.eq) goto loc_82CB2FCC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
	// b 0x82cb2fd4
	goto loc_82CB2FD4;
loc_82CB2FCC:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x82cb3058
	if (!cr6.eq) goto loc_82CB3058;
loc_82CB2FD4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x82cb3024
	if (!cr6.eq) goto loc_82CB3024;
	// li r29,0
	r29.s64 = 0;
	// b 0x82cb3058
	goto loc_82CB3058;
loc_82CB2FE8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// beq cr6,0x82cb306c
	if (cr6.eq) goto loc_82CB306C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb321c
	if (cr0.eq) goto loc_82CB321C;
loc_82CB3024:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb304c
	if (cr0.lt) goto loc_82CB304C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3058
	goto loc_82CB3058;
loc_82CB304C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB3058:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb2fe8
	if (!cr0.eq) goto loc_82CB2FE8;
loc_82CB306C:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb3084
	if (cr6.eq) goto loc_82CB3084;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3084:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x82cb321c
	if (cr6.eq) goto loc_82CB321C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb3100
	if (!cr6.eq) goto loc_82CB3100;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// extsb r11,r15
	r11.s64 = r15.s8;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(124) );
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// stbx r10,r30,r5
	PPC_STORE_U8(r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cb3100
	goto loc_82CB3100;
loc_82CB30D4:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x82cb3208
	if (!cr6.eq) goto loc_82CB3208;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bne cr6,0x82cb3100
	if (!cr6.eq) goto loc_82CB3100;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
loc_82CB3100:
	// lwz r11,716(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r9,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r9.u32);
	// rotlwi r19,r9,0
	r19.u64 = rotl32(ctx.r9.u32, 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// b 0x82cb31c0
	goto loc_82CB31C0;
loc_82CB3120:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3148
	if (cr0.lt) goto loc_82CB3148;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3154
	goto loc_82CB3154;
loc_82CB3148:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82CB3154:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x82cb3208
	if (!cr6.eq) goto loc_82CB3208;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb31c0
	if (cr0.eq) goto loc_82CB31C0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r31,r14,1
	r31.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb31a0
	if (cr0.lt) goto loc_82CB31A0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb31a8
	goto loc_82CB31A8;
loc_82CB31A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
loc_82CB31A8:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82cb31f8
	if (!cr6.eq) goto loc_82CB31F8;
	// addi r14,r31,-1
	r14.s64 = r31.s64 + -1;
loc_82CB31C0:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x82cb31e8
	if (!cr6.eq) goto loc_82CB31E8;
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x82cb321c
	if (!cr6.eq) goto loc_82CB321C;
	// lwz r11,716(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// bne cr6,0x82cb321c
	if (!cr6.eq) goto loc_82CB321C;
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB31E8:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cb21ac
	if (!cr0.eq) goto loc_82CB21AC;
	// b 0x82cb321c
	goto loc_82CB321C;
loc_82CB31F8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb3208
	if (cr6.eq) goto loc_82CB3208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3208:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82cb321c
	if (cr6.eq) goto loc_82CB321C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB321C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(100) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cb3230
	if (!cr6.eq) goto loc_82CB3230;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CB3230:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x82cb3254
	if (!cr6.eq) goto loc_82CB3254;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cb3258
	if (!cr6.eq) goto loc_82CB3258;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cb3258
	if (!cr0.eq) goto loc_82CB3258;
	// b 0x82cb209c
	goto loc_82CB209C;
loc_82CB3254:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82CB3258:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82CB2038) {
	__imp__sub_82CB2038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB3260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r11,350
	r11.s64 = 350;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r28.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// sth r21,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r21.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// bne cr6,0x82cb32d0
	if (!cr6.eq) goto loc_82CB32D0;
loc_82CB32A4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
loc_82CB32C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb4648
	goto loc_82CB4648;
loc_82CB32D0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82cb32a4
	if (cr6.eq) goto loc_82CB32A4;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(12) );
	// rlwinm. r11,r11,0,25,25
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb33d4
	if (!cr0.eq) goto loc_82CB33D4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lis r11,-31921
	r11.s64 = -2091974656;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,29632
	r30.s64 = r11.s64 + 29632;
	// addi r29,r10,-2648
	r29.s64 = ctx.r10.s64 + -2648;
	// beq cr6,0x82cb333c
	if (cr6.eq) goto loc_82CB333C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb333c
	if (cr6.eq) goto loc_82CB333C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb3340
	goto loc_82CB3340;
loc_82CB333C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CB3340:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb33a4
	if (!cr0.eq) goto loc_82CB33A4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb3394
	if (cr6.eq) goto loc_82CB3394;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x82cb3394
	if (cr6.eq) goto loc_82CB3394;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caf6c8
	sub_82CAF6C8(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82cb3398
	goto loc_82CB3398;
loc_82CB3394:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82CB3398:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb33d4
	if (cr0.eq) goto loc_82CB33D4;
loc_82CB33A4:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_82CB33AC:
	// li r11,22
	r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cab630
	sub_82CAB630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82cb4648
	goto loc_82CB4648;
loc_82CB33D4:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// stb r21,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r21.u8);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// beq 0x82cb4644
	if (cr0.eq) goto loc_82CB4644;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r11,r11,-3224
	r11.s64 = r11.s64 + -3224;
	// addi r10,r10,-3832
	ctx.r10.s64 = ctx.r10.s64 + -3832;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
loc_82CB3404:
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3494
	if (cr0.eq) goto loc_82CB3494;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
loc_82CB3418:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3444
	if (cr0.lt) goto loc_82CB3444;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3450
	goto loc_82CB3450;
loc_82CB3444:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CB3450:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82cb3474
	if (cr6.eq) goto loc_82CB3474;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb3418
	if (!cr0.eq) goto loc_82CB3418;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3474:
	// lwz r30,716(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB3478:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb3478
	if (!cr0.eq) goto loc_82CB3478;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// b 0x82cb455c
	goto loc_82CB455C;
loc_82CB3494:
	// lwz r18,716(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x82cb4488
	if (!cr6.eq) goto loc_82CB4488;
	// li r22,0
	r22.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r14,0
	r14.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r15,1
	r15.s64 = 1;
	// li r20,0
	r20.s64 = 0;
loc_82CB34DC:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// lbz r31,0(r18)
	r31.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3508
	if (cr0.eq) goto loc_82CB3508;
	// mulli r11,r14,10
	r11.s64 = r14.s64 * 10;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r14,r11,-48
	r14.s64 = r11.s64 + -48;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB3508:
	// cmpwi cr6,r31,78
	cr6.compare<int32_t>(r31.s32, 78, xer);
	// bgt cr6,0x82cb35c4
	if (cr6.gt) goto loc_82CB35C4;
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(r31.s32, 42, xer);
	// beq cr6,0x82cb35b8
	if (cr6.eq) goto loc_82CB35B8;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(r31.s32, 70, xer);
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmpwi cr6,r31,73
	cr6.compare<int32_t>(r31.s32, 73, xer);
	// beq cr6,0x82cb353c
	if (cr6.eq) goto loc_82CB353C;
	// cmpwi cr6,r31,76
	cr6.compare<int32_t>(r31.s32, 76, xer);
	// bne cr6,0x82cb35dc
	if (!cr6.eq) goto loc_82CB35DC;
	// addi r11,r15,1
	r11.s64 = r15.s64 + 1;
	// b 0x82cb3618
	goto loc_82CB3618;
loc_82CB353C:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bne cr6,0x82cb356c
	if (!cr6.eq) goto loc_82CB356C;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(r18.u32 + 2);
	// addi r11,r18,2
	r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r9,52
	cr6.compare<uint32_t>(ctx.r9.u32, 52, xer);
	// bne cr6,0x82cb356c
	if (!cr6.eq) goto loc_82CB356C;
loc_82CB3558:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r18,r11
	r18.u64 = r11.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB356C:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x82cb358c
	if (!cr6.eq) goto loc_82CB358C;
	// lbz r9,2(r18)
	ctx.r9.u64 = PPC_LOAD_U8(r18.u32 + 2);
	// addi r11,r18,2
	r11.s64 = r18.s64 + 2;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// bne cr6,0x82cb358c
	if (!cr6.eq) goto loc_82CB358C;
	// mr r18,r11
	r18.u64 = r11.u64;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB358C:
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, xer);
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmplwi cr6,r10,111
	cr6.compare<uint32_t>(ctx.r10.u32, 111, xer);
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x82cb361c
	if (cr6.eq) goto loc_82CB361C;
	// cmplwi cr6,r10,88
	cr6.compare<uint32_t>(ctx.r10.u32, 88, xer);
	// bne cr6,0x82cb35dc
	if (!cr6.eq) goto loc_82CB35DC;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB35B8:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB35C4:
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(r31.s32, 104, xer);
	// beq cr6,0x82cb360c
	if (cr6.eq) goto loc_82CB360C;
	// cmpwi cr6,r31,108
	cr6.compare<int32_t>(r31.s32, 108, xer);
	// beq cr6,0x82cb35e8
	if (cr6.eq) goto loc_82CB35E8;
	// cmpwi cr6,r31,119
	cr6.compare<int32_t>(r31.s32, 119, xer);
	// beq cr6,0x82cb3600
	if (cr6.eq) goto loc_82CB3600;
loc_82CB35DC:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// extsb r30,r11
	r30.s64 = r11.s8;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB35E8:
	// lbz r10,1(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + 1);
	// addi r11,r18,1
	r11.s64 = r18.s64 + 1;
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// beq cr6,0x82cb3558
	if (cr6.eq) goto loc_82CB3558;
	// addi r11,r15,1
	r11.s64 = r15.s64 + 1;
	// extsb r15,r11
	r15.s64 = r11.s8;
loc_82CB3600:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// extsb r28,r11
	r28.s64 = r11.s8;
	// b 0x82cb361c
	goto loc_82CB361C;
loc_82CB360C:
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// addi r11,r15,-1
	r11.s64 = r15.s64 + -1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_82CB3618:
	// extsb r15,r11
	r15.s64 = r11.s8;
loc_82CB361C:
	// extsb. r11,r30
	r11.s64 = r30.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb34dc
	if (cr0.eq) goto loc_82CB34DC;
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r18,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r18.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bne 0x82cb3654
	if (!cr0.eq) goto loc_82CB3654;
	// lwz r11,732(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(732) );
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// rlwinm r11,r10,0,0,28
	r11.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// b 0x82cb3658
	goto loc_82CB3658;
loc_82CB3654:
	// li r11,0
	r11.s64 = 0;
loc_82CB3658:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// bne 0x82cb3684
	if (!cr0.eq) goto loc_82CB3684;
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x82cb3680
	if (cr6.eq) goto loc_82CB3680;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// li r28,-1
	r28.s64 = -1;
	// bne cr6,0x82cb3684
	if (!cr6.eq) goto loc_82CB3684;
loc_82CB3680:
	// li r28,1
	r28.s64 = 1;
loc_82CB3684:
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r18,r11,32
	r18.u64 = r11.u64 | 32;
	// cmpwi cr6,r18,110
	cr6.compare<int32_t>(r18.s32, 110, xer);
	// beq cr6,0x82cb374c
	if (cr6.eq) goto loc_82CB374C;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(r18.s32, 99, xer);
	// beq cr6,0x82cb3704
	if (cr6.eq) goto loc_82CB3704;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(r18.s32, 123, xer);
	// beq cr6,0x82cb3704
	if (cr6.eq) goto loc_82CB3704;
loc_82CB36A8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt 0x82cb36d8
	if (cr0.lt) goto loc_82CB36D8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb36e4
	goto loc_82CB36E4;
loc_82CB36D8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82CB36E4:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82cb36fc
	if (cr6.eq) goto loc_82CB36FC;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x82ca6b50
	sub_82CA6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb36a8
	if (!cr0.eq) goto loc_82CB36A8;
loc_82CB36FC:
	// mr r21,r31
	r21.u64 = r31.u64;
	// b 0x82cb3740
	goto loc_82CB3740;
loc_82CB3704:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3734
	if (cr0.lt) goto loc_82CB3734;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3740
	goto loc_82CB3740;
loc_82CB3734:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB3740:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cb45f4
	if (cr6.eq) goto loc_82CB45F4;
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB374C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb375c
	if (cr6.eq) goto loc_82CB375C;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x82cb45e0
	if (cr6.eq) goto loc_82CB45E0;
loc_82CB375C:
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cb37cc
	if (!cr6.eq) goto loc_82CB37CC;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(r18.s32, 99, xer);
	// beq cr6,0x82cb3780
	if (cr6.eq) goto loc_82CB3780;
	// cmpwi cr6,r18,115
	cr6.compare<int32_t>(r18.s32, 115, xer);
	// beq cr6,0x82cb3780
	if (cr6.eq) goto loc_82CB3780;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(r18.s32, 123, xer);
	// bne cr6,0x82cb37cc
	if (!cr6.eq) goto loc_82CB37CC;
loc_82CB3780:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,-4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r25,-4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(r25.u32, 1, xer);
	// bge cr6,0x82cb37d0
	if (!cr6.lt) goto loc_82CB37D0;
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82cb456c
	if (!cr0.gt) goto loc_82CB456C;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x82cb4574
	goto loc_82CB4574;
loc_82CB37CC:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
loc_82CB37D0:
	// addi r11,r18,-99
	r11.s64 = r18.s64 + -99;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// bgt cr6,0x82cb4440
	if (cr6.gt) goto loc_82CB4440;
	// lis r12,-32255
	r12.s64 = -2113863680;
	// addi r12,r12,6520
	r12.s64 = r12.s64 + 6520;
	// rlwinm r0,r11,1,0,30
	r0.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32053
	r12.s64 = -2100625408;
	// addi r12,r12,14340
	r12.s64 = r12.s64 + 14340;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82CB3804;
	case 1:
		goto loc_82CB3CE8;
	case 2:
		goto loc_82CB4048;
	case 3:
		goto loc_82CB4048;
	case 4:
		goto loc_82CB4048;
	case 5:
		goto loc_82CB4440;
	case 6:
		goto loc_82CB3B70;
	case 7:
		goto loc_82CB4440;
	case 8:
		goto loc_82CB4440;
	case 9:
		goto loc_82CB4440;
	case 10:
		goto loc_82CB4440;
	case 11:
		goto loc_82CB3FFC;
	case 12:
		goto loc_82CB3CE8;
	case 13:
		goto loc_82CB3CE4;
	case 14:
		goto loc_82CB4440;
	case 15:
		goto loc_82CB4440;
	case 16:
		goto loc_82CB3814;
	case 17:
		goto loc_82CB4440;
	case 18:
		goto loc_82CB3CE8;
	case 19:
		goto loc_82CB4440;
	case 20:
		goto loc_82CB4440;
	case 21:
		goto loc_82CB3B74;
	case 22:
		goto loc_82CB4440;
	case 23:
		goto loc_82CB4440;
	case 24:
		goto loc_82CB3824;
	default:
		__builtin_unreachable();
	}
loc_82CB3804:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// bne cr6,0x82cb3814
	if (!cr6.eq) goto loc_82CB3814;
	// li r16,1
	r16.s64 = 1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
loc_82CB3814:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82cb396c
	if (!cr0.gt) goto loc_82CB396C;
	// li r23,1
	r23.s64 = 1;
	// b 0x82cb396c
	goto loc_82CB396C;
loc_82CB3824:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82cb3830
	if (!cr0.gt) goto loc_82CB3830;
	// li r23,1
	r23.s64 = 1;
loc_82CB3830:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(r11.u32, 94, xer);
	// bne cr6,0x82cb384c
	if (!cr6.eq) goto loc_82CB384C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r24,-1
	r24.s64 = -1;
loc_82CB384C:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(r18.s32, 123, xer);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
	// std r6,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r6.u64);
	// std r6,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r6.u64);
	// bne cr6,0x82cb3888
	if (!cr6.eq) goto loc_82CB3888;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x82cb3888
	if (!cr6.eq) goto loc_82CB3888;
	// li r11,32
	r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r11.u8);
loc_82CB3888:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x82cb3950
	if (cr6.eq) goto loc_82CB3950;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CB3898:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// bne cr6,0x82cb3924
	if (!cr6.eq) goto loc_82CB3924;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb3924
	if (cr0.eq) goto loc_82CB3924;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x82cb3924
	if (cr6.eq) goto loc_82CB3924;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cb38d8
	if (!cr6.lt) goto loc_82CB38D8;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82cb38e0
	goto loc_82CB38E0;
loc_82CB38D8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82CB38E0:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82cb391c
	if (cr6.gt) goto loc_82CB391C;
loc_82CB38F0:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = rotl64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = r11.u32 & 0x7;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// slw r4,r5,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// stbx r4,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u8);
	// ble cr6,0x82cb38f0
	if (!cr6.gt) goto loc_82CB38F0;
loc_82CB391C:
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// b 0x82cb3944
	goto loc_82CB3944;
loc_82CB3924:
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// slw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82CB3944:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x82cb3898
	if (!cr6.eq) goto loc_82CB3898;
loc_82CB3950:
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(r18.s32, 123, xer);
	// bne cr6,0x82cb396c
	if (!cr6.eq) goto loc_82CB396C;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_82CB396C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq cr6,0x82cb3990
	if (cr6.eq) goto loc_82CB3990;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3990:
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(r18.s32, 99, xer);
	// beq cr6,0x82cb399c
	if (cr6.eq) goto loc_82CB399C;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_82CB399C:
	// lwz r28,128(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
loc_82CB39A0:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb39b4
	if (cr6.eq) goto loc_82CB39B4;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x82cb3b24
	if (cr6.eq) goto loc_82CB3B24;
loc_82CB39B4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb39e0
	if (cr0.lt) goto loc_82CB39E0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb39ec
	goto loc_82CB39EC;
loc_82CB39E0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB39EC:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cb3b08
	if (cr6.eq) goto loc_82CB3B08;
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(r18.s32, 99, xer);
	// beq cr6,0x82cb3a50
	if (cr6.eq) goto loc_82CB3A50;
	// cmpwi cr6,r18,115
	cr6.compare<int32_t>(r18.s32, 115, xer);
	// bne cr6,0x82cb3a1c
	if (!cr6.eq) goto loc_82CB3A1C;
	// cmpwi cr6,r21,9
	cr6.compare<int32_t>(r21.s32, 9, xer);
	// blt cr6,0x82cb3a14
	if (cr6.lt) goto loc_82CB3A14;
	// cmpwi cr6,r21,13
	cr6.compare<int32_t>(r21.s32, 13, xer);
	// ble cr6,0x82cb3b08
	if (!cr6.gt) goto loc_82CB3B08;
loc_82CB3A14:
	// cmpwi cr6,r21,32
	cr6.compare<int32_t>(r21.s32, 32, xer);
	// bne cr6,0x82cb3a50
	if (!cr6.eq) goto loc_82CB3A50;
loc_82CB3A1C:
	// cmpwi cr6,r18,123
	cr6.compare<int32_t>(r18.s32, 123, xer);
	// bne cr6,0x82cb3b08
	if (!cr6.eq) goto loc_82CB3B08;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r21,3
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7) != 0);
	r11.s64 = r21.s32 >> 3;
	// clrlwi r9,r21,29
	ctx.r9.u64 = r21.u32 & 0x7;
	// extsb r8,r24
	ctx.r8.s64 = r24.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	r11.s64 = r11.s8;
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb3b08
	if (cr0.eq) goto loc_82CB3B08;
loc_82CB3A50:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb3b00
	if (!cr6.eq) goto loc_82CB3B00;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82cb4584
	if (cr6.eq) goto loc_82CB4584;
	// extsb. r11,r23
	r11.s64 = r23.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb3ae8
	if (cr0.eq) goto loc_82CB3AE8;
	// stb r21,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r21.u8);
	// clrlwi r3,r21,24
	ctx.r3.u64 = r21.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3ab8
	if (cr0.eq) goto loc_82CB3AB8;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3aac
	if (cr0.lt) goto loc_82CB3AAC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3ab4
	goto loc_82CB3AB4;
loc_82CB3AAC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
loc_82CB3AB4:
	// stb r3,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r3.u8);
loc_82CB3AB8:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(172) );
	// bl 0x82cb81c8
	sub_82CB81C8(ctx, base);
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82cb3af4
	goto loc_82CB3AF4;
loc_82CB3AE8:
	// extsb r11,r21
	r11.s64 = r21.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82CB3AF4:
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x82cb39a0
	goto loc_82CB39A0;
loc_82CB3B00:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82cb39a0
	goto loc_82CB39A0;
loc_82CB3B08:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb3b24
	if (cr6.eq) goto loc_82CB3B24;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3B24:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82cb45f4
	if (cr6.eq) goto loc_82CB45F4;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb4468
	if (!cr6.eq) goto loc_82CB4468;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r18,99
	cr6.compare<int32_t>(r18.s32, 99, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82cb4468
	if (cr6.eq) goto loc_82CB4468;
	// extsb. r11,r23
	r11.s64 = r23.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// beq 0x82cb3b64
	if (cr0.eq) goto loc_82CB3B64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB3B64:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB3B70:
	// li r18,100
	r18.s64 = 100;
loc_82CB3B74:
	// cmpwi cr6,r21,45
	cr6.compare<int32_t>(r21.s32, 45, xer);
	// bne cr6,0x82cb3b84
	if (!cr6.eq) goto loc_82CB3B84;
	// li r19,1
	r19.s64 = 1;
	// b 0x82cb3b8c
	goto loc_82CB3B8C;
loc_82CB3B84:
	// cmpwi cr6,r21,43
	cr6.compare<int32_t>(r21.s32, 43, xer);
	// bne cr6,0x82cb3be0
	if (!cr6.eq) goto loc_82CB3BE0;
loc_82CB3B8C:
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bne 0x82cb3ba4
	if (!cr0.eq) goto loc_82CB3BA4;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3ba4
	if (cr6.eq) goto loc_82CB3BA4;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb3be0
	goto loc_82CB3BE0;
loc_82CB3BA4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3bd4
	if (cr0.lt) goto loc_82CB3BD4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3be0
	goto loc_82CB3BE0;
loc_82CB3BD4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB3BE0:
	// cmpwi cr6,r21,48
	cr6.compare<int32_t>(r21.s32, 48, xer);
	// bne cr6,0x82cb3d54
	if (!cr6.eq) goto loc_82CB3D54;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3c18
	if (cr0.lt) goto loc_82CB3C18;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3c24
	goto loc_82CB3C24;
loc_82CB3C18:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB3C24:
	// extsb r11,r21
	r11.s64 = r21.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x82cb3c88
	if (cr6.eq) goto loc_82CB3C88;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82cb3c88
	if (cr6.eq) goto loc_82CB3C88;
	// li r17,1
	r17.s64 = 1;
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(r18.s32, 120, xer);
	// beq cr6,0x82cb3c64
	if (cr6.eq) goto loc_82CB3C64;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3c5c
	if (cr6.eq) goto loc_82CB3C5C;
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bne 0x82cb3c5c
	if (!cr0.eq) goto loc_82CB3C5C;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB3C5C:
	// li r18,111
	r18.s64 = 111;
	// b 0x82cb3d54
	goto loc_82CB3D54;
loc_82CB3C64:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb3c80
	if (cr6.eq) goto loc_82CB3C80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3C80:
	// li r21,48
	r21.s64 = 48;
	// b 0x82cb3d54
	goto loc_82CB3D54;
loc_82CB3C88:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3cb4
	if (cr0.lt) goto loc_82CB3CB4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3cc0
	goto loc_82CB3CC0;
loc_82CB3CB4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB3CC0:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3cdc
	if (cr6.eq) goto loc_82CB3CDC;
	// addi r14,r14,-2
	r14.s64 = r14.s64 + -2;
	// cmpwi cr6,r14,1
	cr6.compare<int32_t>(r14.s32, 1, xer);
	// bge cr6,0x82cb3cdc
	if (!cr6.lt) goto loc_82CB3CDC;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB3CDC:
	// li r18,120
	r18.s64 = 120;
	// b 0x82cb3d54
	goto loc_82CB3D54;
loc_82CB3CE4:
	// li r15,1
	r15.s64 = 1;
loc_82CB3CE8:
	// cmpwi cr6,r21,45
	cr6.compare<int32_t>(r21.s32, 45, xer);
	// bne cr6,0x82cb3cf8
	if (!cr6.eq) goto loc_82CB3CF8;
	// li r19,1
	r19.s64 = 1;
	// b 0x82cb3d00
	goto loc_82CB3D00;
loc_82CB3CF8:
	// cmpwi cr6,r21,43
	cr6.compare<int32_t>(r21.s32, 43, xer);
	// bne cr6,0x82cb3d54
	if (!cr6.eq) goto loc_82CB3D54;
loc_82CB3D00:
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bne 0x82cb3d18
	if (!cr0.eq) goto loc_82CB3D18;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3d18
	if (cr6.eq) goto loc_82CB3D18;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb3d54
	goto loc_82CB3D54;
loc_82CB3D18:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3d48
	if (cr0.lt) goto loc_82CB3D48;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3d54
	goto loc_82CB3D54;
loc_82CB3D48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB3D54:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82cb3eac
	if (cr6.eq) goto loc_82CB3EAC;
	// bne 0x82cb3e94
	if (!cr0.eq) goto loc_82CB3E94;
loc_82CB3D64:
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(r18.s32, 120, xer);
	// beq cr6,0x82cb3db0
	if (cr6.eq) goto loc_82CB3DB0;
	// cmpwi cr6,r18,112
	cr6.compare<int32_t>(r18.s32, 112, xer);
	// beq cr6,0x82cb3db0
	if (cr6.eq) goto loc_82CB3DB0;
	// clrlwi r3,r21,24
	ctx.r3.u64 = r21.u32 & 0xFF;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3dec
	if (cr0.eq) goto loc_82CB3DEC;
	// cmpwi cr6,r18,111
	cr6.compare<int32_t>(r18.s32, 111, xer);
	// bne cr6,0x82cb3da4
	if (!cr6.eq) goto loc_82CB3DA4;
	// cmpwi cr6,r21,56
	cr6.compare<int32_t>(r21.s32, 56, xer);
	// bge cr6,0x82cb3dec
	if (!cr6.lt) goto loc_82CB3DEC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	r11.u64 = rotl64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_82CB3D9C:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x82cb3df4
	goto loc_82CB3DF4;
loc_82CB3DA4:
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// b 0x82cb3d9c
	goto loc_82CB3D9C;
loc_82CB3DB0:
	// clrlwi r30,r21,24
	r30.u64 = r21.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6b30
	sub_82CA6B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3dec
	if (cr0.eq) goto loc_82CB3DEC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	r11.u64 = rotl64(r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb3df4
	if (!cr0.eq) goto loc_82CB3DF4;
	// rlwinm r11,r21,0,27,25
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r21,r11,-7
	r21.s64 = r11.s64 + -7;
	// b 0x82cb3df4
	goto loc_82CB3DF4;
loc_82CB3DEC:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB3DF4:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb3e6c
	if (!cr0.eq) goto loc_82CB3E6C;
	// addi r11,r21,-48
	r11.s64 = r21.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// beq cr6,0x82cb3e2c
	if (cr6.eq) goto loc_82CB3E2C;
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bne 0x82cb3e2c
	if (!cr0.eq) goto loc_82CB3E2C;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb3e8c
	goto loc_82CB3E8C;
loc_82CB3E2C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3e5c
	if (cr0.lt) goto loc_82CB3E5C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3e8c
	goto loc_82CB3E8C;
loc_82CB3E5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x82cb3e8c
	goto loc_82CB3E8C;
loc_82CB3E6C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb3e8c
	if (cr6.eq) goto loc_82CB3E8C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3E8C:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cb3d64
	if (cr0.eq) goto loc_82CB3D64;
loc_82CB3E94:
	// extsb. r11,r19
	r11.s64 = r19.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb3fcc
	if (cr0.eq) goto loc_82CB3FCC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x82cb3fcc
	goto loc_82CB3FCC;
loc_82CB3EAC:
	// bne 0x82cb3fc0
	if (!cr0.eq) goto loc_82CB3FC0;
loc_82CB3EB0:
	// cmpwi cr6,r18,120
	cr6.compare<int32_t>(r18.s32, 120, xer);
	// beq cr6,0x82cb3ef0
	if (cr6.eq) goto loc_82CB3EF0;
	// cmpwi cr6,r18,112
	cr6.compare<int32_t>(r18.s32, 112, xer);
	// beq cr6,0x82cb3ef0
	if (cr6.eq) goto loc_82CB3EF0;
	// clrlwi r3,r21,24
	ctx.r3.u64 = r21.u32 & 0xFF;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3f24
	if (cr0.eq) goto loc_82CB3F24;
	// cmpwi cr6,r18,111
	cr6.compare<int32_t>(r18.s32, 111, xer);
	// bne cr6,0x82cb3ee8
	if (!cr6.eq) goto loc_82CB3EE8;
	// cmpwi cr6,r21,56
	cr6.compare<int32_t>(r21.s32, 56, xer);
	// bge cr6,0x82cb3f24
	if (!cr6.lt) goto loc_82CB3F24;
	// rlwinm r22,r22,3,0,28
	r22.u64 = rotl64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3EE8:
	// mulli r22,r22,10
	r22.s64 = r22.s64 * 10;
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3EF0:
	// clrlwi r30,r21,24
	r30.u64 = r21.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ca6b30
	sub_82CA6B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb3f24
	if (cr0.eq) goto loc_82CB3F24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r22,4,0,27
	r22.u64 = rotl64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb3f2c
	if (!cr0.eq) goto loc_82CB3F2C;
	// rlwinm r11,r21,0,27,25
	r11.u64 = rotl64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r21,r11,-7
	r21.s64 = r11.s64 + -7;
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3F24:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_82CB3F2C:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82cb3f98
	if (!cr0.eq) goto loc_82CB3F98;
	// add r11,r22,r21
	r11.u64 = r22.u64 + r21.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r22,r11,-48
	r22.s64 = r11.s64 + -48;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82cb3f58
	if (cr6.eq) goto loc_82CB3F58;
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bne 0x82cb3f58
	if (!cr0.eq) goto loc_82CB3F58;
	// li r29,1
	r29.s64 = 1;
	// b 0x82cb3fb8
	goto loc_82CB3FB8;
loc_82CB3F58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb3f88
	if (cr0.lt) goto loc_82CB3F88;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb3fb8
	goto loc_82CB3FB8;
loc_82CB3F88:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x82cb3fb8
	goto loc_82CB3FB8;
loc_82CB3F98:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb3fb8
	if (cr6.eq) goto loc_82CB3FB8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB3FB8:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82cb3eb0
	if (cr0.eq) goto loc_82CB3EB0;
loc_82CB3FC0:
	// extsb. r11,r19
	r11.s64 = r19.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb3fcc
	if (cr0.eq) goto loc_82CB3FCC;
	// neg r22,r22
	r22.s64 = -r22.s64;
loc_82CB3FCC:
	// cmpwi cr6,r18,70
	cr6.compare<int32_t>(r18.s32, 70, xer);
	// bne cr6,0x82cb3fd8
	if (!cr6.eq) goto loc_82CB3FD8;
	// li r17,0
	r17.s64 = 0;
loc_82CB3FD8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb45f4
	if (cr6.eq) goto loc_82CB45F4;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb4468
	if (!cr6.eq) goto loc_82CB4468;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x82cb4014
	goto loc_82CB4014;
loc_82CB3FFC:
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cb4468
	if (!cr6.eq) goto loc_82CB4468;
	// bl 0x82ca2b88
	sub_82CA2B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4468
	if (cr0.eq) goto loc_82CB4468;
loc_82CB4014:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x82cb402c
	if (cr6.eq) goto loc_82CB402C;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB402C:
	// extsb. r11,r15
	r11.s64 = r15.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// beq 0x82cb4040
	if (cr0.eq) goto loc_82CB4040;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB4040:
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB4048:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r21,45
	cr6.compare<int32_t>(r21.s32, 45, xer);
	// bne cr6,0x82cb4068
	if (!cr6.eq) goto loc_82CB4068;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x82cb4070
	goto loc_82CB4070;
loc_82CB4068:
	// cmpwi cr6,r21,43
	cr6.compare<int32_t>(r21.s32, 43, xer);
	// bne cr6,0x82cb40b0
	if (!cr6.eq) goto loc_82CB40B0;
loc_82CB4070:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb40a4
	if (cr0.lt) goto loc_82CB40A4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb40b0
	goto loc_82CB40B0;
loc_82CB40A4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB40B0:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// bne cr6,0x82cb4138
	if (!cr6.eq) goto loc_82CB4138;
	// li r14,-1
	r14.s64 = -1;
	// b 0x82cb4138
	goto loc_82CB4138;
loc_82CB40C0:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x82cb414c
	if (cr6.eq) goto loc_82CB414C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb412c
	if (cr0.lt) goto loc_82CB412C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb4138
	goto loc_82CB4138;
loc_82CB412C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB4138:
	// clrlwi r31,r21,24
	r31.u64 = r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb40c0
	if (!cr0.eq) goto loc_82CB40C0;
loc_82CB414C:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// extsb r10,r21
	ctx.r10.s64 = r21.s8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(188) );
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82cb426c
	if (!cr6.eq) goto loc_82CB426C;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x82cb426c
	if (cr6.eq) goto loc_82CB426C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb41a8
	if (cr0.lt) goto loc_82CB41A8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb41b4
	goto loc_82CB41B4;
loc_82CB41A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB41B4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// b 0x82cb4254
	goto loc_82CB4254;
loc_82CB41E4:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// beq cr6,0x82cb4270
	if (cr6.eq) goto loc_82CB4270;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb4248
	if (cr0.lt) goto loc_82CB4248;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb4254
	goto loc_82CB4254;
loc_82CB4248:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB4254:
	// clrlwi r31,r21,24
	r31.u64 = r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb41e4
	if (!cr0.eq) goto loc_82CB41E4;
	// b 0x82cb4270
	goto loc_82CB4270;
loc_82CB426C:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
loc_82CB4270:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb43d4
	if (cr6.eq) goto loc_82CB43D4;
	// cmpwi cr6,r21,101
	cr6.compare<int32_t>(r21.s32, 101, xer);
	// beq cr6,0x82cb4288
	if (cr6.eq) goto loc_82CB4288;
	// cmpwi cr6,r21,69
	cr6.compare<int32_t>(r21.s32, 69, xer);
	// bne cr6,0x82cb43d4
	if (!cr6.eq) goto loc_82CB43D4;
loc_82CB4288:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r29,r14,-1
	r29.s64 = r14.s64 + -1;
	// beq cr6,0x82cb43d4
	if (cr6.eq) goto loc_82CB43D4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb42ec
	if (cr0.lt) goto loc_82CB42EC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb42f8
	goto loc_82CB42F8;
loc_82CB42EC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB42F8:
	// cmpwi cr6,r21,45
	cr6.compare<int32_t>(r21.s32, 45, xer);
	// bne cr6,0x82cb4334
	if (!cr6.eq) goto loc_82CB4334;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
	// b 0x82cb433c
	goto loc_82CB433C;
loc_82CB4334:
	// cmpwi cr6,r21,43
	cr6.compare<int32_t>(r21.s32, 43, xer);
	// bne cr6,0x82cb43c0
	if (!cr6.eq) goto loc_82CB43C0;
loc_82CB433C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x82cb438c
	if (!cr6.eq) goto loc_82CB438C;
	// li r29,0
	r29.s64 = 0;
	// b 0x82cb43c0
	goto loc_82CB43C0;
loc_82CB4350:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// beq cr6,0x82cb43d4
	if (cr6.eq) goto loc_82CB43D4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82cb1f98
	sub_82CB1F98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb45f4
	if (cr0.eq) goto loc_82CB45F4;
loc_82CB438C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb43b4
	if (cr0.lt) goto loc_82CB43B4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb43c0
	goto loc_82CB43C0;
loc_82CB43B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB43C0:
	// clrlwi r31,r21,24
	r31.u64 = r21.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ca6b10
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82cb4350
	if (!cr0.eq) goto loc_82CB4350;
loc_82CB43D4:
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82cb43f0
	if (cr6.eq) goto loc_82CB43F0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB43F0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82cb45f4
	if (cr6.eq) goto loc_82CB45F4;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(120) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82cb4468
	if (!cr6.eq) goto loc_82CB4468;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// extsb r11,r15
	r11.s64 = r15.s8;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(140) );
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(128) );
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// stbx r10,r30,r5
	PPC_STORE_U8(r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(28) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cb4468
	goto loc_82CB4468;
loc_82CB4440:
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bne cr6,0x82cb45b0
	if (!cr6.eq) goto loc_82CB45B0;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// bne cr6,0x82cb4468
	if (!cr6.eq) goto loc_82CB4468;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(132) );
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
loc_82CB4468:
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r30,r10,0
	r30.u64 = rotl32(ctx.r10.u32, 0);
	// b 0x82cb4534
	goto loc_82CB4534;
loc_82CB4488:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb44b8
	if (cr0.lt) goto loc_82CB44B8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r21,0(r11)
	r21.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb44c4
	goto loc_82CB44C4;
loc_82CB44B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82CB44C4:
	// lbz r11,0(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// addi r30,r18,1
	r30.s64 = r18.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bne cr6,0x82cb45e0
	if (!cr6.eq) goto loc_82CB45E0;
	// clrlwi r3,r21,24
	ctx.r3.u64 = r21.u32 & 0xFF;
	// bl 0x8223f970
	sub_8223F970(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82cb4534
	if (cr0.eq) goto loc_82CB4534;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(4) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x82cb4510
	if (cr0.lt) goto loc_82CB4510;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x82cb4518
	goto loc_82CB4518;
loc_82CB4510:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb5958
	sub_82CB5958(ctx, base);
loc_82CB4518:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r30.u32);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x82cb45d0
	if (!cr6.eq) goto loc_82CB45D0;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82CB4534:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// bne cr6,0x82cb455c
	if (!cr6.eq) goto loc_82CB455C;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x82cb45f4
	if (!cr6.eq) goto loc_82CB45F4;
	// lwz r11,716(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// bne cr6,0x82cb45f4
	if (!cr6.eq) goto loc_82CB45F4;
	// lwz r30,716(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(716) );
loc_82CB455C:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82cb3404
	if (!cr0.eq) goto loc_82CB3404;
	// b 0x82cb45f4
	goto loc_82CB45F4;
loc_82CB456C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_82CB4574:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82cb45f4
	goto loc_82CB45F4;
loc_82CB4584:
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// extsb. r10,r23
	ctx.r10.s64 = r23.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x82cb45a4
	if (cr0.eq) goto loc_82CB45A4;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// b 0x82cb45f4
	goto loc_82CB45F4;
loc_82CB45A4:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82cb45f4
	goto loc_82CB45F4;
loc_82CB45B0:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cb45c4
	if (cr6.eq) goto loc_82CB45C4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB45C4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// b 0x82cb45f4
	goto loc_82CB45F4;
loc_82CB45D0:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82cb45e0
	if (cr6.eq) goto loc_82CB45E0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB45E0:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// beq cr6,0x82cb45f4
	if (cr6.eq) goto loc_82CB45F4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82cba120
	sub_82CBA120(ctx, base);
loc_82CB45F4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cb4608
	if (!cr6.eq) goto loc_82CB4608;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// bl 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
loc_82CB4608:
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// bne cr6,0x82cb462c
	if (!cr6.eq) goto loc_82CB462C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82cb4648
	if (!cr6.eq) goto loc_82CB4648;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82cb4648
	if (!cr0.eq) goto loc_82CB4648;
	// b 0x82cb32c8
	goto loc_82CB32C8;
loc_82CB462C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(136) );
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82cb4644
	if (!cr6.eq) goto loc_82CB4644;
	// bl 0x82cab770
	sub_82CAB770(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// b 0x82cb33ac
	goto loc_82CB33AC;
loc_82CB4644:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
loc_82CB4648:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82CB3260) {
	__imp__sub_82CB3260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82cb4670
	if (!cr6.eq) goto loc_82CB4670;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB4670:
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(20) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82cb4680
	if (!cr6.eq) goto loc_82CB4680;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB4680:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb4690
	if (!cr6.eq) goto loc_82CB4690;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB4690:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82cb46c4
	if (cr6.eq) goto loc_82CB46C4;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82CB46A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cb46dc
	if (cr6.eq) goto loc_82CB46DC;
	// blt cr6,0x82cb46ec
	if (cr6.lt) goto loc_82CB46EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82cb46a4
	if (cr6.lt) goto loc_82CB46A4;
loc_82CB46C4:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(24) );
	// rlwinm r11,r31,3,0,28
	r11.u64 = rotl64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82CB46D0:
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-4) );
loc_82CB46D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
loc_82CB46DC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82cb46d4
	goto loc_82CB46D4;
loc_82CB46EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82cb46fc
	if (!cr6.eq) goto loc_82CB46FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82cb46d4
	goto loc_82CB46D4;
loc_82CB46FC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// b 0x82cb46d0
	goto loc_82CB46D0;
}

PPC_WEAK_FUNC(sub_82CB4650) {
	__imp__sub_82CB4650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4738
	if (cr6.eq) goto loc_82CB4738;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb4738
	if (cr6.eq) goto loc_82CB4738;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82cb4738
	if (cr6.eq) goto loc_82CB4738;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_82CB4738:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82cb4650
	sub_82CB4650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82CB4708) {
	__imp__sub_82CB4708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(12) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4748) {
	__imp__sub_82CB4748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cb480c
	if (cr6.eq) goto loc_82CB480C;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cb480c
	if (cr6.eq) goto loc_82CB480C;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cb47c8
	if (cr6.eq) goto loc_82CB47C8;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_82CB4794:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82cb47b8
	if (cr0.eq) goto loc_82CB47B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cb4794
	if (cr6.eq) goto loc_82CB4794;
loc_82CB47B8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cb47c8
	if (cr0.eq) goto loc_82CB47C8;
loc_82CB47C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CB47C8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb47e0
	if (cr0.eq) goto loc_82CB47E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,28,28
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb47c0
	if (cr0.eq) goto loc_82CB47C0;
loc_82CB47E0:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb47f8
	if (cr0.eq) goto loc_82CB47F8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82cb47c0
	if (cr0.eq) goto loc_82CB47C0;
loc_82CB47F8:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb480c
	if (cr0.eq) goto loc_82CB480C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm. r11,r11,0,30,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82cb47c0
	if (cr0.eq) goto loc_82CB47C0;
loc_82CB480C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4768) {
	__imp__sub_82CB4768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lis r10,-8125
	ctx.r10.s64 = -532480000;
	// ori r10,r10,20301
	ctx.r10.u64 = ctx.r10.u64 | 20301;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cb485c
	if (cr6.eq) goto loc_82CB485C;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cb4880
	if (!cr6.eq) goto loc_82CB4880;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bl 0x82cb57a0
	sub_82CB57A0(ctx, base);
loc_82CB485C:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82cb4880
	if (!cr6.gt) goto loc_82CB4880;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CB4880:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4818) {
	__imp__sub_82CB4818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB48A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// bl 0x82cb4708
	sub_82CB4708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82cb4910
	if (cr6.eq) goto loc_82CB4910;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
loc_82CB48EC:
	// rlwinm r11,r27,3,0,28
	r11.u64 = rotl64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cb4910
	if (!cr6.eq) goto loc_82CB4910;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// stw r27,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r27.u32);
	// bne cr6,0x82cb48ec
	if (!cr6.eq) goto loc_82CB48EC;
loc_82CB4910:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82cb4920
	if (!cr6.eq) goto loc_82CB4920;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82cb4a10
	if (cr6.eq) goto loc_82CB4A10;
loc_82CB4920:
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CB4934:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// beq cr6,0x82cb49dc
	if (cr6.eq) goto loc_82CB49DC;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// ble cr6,0x82cb4954
	if (!cr6.gt) goto loc_82CB4954;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82cb4958
	if (cr6.lt) goto loc_82CB4958;
loc_82CB4954:
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB4958:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// rlwinm r29,r28,3,0,28
	r29.u64 = rotl64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82cb49b0
	if (cr6.eq) goto loc_82CB49B0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82cb4748
	sub_82CB4748(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// bl 0x82cba3e0
	sub_82CBA3E0(ctx, base);
loc_82CB49B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82cb49d4
	goto loc_82CB49D4;
	// lwz r27,204(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// lwz r25,188(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + int32_t(188) );
	// lwz r26,180(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
loc_82CB49D4:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x82cb4934
	goto loc_82CB4934;
loc_82CB49DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x82cb4a18
	sub_82CB4A18(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(204) );
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82cb49fc
	if (cr6.eq) goto loc_82CB49FC;
	// bl 0x82cb5800
	sub_82CB5800(ctx, base);
loc_82CB49FC:
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(196) );
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(188) );
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// bl 0x82cb4748
	sub_82CB4748(ctx, base);
loc_82CB4A10:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82CB48A0) {
	__imp__sub_82CB48A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82CB4A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(132) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82cb4a48
	if (!cr6.gt) goto loc_82CB4A48;
	// bl 0x82cac610
	sub_82CAC610(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(0) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82CB4A48:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(0) );
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82CB4A18) {
	__imp__sub_82CB4A18(ctx, base);
}

