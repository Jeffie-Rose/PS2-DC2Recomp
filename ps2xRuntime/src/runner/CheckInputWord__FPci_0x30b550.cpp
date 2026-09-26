#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInputWord__FPci
// Address: 0x30b550 - 0x30b5d4
void CheckInputWord__FPci_0x30b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInputWord__FPci_0x30b550");
#endif

    switch (ctx->pc) {
        case 0x30b56cu: goto label_30b56c;
        case 0x30b57cu: goto label_30b57c;
        default: break;
    }

    ctx->pc = 0x30b550u;

    // 0x30b550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30b558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b564: 0xc04a422  jal         func_129088
    ctx->pc = 0x30B564u;
    SET_GPR_U32(ctx, 31, 0x30B56Cu);
    ctx->pc = 0x30B568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B564u;
            // 0x30b568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B56Cu; }
        if (ctx->pc != 0x30B56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B56Cu; }
        if (ctx->pc != 0x30B56Cu) { return; }
    }
    ctx->pc = 0x30B56Cu;
label_30b56c:
    // 0x30b56c: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x30b56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30b570: 0x4c00013  bltz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x30B570u;
    {
        const bool branch_taken_0x30b570 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x30B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B570u;
            // 0x30b574: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b570) {
            ctx->pc = 0x30B5C0u;
            goto label_30b5c0;
        }
    }
    ctx->pc = 0x30B578u;
    // 0x30b578: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x30b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_30b57c:
    // 0x30b57c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B57Cu;
    {
        const bool branch_taken_0x30b57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B57Cu;
            // 0x30b580: 0x2263821  addu        $a3, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b57c) {
            ctx->pc = 0x30B5B0u;
            goto label_30b5b0;
        }
    }
    ctx->pc = 0x30B584u;
    // 0x30b584: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x30b584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30b588: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x30B588u;
    {
        const bool branch_taken_0x30b588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x30b588) {
            ctx->pc = 0x30B5C0u;
            goto label_30b5c0;
        }
    }
    ctx->pc = 0x30B590u;
    // 0x30b590: 0x90e4ffff  lbu         $a0, -0x1($a3)
    ctx->pc = 0x30b590u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x30b594: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B594u;
    {
        const bool branch_taken_0x30b594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B594u;
            // 0x30b598: 0x24e8ffff  addiu       $t0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b594) {
            ctx->pc = 0x30B5A4u;
            goto label_30b5a4;
        }
    }
    ctx->pc = 0x30B59Cu;
    // 0x30b59c: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x30b59cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b5a0: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x30b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_30b5a4:
    // 0x30b5a4: 0x0  nop
    ctx->pc = 0x30b5a4u;
    // NOP
    // 0x30b5a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30B5A8u;
    {
        const bool branch_taken_0x30b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5A8u;
            // 0x30b5ac: 0x24c6fffe  addiu       $a2, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b5a8) {
            ctx->pc = 0x30B5B4u;
            goto label_30b5b4;
        }
    }
    ctx->pc = 0x30B5B0u;
label_30b5b0:
    // 0x30b5b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x30b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_30b5b4:
    // 0x30b5b4: 0x0  nop
    ctx->pc = 0x30b5b4u;
    // NOP
    // 0x30b5b8: 0x4c1fff0  bgez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30B5B8u;
    {
        const bool branch_taken_0x30b5b8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x30b5b8) {
            ctx->pc = 0x30B57Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b57c;
        }
    }
    ctx->pc = 0x30B5C0u;
label_30b5c0:
    // 0x30b5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30B5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B5CCu;
            // 0x30b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B5D4u;
}
