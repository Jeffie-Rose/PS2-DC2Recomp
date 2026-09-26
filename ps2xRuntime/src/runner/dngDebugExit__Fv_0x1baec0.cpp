#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngDebugExit__Fv
// Address: 0x1baec0 - 0x1baf6c
void dngDebugExit__Fv_0x1baec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngDebugExit__Fv_0x1baec0");
#endif

    switch (ctx->pc) {
        case 0x1baedcu: goto label_1baedc;
        default: break;
    }

    ctx->pc = 0x1baec0u;

    // 0x1baec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baec4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1baec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1baec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baecc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baed0: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1baed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1baed4: 0xc052d40  jal         func_14B500
    ctx->pc = 0x1BAED4u;
    SET_GPR_U32(ctx, 31, 0x1BAEDCu);
    ctx->pc = 0x1BAED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAED4u;
            // 0x1baed8: 0xa420f1f0  sh          $zero, -0xE10($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294963696), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEDCu; }
        if (ctx->pc != 0x1BAEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAEDCu; }
        if (ctx->pc != 0x1BAEDCu) { return; }
    }
    ctx->pc = 0x1BAEDCu;
label_1baedc:
    // 0x1baedc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baee0: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1baee4: 0x8c24f1f8  lw          $a0, -0xE08($at)
    ctx->pc = 0x1baee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963704)));
    // 0x1baee8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1baee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1baeec: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baef0: 0x8c268c00  lw          $a2, -0x7400($at)
    ctx->pc = 0x1baef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937600)));
    // 0x1baef4: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1baef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1baef8: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baefc: 0x8c258c08  lw          $a1, -0x73F8($at)
    ctx->pc = 0x1baefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937608)));
    // 0x1baf00: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baf04: 0x84248c18  lh          $a0, -0x73E8($at)
    ctx->pc = 0x1baf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937624)));
    // 0x1baf08: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x1baf0c: 0xac268070  sw          $a2, -0x7F90($at)
    ctx->pc = 0x1baf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934640), GPR_U32(ctx, 6));
    // 0x1baf10: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x1baf14: 0xac258074  sw          $a1, -0x7F8C($at)
    ctx->pc = 0x1baf14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934644), GPR_U32(ctx, 5));
    // 0x1baf18: 0xa464009e  sh          $a0, 0x9E($v1)
    ctx->pc = 0x1baf18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 158), (uint16_t)GPR_U32(ctx, 4));
    // 0x1baf1c: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baf20: 0x8c258c30  lw          $a1, -0x73D0($at)
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937648)));
    // 0x1baf24: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baf28: 0x8c248c38  lw          $a0, -0x73C8($at)
    ctx->pc = 0x1baf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937656)));
    // 0x1baf2c: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baf30: 0x8c238c40  lw          $v1, -0x73C0($at)
    ctx->pc = 0x1baf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937664)));
    // 0x1baf34: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1baf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1baf38: 0xc4208c48  lwc1        $f0, -0x73B8($at)
    ctx->pc = 0x1baf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baf3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baf40: 0xac25f200  sw          $a1, -0xE00($at)
    ctx->pc = 0x1baf40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963712), GPR_U32(ctx, 5));
    // 0x1baf44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1baf44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1baf48: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baf4c: 0xac24f204  sw          $a0, -0xDFC($at)
    ctx->pc = 0x1baf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963716), GPR_U32(ctx, 4));
    // 0x1baf50: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baf54: 0xac23f208  sw          $v1, -0xDF8($at)
    ctx->pc = 0x1baf54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963720), GPR_U32(ctx, 3));
    // 0x1baf58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baf5c: 0xe420f20c  swc1        $f0, -0xDF4($at)
    ctx->pc = 0x1baf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963724), bits); }
    // 0x1baf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf64: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF64u;
            // 0x1baf68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAF6Cu;
}
