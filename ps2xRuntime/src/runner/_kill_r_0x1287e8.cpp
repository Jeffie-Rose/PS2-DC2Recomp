#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _kill_r
// Address: 0x1287e8 - 0x128844
void _kill_r_0x1287e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_kill_r_0x1287e8");
#endif

    switch (ctx->pc) {
        case 0x128810u: goto label_128810;
        default: break;
    }

    ctx->pc = 0x1287e8u;

    // 0x1287e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1287e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1287ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1287ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1287f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1287f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1287f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1287f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1287f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287fc: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x1287fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
    // 0x128800: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x128804: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x128804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128808: 0xc04422e  jal         func_1108B8
    ctx->pc = 0x128808u;
    SET_GPR_U32(ctx, 31, 0x128810u);
    ctx->pc = 0x12880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128808u;
            // 0x12880c: 0xae204dc0  sw          $zero, 0x4DC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 19904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1108B8u;
    if (runtime->hasFunction(0x1108B8u)) {
        auto targetFn = runtime->lookupFunction(0x1108B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128810u; }
        if (ctx->pc != 0x128810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kill_0x1108b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128810u; }
        if (ctx->pc != 0x128810u) { return; }
    }
    ctx->pc = 0x128810u;
label_128810:
    // 0x128810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128814: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x128814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128818: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128818u;
    {
        const bool branch_taken_0x128818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128818u;
            // 0x12881c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128818) {
            ctx->pc = 0x128830u;
            goto label_128830;
        }
    }
    ctx->pc = 0x128820u;
    // 0x128820: 0x8e224dc0  lw          $v0, 0x4DC0($s1)
    ctx->pc = 0x128820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19904)));
    // 0x128824: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x128824u;
    {
        const bool branch_taken_0x128824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128824) {
            ctx->pc = 0x128828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128824u;
            // 0x128828: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128830u;
            goto label_128830;
        }
    }
    ctx->pc = 0x12882Cu;
    // 0x12882c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128830:
    // 0x128830: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x128830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12883c: 0x3e00008  jr          $ra
    ctx->pc = 0x12883Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12883Cu;
            // 0x128840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128844u;
}
