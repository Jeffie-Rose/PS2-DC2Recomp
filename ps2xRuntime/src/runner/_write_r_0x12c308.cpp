#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _write_r
// Address: 0x12c308 - 0x12c368
void _write_r_0x12c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_write_r_0x12c308");
#endif

    switch (ctx->pc) {
        case 0x12c334u: goto label_12c334;
        default: break;
    }

    ctx->pc = 0x12c308u;

    // 0x12c308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c30c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c314: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12c318: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c31c: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x12c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
    // 0x12c320: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12c320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c328: 0xae204dc0  sw          $zero, 0x4DC0($s1)
    ctx->pc = 0x12c328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19904), GPR_U32(ctx, 0));
    // 0x12c32c: 0xc0441aa  jal         func_1106A8
    ctx->pc = 0x12C32Cu;
    SET_GPR_U32(ctx, 31, 0x12C334u);
    ctx->pc = 0x12C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C32Cu;
            // 0x12c330: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1106A8u;
    if (runtime->hasFunction(0x1106A8u)) {
        auto targetFn = runtime->lookupFunction(0x1106A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C334u; }
        if (ctx->pc != 0x12C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        write_0x1106a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C334u; }
        if (ctx->pc != 0x12C334u) { return; }
    }
    ctx->pc = 0x12C334u;
label_12c334:
    // 0x12c334: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c338: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c33c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C33Cu;
    {
        const bool branch_taken_0x12c33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C33Cu;
            // 0x12c340: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c33c) {
            ctx->pc = 0x12C354u;
            goto label_12c354;
        }
    }
    ctx->pc = 0x12C344u;
    // 0x12c344: 0x8e224dc0  lw          $v0, 0x4DC0($s1)
    ctx->pc = 0x12c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19904)));
    // 0x12c348: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C348u;
    {
        const bool branch_taken_0x12c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c348) {
            ctx->pc = 0x12C34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C348u;
            // 0x12c34c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C354u;
            goto label_12c354;
        }
    }
    ctx->pc = 0x12C350u;
    // 0x12c350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12c354:
    // 0x12c354: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12c354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12c358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c360: 0x3e00008  jr          $ra
    ctx->pc = 0x12C360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C360u;
            // 0x12c364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C368u;
}
