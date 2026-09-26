#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DIST_VECTOR__FP12RS_STACKDATAi
// Address: 0x276ae0 - 0x276b28
void ps2__DIST_VECTOR__FP12RS_STACKDATAi_0x276ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DIST_VECTOR__FP12RS_STACKDATAi_0x276ae0");
#endif

    switch (ctx->pc) {
        case 0x276afcu: goto label_276afc;
        case 0x276b08u: goto label_276b08;
        case 0x276b14u: goto label_276b14;
        default: break;
    }

    ctx->pc = 0x276ae0u;

    // 0x276ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276af0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x276af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276af4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276AF4u;
    SET_GPR_U32(ctx, 31, 0x276AFCu);
    ctx->pc = 0x276AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276AF4u;
            // 0x276af8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AFCu; }
        if (ctx->pc != 0x276AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276AFCu; }
        if (ctx->pc != 0x276AFCu) { return; }
    }
    ctx->pc = 0x276AFCu;
label_276afc:
    // 0x276afc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x276afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276b00: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x276B00u;
    SET_GPR_U32(ctx, 31, 0x276B08u);
    ctx->pc = 0x276B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B00u;
            // 0x276b04: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B08u; }
        if (ctx->pc != 0x276B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B08u; }
        if (ctx->pc != 0x276B08u) { return; }
    }
    ctx->pc = 0x276B08u;
label_276b08:
    // 0x276b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b0c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276B0Cu;
    SET_GPR_U32(ctx, 31, 0x276B14u);
    ctx->pc = 0x276B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276B0Cu;
            // 0x276b10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B14u; }
        if (ctx->pc != 0x276B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276B14u; }
        if (ctx->pc != 0x276B14u) { return; }
    }
    ctx->pc = 0x276B14u;
label_276b14:
    // 0x276b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x276b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276b20: 0x3e00008  jr          $ra
    ctx->pc = 0x276B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276B20u;
            // 0x276b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276B28u;
}
