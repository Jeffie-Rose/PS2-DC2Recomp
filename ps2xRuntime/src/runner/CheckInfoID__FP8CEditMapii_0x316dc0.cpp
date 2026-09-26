#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInfoID__FP8CEditMapii
// Address: 0x316dc0 - 0x316e04
void CheckInfoID__FP8CEditMapii_0x316dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInfoID__FP8CEditMapii_0x316dc0");
#endif

    switch (ctx->pc) {
        case 0x316dd4u: goto label_316dd4;
        case 0x316decu: goto label_316dec;
        default: break;
    }

    ctx->pc = 0x316dc0u;

    // 0x316dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x316dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x316dcc: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x316DCCu;
    SET_GPR_U32(ctx, 31, 0x316DD4u);
    ctx->pc = 0x316DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316DCCu;
            // 0x316dd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DD4u; }
        if (ctx->pc != 0x316DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DD4u; }
        if (ctx->pc != 0x316DD4u) { return; }
    }
    ctx->pc = 0x316DD4u;
label_316dd4:
    // 0x316dd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316DD4u;
    {
        const bool branch_taken_0x316dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316DD4u;
            // 0x316dd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316dd4) {
            ctx->pc = 0x316DE4u;
            goto label_316de4;
        }
    }
    ctx->pc = 0x316DDCu;
    // 0x316ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x316DDCu;
    {
        const bool branch_taken_0x316ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316DDCu;
            // 0x316de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ddc) {
            ctx->pc = 0x316DF4u;
            goto label_316df4;
        }
    }
    ctx->pc = 0x316DE4u;
label_316de4:
    // 0x316de4: 0xc06d694  jal         func_1B5A50
    ctx->pc = 0x316DE4u;
    SET_GPR_U32(ctx, 31, 0x316DECu);
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DECu; }
        if (ctx->pc != 0x316DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316DECu; }
        if (ctx->pc != 0x316DECu) { return; }
    }
    ctx->pc = 0x316DECu;
label_316dec:
    // 0x316dec: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x316decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x316df0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x316df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_316df4:
    // 0x316df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x316df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x316DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316DFCu;
            // 0x316e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316E04u;
}
