#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_CALC_CARRY__FP12RS_STACKDATAi
// Address: 0x2762f0 - 0x276328
void ps2__SPHIDA_CALC_CARRY__FP12RS_STACKDATAi_0x2762f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_CALC_CARRY__FP12RS_STACKDATAi_0x2762f0");
#endif

    switch (ctx->pc) {
        case 0x276300u: goto label_276300;
        default: break;
    }

    ctx->pc = 0x2762f0u;

    // 0x2762f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2762f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2762f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2762f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2762f8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2762F8u;
    SET_GPR_U32(ctx, 31, 0x276300u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276300u; }
        if (ctx->pc != 0x276300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276300u; }
        if (ctx->pc != 0x276300u) { return; }
    }
    ctx->pc = 0x276300u;
label_276300:
    // 0x276300: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x276300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x276304: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276304u;
    {
        const bool branch_taken_0x276304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276304) {
            ctx->pc = 0x276314u;
            goto label_276314;
        }
    }
    ctx->pc = 0x27630Cu;
    // 0x27630c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27630Cu;
    {
        const bool branch_taken_0x27630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27630Cu;
            // 0x276310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27630c) {
            ctx->pc = 0x27631Cu;
            goto label_27631c;
        }
    }
    ctx->pc = 0x276314u;
label_276314:
    // 0x276314: 0xe4400200  swc1        $f0, 0x200($v0)
    ctx->pc = 0x276314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 512), bits); }
    // 0x276318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27631c:
    // 0x27631c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27631cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276320: 0x3e00008  jr          $ra
    ctx->pc = 0x276320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276320u;
            // 0x276324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276328u;
}
