#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SendPitch__9sndCSeSeqFi
// Address: 0x18c1e0 - 0x18c284
void SendPitch__9sndCSeSeqFi_0x18c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SendPitch__9sndCSeSeqFi_0x18c1e0");
#endif

    switch (ctx->pc) {
        case 0x18c204u: goto label_18c204;
        case 0x18c220u: goto label_18c220;
        case 0x18c250u: goto label_18c250;
        default: break;
    }

    ctx->pc = 0x18c1e0u;

    // 0x18c1e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c1e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c1e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c1ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c1f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18c1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c1f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c1fc: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18C1FCu;
    SET_GPR_U32(ctx, 31, 0x18C204u);
    ctx->pc = 0x18C200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1FCu;
            // 0x18c200: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C204u; }
        if (ctx->pc != 0x18C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C204u; }
        if (ctx->pc != 0x18C204u) { return; }
    }
    ctx->pc = 0x18C204u;
label_18c204:
    // 0x18c204: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18C204u;
    {
        const bool branch_taken_0x18c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C204u;
            // 0x18c208: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c204) {
            ctx->pc = 0x18C268u;
            goto label_18c268;
        }
    }
    ctx->pc = 0x18C20Cu;
    // 0x18c20c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c210: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x18c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x18c214: 0x24700030  addiu       $s0, $v1, 0x30
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18c218: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18C218u;
    {
        const bool branch_taken_0x18c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C218u;
            // 0x18c21c: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c218) {
            ctx->pc = 0x18C258u;
            goto label_18c258;
        }
    }
    ctx->pc = 0x18C220u;
label_18c220:
    // 0x18c220: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x18c220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x18c224: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x18c224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c228: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x18c228u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18c22c: 0x82270002  lb          $a3, 0x2($s1)
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18c230: 0x82090006  lb          $t1, 0x6($s0)
    ctx->pc = 0x18c230u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18c234: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18c234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c238: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x18c238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x18c23c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x18c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18c240: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x18c240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x18c244: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x18c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x18c248: 0xc063d74  jal         func_18F5D0
    ctx->pc = 0x18C248u;
    SET_GPR_U32(ctx, 31, 0x18C250u);
    ctx->pc = 0x18C24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C248u;
            // 0x18c24c: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F5D0u;
    if (runtime->hasFunction(0x18F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x18F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C250u; }
        if (ctx->pc != 0x18C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePitchPBPrKr__Fiiiiii_0x18f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C250u; }
        if (ctx->pc != 0x18C250u) { return; }
    }
    ctx->pc = 0x18C250u;
label_18c250:
    // 0x18c250: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18c250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18c254: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18c254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_18c258:
    // 0x18c258: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c25c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x18c25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c260: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18C260u;
    {
        const bool branch_taken_0x18c260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c260) {
            ctx->pc = 0x18C220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c220;
        }
    }
    ctx->pc = 0x18C268u;
label_18c268:
    // 0x18c268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c26c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c26cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c27c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C27Cu;
            // 0x18c280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C284u;
}
