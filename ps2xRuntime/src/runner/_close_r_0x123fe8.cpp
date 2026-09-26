#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _close_r
// Address: 0x123fe8 - 0x124040
void _close_r_0x123fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_close_r_0x123fe8");
#endif

    switch (ctx->pc) {
        case 0x12400cu: goto label_12400c;
        default: break;
    }

    ctx->pc = 0x123fe8u;

    // 0x123fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123fec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ff8: 0x3c1001f6  lui         $s0, 0x1F6
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)502 << 16));
    // 0x123ffc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x124000: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124004: 0xc0441f2  jal         func_1107C8
    ctx->pc = 0x124004u;
    SET_GPR_U32(ctx, 31, 0x12400Cu);
    ctx->pc = 0x124008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124004u;
            // 0x124008: 0xae004dc0  sw          $zero, 0x4DC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 19904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1107C8u;
    if (runtime->hasFunction(0x1107C8u)) {
        auto targetFn = runtime->lookupFunction(0x1107C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12400Cu; }
        if (ctx->pc != 0x12400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        close_0x1107c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12400Cu; }
        if (ctx->pc != 0x12400Cu) { return; }
    }
    ctx->pc = 0x12400Cu;
label_12400c:
    // 0x12400c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12400cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124014: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124014u;
    {
        const bool branch_taken_0x124014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124014u;
            // 0x124018: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124014) {
            ctx->pc = 0x12402Cu;
            goto label_12402c;
        }
    }
    ctx->pc = 0x12401Cu;
    // 0x12401c: 0x8e024dc0  lw          $v0, 0x4DC0($s0)
    ctx->pc = 0x12401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19904)));
    // 0x124020: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x124020u;
    {
        const bool branch_taken_0x124020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124020) {
            ctx->pc = 0x124024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124020u;
            // 0x124024: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12402Cu;
            goto label_12402c;
        }
    }
    ctx->pc = 0x124028u;
    // 0x124028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12402c:
    // 0x12402c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12402cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124030: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x124030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124038: 0x3e00008  jr          $ra
    ctx->pc = 0x124038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124038u;
            // 0x12403c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124040u;
}
