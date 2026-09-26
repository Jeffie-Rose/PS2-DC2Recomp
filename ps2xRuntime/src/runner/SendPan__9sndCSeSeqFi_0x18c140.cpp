#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SendPan__9sndCSeSeqFi
// Address: 0x18c140 - 0x18c1d4
void SendPan__9sndCSeSeqFi_0x18c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SendPan__9sndCSeSeqFi_0x18c140");
#endif

    switch (ctx->pc) {
        case 0x18c164u: goto label_18c164;
        case 0x18c180u: goto label_18c180;
        case 0x18c19cu: goto label_18c19c;
        default: break;
    }

    ctx->pc = 0x18c140u;

    // 0x18c140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18c148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c15c: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18C15Cu;
    SET_GPR_U32(ctx, 31, 0x18C164u);
    ctx->pc = 0x18C160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C15Cu;
            // 0x18c160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C164u; }
        if (ctx->pc != 0x18C164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C164u; }
        if (ctx->pc != 0x18C164u) { return; }
    }
    ctx->pc = 0x18C164u;
label_18c164:
    // 0x18c164: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18C164u;
    {
        const bool branch_taken_0x18c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C164u;
            // 0x18c168: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c164) {
            ctx->pc = 0x18C1B8u;
            goto label_18c1b8;
        }
    }
    ctx->pc = 0x18C16Cu;
    // 0x18c16c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18c16cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c170: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18c174: 0x24710030  addiu       $s1, $v1, 0x30
    ctx->pc = 0x18c174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18c178: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18C178u;
    {
        const bool branch_taken_0x18c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C178u;
            // 0x18c17c: 0x2632000c  addiu       $s2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c178) {
            ctx->pc = 0x18C1A4u;
            goto label_18c1a4;
        }
    }
    ctx->pc = 0x18C180u;
label_18c180:
    // 0x18c180: 0x82470002  lb          $a3, 0x2($s2)
    ctx->pc = 0x18c180u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x18c184: 0x82280003  lb          $t0, 0x3($s1)
    ctx->pc = 0x18c184u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x18c188: 0x82290006  lb          $t1, 0x6($s1)
    ctx->pc = 0x18c188u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x18c18c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c190: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c194: 0xc063d50  jal         func_18F540
    ctx->pc = 0x18C194u;
    SET_GPR_U32(ctx, 31, 0x18C19Cu);
    ctx->pc = 0x18C198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C194u;
            // 0x18c198: 0x82460001  lb          $a2, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F540u;
    if (runtime->hasFunction(0x18F540u)) {
        auto targetFn = runtime->lookupFunction(0x18F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C19Cu; }
        if (ctx->pc != 0x18C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanPBPrKr__Fiiiiii_0x18f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C19Cu; }
        if (ctx->pc != 0x18C19Cu) { return; }
    }
    ctx->pc = 0x18C19Cu;
label_18c19c:
    // 0x18c19c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18c19cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18c1a0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18c1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_18c1a4:
    // 0x18c1a4: 0x0  nop
    ctx->pc = 0x18c1a4u;
    // NOP
    // 0x18c1a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18c1ac: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x18c1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c1b0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18C1B0u;
    {
        const bool branch_taken_0x18c1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c1b0) {
            ctx->pc = 0x18C180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c180;
        }
    }
    ctx->pc = 0x18C1B8u;
label_18c1b8:
    // 0x18c1b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x18C1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1CCu;
            // 0x18c1d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C1D4u;
}
