#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcITEM_SET__FP9SPI_STACKi
// Address: 0x193af0 - 0x193b38
void gcITEM_SET__FP9SPI_STACKi_0x193af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcITEM_SET__FP9SPI_STACKi_0x193af0");
#endif

    switch (ctx->pc) {
        case 0x193b04u: goto label_193b04;
        case 0x193b18u: goto label_193b18;
        case 0x193b24u: goto label_193b24;
        default: break;
    }

    ctx->pc = 0x193af0u;

    // 0x193af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193afc: 0xc064220  jal         func_190880
    ctx->pc = 0x193AFCu;
    SET_GPR_U32(ctx, 31, 0x193B04u);
    ctx->pc = 0x193B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193AFCu;
            // 0x193b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B04u; }
        if (ctx->pc != 0x193B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B04u; }
        if (ctx->pc != 0x193B04u) { return; }
    }
    ctx->pc = 0x193B04u;
label_193b04:
    // 0x193b04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x193b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b0c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x193b0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x193b10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193B10u;
    SET_GPR_U32(ctx, 31, 0x193B18u);
    ctx->pc = 0x193B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B10u;
            // 0x193b14: 0x418021  addu        $s0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B18u; }
        if (ctx->pc != 0x193B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B18u; }
        if (ctx->pc != 0x193B18u) { return; }
    }
    ctx->pc = 0x193B18u;
label_193b18:
    // 0x193b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b1c: 0xc0686e0  jal         func_1A1B80
    ctx->pc = 0x193B1Cu;
    SET_GPR_U32(ctx, 31, 0x193B24u);
    ctx->pc = 0x193B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B1Cu;
            // 0x193b20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B24u; }
        if (ctx->pc != 0x193B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B24u; }
        if (ctx->pc != 0x193B24u) { return; }
    }
    ctx->pc = 0x193B24u;
label_193b24:
    // 0x193b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b30: 0x3e00008  jr          $ra
    ctx->pc = 0x193B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B30u;
            // 0x193b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193B38u;
}
