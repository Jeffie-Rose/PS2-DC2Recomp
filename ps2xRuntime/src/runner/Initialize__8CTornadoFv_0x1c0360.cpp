#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CTornadoFv
// Address: 0x1c0360 - 0x1c03d8
void Initialize__8CTornadoFv_0x1c0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CTornadoFv_0x1c0360");
#endif

    switch (ctx->pc) {
        case 0x1c0370u: goto label_1c0370;
        case 0x1c03acu: goto label_1c03ac;
        default: break;
    }

    ctx->pc = 0x1c0360u;

    // 0x1c0360: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1c0360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1c0364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0368: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1c0368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c036c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1c0370:
    // 0x1c0370: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x1c0370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0374: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1c0374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1c0378: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x1c0378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c037c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x1c037cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c0380: 0xa0800080  sb          $zero, 0x80($a0)
    ctx->pc = 0x1c0380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0384: 0xa08000b0  sb          $zero, 0xB0($a0)
    ctx->pc = 0x1c0384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0388: 0xa08000e0  sb          $zero, 0xE0($a0)
    ctx->pc = 0x1c0388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c038c: 0xa0800110  sb          $zero, 0x110($a0)
    ctx->pc = 0x1c038cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0390: 0xa0800140  sb          $zero, 0x140($a0)
    ctx->pc = 0x1c0390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0394: 0xa0800170  sb          $zero, 0x170($a0)
    ctx->pc = 0x1c0394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 368), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0398: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C0398u;
    {
        const bool branch_taken_0x1c0398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0398u;
            // 0x1c039c: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0398) {
            ctx->pc = 0x1C0370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0370;
        }
    }
    ctx->pc = 0x1C03A0u;
    // 0x1c03a0: 0x28a10012  slti        $at, $a1, 0x12
    ctx->pc = 0x1c03a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1c03a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03A4u;
    {
        const bool branch_taken_0x1c03a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03a4) {
            ctx->pc = 0x1C03CCu;
            goto label_1c03cc;
        }
    }
    ctx->pc = 0x1C03ACu;
label_1c03ac:
    // 0x1c03ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c03acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c03b0: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x1c03b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c03b4: 0x28a30012  slti        $v1, $a1, 0x12
    ctx->pc = 0x1c03b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1c03b8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c03bc: 0x0  nop
    ctx->pc = 0x1c03bcu;
    // NOP
    // 0x1c03c0: 0x0  nop
    ctx->pc = 0x1c03c0u;
    // NOP
    // 0x1c03c4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C03C4u;
    {
        const bool branch_taken_0x1c03c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03c4) {
            ctx->pc = 0x1C03ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c03ac;
        }
    }
    ctx->pc = 0x1C03CCu;
label_1c03cc:
    // 0x1c03cc: 0x0  nop
    ctx->pc = 0x1c03ccu;
    // NOP
    // 0x1c03d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C03D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C03D8u;
}
