#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _skipMB0
// Address: 0x10a250 - 0x10a30c
void _skipMB0_0x10a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skipMB0_0x10a250");
#endif

    switch (ctx->pc) {
        case 0x10a2e4u: goto label_10a2e4;
        default: break;
    }

    ctx->pc = 0x10a250u;

    // 0x10a250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a254: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10a258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a25c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10a25cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a264: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10a264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a268: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x10a268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a26c: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
    // 0x10a270: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x10a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x10a274: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x10a278: 0xac4906cc  sw          $t1, 0x6CC($v0)
    ctx->pc = 0x10a278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 9));
    // 0x10a27c: 0xac8901b0  sw          $t1, 0x1B0($a0)
    ctx->pc = 0x10a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 9));
    // 0x10a280: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x10a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x10a284: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A284u;
    {
        const bool branch_taken_0x10a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x10a284) {
            ctx->pc = 0x10A288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A284u;
            // 0x10a288: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2A0u;
            goto label_10a2a0;
        }
    }
    ctx->pc = 0x10A28Cu;
    // 0x10a28c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x10a290: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x10a290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x10a294: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x10a294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x10a298: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x10a298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x10a29c: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x10a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_10a2a0:
    // 0x10a2a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a2a4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A2A4u;
    {
        const bool branch_taken_0x10a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a2a4) {
            ctx->pc = 0x10A2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2A4u;
            // 0x10a2a8: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2B4u;
            goto label_10a2b4;
        }
    }
    ctx->pc = 0x10A2ACu;
    // 0x10a2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10A2ACu;
    {
        const bool branch_taken_0x10a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2ACu;
            // 0x10a2b0: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a2ac) {
            ctx->pc = 0x10A2C8u;
            goto label_10a2c8;
        }
    }
    ctx->pc = 0x10A2B4u;
label_10a2b4:
    // 0x10a2b4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x10a2b8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x10a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x10a2bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a2c0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x10a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x10a2c4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x10a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_10a2c8:
    // 0x10a2c8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x10a2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a2d0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A2D0u;
    {
        const bool branch_taken_0x10a2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a2d0) {
            ctx->pc = 0x10A2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2D0u;
            // 0x10a2d4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A2ECu;
            goto label_10a2ec;
        }
    }
    ctx->pc = 0x10A2D8u;
    // 0x10a2d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10a2dc: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10A2DCu;
    SET_GPR_U32(ctx, 31, 0x10A2E4u);
    ctx->pc = 0x10A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A2DCu;
            // 0x10a2e0: 0x24a506e8  addiu       $a1, $a1, 0x6E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2E4u; }
        if (ctx->pc != 0x10A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A2E4u; }
        if (ctx->pc != 0x10A2E4u) { return; }
    }
    ctx->pc = 0x10A2E4u;
label_10a2e4:
    // 0x10a2e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10a2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10a2ec:
    // 0x10a2ec: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10a2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2f4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x10a2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10a2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10a2fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x10a300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a304: 0x3e00008  jr          $ra
    ctx->pc = 0x10A304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A304u;
            // 0x10a308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A30Cu;
}
