#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CFuncPointMngrFv
// Address: 0x29e350 - 0x29e3c0
void Initialize__14CFuncPointMngrFv_0x29e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CFuncPointMngrFv_0x29e350");
#endif

    switch (ctx->pc) {
        case 0x29e358u: goto label_29e358;
        case 0x29e398u: goto label_29e398;
        default: break;
    }

    ctx->pc = 0x29e350u;

    // 0x29e350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e358:
    // 0x29e358: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x29e358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29e35c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x29e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x29e360: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x29e360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x29e364: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x29e364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29e368: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x29e368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x29e36c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x29e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x29e370: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x29e370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x29e374: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x29e374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x29e378: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x29e378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x29e37c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x29e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x29e380: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x29e380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x29e384: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x29E384u;
    {
        const bool branch_taken_0x29e384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E384u;
            // 0x29e388: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e384) {
            ctx->pc = 0x29E358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e358;
        }
    }
    ctx->pc = 0x29E38Cu;
    // 0x29e38c: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x29e38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29e390: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E390u;
    {
        const bool branch_taken_0x29e390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E390u;
            // 0x29e394: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e390) {
            ctx->pc = 0x29E3B8u;
            goto label_29e3b8;
        }
    }
    ctx->pc = 0x29E398u;
label_29e398:
    // 0x29e398: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x29e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x29e39c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29e3a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29e3a4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x29e3a8: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x29e3a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29e3ac: 0x0  nop
    ctx->pc = 0x29e3acu;
    // NOP
    // 0x29e3b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29E3B0u;
    {
        const bool branch_taken_0x29e3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e3b0) {
            ctx->pc = 0x29E398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e398;
        }
    }
    ctx->pc = 0x29E3B8u;
label_29e3b8:
    // 0x29e3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E3C0u;
}
