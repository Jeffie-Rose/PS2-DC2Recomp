#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTextureTable__FiiP9mgCMemory
// Address: 0x1909e0 - 0x190a28
void SetTextureTable__FiiP9mgCMemory_0x1909e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTextureTable__FiiP9mgCMemory_0x1909e0");
#endif

    switch (ctx->pc) {
        case 0x190a00u: goto label_190a00;
        case 0x190a08u: goto label_190a08;
        case 0x190a1cu: goto label_190a1c;
        default: break;
    }

    ctx->pc = 0x1909e0u;

    // 0x1909e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1909e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1909e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1909e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1909e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909ec: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1909f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1909f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1909f4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1909f8: 0xc04b20c  jal         func_12C830
    ctx->pc = 0x1909F8u;
    SET_GPR_U32(ctx, 31, 0x190A00u);
    ctx->pc = 0x1909FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1909F8u;
            // 0x1909fc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C830u;
    if (runtime->hasFunction(0x12C830u)) {
        auto targetFn = runtime->lookupFunction(0x12C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A00u; }
        if (ctx->pc != 0x190A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A00u; }
        if (ctx->pc != 0x190A00u) { return; }
    }
    ctx->pc = 0x190A00u;
label_190a00:
    // 0x190a00: 0xc064234  jal         func_1908D0
    ctx->pc = 0x190A00u;
    SET_GPR_U32(ctx, 31, 0x190A08u);
    ctx->pc = 0x1908D0u;
    if (runtime->hasFunction(0x1908D0u)) {
        auto targetFn = runtime->lookupFunction(0x1908D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A08u; }
        if (ctx->pc != 0x190A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVramTopAddress__Fv_0x1908d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A08u; }
        if (ctx->pc != 0x190A08u) { return; }
    }
    ctx->pc = 0x190A08u;
label_190a08:
    // 0x190a08: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x190a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x190a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a10: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x190a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x190a14: 0xc04b2b4  jal         func_12CAD0
    ctx->pc = 0x190A14u;
    SET_GPR_U32(ctx, 31, 0x190A1Cu);
    ctx->pc = 0x190A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A14u;
            // 0x190a18: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD0u;
    if (runtime->hasFunction(0x12CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x12CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A1Cu; }
        if (ctx->pc != 0x190A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17mgCTextureManagerFii_0x12cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A1Cu; }
        if (ctx->pc != 0x190A1Cu) { return; }
    }
    ctx->pc = 0x190A1Cu;
label_190a1c:
    // 0x190a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190a20: 0x3e00008  jr          $ra
    ctx->pc = 0x190A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A20u;
            // 0x190a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190A28u;
}
