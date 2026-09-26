#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _read_r
// Address: 0x1283d8 - 0x128438
void _read_r_0x1283d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_read_r_0x1283d8");
#endif

    switch (ctx->pc) {
        case 0x128404u: goto label_128404;
        default: break;
    }

    ctx->pc = 0x1283d8u;

    // 0x1283d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1283d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1283dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1283dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1283e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1283e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1283e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1283e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1283e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283ec: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
    // 0x1283f0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1283f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1283f8: 0xae204dc0  sw          $zero, 0x4DC0($s1)
    ctx->pc = 0x1283f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19904), GPR_U32(ctx, 0));
    // 0x1283fc: 0xc0441ca  jal         func_110728
    ctx->pc = 0x1283FCu;
    SET_GPR_U32(ctx, 31, 0x128404u);
    ctx->pc = 0x128400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283FCu;
            // 0x128400: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110728u;
    if (runtime->hasFunction(0x110728u)) {
        auto targetFn = runtime->lookupFunction(0x110728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128404u; }
        if (ctx->pc != 0x128404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_0x110728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128404u; }
        if (ctx->pc != 0x128404u) { return; }
    }
    ctx->pc = 0x128404u;
label_128404:
    // 0x128404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128408: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12840c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12840Cu;
    {
        const bool branch_taken_0x12840c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12840Cu;
            // 0x128410: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12840c) {
            ctx->pc = 0x128424u;
            goto label_128424;
        }
    }
    ctx->pc = 0x128414u;
    // 0x128414: 0x8e224dc0  lw          $v0, 0x4DC0($s1)
    ctx->pc = 0x128414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19904)));
    // 0x128418: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x128418u;
    {
        const bool branch_taken_0x128418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128418) {
            ctx->pc = 0x12841Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128418u;
            // 0x12841c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128424u;
            goto label_128424;
        }
    }
    ctx->pc = 0x128420u;
    // 0x128420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128424:
    // 0x128424: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x128424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12842c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12842cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128430: 0x3e00008  jr          $ra
    ctx->pc = 0x128430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128430u;
            // 0x128434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128438u;
}
