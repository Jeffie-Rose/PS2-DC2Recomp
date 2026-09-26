#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE
// Address: 0x252f30 - 0x252f64
void MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30");
#endif

    switch (ctx->pc) {
        case 0x252f44u: goto label_252f44;
        case 0x252f50u: goto label_252f50;
        default: break;
    }

    ctx->pc = 0x252f30u;

    // 0x252f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252f3c: 0xc05191c  jal         func_146470
    ctx->pc = 0x252F3Cu;
    SET_GPR_U32(ctx, 31, 0x252F44u);
    ctx->pc = 0x252F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252F3Cu;
            // 0x252f40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F44u; }
        if (ctx->pc != 0x252F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F44u; }
        if (ctx->pc != 0x252F44u) { return; }
    }
    ctx->pc = 0x252F44u;
label_252f44:
    // 0x252f44: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x252f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x252f48: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x252F48u;
    SET_GPR_U32(ctx, 31, 0x252F50u);
    ctx->pc = 0x252F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252F48u;
            // 0x252f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F50u; }
        if (ctx->pc != 0x252F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F50u; }
        if (ctx->pc != 0x252F50u) { return; }
    }
    ctx->pc = 0x252F50u;
label_252f50:
    // 0x252f50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x252f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x252f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x252F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F5Cu;
            // 0x252f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252F64u;
}
