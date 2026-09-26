#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MASTER_VOL__FP12RS_STACKDATAi
// Address: 0x273d00 - 0x273d38
void ps2__GET_MASTER_VOL__FP12RS_STACKDATAi_0x273d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MASTER_VOL__FP12RS_STACKDATAi_0x273d00");
#endif

    switch (ctx->pc) {
        case 0x273d18u: goto label_273d18;
        case 0x273d24u: goto label_273d24;
        default: break;
    }

    ctx->pc = 0x273d00u;

    // 0x273d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273d10: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x273D10u;
    SET_GPR_U32(ctx, 31, 0x273D18u);
    ctx->pc = 0x273D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D10u;
            // 0x273d14: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D18u; }
        if (ctx->pc != 0x273D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D18u; }
        if (ctx->pc != 0x273D18u) { return; }
    }
    ctx->pc = 0x273D18u;
label_273d18:
    // 0x273d18: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x273d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x273d1c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x273D1Cu;
    SET_GPR_U32(ctx, 31, 0x273D24u);
    ctx->pc = 0x273D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273D1Cu;
            // 0x273d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D24u; }
        if (ctx->pc != 0x273D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D24u; }
        if (ctx->pc != 0x273D24u) { return; }
    }
    ctx->pc = 0x273D24u;
label_273d24:
    // 0x273d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273d30: 0x3e00008  jr          $ra
    ctx->pc = 0x273D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D30u;
            // 0x273d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273D38u;
}
