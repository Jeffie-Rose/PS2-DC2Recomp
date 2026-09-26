#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_RAIN__FP12RS_STACKDATAi
// Address: 0x263a30 - 0x263a74
void ps2__SET_RAIN__FP12RS_STACKDATAi_0x263a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_RAIN__FP12RS_STACKDATAi_0x263a30");
#endif

    switch (ctx->pc) {
        case 0x263a40u: goto label_263a40;
        case 0x263a54u: goto label_263a54;
        case 0x263a64u: goto label_263a64;
        default: break;
    }

    ctx->pc = 0x263a30u;

    // 0x263a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263a38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263A38u;
    SET_GPR_U32(ctx, 31, 0x263A40u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A40u; }
        if (ctx->pc != 0x263A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A40u; }
        if (ctx->pc != 0x263A40u) { return; }
    }
    ctx->pc = 0x263A40u;
label_263a40:
    // 0x263a40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263A40u;
    {
        const bool branch_taken_0x263a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A40u;
            // 0x263a44: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a40) {
            ctx->pc = 0x263A5Cu;
            goto label_263a5c;
        }
    }
    ctx->pc = 0x263A48u;
    // 0x263a48: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x263a4c: 0xc0a08b8  jal         func_2822E0
    ctx->pc = 0x263A4Cu;
    SET_GPR_U32(ctx, 31, 0x263A54u);
    ctx->pc = 0x263A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263A4Cu;
            // 0x263a50: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2822E0u;
    if (runtime->hasFunction(0x2822E0u)) {
        auto targetFn = runtime->lookupFunction(0x2822E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A54u; }
        if (ctx->pc != 0x263A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Start__5CRainFv_0x2822e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A54u; }
        if (ctx->pc != 0x263A54u) { return; }
    }
    ctx->pc = 0x263A54u;
label_263a54:
    // 0x263a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263A54u;
    {
        const bool branch_taken_0x263a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A54u;
            // 0x263a58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a54) {
            ctx->pc = 0x263A68u;
            goto label_263a68;
        }
    }
    ctx->pc = 0x263A5Cu;
label_263a5c:
    // 0x263a5c: 0xc0a08b4  jal         func_2822D0
    ctx->pc = 0x263A5Cu;
    SET_GPR_U32(ctx, 31, 0x263A64u);
    ctx->pc = 0x263A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263A5Cu;
            // 0x263a60: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2822D0u;
    if (runtime->hasFunction(0x2822D0u)) {
        auto targetFn = runtime->lookupFunction(0x2822D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A64u; }
        if (ctx->pc != 0x263A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__5CRainFv_0x2822d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263A64u; }
        if (ctx->pc != 0x263A64u) { return; }
    }
    ctx->pc = 0x263A64u;
label_263a64:
    // 0x263a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_263a68:
    // 0x263a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x263A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263A6Cu;
            // 0x263a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263A74u;
}
