#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_LINK__FP9SPI_STACKi
// Address: 0x2f8fd0 - 0x2f9048
void ps2__ROOM_LINK__FP9SPI_STACKi_0x2f8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_LINK__FP9SPI_STACKi_0x2f8fd0");
#endif

    switch (ctx->pc) {
        case 0x2f9000u: goto label_2f9000;
        case 0x2f900cu: goto label_2f900c;
        default: break;
    }

    ctx->pc = 0x2f8fd0u;

    // 0x2f8fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f8fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f8fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f8fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f8fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f8fe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f8fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8fe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f8fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8ff0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2f8ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f8ff4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8FF4u;
    {
        const bool branch_taken_0x2f8ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FF4u;
            // 0x2f8ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ff4) {
            ctx->pc = 0x2F9028u;
            goto label_2f9028;
        }
    }
    ctx->pc = 0x2F8FFCu;
    // 0x2f8ffc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f8ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9000:
    // 0x2f9000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9004: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9004u;
    SET_GPR_U32(ctx, 31, 0x2F900Cu);
    ctx->pc = 0x2F9008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9004u;
            // 0x2f9008: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F900Cu; }
        if (ctx->pc != 0x2F900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F900Cu; }
        if (ctx->pc != 0x2F900Cu) { return; }
    }
    ctx->pc = 0x2F900Cu;
label_2f900c:
    // 0x2f900c: 0x8f849f5c  lw          $a0, -0x60A4($gp)
    ctx->pc = 0x2f900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f9010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f9014: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2f9014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f9018: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f9018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f901c: 0xa482002e  sh          $v0, 0x2E($a0)
    ctx->pc = 0x2f901cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f9020: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F9020u;
    {
        const bool branch_taken_0x2f9020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9020u;
            // 0x2f9024: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9020) {
            ctx->pc = 0x2F9000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9000;
        }
    }
    ctx->pc = 0x2F9028u;
label_2f9028:
    // 0x2f9028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f902c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f902cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f903c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f903cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9040: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9040u;
            // 0x2f9044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9048u;
}
