#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _fstat_r
// Address: 0x125d10 - 0x125d6c
void _fstat_r_0x125d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fstat_r_0x125d10");
#endif

    switch (ctx->pc) {
        case 0x125d38u: goto label_125d38;
        default: break;
    }

    ctx->pc = 0x125d10u;

    // 0x125d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125d18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x125d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d24: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
    // 0x125d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125d2c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x125d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d30: 0xc044226  jal         func_110898
    ctx->pc = 0x125D30u;
    SET_GPR_U32(ctx, 31, 0x125D38u);
    ctx->pc = 0x125D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D30u;
            // 0x125d34: 0xae204dc0  sw          $zero, 0x4DC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 19904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110898u;
    if (runtime->hasFunction(0x110898u)) {
        auto targetFn = runtime->lookupFunction(0x110898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D38u; }
        if (ctx->pc != 0x125D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x110898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D38u; }
        if (ctx->pc != 0x125D38u) { return; }
    }
    ctx->pc = 0x125D38u;
label_125d38:
    // 0x125d38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125d40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125D40u;
    {
        const bool branch_taken_0x125d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D40u;
            // 0x125d44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d40) {
            ctx->pc = 0x125D58u;
            goto label_125d58;
        }
    }
    ctx->pc = 0x125D48u;
    // 0x125d48: 0x8e224dc0  lw          $v0, 0x4DC0($s1)
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19904)));
    // 0x125d4c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x125D4Cu;
    {
        const bool branch_taken_0x125d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125d4c) {
            ctx->pc = 0x125D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125D4Cu;
            // 0x125d50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125D58u;
            goto label_125d58;
        }
    }
    ctx->pc = 0x125D54u;
    // 0x125d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125d58:
    // 0x125d58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x125d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125d64: 0x3e00008  jr          $ra
    ctx->pc = 0x125D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D64u;
            // 0x125d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125D6Cu;
}
