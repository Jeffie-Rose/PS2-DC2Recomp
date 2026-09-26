#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignStack__6CSceneFi
// Address: 0x283270 - 0x283338
void AssignStack__6CSceneFi_0x283270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignStack__6CSceneFi_0x283270");
#endif

    switch (ctx->pc) {
        case 0x2832d4u: goto label_2832d4;
        case 0x2832dcu: goto label_2832dc;
        case 0x28330cu: goto label_28330c;
        default: break;
    }

    ctx->pc = 0x283270u;

label_283270:
    // 0x283270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28327c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283280: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x283280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x283284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28328c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x28328cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x283290: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x283290u;
    {
        const bool branch_taken_0x283290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x283294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283290u;
            // 0x283294: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283290) {
            ctx->pc = 0x28331Cu;
            goto label_28331c;
        }
    }
    ctx->pc = 0x283298u;
    // 0x283298: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x283298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28329c: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x28329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2832a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2832a4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2832A4u;
    {
        const bool branch_taken_0x2832a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832A4u;
            // 0x2832a8: 0x24b10008  addiu       $s1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832a4) {
            ctx->pc = 0x28331Cu;
            goto label_28331c;
        }
    }
    ctx->pc = 0x2832ACu;
    // 0x2832ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2832acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2832b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2832B0u;
    {
        const bool branch_taken_0x2832b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2832B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832B0u;
            // 0x2832b4: 0x24b00004  addiu       $s0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832b0) {
            ctx->pc = 0x2832C0u;
            goto label_2832c0;
        }
    }
    ctx->pc = 0x2832B8u;
    // 0x2832b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2832B8u;
    {
        const bool branch_taken_0x2832b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832B8u;
            // 0x2832bc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832b8) {
            ctx->pc = 0x283320u;
            goto label_283320;
        }
    }
    ctx->pc = 0x2832C0u;
label_2832c0:
    // 0x2832c0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2832c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2832c4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2832C4u;
    {
        const bool branch_taken_0x2832c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2832c4) {
            ctx->pc = 0x2832D4u;
            goto label_2832d4;
        }
    }
    ctx->pc = 0x2832CCu;
    // 0x2832cc: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x2832CCu;
    SET_GPR_U32(ctx, 31, 0x2832D4u);
    ctx->pc = 0x2832D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832CCu;
            // 0x2832d0: 0x2645ffff  addiu       $a1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    goto label_283270;
    ctx->pc = 0x2832D4u;
label_2832d4:
    // 0x2832d4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2832D4u;
    SET_GPR_U32(ctx, 31, 0x2832DCu);
    ctx->pc = 0x2832D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2832D4u;
            // 0x2832d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832DCu; }
        if (ctx->pc != 0x2832DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2832DCu; }
        if (ctx->pc != 0x2832DCu) { return; }
    }
    ctx->pc = 0x2832DCu;
label_2832dc:
    // 0x2832dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2832dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2832e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2832e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832e4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2832e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2832e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2832e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2832ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2832ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2832f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2832f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2832f4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2832f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2832f8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2832fc: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x2832fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x283300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x283304: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x283304u;
    SET_GPR_U32(ctx, 31, 0x28330Cu);
    ctx->pc = 0x283308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283304u;
            // 0x283308: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28330Cu; }
        if (ctx->pc != 0x28330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28330Cu; }
        if (ctx->pc != 0x28330Cu) { return; }
    }
    ctx->pc = 0x28330Cu;
label_28330c:
    // 0x28330c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283310: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x283310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x283314: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x283314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x283318: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x283318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_28331c:
    // 0x28331c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28331cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_283320:
    // 0x283320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283330: 0x3e00008  jr          $ra
    ctx->pc = 0x283330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283330u;
            // 0x283334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283338u;
}
