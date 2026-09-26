#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextGlid__11CDngFreeMapFP9GLID_INFOPi
// Address: 0x1eaaf0 - 0x1eab24
void GetNextGlid__11CDngFreeMapFP9GLID_INFOPi_0x1eaaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextGlid__11CDngFreeMapFP9GLID_INFOPi_0x1eaaf0");
#endif

    switch (ctx->pc) {
        case 0x1eab18u: goto label_1eab18;
        default: break;
    }

    ctx->pc = 0x1eaaf0u;

    // 0x1eaaf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eaaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eaaf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAAF4u;
    {
        const bool branch_taken_0x1eaaf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAF4u;
            // 0x1eaaf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaf4) {
            ctx->pc = 0x1EAB08u;
            goto label_1eab08;
        }
    }
    ctx->pc = 0x1EAAFCu;
    // 0x1eaafc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eab00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB00u;
    {
        const bool branch_taken_0x1eab00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab00) {
            ctx->pc = 0x1EAB10u;
            goto label_1eab10;
        }
    }
    ctx->pc = 0x1EAB08u;
label_1eab08:
    // 0x1eab08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB08u;
    {
        const bool branch_taken_0x1eab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB08u;
            // 0x1eab0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab08) {
            ctx->pc = 0x1EAB18u;
            goto label_1eab18;
        }
    }
    ctx->pc = 0x1EAB10u;
label_1eab10:
    // 0x1eab10: 0xc0be8b0  jal         func_2FA2C0
    ctx->pc = 0x1EAB10u;
    SET_GPR_U32(ctx, 31, 0x1EAB18u);
    ctx->pc = 0x2FA2C0u;
    if (runtime->hasFunction(0x2FA2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB18u; }
        if (ctx->pc != 0x1EAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB18u; }
        if (ctx->pc != 0x1EAB18u) { return; }
    }
    ctx->pc = 0x1EAB18u;
label_1eab18:
    // 0x1eab18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eab18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB1Cu;
            // 0x1eab20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAB24u;
}
