#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sbrk_r
// Address: 0x128438 - 0x128494
void _sbrk_r_0x128438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sbrk_r_0x128438");
#endif

    switch (ctx->pc) {
        case 0x12845cu: goto label_12845c;
        default: break;
    }

    ctx->pc = 0x128438u;

    // 0x128438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12843c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x128440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128444: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x128444u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
    // 0x128448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12844c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12844cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x128450: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128454: 0xc0441f8  jal         func_1107E0
    ctx->pc = 0x128454u;
    SET_GPR_U32(ctx, 31, 0x12845Cu);
    ctx->pc = 0x128458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128454u;
            // 0x128458: 0xae204dc0  sw          $zero, 0x4DC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 19904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1107E0u;
    if (runtime->hasFunction(0x1107E0u)) {
        auto targetFn = runtime->lookupFunction(0x1107E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12845Cu; }
        if (ctx->pc != 0x12845Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sbrk_0x1107e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12845Cu; }
        if (ctx->pc != 0x12845Cu) { return; }
    }
    ctx->pc = 0x12845Cu;
label_12845c:
    // 0x12845c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12845cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128460: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x128460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x128464: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x128464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x128468: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128468u;
    {
        const bool branch_taken_0x128468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128468u;
            // 0x12846c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128468) {
            ctx->pc = 0x128480u;
            goto label_128480;
        }
    }
    ctx->pc = 0x128470u;
    // 0x128470: 0x8e224dc0  lw          $v0, 0x4DC0($s1)
    ctx->pc = 0x128470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19904)));
    // 0x128474: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x128474u;
    {
        const bool branch_taken_0x128474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128474) {
            ctx->pc = 0x128478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128474u;
            // 0x128478: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128480u;
            goto label_128480;
        }
    }
    ctx->pc = 0x12847Cu;
    // 0x12847c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128480:
    // 0x128480: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x128480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128484: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12848c: 0x3e00008  jr          $ra
    ctx->pc = 0x12848Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12848Cu;
            // 0x128490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128494u;
}
